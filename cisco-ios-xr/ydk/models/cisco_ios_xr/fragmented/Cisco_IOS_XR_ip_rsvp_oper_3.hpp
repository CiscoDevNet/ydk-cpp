#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_3_
#define _CISCO_IOS_XR_IP_RSVP_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp


class Rsvp::PsbDetaileds::PsbDetailed::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpFilter; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;


}; // Rsvp::PsbDetaileds::PsbDetailed::Template_


class Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf filter_type; //type: RsvpMgmtFilterEnum

        class UdpIpv4Session; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


class Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16



}; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


class Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16



}; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


class Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute : public Entity
{
    public:
        SessionAttribute();
        ~SessionAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint8
        YLeaf reservation_priority; //type: uint8

        class SessAttributeFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


}; // Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute


class Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags : public Entity
{
    public:
        SessAttributeFlags();
        ~SessAttributeFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_local_protect; //type: boolean
        YLeaf is_node_protect; //type: boolean
        YLeaf is_bandwidth_protect; //type: boolean
        YLeaf is_record_labels; //type: boolean
        YLeaf is_shared_explicit_requested; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


class Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec : public Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec


class Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec : public Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tspec_type; //type: RsvpMgmtTspecEnum

        class G709OtnTspec; //type: Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec


class Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec : public Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_signal_type; //type: uint8
        YLeaf traffic_nvc; //type: uint16
        YLeaf traffic_multiplier; //type: uint16
        YLeaf traffic_bit_rate; //type: uint64



}; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


class Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec : public Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


class Rsvp::PsbDetaileds::PsbDetailed::PathFlags : public Entity
{
    public:
        PathFlags();
        ~PathFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_non_rsvp_hop_upstream; //type: boolean
        YLeaf is_local_sender; //type: boolean
        YLeaf is_message_id_valid; //type: boolean
        YLeaf is_local_repair; //type: boolean
        YLeaf is_bidirectional; //type: boolean
        YLeaf is_lockout; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::PathFlags


class Rsvp::PsbDetaileds::PsbDetailed::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf neighbor_logical_interface_name; //type: string



}; // Rsvp::PsbDetaileds::PsbDetailed::Hop


class Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo : public Entity
{
    public:
        PolicySourceInfo();
        ~PolicySourceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_te_link; //type: boolean
        YLeaf is_local; //type: boolean
        YLeaf is_cops; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_cable; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo


class Rsvp::PsbDetaileds::PsbDetailed::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rsvp_version; //type: uint8
        YLeaf rsvp_header_flags; //type: uint8
        YLeaf rsvp_ttl; //type: uint8
        YLeaf rsvp_message_type; //type: uint8
        YLeaf ip_tos; //type: uint8
        YLeaf ip_ttl; //type: uint8
        YLeaf ip_source_address; //type: string



}; // Rsvp::PsbDetaileds::PsbDetailed::Header


class Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime : public Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime


class Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags


class Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo : public Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf local_downstream_label; //type: uint32
        YLeaf outgoing_downstream_label; //type: uint32
        YLeaf merge_point_label; //type: uint32
        YLeaf outgoing_upstream_label; //type: uint32
        YLeaf local_upstream_label; //type: uint32
        YLeaf recovery_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32

        class GenericLocalDownstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel : public Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel : public Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::ClassType : public Entity
{
    public:
        ClassType();
        ~ClassType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_class_type_info_valid; //type: boolean
        YLeaf class_type; //type: uint8



}; // Rsvp::PsbDetaileds::PsbDetailed::ClassType


class Rsvp::PsbDetaileds::PsbDetailed::Pfc : public Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf output_interface; //type: string

        class PolicyFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags
        class PolicyQueryFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;


}; // Rsvp::PsbDetaileds::PsbDetailed::Pfc


class Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


class Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean



}; // Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


class Rsvp::PsbDetaileds::PsbDetailed::InEro : public Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // Rsvp::PsbDetaileds::PsbDetailed::InEro


class Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::OutEro : public Entity
{
    public:
        OutEro();
        ~OutEro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // Rsvp::PsbDetaileds::PsbDetailed::OutEro


class Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


class Rsvp::FrrSummary : public Entity
{
    public:
        FrrSummary();
        ~FrrSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathStates; //type: Rsvp::FrrSummary::PathStates
        class ReservationStates; //type: Rsvp::FrrSummary::ReservationStates

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary::PathStates> path_states;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary::ReservationStates> reservation_states;


}; // Rsvp::FrrSummary


class Rsvp::FrrSummary::PathStates : public Entity
{
    public:
        PathStates();
        ~PathStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf active_instances; //type: uint32
        YLeaf ready_instances; //type: uint32
        YLeaf active_wait_instances; //type: uint32



}; // Rsvp::FrrSummary::PathStates


class Rsvp::FrrSummary::ReservationStates : public Entity
{
    public:
        ReservationStates();
        ~ReservationStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf active_instances; //type: uint32
        YLeaf ready_instances; //type: uint32
        YLeaf active_wait_instances; //type: uint32



}; // Rsvp::FrrSummary::ReservationStates


class Rsvp::RsbDetaileds : public Entity
{
    public:
        RsbDetaileds();
        ~RsbDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsbDetailed; //type: Rsvp::RsbDetaileds::RsbDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed> > rsb_detailed;


}; // Rsvp::RsbDetaileds


class Rsvp::RsbDetaileds::RsbDetailed : public Entity
{
    public:
        RsbDetailed();
        ~RsbDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf source_port; //type: int32
        YLeaf sub_group_origin; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf input_adjusted_interface; //type: string
        YLeaf input_physical_interface; //type: string

        class FlowSpec; //type: Rsvp::RsbDetaileds::RsbDetailed::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec
        class Session; //type: Rsvp::RsbDetaileds::RsbDetailed::Session
        class S2LSubLsp; //type: Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp
        class Style; //type: Rsvp::RsbDetaileds::RsbDetailed::Style
        class Filter; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter
        class RsbFlags; //type: Rsvp::RsbDetaileds::RsbDetailed::RsbFlags
        class Hop; //type: Rsvp::RsbDetaileds::RsbDetailed::Hop
        class PolicySources; //type: Rsvp::RsbDetaileds::RsbDetailed::PolicySources
        class Header; //type: Rsvp::RsbDetaileds::RsbDetailed::Header
        class PolicyFlags; //type: Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags
        class ExpiryTime; //type: Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime
        class PolicyQueryFlags; //type: Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Style> style;


}; // Rsvp::RsbDetaileds::RsbDetailed


class Rsvp::RsbDetaileds::RsbDetailed::FlowSpec : public Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_average_rate; //type: uint64
        YLeaf flow_max_burst; //type: uint64
        YLeaf flow_peak_rate; //type: uint64
        YLeaf flow_min_unit; //type: uint32
        YLeaf flow_max_unit; //type: uint32
        YLeaf flow_requested_rate; //type: uint64
        YLeaf flow_slack; //type: uint32
        YLeaf flow_qos; //type: RsvpMgmtQosServiceEnumEnum



}; // Rsvp::RsbDetaileds::RsbDetailed::FlowSpec


class Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec : public Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_spec_type; //type: RsvpMgmtFlowSpecEnum

        class G709OtnFlowSpec; //type: Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec


class Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec : public Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_signal_type; //type: uint8
        YLeaf flow_nvc; //type: uint16
        YLeaf flow_multiplier; //type: uint16
        YLeaf flow_bit_rate; //type: uint64



}; // Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RsbDetaileds::RsbDetailed::Session : public Entity
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



        class RsvpSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;


}; // Rsvp::RsbDetaileds::RsbDetailed::Session


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp


class Rsvp::RsbDetaileds::RsbDetailed::Style : public Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum



}; // Rsvp::RsbDetaileds::RsbDetailed::Style


class Rsvp::RsbDetaileds::RsbDetailed::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpFilter; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RsbDetaileds::RsbDetailed::Filter


class Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf filter_type; //type: RsvpMgmtFilterEnum

        class UdpIpv4Session; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


class Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16



}; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16



}; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RsbDetaileds::RsbDetailed::RsbFlags : public Entity
{
    public:
        RsbFlags();
        ~RsbFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_local_receiver; //type: boolean
        YLeaf is_message_id_valid; //type: boolean
        YLeaf is_local_repair; //type: boolean
        YLeaf is_merge_point; //type: boolean
        YLeaf is_lockout; //type: boolean



}; // Rsvp::RsbDetaileds::RsbDetailed::RsbFlags


class Rsvp::RsbDetaileds::RsbDetailed::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf neighbor_logical_interface_name; //type: string



}; // Rsvp::RsbDetaileds::RsbDetailed::Hop


class Rsvp::RsbDetaileds::RsbDetailed::PolicySources : public Entity
{
    public:
        PolicySources();
        ~PolicySources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_te_link; //type: boolean
        YLeaf is_local; //type: boolean
        YLeaf is_cops; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_cable; //type: boolean



}; // Rsvp::RsbDetaileds::RsbDetailed::PolicySources


class Rsvp::RsbDetaileds::RsbDetailed::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rsvp_version; //type: uint8
        YLeaf rsvp_header_flags; //type: uint8
        YLeaf rsvp_ttl; //type: uint8
        YLeaf rsvp_message_type; //type: uint8
        YLeaf ip_tos; //type: uint8
        YLeaf ip_ttl; //type: uint8
        YLeaf ip_source_address; //type: string



}; // Rsvp::RsbDetaileds::RsbDetailed::Header


class Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean



}; // Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags


class Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime : public Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime


class Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean



}; // Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo : public Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf local_downstream_label; //type: uint32
        YLeaf outgoing_downstream_label; //type: uint32
        YLeaf merge_point_label; //type: uint32
        YLeaf outgoing_upstream_label; //type: uint32
        YLeaf local_upstream_label; //type: uint32
        YLeaf recovery_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32

        class GenericLocalDownstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel : public Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel : public Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class Rsvp::InterfaceSummaries : public Entity
{
    public:
        InterfaceSummaries();
        ~InterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceSummary; //type: Rsvp::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary> > interface_summary;


}; // Rsvp::InterfaceSummaries


class Rsvp::InterfaceSummaries::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf paths_in; //type: uint32
        YLeaf paths_out; //type: uint32
        YLeaf reservations_in; //type: uint32
        YLeaf reservations_out; //type: uint32

        class BandwidthInformation; //type: Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;


}; // Rsvp::InterfaceSummaries::InterfaceSummary


class Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation : public Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_mode; //type: RsvpMgmtDsteModesEnum

        class PreStandardDsteInterface; //type: Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation


class Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface : public Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_subpool_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_subpool_bandwidth_absolute; //type: boolean



}; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface : public Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_pool0_bandwidth; //type: uint64
        YLeaf max_pool1_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc1_bandwidth_absolute; //type: boolean



}; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


class Rsvp::HelloInstanceBriefs : public Entity
{
    public:
        HelloInstanceBriefs();
        ~HelloInstanceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInstanceBrief; //type: Rsvp::HelloInstanceBriefs::HelloInstanceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;


}; // Rsvp::HelloInstanceBriefs


class Rsvp::HelloInstanceBriefs::HelloInstanceBrief : public Entity
{
    public:
        HelloInstanceBrief();
        ~HelloInstanceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf lost_communication_total; //type: uint16



}; // Rsvp::HelloInstanceBriefs::HelloInstanceBrief


class Rsvp::AuthenticationDetails : public Entity
{
    public:
        AuthenticationDetails();
        ~AuthenticationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AuthenticationDetail; //type: Rsvp::AuthenticationDetails::AuthenticationDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail> > authentication_detail;


}; // Rsvp::AuthenticationDetails


class Rsvp::AuthenticationDetails::AuthenticationDetail : public Entity
{
    public:
        AuthenticationDetail();
        ~AuthenticationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf mode_id; //type: RsvpModeEnum
        YLeaf interface_name; //type: string
        YLeaf key_status; //type: uint32
        YLeaf key_digest_info; //type: uint32
        YLeaf lifetime; //type: uint32
        YLeaf lifetime_left; //type: uint32
        YLeaf challenge_status; //type: RsvpMgmtAuthChallengeStatusEnum

        class AuthCompact; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact
        class DirectionInfo; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;


}; // Rsvp::AuthenticationDetails::AuthenticationDetail


class Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact : public Entity
{
    public:
        AuthCompact();
        ~AuthCompact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf direction; //type: RsvpMgmtAuthDirectionEnum
        YLeaf key_type; //type: RsvpMgmtAuthKiEnum
        YLeaf key_source; //type: string
        YLeaf key_id; //type: uint64
        YLeaf key_id_valid; //type: uint32



}; // Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo : public Entity
{
    public:
        DirectionInfo();
        ~DirectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auth_direction; //type: RsvpMgmtAuthDirectionEnum

        class SendInfo; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo
        class ReceiveInfo; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;


}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo : public Entity
{
    public:
        SendInfo();
        ~SendInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence; //type: uint64

        class Counters; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;


}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters : public Entity
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


        YLeaf authentication_sent; //type: uint32
        YLeaf authentication_failures; //type: uint32
        YLeaf authentication_send_challenges_received; //type: uint32
        YLeaf authentication_challenge_responses_sent; //type: uint32



}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo : public Entity
{
    public:
        ReceiveInfo();
        ~ReceiveInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence; //type: uint64
        YLeaf sequence_window_size; //type: uint32
        YLeaf sequence_window_count; //type: uint32
        YLeafList sequence_window; //type: list of  uint64

        class Counters; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;


}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters : public Entity
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


        YLeaf authentication_received_valid_messages; //type: uint32
        YLeaf authentication_received_challenges_sent; //type: uint32
        YLeaf authentication_received_challenge_response; //type: uint32
        YLeaf authentication_received_challenges_resent; //type: uint32
        YLeaf authentication_received_challenge_timeouts; //type: uint32
        YLeaf authentication_received_during_challenge; //type: uint32
        YLeaf authentication_received_incomplete; //type: uint32
        YLeaf authentication_received_no_integrity; //type: uint32
        YLeaf authentication_received_bad_digest; //type: uint32
        YLeaf authentication_received_wrong_digest_type; //type: uint32
        YLeaf authentication_received_sequence_number_duplicate; //type: uint32
        YLeaf authentication_received_sequence_number_outof_range; //type: uint32
        YLeaf authentication_received_wrong_challenges_response; //type: uint32
        YLeaf authentication_received_challenges_response_duplicate; //type: uint32
        YLeaf authentication_received_response_late; //type: uint32
        YLeaf authentication_received_bad_message_format; //type: uint32



}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


class Rsvp::RsbBriefs : public Entity
{
    public:
        RsbBriefs();
        ~RsbBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsbBrief; //type: Rsvp::RsbBriefs::RsbBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief> > rsb_brief;


}; // Rsvp::RsbBriefs


class Rsvp::RsbBriefs::RsbBrief : public Entity
{
    public:
        RsbBrief();
        ~RsbBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf source_port; //type: int32
        YLeaf sub_group_origin; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf input_interface; //type: string

        class Session; //type: Rsvp::RsbBriefs::RsbBrief::Session
        class S2LSubLsp; //type: Rsvp::RsbBriefs::RsbBrief::S2LSubLsp
        class FlowSpec; //type: Rsvp::RsbBriefs::RsbBrief::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec
        class Style; //type: Rsvp::RsbBriefs::RsbBrief::Style
        class Filter; //type: Rsvp::RsbBriefs::RsbBrief::Filter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Style> style;


}; // Rsvp::RsbBriefs::RsbBrief


class Rsvp::RsbBriefs::RsbBrief::Session : public Entity
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



        class RsvpSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;


}; // Rsvp::RsbBriefs::RsbBrief::Session


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RsbBriefs::RsbBrief::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::RsbBriefs::RsbBrief::S2LSubLsp


class Rsvp::RsbBriefs::RsbBrief::FlowSpec : public Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_average_rate; //type: uint64
        YLeaf flow_max_burst; //type: uint64
        YLeaf flow_peak_rate; //type: uint64
        YLeaf flow_min_unit; //type: uint32
        YLeaf flow_max_unit; //type: uint32
        YLeaf flow_requested_rate; //type: uint64
        YLeaf flow_slack; //type: uint32
        YLeaf flow_qos; //type: RsvpMgmtQosServiceEnumEnum



}; // Rsvp::RsbBriefs::RsbBrief::FlowSpec


class Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec : public Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_spec_type; //type: RsvpMgmtFlowSpecEnum

        class G709OtnFlowSpec; //type: Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec


class Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec : public Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_signal_type; //type: uint8
        YLeaf flow_nvc; //type: uint16
        YLeaf flow_multiplier; //type: uint16
        YLeaf flow_bit_rate; //type: uint64



}; // Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RsbBriefs::RsbBrief::Style : public Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum



}; // Rsvp::RsbBriefs::RsbBrief::Style


class Rsvp::RsbBriefs::RsbBrief::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpFilter; //type: Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RsbBriefs::RsbBrief::Filter


class Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf filter_type; //type: RsvpMgmtFilterEnum

        class UdpIpv4Session; //type: Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter


class Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16



}; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16



}; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::OpenConfig : public Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalCounters; //type: Rsvp::OpenConfig::GlobalCounters
        class InterfaceCounters; //type: Rsvp::OpenConfig::InterfaceCounters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::GlobalCounters> global_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::InterfaceCounters> interface_counters;


}; // Rsvp::OpenConfig


class Rsvp::OpenConfig::GlobalCounters : public Entity
{
    public:
        GlobalCounters();
        ~GlobalCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_timeouts; //type: uint64
        YLeaf reservation_timeouts; //type: uint64
        YLeaf rate_limited_messages; //type: uint64
        YLeaf in_path_messages; //type: uint64
        YLeaf in_path_error_messages; //type: uint64
        YLeaf in_path_tear_messages; //type: uint64
        YLeaf in_reservation_messages; //type: uint64
        YLeaf in_reservation_error_messages; //type: uint64
        YLeaf in_reservation_tear_messages; //type: uint64
        YLeaf in_hello_messages; //type: uint64
        YLeaf in_srefresh_messages; //type: uint64
        YLeaf in_ack_messages; //type: uint64
        YLeaf out_path_messages; //type: uint64
        YLeaf out_path_error_messages; //type: uint64
        YLeaf out_path_tear_messages; //type: uint64
        YLeaf out_reservation_messages; //type: uint64
        YLeaf out_reservation_error_messages; //type: uint64
        YLeaf out_reservation_tear_messages; //type: uint64
        YLeaf out_hello_messages; //type: uint64
        YLeaf out_srefresh_messages; //type: uint64
        YLeaf out_ack_messages; //type: uint64



}; // Rsvp::OpenConfig::GlobalCounters


class Rsvp::OpenConfig::InterfaceCounters : public Entity
{
    public:
        InterfaceCounters();
        ~InterfaceCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceCounter; //type: Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter> > interface_counter;


}; // Rsvp::OpenConfig::InterfaceCounters


class Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter : public Entity
{
    public:
        InterfaceCounter();
        ~InterfaceCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf in_path_messages; //type: uint64
        YLeaf in_path_error_messages; //type: uint64
        YLeaf in_path_tear_messages; //type: uint64
        YLeaf in_reservation_messages; //type: uint64
        YLeaf in_reservation_error_messages; //type: uint64
        YLeaf in_reservation_tear_messages; //type: uint64
        YLeaf in_hello_messages; //type: uint64
        YLeaf in_srefresh_messages; //type: uint64
        YLeaf in_ack_messages; //type: uint64
        YLeaf out_path_messages; //type: uint64
        YLeaf out_path_error_messages; //type: uint64
        YLeaf out_path_tear_messages; //type: uint64
        YLeaf out_reservation_messages; //type: uint64
        YLeaf out_reservation_error_messages; //type: uint64
        YLeaf out_reservation_tear_messages; //type: uint64
        YLeaf out_hello_messages; //type: uint64
        YLeaf out_srefresh_messages; //type: uint64
        YLeaf out_ack_messages; //type: uint64



}; // Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter


class Rsvp::Counters : public Entity
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



        class InterfaceMessages; //type: Rsvp::Counters::InterfaceMessages
        class MessageSummary; //type: Rsvp::Counters::MessageSummary
        class PrefixFiltering; //type: Rsvp::Counters::PrefixFiltering
        class OutOfResource; //type: Rsvp::Counters::OutOfResource
        class InterfaceEvents; //type: Rsvp::Counters::InterfaceEvents
        class Nsr; //type: Rsvp::Counters::Nsr
        class Issu; //type: Rsvp::Counters::Issu
        class Database; //type: Rsvp::Counters::Database
        class EventSyncs; //type: Rsvp::Counters::EventSyncs

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Database> database;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs> event_syncs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents> interface_events;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages> interface_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary> message_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource> out_of_resource;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering> prefix_filtering;


}; // Rsvp::Counters


class Rsvp::Counters::InterfaceMessages : public Entity
{
    public:
        InterfaceMessages();
        ~InterfaceMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceMessage; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage> > interface_message;


}; // Rsvp::Counters::InterfaceMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage : public Entity
{
    public:
        InterfaceMessage();
        ~InterfaceMessage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf retransmitted_messages; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf rate_limited_messages; //type: uint32

        class ReceivedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages
        class TransmittedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages
        class BundleReceivedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages
        class BundleTransmittedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages> received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages> transmitted_messages;


}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages : public Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages : public Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages : public Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages : public Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


class Rsvp::Counters::MessageSummary : public Entity
{
    public:
        MessageSummary();
        ~MessageSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf retransmitted_messages; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf rate_limited_messages; //type: uint32

        class ReceivedMessages; //type: Rsvp::Counters::MessageSummary::ReceivedMessages
        class TransmittedMessages; //type: Rsvp::Counters::MessageSummary::TransmittedMessages
        class BundleReceivedMessages; //type: Rsvp::Counters::MessageSummary::BundleReceivedMessages
        class BundleTransmittedMessages; //type: Rsvp::Counters::MessageSummary::BundleTransmittedMessages

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::ReceivedMessages> received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::TransmittedMessages> transmitted_messages;


}; // Rsvp::Counters::MessageSummary


class Rsvp::Counters::MessageSummary::ReceivedMessages : public Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::MessageSummary::ReceivedMessages


class Rsvp::Counters::MessageSummary::TransmittedMessages : public Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::MessageSummary::TransmittedMessages


class Rsvp::Counters::MessageSummary::BundleReceivedMessages : public Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::MessageSummary::BundleReceivedMessages


class Rsvp::Counters::MessageSummary::BundleTransmittedMessages : public Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf reservation; //type: uint32
        YLeaf path_error; //type: uint32
        YLeaf reservation_error; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf bundle; //type: uint32
        YLeaf ack; //type: uint32
        YLeaf srefresh; //type: uint32
        YLeaf hello; //type: uint32
        YLeaf challenge; //type: uint32
        YLeaf response; //type: uint32



}; // Rsvp::Counters::MessageSummary::BundleTransmittedMessages


class Rsvp::Counters::PrefixFiltering : public Entity
{
    public:
        PrefixFiltering();
        ~PrefixFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Accesses; //type: Rsvp::Counters::PrefixFiltering::Accesses
        class Interfaces; //type: Rsvp::Counters::PrefixFiltering::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses> accesses;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces> interfaces;


}; // Rsvp::Counters::PrefixFiltering


class Rsvp::Counters::PrefixFiltering::Accesses : public Entity
{
    public:
        Accesses();
        ~Accesses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Access; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access> > access;


}; // Rsvp::Counters::PrefixFiltering::Accesses


class Rsvp::Counters::PrefixFiltering::Accesses::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf access_list_name; //type: string

        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped
        class Total; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Total> total;


}; // Rsvp::Counters::PrefixFiltering::Accesses::Access


class Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded : public Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded


class Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined : public Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped : public Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped


class Rsvp::Counters::PrefixFiltering::Accesses::Access::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Total


class Rsvp::Counters::PrefixFiltering::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary
        class Interfaces_; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary> summary;


}; // Rsvp::Counters::PrefixFiltering::Interfaces


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped
        class DefaultActionDropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped
        class DefaultActionProcessed; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed
        class Total; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total> total;


}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded : public Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined : public Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped : public Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped : public Entity
{
    public:
        DefaultActionDropped();
        ~DefaultActionDropped();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed : public Entity
{
    public:
        DefaultActionProcessed();
        ~DefaultActionProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_ : public Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface> > interface;


}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_3_ */
