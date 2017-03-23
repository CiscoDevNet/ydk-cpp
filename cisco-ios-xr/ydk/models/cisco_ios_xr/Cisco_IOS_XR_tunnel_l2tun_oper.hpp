#ifndef _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_
#define _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tunnel_l2tun_oper {

class L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

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



        class Counters; //type: L2Tp::Counters
        class TunnelConfigurations; //type: L2Tp::TunnelConfigurations
        class CounterHistFail; //type: L2Tp::CounterHistFail
        class Classes; //type: L2Tp::Classes
        class Tunnels; //type: L2Tp::Tunnels
        class Sessions; //type: L2Tp::Sessions
        class Session; //type: L2Tp::Session

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::CounterHistFail> counter_hist_fail;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Session> session;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::TunnelConfigurations> tunnel_configurations;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Tunnels> tunnels;


}; // L2Tp


class L2Tp::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Control; //type: L2Tp::Counters::Control

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control> control;


}; // L2Tp::Counters


class L2Tp::Counters::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelXr; //type: L2Tp::Counters::Control::TunnelXr
        class Tunnels; //type: L2Tp::Counters::Control::Tunnels

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr> tunnel_xr;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels> tunnels;


}; // L2Tp::Counters::Control


class L2Tp::Counters::Control::TunnelXr : public Entity
{
    public:
        TunnelXr();
        ~TunnelXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Authentication; //type: L2Tp::Counters::Control::TunnelXr::Authentication
        class Global; //type: L2Tp::Counters::Control::TunnelXr::Global

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global> global;


}; // L2Tp::Counters::Control::TunnelXr


class L2Tp::Counters::Control::TunnelXr::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonceAvp; //type: L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp
        class CommonDigest; //type: L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest
        class PrimaryDigest; //type: L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest
        class SecondaryDigest; //type: L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest
        class IntegrityCheck; //type: L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck
        class LocalSecret; //type: L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret
        class ChallengeAvp; //type: L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp
        class ChallengeReponse; //type: L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse
        class OverallStatistics; //type: L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp> challenge_avp;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse> challenge_reponse;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest> common_digest;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck> integrity_check;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret> local_secret;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp> nonce_avp;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics> overall_statistics;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest> primary_digest;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest> secondary_digest;


}; // L2Tp::Counters::Control::TunnelXr::Authentication


class L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp : public Entity
{
    public:
        NonceAvp();
        ~NonceAvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp


class L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest : public Entity
{
    public:
        CommonDigest();
        ~CommonDigest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest


class L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest : public Entity
{
    public:
        PrimaryDigest();
        ~PrimaryDigest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest


class L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest : public Entity
{
    public:
        SecondaryDigest();
        ~SecondaryDigest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest


class L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck : public Entity
{
    public:
        IntegrityCheck();
        ~IntegrityCheck();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck


class L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret : public Entity
{
    public:
        LocalSecret();
        ~LocalSecret();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret


class L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp : public Entity
{
    public:
        ChallengeAvp();
        ~ChallengeAvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp


class L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse : public Entity
{
    public:
        ChallengeReponse();
        ~ChallengeReponse();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse


class L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics : public Entity
{
    public:
        OverallStatistics();
        ~OverallStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics


class L2Tp::Counters::Control::TunnelXr::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_transmit; //type: uint32
        YLeaf total_retransmit; //type: uint32
        YLeaf total_received; //type: uint32
        YLeaf total_drop; //type: uint32

        class Transmit; //type: L2Tp::Counters::Control::TunnelXr::Global::Transmit
        class Retransmit; //type: L2Tp::Counters::Control::TunnelXr::Global::Retransmit
        class Received; //type: L2Tp::Counters::Control::TunnelXr::Global::Received
        class Drop; //type: L2Tp::Counters::Control::TunnelXr::Global::Drop

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Received> received;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Transmit> transmit;


}; // L2Tp::Counters::Control::TunnelXr::Global


class L2Tp::Counters::Control::TunnelXr::Global::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Global::Transmit


class L2Tp::Counters::Control::TunnelXr::Global::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Global::Retransmit


class L2Tp::Counters::Control::TunnelXr::Global::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Global::Received


class L2Tp::Counters::Control::TunnelXr::Global::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::TunnelXr::Global::Drop


class L2Tp::Counters::Control::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: L2Tp::Counters::Control::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel> > tunnel;


}; // L2Tp::Counters::Control::Tunnels


class L2Tp::Counters::Control::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32

        class Brief; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Brief
        class Global; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global> global;


}; // L2Tp::Counters::Control::Tunnels::Tunnel


class L2Tp::Counters::Control::Tunnels::Tunnel::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_tunnel_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // L2Tp::Counters::Control::Tunnels::Tunnel::Brief


class L2Tp::Counters::Control::Tunnels::Tunnel::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_transmit; //type: uint32
        YLeaf total_retransmit; //type: uint32
        YLeaf total_received; //type: uint32
        YLeaf total_drop; //type: uint32

        class Transmit; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit
        class Retransmit; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit
        class Received; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received
        class Drop; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received> received;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit> transmit;


}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop


class L2Tp::TunnelConfigurations : public Entity
{
    public:
        TunnelConfigurations();
        ~TunnelConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelConfiguration; //type: L2Tp::TunnelConfigurations::TunnelConfiguration

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::TunnelConfigurations::TunnelConfiguration> > tunnel_configuration;


}; // L2Tp::TunnelConfigurations


class L2Tp::TunnelConfigurations::TunnelConfiguration : public Entity
{
    public:
        TunnelConfiguration();
        ~TunnelConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_tunnel_id; //type: int32
        YLeaf remote_tunnel_id; //type: uint32

        class L2TpClass; //type: L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass> l2tp_class;


}; // L2Tp::TunnelConfigurations::TunnelConfiguration


class L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass : public Entity
{
    public:
        L2TpClass();
        ~L2TpClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_tos; //type: uint8
        YLeaf vrf_name; //type: string
        YLeaf receive_window_size; //type: uint16
        YLeaf class_name_xr; //type: string
        YLeaf digest_hash; //type: DigestHashEnum
        YLeaf password; //type: string
        YLeaf encoded_password; //type: string
        YLeaf host_name; //type: string
        YLeaf accounting_method_list; //type: string
        YLeaf hello_timeout; //type: uint32
        YLeaf setup_timeout; //type: uint32
        YLeaf retransmit_minimum_timeout; //type: uint32
        YLeaf retransmit_maximum_timeout; //type: uint32
        YLeaf initial_retransmit_minimum_timeout; //type: uint32
        YLeaf initial_retransmit_maximum_timeout; //type: uint32
        YLeaf timeout_no_user; //type: uint32
        YLeaf retransmit_retries; //type: uint32
        YLeaf initial_retransmit_retries; //type: uint32
        YLeaf is_authentication_enabled; //type: boolean
        YLeaf is_hidden; //type: boolean
        YLeaf is_digest_enabled; //type: boolean
        YLeaf is_digest_check_enabled; //type: boolean
        YLeaf is_congestion_control_enabled; //type: boolean
        YLeaf is_peer_address_checked; //type: boolean



}; // L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass


class L2Tp::CounterHistFail : public Entity
{
    public:
        CounterHistFail();
        ~CounterHistFail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sess_down_tmout; //type: uint32
        YLeaf tx_counters; //type: string
        YLeaf rx_counters; //type: string
        YLeafList pkt_timeout; //type: list of  uint32



}; // L2Tp::CounterHistFail


class L2Tp::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Class_; //type: L2Tp::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Classes::Class_> > class_;


}; // L2Tp::Classes


class L2Tp::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_name; //type: string
        YLeaf ip_tos; //type: uint8
        YLeaf vrf_name; //type: string
        YLeaf receive_window_size; //type: uint16
        YLeaf class_name_xr; //type: string
        YLeaf digest_hash; //type: DigestHashEnum
        YLeaf password; //type: string
        YLeaf encoded_password; //type: string
        YLeaf host_name; //type: string
        YLeaf accounting_method_list; //type: string
        YLeaf hello_timeout; //type: uint32
        YLeaf setup_timeout; //type: uint32
        YLeaf retransmit_minimum_timeout; //type: uint32
        YLeaf retransmit_maximum_timeout; //type: uint32
        YLeaf initial_retransmit_minimum_timeout; //type: uint32
        YLeaf initial_retransmit_maximum_timeout; //type: uint32
        YLeaf timeout_no_user; //type: uint32
        YLeaf retransmit_retries; //type: uint32
        YLeaf initial_retransmit_retries; //type: uint32
        YLeaf is_authentication_enabled; //type: boolean
        YLeaf is_hidden; //type: boolean
        YLeaf is_digest_enabled; //type: boolean
        YLeaf is_digest_check_enabled; //type: boolean
        YLeaf is_congestion_control_enabled; //type: boolean
        YLeaf is_peer_address_checked; //type: boolean



}; // L2Tp::Classes::Class_


class L2Tp::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: L2Tp::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Tunnels::Tunnel> > tunnel;


}; // L2Tp::Tunnels


class L2Tp::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_tunnel_id; //type: int32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf local_port; //type: uint16
        YLeaf remote_port; //type: uint16
        YLeaf protocol; //type: uint8
        YLeaf is_pmtu_enabled; //type: boolean
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf local_tunnel_name; //type: string
        YLeaf remote_tunnel_name; //type: string
        YLeaf class_name; //type: string
        YLeaf active_sessions; //type: uint32
        YLeaf sequence_ns; //type: uint16
        YLeaf sequence_nr; //type: uint16
        YLeaf local_window_size; //type: uint16
        YLeaf remote_window_size; //type: uint16
        YLeaf retransmission_time; //type: uint16
        YLeaf maximum_retransmission_time; //type: uint16
        YLeaf unsent_queue_size; //type: uint16
        YLeaf unsent_maximum_queue_size; //type: uint16
        YLeaf resend_queue_size; //type: uint16
        YLeaf resend_maximum_queue_size; //type: uint16
        YLeaf order_queue_size; //type: uint16
        YLeaf packet_queue_check; //type: uint16
        YLeaf digest_secrets; //type: uint16
        YLeaf resends; //type: uint32
        YLeaf zero_length_body_acknowledgement_sent; //type: uint32
        YLeaf total_out_of_order_drop_packets; //type: uint32
        YLeaf total_out_of_order_reorder_packets; //type: uint32
        YLeaf total_peer_authentication_failures; //type: uint32
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_congestion_control_enabled; //type: boolean
        YLeafList retransmit_time; //type: list of  uint16



}; // L2Tp::Tunnels::Tunnel


class L2Tp::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session; //type: L2Tp::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session> > session;


}; // L2Tp::Sessions


class L2Tp::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_tunnel_id; //type: int32
        YLeaf local_session_id; //type: int32
        YLeaf local_ip_address; //type: string
        YLeaf remote_ip_address; //type: string
        YLeaf l2tp_sh_sess_udp_lport; //type: uint16
        YLeaf l2tp_sh_sess_udp_rport; //type: uint16
        YLeaf protocol; //type: uint8
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf call_serial_number; //type: uint32
        YLeaf local_tunnel_name; //type: string
        YLeaf remote_tunnel_name; //type: string
        YLeaf remote_session_id; //type: uint32
        YLeaf l2tp_sh_sess_tie_breaker_enabled; //type: uint8
        YLeaf l2tp_sh_sess_tie_breaker; //type: uint64
        YLeaf is_session_manual; //type: boolean
        YLeaf is_session_up; //type: boolean
        YLeaf is_udp_checksum_enabled; //type: boolean
        YLeaf is_sequencing_on; //type: boolean
        YLeaf is_session_state_established; //type: boolean
        YLeaf is_session_locally_initiated; //type: boolean
        YLeaf is_conditional_debug_enabled; //type: boolean
        YLeaf unique_id; //type: uint32
        YLeaf interface_name; //type: string

        class SessionApplicationData; //type: L2Tp::Sessions::Session::SessionApplicationData

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session::SessionApplicationData> session_application_data;


}; // L2Tp::Sessions::Session


class L2Tp::Sessions::Session::SessionApplicationData : public Entity
{
    public:
        SessionApplicationData();
        ~SessionApplicationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2tp_sh_sess_app_type; //type: uint32

        class Xconnect; //type: L2Tp::Sessions::Session::SessionApplicationData::Xconnect
        class Vpdn; //type: L2Tp::Sessions::Session::SessionApplicationData::Vpdn

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session::SessionApplicationData::Vpdn> vpdn;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session::SessionApplicationData::Xconnect> xconnect;


}; // L2Tp::Sessions::Session::SessionApplicationData


class L2Tp::Sessions::Session::SessionApplicationData::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf circuit_name; //type: string
        YLeaf sessionvc_id; //type: uint32
        YLeaf is_circuit_state_up; //type: boolean
        YLeaf is_local_circuit_state_up; //type: boolean
        YLeaf is_remote_circuit_state_up; //type: boolean
        YLeaf ipv6_protocol_tunneling; //type: boolean



}; // L2Tp::Sessions::Session::SessionApplicationData::Xconnect


class L2Tp::Sessions::Session::SessionApplicationData::Vpdn : public Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf username; //type: string
        YLeaf interface_name; //type: string



}; // L2Tp::Sessions::Session::SessionApplicationData::Vpdn


class L2Tp::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Unavailable; //type: L2Tp::Session::Unavailable

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Session::Unavailable> unavailable;


}; // L2Tp::Session


class L2Tp::Session::Unavailable : public Entity
{
    public:
        Unavailable();
        ~Unavailable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions_on_hold; //type: uint32



}; // L2Tp::Session::Unavailable

class L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

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



        class Counters; //type: L2Tpv2::Counters
        class Statistics; //type: L2Tpv2::Statistics
        class Tunnel; //type: L2Tpv2::Tunnel
        class TunnelConfigurations; //type: L2Tpv2::TunnelConfigurations
        class CounterHistFail; //type: L2Tpv2::CounterHistFail
        class Classes; //type: L2Tpv2::Classes
        class Tunnels; //type: L2Tpv2::Tunnels
        class Sessions; //type: L2Tpv2::Sessions
        class Session; //type: L2Tpv2::Session

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::CounterHistFail> counter_hist_fail;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Session> session;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnel> tunnel;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::TunnelConfigurations> tunnel_configurations;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnels> tunnels;


}; // L2Tpv2


class L2Tpv2::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Forwarding; //type: L2Tpv2::Counters::Forwarding
        class Control; //type: L2Tpv2::Counters::Control

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control> control;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Forwarding> forwarding;


}; // L2Tpv2::Counters


class L2Tpv2::Counters::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sessions; //type: L2Tpv2::Counters::Forwarding::Sessions

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Forwarding::Sessions> sessions;


}; // L2Tpv2::Counters::Forwarding


class L2Tpv2::Counters::Forwarding::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session; //type: L2Tpv2::Counters::Forwarding::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Forwarding::Sessions::Session> > session;


}; // L2Tpv2::Counters::Forwarding::Sessions


class L2Tpv2::Counters::Forwarding::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32
        YLeaf session_id; //type: int32
        YLeaf remote_session_id; //type: uint32
        YLeaf in_packets; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf in_bytes; //type: uint64
        YLeaf out_bytes; //type: uint64



}; // L2Tpv2::Counters::Forwarding::Sessions::Session


class L2Tpv2::Counters::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelXr; //type: L2Tpv2::Counters::Control::TunnelXr
        class Tunnels; //type: L2Tpv2::Counters::Control::Tunnels

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr> tunnel_xr;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels> tunnels;


}; // L2Tpv2::Counters::Control


class L2Tpv2::Counters::Control::TunnelXr : public Entity
{
    public:
        TunnelXr();
        ~TunnelXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Authentication; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication
        class Global; //type: L2Tpv2::Counters::Control::TunnelXr::Global

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global> global;


}; // L2Tpv2::Counters::Control::TunnelXr


class L2Tpv2::Counters::Control::TunnelXr::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonceAvp; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp
        class CommonDigest; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest
        class PrimaryDigest; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest
        class SecondaryDigest; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest
        class IntegrityCheck; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck
        class LocalSecret; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret
        class ChallengeAvp; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp
        class ChallengeReponse; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse
        class OverallStatistics; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp> challenge_avp;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse> challenge_reponse;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest> common_digest;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck> integrity_check;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret> local_secret;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp> nonce_avp;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics> overall_statistics;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest> primary_digest;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest> secondary_digest;


}; // L2Tpv2::Counters::Control::TunnelXr::Authentication


class L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp : public Entity
{
    public:
        NonceAvp();
        ~NonceAvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp


class L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest : public Entity
{
    public:
        CommonDigest();
        ~CommonDigest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest


class L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest : public Entity
{
    public:
        PrimaryDigest();
        ~PrimaryDigest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest


class L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest : public Entity
{
    public:
        SecondaryDigest();
        ~SecondaryDigest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest


class L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck : public Entity
{
    public:
        IntegrityCheck();
        ~IntegrityCheck();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck


class L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret : public Entity
{
    public:
        LocalSecret();
        ~LocalSecret();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret


class L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp : public Entity
{
    public:
        ChallengeAvp();
        ~ChallengeAvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp


class L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse : public Entity
{
    public:
        ChallengeReponse();
        ~ChallengeReponse();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse


class L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics : public Entity
{
    public:
        OverallStatistics();
        ~OverallStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validate; //type: uint32
        YLeaf bad_hash; //type: uint32
        YLeaf bad_length; //type: uint32
        YLeaf ignored; //type: uint32
        YLeaf missing; //type: uint32
        YLeaf passed; //type: uint32
        YLeaf failed; //type: uint32
        YLeaf skipped; //type: uint32
        YLeaf generate_response_failures; //type: uint32
        YLeaf unexpected; //type: uint32
        YLeaf unexpected_zlb; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics


class L2Tpv2::Counters::Control::TunnelXr::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_transmit; //type: uint32
        YLeaf total_retransmit; //type: uint32
        YLeaf total_received; //type: uint32
        YLeaf total_drop; //type: uint32

        class Transmit; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Transmit
        class Retransmit; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit
        class Received; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Received
        class Drop; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Drop

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Received> received;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Transmit> transmit;


}; // L2Tpv2::Counters::Control::TunnelXr::Global


class L2Tpv2::Counters::Control::TunnelXr::Global::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Global::Transmit


class L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit


class L2Tpv2::Counters::Control::TunnelXr::Global::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Global::Received


class L2Tpv2::Counters::Control::TunnelXr::Global::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::TunnelXr::Global::Drop


class L2Tpv2::Counters::Control::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel> > tunnel;


}; // L2Tpv2::Counters::Control::Tunnels


class L2Tpv2::Counters::Control::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32

        class Brief; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief
        class Global; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global> global;


}; // L2Tpv2::Counters::Control::Tunnels::Tunnel


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_tunnel_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_transmit; //type: uint32
        YLeaf total_retransmit; //type: uint32
        YLeaf total_received; //type: uint32
        YLeaf total_drop; //type: uint32

        class Transmit; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit
        class Retransmit; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit
        class Received; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received
        class Drop; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received> received;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit> transmit;


}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_packets; //type: uint32
        YLeaf zero_length_body_packets; //type: uint32
        YLeaf start_control_connection_requests; //type: uint32
        YLeaf start_control_connection_replies; //type: uint32
        YLeaf start_control_connection_notifications; //type: uint32
        YLeaf stop_control_connection_notifications; //type: uint32
        YLeaf hello_packets; //type: uint32
        YLeaf outgoing_call_requests; //type: uint32
        YLeaf outgoing_call_replies; //type: uint32
        YLeaf outgoing_call_connected_packets; //type: uint32
        YLeaf incoming_call_requests; //type: uint32
        YLeaf incoming_call_replies; //type: uint32
        YLeaf incoming_call_connected_packets; //type: uint32
        YLeaf call_disconnect_notify_packets; //type: uint32
        YLeaf wan_error_notify_packets; //type: uint32
        YLeaf set_link_info_packets; //type: uint32
        YLeaf service_relay_requests; //type: uint32
        YLeaf service_relay_replies; //type: uint32
        YLeaf acknowledgement_packets; //type: uint32



}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop


class L2Tpv2::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnels; //type: uint32
        YLeaf sessions; //type: uint32
        YLeaf sent_packets; //type: uint32
        YLeaf received_packets; //type: uint32
        YLeaf average_packet_processing_time; //type: uint32
        YLeaf received_out_of_order_packets; //type: uint32
        YLeaf reorder_packets; //type: uint32
        YLeaf reorder_deviation_packets; //type: uint32
        YLeaf incoming_dropped_packets; //type: uint32
        YLeaf buffered_packets; //type: uint32
        YLeaf netio_packets; //type: uint32



}; // L2Tpv2::Statistics


class L2Tpv2::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Accounting; //type: L2Tpv2::Tunnel::Accounting

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnel::Accounting> accounting;


}; // L2Tpv2::Tunnel


class L2Tpv2::Tunnel::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistics; //type: L2Tpv2::Tunnel::Accounting::Statistics

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnel::Accounting::Statistics> statistics;


}; // L2Tpv2::Tunnel::Accounting


class L2Tpv2::Tunnel::Accounting::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf records_sent_successfully; //type: uint64
        YLeaf start; //type: uint64
        YLeaf stop; //type: uint64
        YLeaf reject; //type: uint64
        YLeaf transport_failures; //type: uint64
        YLeaf positive_acknowledgement; //type: uint64
        YLeaf negative_acknowledgement; //type: uint64
        YLeaf records_checkpointed; //type: uint64
        YLeaf records_failed_to_checkpoint; //type: uint64
        YLeaf records_sent_from_queue; //type: uint64
        YLeaf memory_failures; //type: uint32
        YLeaf current_size; //type: uint32
        YLeaf records_recovered_from_checkpoint; //type: uint32
        YLeaf records_fail_to_recover; //type: uint32
        YLeaf queue_statistics_size; //type: int32



}; // L2Tpv2::Tunnel::Accounting::Statistics


class L2Tpv2::TunnelConfigurations : public Entity
{
    public:
        TunnelConfigurations();
        ~TunnelConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelConfiguration; //type: L2Tpv2::TunnelConfigurations::TunnelConfiguration

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::TunnelConfigurations::TunnelConfiguration> > tunnel_configuration;


}; // L2Tpv2::TunnelConfigurations


class L2Tpv2::TunnelConfigurations::TunnelConfiguration : public Entity
{
    public:
        TunnelConfiguration();
        ~TunnelConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_tunnel_id; //type: int32
        YLeaf remote_tunnel_id; //type: uint32

        class L2TpClass; //type: L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass> l2tp_class;


}; // L2Tpv2::TunnelConfigurations::TunnelConfiguration


class L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass : public Entity
{
    public:
        L2TpClass();
        ~L2TpClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_tos; //type: uint8
        YLeaf vrf_name; //type: string
        YLeaf receive_window_size; //type: uint16
        YLeaf class_name_xr; //type: string
        YLeaf digest_hash; //type: DigestHashEnum
        YLeaf password; //type: string
        YLeaf encoded_password; //type: string
        YLeaf host_name; //type: string
        YLeaf accounting_method_list; //type: string
        YLeaf hello_timeout; //type: uint32
        YLeaf setup_timeout; //type: uint32
        YLeaf retransmit_minimum_timeout; //type: uint32
        YLeaf retransmit_maximum_timeout; //type: uint32
        YLeaf initial_retransmit_minimum_timeout; //type: uint32
        YLeaf initial_retransmit_maximum_timeout; //type: uint32
        YLeaf timeout_no_user; //type: uint32
        YLeaf retransmit_retries; //type: uint32
        YLeaf initial_retransmit_retries; //type: uint32
        YLeaf is_authentication_enabled; //type: boolean
        YLeaf is_hidden; //type: boolean
        YLeaf is_digest_enabled; //type: boolean
        YLeaf is_digest_check_enabled; //type: boolean
        YLeaf is_congestion_control_enabled; //type: boolean
        YLeaf is_peer_address_checked; //type: boolean



}; // L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass


class L2Tpv2::CounterHistFail : public Entity
{
    public:
        CounterHistFail();
        ~CounterHistFail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sess_down_tmout; //type: uint32
        YLeaf tx_counters; //type: string
        YLeaf rx_counters; //type: string
        YLeafList pkt_timeout; //type: list of  uint32



}; // L2Tpv2::CounterHistFail


class L2Tpv2::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Class_; //type: L2Tpv2::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Classes::Class_> > class_;


}; // L2Tpv2::Classes


class L2Tpv2::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_name; //type: string
        YLeaf ip_tos; //type: uint8
        YLeaf vrf_name; //type: string
        YLeaf receive_window_size; //type: uint16
        YLeaf class_name_xr; //type: string
        YLeaf digest_hash; //type: DigestHashEnum
        YLeaf password; //type: string
        YLeaf encoded_password; //type: string
        YLeaf host_name; //type: string
        YLeaf accounting_method_list; //type: string
        YLeaf hello_timeout; //type: uint32
        YLeaf setup_timeout; //type: uint32
        YLeaf retransmit_minimum_timeout; //type: uint32
        YLeaf retransmit_maximum_timeout; //type: uint32
        YLeaf initial_retransmit_minimum_timeout; //type: uint32
        YLeaf initial_retransmit_maximum_timeout; //type: uint32
        YLeaf timeout_no_user; //type: uint32
        YLeaf retransmit_retries; //type: uint32
        YLeaf initial_retransmit_retries; //type: uint32
        YLeaf is_authentication_enabled; //type: boolean
        YLeaf is_hidden; //type: boolean
        YLeaf is_digest_enabled; //type: boolean
        YLeaf is_digest_check_enabled; //type: boolean
        YLeaf is_congestion_control_enabled; //type: boolean
        YLeaf is_peer_address_checked; //type: boolean



}; // L2Tpv2::Classes::Class_


class L2Tpv2::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: L2Tpv2::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnels::Tunnel> > tunnel;


}; // L2Tpv2::Tunnels


class L2Tpv2::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_tunnel_id; //type: int32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf local_port; //type: uint16
        YLeaf remote_port; //type: uint16
        YLeaf protocol; //type: uint8
        YLeaf is_pmtu_enabled; //type: boolean
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf local_tunnel_name; //type: string
        YLeaf remote_tunnel_name; //type: string
        YLeaf class_name; //type: string
        YLeaf active_sessions; //type: uint32
        YLeaf sequence_ns; //type: uint16
        YLeaf sequence_nr; //type: uint16
        YLeaf local_window_size; //type: uint16
        YLeaf remote_window_size; //type: uint16
        YLeaf retransmission_time; //type: uint16
        YLeaf maximum_retransmission_time; //type: uint16
        YLeaf unsent_queue_size; //type: uint16
        YLeaf unsent_maximum_queue_size; //type: uint16
        YLeaf resend_queue_size; //type: uint16
        YLeaf resend_maximum_queue_size; //type: uint16
        YLeaf order_queue_size; //type: uint16
        YLeaf packet_queue_check; //type: uint16
        YLeaf digest_secrets; //type: uint16
        YLeaf resends; //type: uint32
        YLeaf zero_length_body_acknowledgement_sent; //type: uint32
        YLeaf total_out_of_order_drop_packets; //type: uint32
        YLeaf total_out_of_order_reorder_packets; //type: uint32
        YLeaf total_peer_authentication_failures; //type: uint32
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_congestion_control_enabled; //type: boolean
        YLeafList retransmit_time; //type: list of  uint16



}; // L2Tpv2::Tunnels::Tunnel


class L2Tpv2::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session; //type: L2Tpv2::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session> > session;


}; // L2Tpv2::Sessions


class L2Tpv2::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_tunnel_id; //type: int32
        YLeaf local_session_id; //type: int32
        YLeaf local_ip_address; //type: string
        YLeaf remote_ip_address; //type: string
        YLeaf l2tp_sh_sess_udp_lport; //type: uint16
        YLeaf l2tp_sh_sess_udp_rport; //type: uint16
        YLeaf protocol; //type: uint8
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf call_serial_number; //type: uint32
        YLeaf local_tunnel_name; //type: string
        YLeaf remote_tunnel_name; //type: string
        YLeaf remote_session_id; //type: uint32
        YLeaf l2tp_sh_sess_tie_breaker_enabled; //type: uint8
        YLeaf l2tp_sh_sess_tie_breaker; //type: uint64
        YLeaf is_session_manual; //type: boolean
        YLeaf is_session_up; //type: boolean
        YLeaf is_udp_checksum_enabled; //type: boolean
        YLeaf is_sequencing_on; //type: boolean
        YLeaf is_session_state_established; //type: boolean
        YLeaf is_session_locally_initiated; //type: boolean
        YLeaf is_conditional_debug_enabled; //type: boolean
        YLeaf unique_id; //type: uint32
        YLeaf interface_name; //type: string

        class SessionApplicationData; //type: L2Tpv2::Sessions::Session::SessionApplicationData

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session::SessionApplicationData> session_application_data;


}; // L2Tpv2::Sessions::Session


class L2Tpv2::Sessions::Session::SessionApplicationData : public Entity
{
    public:
        SessionApplicationData();
        ~SessionApplicationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2tp_sh_sess_app_type; //type: uint32

        class Xconnect; //type: L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect
        class Vpdn; //type: L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn> vpdn;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect> xconnect;


}; // L2Tpv2::Sessions::Session::SessionApplicationData


class L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf circuit_name; //type: string
        YLeaf sessionvc_id; //type: uint32
        YLeaf is_circuit_state_up; //type: boolean
        YLeaf is_local_circuit_state_up; //type: boolean
        YLeaf is_remote_circuit_state_up; //type: boolean
        YLeaf ipv6_protocol_tunneling; //type: boolean



}; // L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect


class L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn : public Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf username; //type: string
        YLeaf interface_name; //type: string



}; // L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn


class L2Tpv2::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Unavailable; //type: L2Tpv2::Session::Unavailable

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Session::Unavailable> unavailable;


}; // L2Tpv2::Session


class L2Tpv2::Session::Unavailable : public Entity
{
    public:
        Unavailable();
        ~Unavailable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions_on_hold; //type: uint32



}; // L2Tpv2::Session::Unavailable

class DigestHashEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha1;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_ */

