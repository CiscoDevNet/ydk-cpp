#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_1_
#define _CISCO_IOS_XR_IP_RSVP_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rsvp_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {


class Rsvp::Nsr::Status::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

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

        ydk::YLeaf sync_status; //type: RsvpSyncStatus
        ydk::YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // Rsvp::Nsr::Status::IdtStatus


class Rsvp::Nsr::Status::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf sync_status; //type: RsvpSyncStatus
        ydk::YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // Rsvp::Nsr::Status::PreviousIdtStatus


class Rsvp::OpenConfig : public ydk::Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

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

        class GlobalCounters; //type: Rsvp::OpenConfig::GlobalCounters
        class InterfaceCounters; //type: Rsvp::OpenConfig::InterfaceCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::GlobalCounters> global_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::InterfaceCounters> interface_counters;
        
}; // Rsvp::OpenConfig


class Rsvp::OpenConfig::GlobalCounters : public ydk::Entity
{
    public:
        GlobalCounters();
        ~GlobalCounters();

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

        ydk::YLeaf path_timeouts; //type: uint64
        ydk::YLeaf reservation_timeouts; //type: uint64
        ydk::YLeaf rate_limited_messages; //type: uint64
        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // Rsvp::OpenConfig::GlobalCounters


class Rsvp::OpenConfig::InterfaceCounters : public ydk::Entity
{
    public:
        InterfaceCounters();
        ~InterfaceCounters();

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

        class InterfaceCounter; //type: Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter> > interface_counter;
        
}; // Rsvp::OpenConfig::InterfaceCounters


class Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter : public ydk::Entity
{
    public:
        InterfaceCounter();
        ~InterfaceCounter();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter


class Rsvp::PsbBriefs : public ydk::Entity
{
    public:
        PsbBriefs();
        ~PsbBriefs();

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

        class PsbBrief; //type: Rsvp::PsbBriefs::PsbBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief> > psb_brief;
        
}; // Rsvp::PsbBriefs


class Rsvp::PsbBriefs::PsbBrief : public ydk::Entity
{
    public:
        PsbBrief();
        ~PsbBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        class Session; //type: Rsvp::PsbBriefs::PsbBrief::Session
        class S2LSubLsp; //type: Rsvp::PsbBriefs::PsbBrief::S2LSubLsp
        class Template_; //type: Rsvp::PsbBriefs::PsbBrief::Template_
        class SessionAttribute; //type: Rsvp::PsbBriefs::PsbBrief::SessionAttribute
        class TrafficSpec; //type: Rsvp::PsbBriefs::PsbBrief::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::SessionAttribute> session_attribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::TrafficSpec> traffic_spec;
        
}; // Rsvp::PsbBriefs::PsbBrief


class Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec : public ydk::Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

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

        ydk::YLeaf tspec_type; //type: RsvpMgmtTspec
        class G709OtnTspec; //type: Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec


class Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

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

        ydk::YLeaf traffic_signal_type; //type: uint8
        ydk::YLeaf traffic_nvc; //type: uint16
        ydk::YLeaf traffic_multiplier; //type: uint16
        ydk::YLeaf traffic_bit_rate; //type: uint64

}; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec


class Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec


class Rsvp::PsbBriefs::PsbBrief::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // Rsvp::PsbBriefs::PsbBrief::S2LSubLsp


class Rsvp::PsbBriefs::PsbBrief::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::PsbBriefs::PsbBrief::Session


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::PsbBriefs::PsbBrief::SessionAttribute : public ydk::Entity
{
    public:
        SessionAttribute();
        ~SessionAttribute();

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

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf reservation_priority; //type: uint8
        class SessAttributeFlags; //type: Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags> sess_attribute_flags;
        
}; // Rsvp::PsbBriefs::PsbBrief::SessionAttribute


class Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags : public ydk::Entity
{
    public:
        SessAttributeFlags();
        ~SessAttributeFlags();

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

        ydk::YLeaf is_local_protect; //type: boolean
        ydk::YLeaf is_node_protect; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf is_record_labels; //type: boolean
        ydk::YLeaf is_shared_explicit_requested; //type: boolean

}; // Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags


class Rsvp::PsbBriefs::PsbBrief::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        class RsvpFilter; //type: Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter> rsvp_filter;
        
}; // Rsvp::PsbBriefs::PsbBrief::Template_


class Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter


class Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session


class Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session


class Rsvp::PsbBriefs::PsbBrief::TrafficSpec : public ydk::Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // Rsvp::PsbBriefs::PsbBrief::TrafficSpec


class Rsvp::PsbDetaileds : public ydk::Entity
{
    public:
        PsbDetaileds();
        ~PsbDetaileds();

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

        class PsbDetailed; //type: Rsvp::PsbDetaileds::PsbDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed> > psb_detailed;
        
}; // Rsvp::PsbDetaileds


class Rsvp::PsbDetaileds::PsbDetailed : public ydk::Entity
{
    public:
        PsbDetailed();
        ~PsbDetailed();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        ydk::YLeaf is_in_ero_valid; //type: boolean
        ydk::YLeaf is_out_ero_valid; //type: boolean
        class Session; //type: Rsvp::PsbDetaileds::PsbDetailed::Session
        class S2LSubLsp; //type: Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp
        class Template_; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_
        class SessionAttribute; //type: Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute
        class TrafficSpec; //type: Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec
        class PathFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::PathFlags
        class Hop; //type: Rsvp::PsbDetaileds::PsbDetailed::Hop
        class PolicySourceInfo; //type: Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo
        class Header; //type: Rsvp::PsbDetaileds::PsbDetailed::Header
        class ExpiryTime; //type: Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime
        class PolicyFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags
        class PolicyQueryFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo
        class ClassType; //type: Rsvp::PsbDetaileds::PsbDetailed::ClassType
        class Pfc; //type: Rsvp::PsbDetaileds::PsbDetailed::Pfc
        class InEro; //type: Rsvp::PsbDetaileds::PsbDetailed::InEro
        class OutEro; //type: Rsvp::PsbDetaileds::PsbDetailed::OutEro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::ClassType> class_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Hop> hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro> > in_ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc> > pfc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;
        
}; // Rsvp::PsbDetaileds::PsbDetailed


class Rsvp::PsbDetaileds::PsbDetailed::ClassType : public ydk::Entity
{
    public:
        ClassType();
        ~ClassType();

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

        ydk::YLeaf is_class_type_info_valid; //type: boolean
        ydk::YLeaf class_type; //type: uint8

}; // Rsvp::PsbDetaileds::PsbDetailed::ClassType


class Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime : public ydk::Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime


class Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec : public ydk::Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

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

        ydk::YLeaf tspec_type; //type: RsvpMgmtTspec
        class G709OtnTspec; //type: Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec


class Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

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

        ydk::YLeaf traffic_signal_type; //type: uint8
        ydk::YLeaf traffic_nvc; //type: uint16
        ydk::YLeaf traffic_multiplier; //type: uint16
        ydk::YLeaf traffic_bit_rate; //type: uint64

}; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


class Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


class Rsvp::PsbDetaileds::PsbDetailed::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // Rsvp::PsbDetaileds::PsbDetailed::Header


class Rsvp::PsbDetaileds::PsbDetailed::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // Rsvp::PsbDetaileds::PsbDetailed::Hop


class Rsvp::PsbDetaileds::PsbDetailed::InEro : public ydk::Entity
{
    public:
        InEro();
        ~InEro();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::InEro


class Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo : public ydk::Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf local_downstream_label; //type: uint32
        ydk::YLeaf outgoing_downstream_label; //type: uint32
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf outgoing_upstream_label; //type: uint32
        ydk::YLeaf local_upstream_label; //type: uint32
        ydk::YLeaf recovery_label; //type: uint32
        ydk::YLeaf lsp_wrap_label; //type: uint32
        class GenericLocalDownstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public ydk::Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public ydk::Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel : public ydk::Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel : public ydk::Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


class Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class Rsvp::PsbDetaileds::PsbDetailed::OutEro : public ydk::Entity
{
    public:
        OutEro();
        ~OutEro();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::OutEro


class Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


class Rsvp::PsbDetaileds::PsbDetailed::PathFlags : public ydk::Entity
{
    public:
        PathFlags();
        ~PathFlags();

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

        ydk::YLeaf is_non_rsvp_hop_upstream; //type: boolean
        ydk::YLeaf is_local_sender; //type: boolean
        ydk::YLeaf is_message_id_valid; //type: boolean
        ydk::YLeaf is_local_repair; //type: boolean
        ydk::YLeaf is_bidirectional; //type: boolean
        ydk::YLeaf is_lockout; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::PathFlags


class Rsvp::PsbDetaileds::PsbDetailed::Pfc : public ydk::Entity
{
    public:
        Pfc();
        ~Pfc();

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

        ydk::YLeaf output_interface; //type: string
        class PolicyFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags
        class PolicyQueryFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::Pfc


class Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


class Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


class Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags


class Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags


class Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo : public ydk::Entity
{
    public:
        PolicySourceInfo();
        ~PolicySourceInfo();

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

        ydk::YLeaf is_te_link; //type: boolean
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_cops; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_cable; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo


class Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp


class Rsvp::PsbDetaileds::PsbDetailed::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::Session


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


class Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute : public ydk::Entity
{
    public:
        SessionAttribute();
        ~SessionAttribute();

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

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf reservation_priority; //type: uint8
        class SessAttributeFlags; //type: Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute


class Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags : public ydk::Entity
{
    public:
        SessAttributeFlags();
        ~SessAttributeFlags();

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

        ydk::YLeaf is_local_protect; //type: boolean
        ydk::YLeaf is_node_protect; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf is_record_labels; //type: boolean
        ydk::YLeaf is_shared_explicit_requested; //type: boolean

}; // Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


class Rsvp::PsbDetaileds::PsbDetailed::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        class RsvpFilter; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::Template_


class Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


class Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


class Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


class Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec : public ydk::Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec


class Rsvp::PxsbDetails : public ydk::Entity
{
    public:
        PxsbDetails();
        ~PxsbDetails();

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

        class PxsbDetail; //type: Rsvp::PxsbDetails::PxsbDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail> > pxsb_detail;
        
}; // Rsvp::PxsbDetails


class Rsvp::PxsbDetails::PxsbDetail : public ydk::Entity
{
    public:
        PxsbDetail();
        ~PxsbDetail();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        ydk::YLeaf dynamic_state; //type: uint32
        class Session; //type: Rsvp::PxsbDetails::PxsbDetail::Session
        class S2LSubLsp; //type: Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp
        class Template_; //type: Rsvp::PxsbDetails::PxsbDetail::Template_
        class TrafficSpec; //type: Rsvp::PxsbDetails::PxsbDetail::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec
        class Hop; //type: Rsvp::PxsbDetails::PxsbDetail::Hop
        class RsvpHeader; //type: Rsvp::PxsbDetails::PxsbDetail::RsvpHeader

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::RsvpHeader> rsvp_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::TrafficSpec> traffic_spec;
        
}; // Rsvp::PxsbDetails::PxsbDetail


class Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec : public ydk::Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

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

        ydk::YLeaf tspec_type; //type: RsvpMgmtTspec
        class G709OtnTspec; //type: Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec


class Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

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

        ydk::YLeaf traffic_signal_type; //type: uint8
        ydk::YLeaf traffic_nvc; //type: uint16
        ydk::YLeaf traffic_multiplier; //type: uint16
        ydk::YLeaf traffic_bit_rate; //type: uint64

}; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec


class Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec


class Rsvp::PxsbDetails::PxsbDetail::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // Rsvp::PxsbDetails::PxsbDetail::Hop


class Rsvp::PxsbDetails::PxsbDetail::RsvpHeader : public ydk::Entity
{
    public:
        RsvpHeader();
        ~RsvpHeader();

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

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // Rsvp::PxsbDetails::PxsbDetail::RsvpHeader


class Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp


class Rsvp::PxsbDetails::PxsbDetail::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::PxsbDetails::PxsbDetail::Session


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::PxsbDetails::PxsbDetail::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        class RsvpFilter; //type: Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter> rsvp_filter;
        
}; // Rsvp::PxsbDetails::PxsbDetail::Template_


class Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter


class Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session


class Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session


class Rsvp::PxsbDetails::PxsbDetail::TrafficSpec : public ydk::Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // Rsvp::PxsbDetails::PxsbDetail::TrafficSpec


class Rsvp::RequestBriefs : public ydk::Entity
{
    public:
        RequestBriefs();
        ~RequestBriefs();

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

        class RequestBrief; //type: Rsvp::RequestBriefs::RequestBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief> > request_brief;
        
}; // Rsvp::RequestBriefs


class Rsvp::RequestBriefs::RequestBrief : public ydk::Entity
{
    public:
        RequestBrief();
        ~RequestBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf output_interface; //type: string
        class Session; //type: Rsvp::RequestBriefs::RequestBrief::Session
        class S2LSubLsp; //type: Rsvp::RequestBriefs::RequestBrief::S2LSubLsp
        class FlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec
        class Filter; //type: Rsvp::RequestBriefs::RequestBrief::Filter
        class Style; //type: Rsvp::RequestBriefs::RequestBrief::Style

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Style> style;
        
}; // Rsvp::RequestBriefs::RequestBrief


class Rsvp::RequestBriefs::RequestBrief::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;
        
}; // Rsvp::RequestBriefs::RequestBrief::Filter


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RequestBriefs::RequestBrief::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // Rsvp::RequestBriefs::RequestBrief::FlowSpec


class Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec


class Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RequestBriefs::RequestBrief::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // Rsvp::RequestBriefs::RequestBrief::S2LSubLsp


class Rsvp::RequestBriefs::RequestBrief::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::RequestBriefs::RequestBrief::Session


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::RequestBriefs::RequestBrief::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

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

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // Rsvp::RequestBriefs::RequestBrief::Style


class Rsvp::RequestDetails : public ydk::Entity
{
    public:
        RequestDetails();
        ~RequestDetails();

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

        class RequestDetail; //type: Rsvp::RequestDetails::RequestDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail> > request_detail;
        
}; // Rsvp::RequestDetails


class Rsvp::RequestDetails::RequestDetail : public ydk::Entity
{
    public:
        RequestDetail();
        ~RequestDetail();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf output_interface; //type: string
        class Session; //type: Rsvp::RequestDetails::RequestDetail::Session
        class S2LSubLsp; //type: Rsvp::RequestDetails::RequestDetail::S2LSubLsp
        class FlowSpec; //type: Rsvp::RequestDetails::RequestDetail::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RequestDetails::RequestDetail::GenericFlowSpec
        class Filter; //type: Rsvp::RequestDetails::RequestDetail::Filter
        class Style; //type: Rsvp::RequestDetails::RequestDetail::Style
        class ReqFlags; //type: Rsvp::RequestDetails::RequestDetail::ReqFlags
        class Hop; //type: Rsvp::RequestDetails::RequestDetail::Hop
        class Header; //type: Rsvp::RequestDetails::RequestDetail::Header
        class PolicySources; //type: Rsvp::RequestDetails::RequestDetail::PolicySources
        class PolicyFlags; //type: Rsvp::RequestDetails::RequestDetail::PolicyFlags
        class PolicyQueryFlags; //type: Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags
        class PsbKey; //type: Rsvp::RequestDetails::RequestDetail::PsbKey
        class RsbKey; //type: Rsvp::RequestDetails::RequestDetail::RsbKey

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicySources> policy_sources;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PsbKey> > psb_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::ReqFlags> req_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::RsbKey> > rsb_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Style> style;
        
}; // Rsvp::RequestDetails::RequestDetail


class Rsvp::RequestDetails::RequestDetail::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;
        
}; // Rsvp::RequestDetails::RequestDetail::Filter


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RequestDetails::RequestDetail::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // Rsvp::RequestDetails::RequestDetail::FlowSpec


class Rsvp::RequestDetails::RequestDetail::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec


class Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RequestDetails::RequestDetail::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // Rsvp::RequestDetails::RequestDetail::Header


class Rsvp::RequestDetails::RequestDetail::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // Rsvp::RequestDetails::RequestDetail::Hop


class Rsvp::RequestDetails::RequestDetail::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // Rsvp::RequestDetails::RequestDetail::PolicyFlags


class Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags


class Rsvp::RequestDetails::RequestDetail::PolicySources : public ydk::Entity
{
    public:
        PolicySources();
        ~PolicySources();

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

        ydk::YLeaf is_te_link; //type: boolean
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_cops; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_cable; //type: boolean

}; // Rsvp::RequestDetails::RequestDetail::PolicySources


class Rsvp::RequestDetails::RequestDetail::PsbKey : public ydk::Entity
{
    public:
        PsbKey();
        ~PsbKey();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port_or_tunnel_id; //type: uint32
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpMgmtSession
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port_or_lsp_id; //type: uint32
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf vrfid; //type: uint32

}; // Rsvp::RequestDetails::RequestDetail::PsbKey


class Rsvp::RequestDetails::RequestDetail::ReqFlags : public ydk::Entity
{
    public:
        ReqFlags();
        ~ReqFlags();

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

        ydk::YLeaf is_local_receiver; //type: boolean
        ydk::YLeaf is_refreshing; //type: boolean
        ydk::YLeaf is_send_confirm; //type: boolean
        ydk::YLeaf is_ack_outstanding; //type: boolean
        ydk::YLeaf is_message_id_allocated; //type: boolean
        ydk::YLeaf is_nack_received; //type: boolean
        ydk::YLeaf is_retransmit; //type: boolean
        ydk::YLeaf is_paced; //type: boolean
        ydk::YLeaf is_label_request_in_path; //type: boolean
        ydk::YLeaf is_rro_in_path; //type: boolean
        ydk::YLeaf is_record_label_in_path; //type: boolean
        ydk::YLeaf is_merge_point; //type: boolean

}; // Rsvp::RequestDetails::RequestDetail::ReqFlags


class Rsvp::RequestDetails::RequestDetail::RsbKey : public ydk::Entity
{
    public:
        RsbKey();
        ~RsbKey();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port_or_tunnel_id; //type: uint32
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpMgmtSession
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port_or_lsp_id; //type: uint32
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf vrfid; //type: uint32

}; // Rsvp::RequestDetails::RequestDetail::RsbKey


class Rsvp::RequestDetails::RequestDetail::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // Rsvp::RequestDetails::RequestDetail::S2LSubLsp


class Rsvp::RequestDetails::RequestDetail::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::RequestDetails::RequestDetail::Session


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::RequestDetails::RequestDetail::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

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

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // Rsvp::RequestDetails::RequestDetail::Style


class Rsvp::RsbBriefs : public ydk::Entity
{
    public:
        RsbBriefs();
        ~RsbBriefs();

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

        class RsbBrief; //type: Rsvp::RsbBriefs::RsbBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief> > rsb_brief;
        
}; // Rsvp::RsbBriefs


class Rsvp::RsbBriefs::RsbBrief : public ydk::Entity
{
    public:
        RsbBrief();
        ~RsbBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        class Session; //type: Rsvp::RsbBriefs::RsbBrief::Session
        class S2LSubLsp; //type: Rsvp::RsbBriefs::RsbBrief::S2LSubLsp
        class FlowSpec; //type: Rsvp::RsbBriefs::RsbBrief::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec
        class Style; //type: Rsvp::RsbBriefs::RsbBrief::Style
        class Filter; //type: Rsvp::RsbBriefs::RsbBrief::Filter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Style> style;
        
}; // Rsvp::RsbBriefs::RsbBrief


class Rsvp::RsbBriefs::RsbBrief::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;
        
}; // Rsvp::RsbBriefs::RsbBrief::Filter


class Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter


class Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RsbBriefs::RsbBrief::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // Rsvp::RsbBriefs::RsbBrief::FlowSpec


class Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec


class Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RsbBriefs::RsbBrief::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // Rsvp::RsbBriefs::RsbBrief::S2LSubLsp


class Rsvp::RsbBriefs::RsbBrief::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::RsbBriefs::RsbBrief::Session


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_1_ */

