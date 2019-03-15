#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_1_
#define _CISCO_IOS_XR_IEDGE4710_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_iedge4710_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions : public ydk::Entity
{
    public:
        SubscriberSessions();
        ~SubscriberSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberSession; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession

        ydk::YList subscriber_session;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession : public ydk::Entity
{
    public:
        SubscriberSession();
        ~SubscriberSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: string
        ydk::YLeaf session_type; //type: IedgeOperSession
        ydk::YLeaf pppoe_sub_type; //type: IedgePppSub
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf lns_address; //type: string
        ydk::YLeaf lac_address; //type: string
        ydk::YLeaf tunnel_client_authentication_id; //type: string
        ydk::YLeaf tunnel_server_authentication_id; //type: string
        ydk::YLeaf session_ip_address; //type: string
        ydk::YLeaf session_ipv6_address; //type: string
        ydk::YLeaf session_ipv6_prefix; //type: string
        ydk::YLeaf delegated_ipv6_prefix; //type: string
        ydk::YLeaf ipv6_interface_id; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf account_session_id; //type: string
        ydk::YLeaf nas_port; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf clientname; //type: string
        ydk::YLeaf formattedname; //type: string
        ydk::YLeaf is_session_authentic; //type: boolean
        ydk::YLeaf is_session_author; //type: boolean
        ydk::YLeaf session_state; //type: IedgeOperSessionState
        ydk::YLeaf session_creation_time_epoch; //type: uint64
        ydk::YLeaf idle_state_change_time; //type: string
        ydk::YLeaf total_session_idle_time; //type: uint32
        ydk::YLeaf access_interface_name; //type: string
        class Accounting; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting
        class SubPolicyData; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData
        class SessionServiceInfo; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo
        class SessionChangeOfAuthorization; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting> accounting;
        ydk::YList sub_policy_data;
        ydk::YList session_service_info;
        ydk::YList session_change_of_authorization;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting : public ydk::Entity
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

        class AccountingSession; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession

        ydk::YList accounting_session;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession : public ydk::Entity
{
    public:
        AccountingSession();
        ~AccountingSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting_state_rc; //type: uint32
        ydk::YLeaf accounting_stop_state; //type: uint32
        ydk::YLeaf record_context_name; //type: string
        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf account_session_id; //type: string
        ydk::YLeaf accounting_start_time_epoch; //type: uint64
        ydk::YLeaf is_interim_accounting_enabled; //type: boolean
        ydk::YLeaf interim_interval; //type: uint32
        ydk::YLeaf last_successful_interim_update_time_epoch; //type: uint64
        ydk::YLeaf next_interim_update_attempt_time; //type: uint32
        ydk::YLeaf last_interim_update_attempt_time_epoch; //type: uint64
        ydk::YLeaf sent_interim_updates; //type: uint32
        ydk::YLeaf accepted_interim_updates; //type: uint32
        ydk::YLeaf rejected_interim_updates; //type: uint32
        ydk::YLeaf sent_interim_update_failures; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData : public ydk::Entity
{
    public:
        SubPolicyData();
        ~SubPolicyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_epoch; //type: string

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo : public ydk::Entity
{
    public:
        SessionServiceInfo();
        ~SessionServiceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string
        ydk::YLeaf service_params; //type: string
        ydk::YLeaf service_type; //type: IedgeOperService
        ydk::YLeaf service_status; //type: IedgeOperServiceStatus
        ydk::YLeaf service_id; //type: uint32
        ydk::YLeaf service_prepaid; //type: boolean

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization : public ydk::Entity
{
    public:
        SessionChangeOfAuthorization();
        ~SessionChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request_acked; //type: boolean
        ydk::YLeaf request_time_epoch; //type: uint64
        ydk::YLeaf reply_time_epoch; //type: uint64

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries : public ydk::Entity
{
    public:
        Ipv4AddressVrfSummaries();
        ~Ipv4AddressVrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddressVrfSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary

        ydk::YList ipv4_address_vrf_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary : public ydk::Entity
{
    public:
        Ipv4AddressVrfSummary();
        ~Ipv4AddressVrfSummary();

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
        ydk::YLeaf address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary : public ydk::Entity
{
    public:
        SrgSummary();
        ~SrgSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries : public ydk::Entity
{
    public:
        AccessInterfaceSummaries();
        ~AccessInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessInterfaceSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary

        ydk::YList access_interface_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary : public ydk::Entity
{
    public:
        AccessInterfaceSummary();
        ~AccessInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries : public ydk::Entity
{
    public:
        AddressFamilySummaries();
        ~AddressFamilySummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressFamilySummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary

        ydk::YList address_family_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary : public ydk::Entity
{
    public:
        AddressFamilySummary();
        ~AddressFamilySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SubscriberAddressFamilyFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries : public ydk::Entity
{
    public:
        Ipv4AddressSummaries();
        ~Ipv4AddressSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddressSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary

        ydk::YList ipv4_address_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary : public ydk::Entity
{
    public:
        Ipv4AddressSummary();
        ~Ipv4AddressSummary();

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
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries : public ydk::Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfSummary; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary

        ydk::YList vrf_summary;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary : public ydk::Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

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
        class StateXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthorSummaries : public ydk::Entity
{
    public:
        AuthorSummaries();
        ~AuthorSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthorSummary; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary

        ydk::YList author_summary;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary : public ydk::Entity
{
    public:
        AuthorSummary();
        ~AuthorSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf author_state; //type: SubscriberAuthorStateFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateXr; //type: Subscriber::Session::Nodes::Node::Summary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::Summary


class Subscriber::Session::Nodes::Node::Summary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::Summary::StateXr


class Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::MacSummaries : public ydk::Entity
{
    public:
        MacSummaries();
        ~MacSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacSummary; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary

        ydk::YList mac_summary;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary : public ydk::Entity
{
    public:
        MacSummary();
        ~MacSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::InterfaceSummaries : public ydk::Entity
{
    public:
        InterfaceSummaries();
        ~InterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceSummary; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary

        ydk::YList interface_summary;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthenticationSummaries : public ydk::Entity
{
    public:
        AuthenticationSummaries();
        ~AuthenticationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationSummary; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary

        ydk::YList authentication_summary;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary : public ydk::Entity
{
    public:
        AuthenticationSummary();
        ~AuthenticationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authentication_state; //type: SubscriberAuthenStateFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::StateSummaries : public ydk::Entity
{
    public:
        StateSummaries();
        ~StateSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateSummary; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary

        ydk::YList state_summary;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary : public ydk::Entity
{
    public:
        StateSummary();
        ~StateSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: SubscriberStateFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries : public ydk::Entity
{
    public:
        Ipv4AddressVrfSummaries();
        ~Ipv4AddressVrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddressVrfSummary; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary

        ydk::YList ipv4_address_vrf_summary;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary : public ydk::Entity
{
    public:
        Ipv4AddressVrfSummary();
        ~Ipv4AddressVrfSummary();

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
        ydk::YLeaf address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries : public ydk::Entity
{
    public:
        AddressFamilySummaries();
        ~AddressFamilySummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressFamilySummary; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary

        ydk::YList address_family_summary;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary : public ydk::Entity
{
    public:
        AddressFamilySummary();
        ~AddressFamilySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SubscriberAddressFamilyFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries : public ydk::Entity
{
    public:
        UsernameSummaries();
        ~UsernameSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsernameSummary; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary

        ydk::YList username_summary;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary : public ydk::Entity
{
    public:
        UsernameSummary();
        ~UsernameSummary();

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
        class StateXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr> state_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr> address_family_xr;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_1_ */

