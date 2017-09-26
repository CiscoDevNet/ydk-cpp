#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_0_
#define _CISCO_IOS_XR_IP_RSVP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

class Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

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

        class Issu; //type: Rsvp::Issu
        class BwPoolInfo; //type: Rsvp::BwPoolInfo
        class PxsbDetails; //type: Rsvp::PxsbDetails
        class RxsbDetails; //type: Rsvp::RxsbDetails
        class InterfaceNeighborBriefs; //type: Rsvp::InterfaceNeighborBriefs
        class ControllerSummaries; //type: Rsvp::ControllerSummaries
        class AuthenticationBriefs; //type: Rsvp::AuthenticationBriefs
        class SessionBriefs; //type: Rsvp::SessionBriefs
        class PsbDetaileds; //type: Rsvp::PsbDetaileds
        class ControllerDetaileds; //type: Rsvp::ControllerDetaileds
        class FrrSummary; //type: Rsvp::FrrSummary
        class RsbDetaileds; //type: Rsvp::RsbDetaileds
        class InterfaceSummaries; //type: Rsvp::InterfaceSummaries
        class HelloInstanceBriefs; //type: Rsvp::HelloInstanceBriefs
        class AuthenticationDetails; //type: Rsvp::AuthenticationDetails
        class RsbBriefs; //type: Rsvp::RsbBriefs
        class OpenConfig; //type: Rsvp::OpenConfig
        class Counters; //type: Rsvp::Counters
        class InterfaceDetaileds; //type: Rsvp::InterfaceDetaileds
        class ControllerBriefs; //type: Rsvp::ControllerBriefs
        class GracefulRestart; //type: Rsvp::GracefulRestart
        class HelloInterfaceInstanceBriefs; //type: Rsvp::HelloInterfaceInstanceBriefs
        class HelloInterfaceInstanceDetails; //type: Rsvp::HelloInterfaceInstanceDetails
        class InterfaceNeighborDetails; //type: Rsvp::InterfaceNeighborDetails
        class Nsr; //type: Rsvp::Nsr
        class Summary; //type: Rsvp::Summary
        class Frrs; //type: Rsvp::Frrs
        class RequestBriefs; //type: Rsvp::RequestBriefs
        class RequestDetails; //type: Rsvp::RequestDetails
        class InterfaceBriefs; //type: Rsvp::InterfaceBriefs
        class SessionDetaileds; //type: Rsvp::SessionDetaileds
        class HelloInstanceDetails; //type: Rsvp::HelloInstanceDetails
        class GlobalNeighborDetails; //type: Rsvp::GlobalNeighborDetails
        class PsbBriefs; //type: Rsvp::PsbBriefs
        class GlobalNeighborBriefs; //type: Rsvp::GlobalNeighborBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationBriefs> authentication_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails> authentication_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::BwPoolInfo> bw_pool_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs> controller_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds> controller_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries> controller_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary> frr_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs> frrs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs> global_neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails> global_neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceBriefs> hello_instance_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails> hello_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds> interface_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails> interface_neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries> interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig> open_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs> psb_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds> psb_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails> pxsb_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs> request_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails> request_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs> rsb_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds> rsb_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails> rxsb_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs> session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds> session_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary> summary;
        
}; // Rsvp


class Rsvp::AuthenticationBriefs : public ydk::Entity
{
    public:
        AuthenticationBriefs();
        ~AuthenticationBriefs();

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

        class AuthenticationBrief; //type: Rsvp::AuthenticationBriefs::AuthenticationBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;
        
}; // Rsvp::AuthenticationBriefs


class Rsvp::AuthenticationBriefs::AuthenticationBrief : public ydk::Entity
{
    public:
        AuthenticationBrief();
        ~AuthenticationBrief();

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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf mode_id; //type: RsvpMode
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf direction; //type: RsvpMgmtAuthDirection
        ydk::YLeaf key_type; //type: RsvpMgmtAuthKi
        ydk::YLeaf key_source; //type: string
        ydk::YLeaf key_id; //type: uint64
        ydk::YLeaf key_id_valid; //type: uint32

}; // Rsvp::AuthenticationBriefs::AuthenticationBrief


class Rsvp::AuthenticationDetails : public ydk::Entity
{
    public:
        AuthenticationDetails();
        ~AuthenticationDetails();

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

        class AuthenticationDetail; //type: Rsvp::AuthenticationDetails::AuthenticationDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail> > authentication_detail;
        
}; // Rsvp::AuthenticationDetails


class Rsvp::AuthenticationDetails::AuthenticationDetail : public ydk::Entity
{
    public:
        AuthenticationDetail();
        ~AuthenticationDetail();

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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf mode_id; //type: RsvpMode
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf key_status; //type: uint32
        ydk::YLeaf key_digest_info; //type: uint32
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf lifetime_left; //type: uint32
        ydk::YLeaf challenge_status; //type: RsvpMgmtAuthChallengeStatus
        class AuthCompact; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact
        class DirectionInfo; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;
        
}; // Rsvp::AuthenticationDetails::AuthenticationDetail


class Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact : public ydk::Entity
{
    public:
        AuthCompact();
        ~AuthCompact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf direction; //type: RsvpMgmtAuthDirection
        ydk::YLeaf key_type; //type: RsvpMgmtAuthKi
        ydk::YLeaf key_source; //type: string
        ydk::YLeaf key_id; //type: uint64
        ydk::YLeaf key_id_valid; //type: uint32

}; // Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo : public ydk::Entity
{
    public:
        DirectionInfo();
        ~DirectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_direction; //type: RsvpMgmtAuthDirection
        class SendInfo; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo
        class ReceiveInfo; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;
        
}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo : public ydk::Entity
{
    public:
        ReceiveInfo();
        ~ReceiveInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf sequence_window_size; //type: uint32
        ydk::YLeaf sequence_window_count; //type: uint32
        ydk::YLeafList sequence_window; //type: list of  uint64
        class Counters; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;
        
}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters : public ydk::Entity
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

        ydk::YLeaf authentication_received_valid_messages; //type: uint32
        ydk::YLeaf authentication_received_challenges_sent; //type: uint32
        ydk::YLeaf authentication_received_challenge_response; //type: uint32
        ydk::YLeaf authentication_received_challenges_resent; //type: uint32
        ydk::YLeaf authentication_received_challenge_timeouts; //type: uint32
        ydk::YLeaf authentication_received_during_challenge; //type: uint32
        ydk::YLeaf authentication_received_incomplete; //type: uint32
        ydk::YLeaf authentication_received_no_integrity; //type: uint32
        ydk::YLeaf authentication_received_bad_digest; //type: uint32
        ydk::YLeaf authentication_received_wrong_digest_type; //type: uint32
        ydk::YLeaf authentication_received_sequence_number_duplicate; //type: uint32
        ydk::YLeaf authentication_received_sequence_number_outof_range; //type: uint32
        ydk::YLeaf authentication_received_wrong_challenges_response; //type: uint32
        ydk::YLeaf authentication_received_challenges_response_duplicate; //type: uint32
        ydk::YLeaf authentication_received_response_late; //type: uint32
        ydk::YLeaf authentication_received_bad_message_format; //type: uint32

}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo : public ydk::Entity
{
    public:
        SendInfo();
        ~SendInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        class Counters; //type: Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;
        
}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


class Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters : public ydk::Entity
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

        ydk::YLeaf authentication_sent; //type: uint32
        ydk::YLeaf authentication_failures; //type: uint32
        ydk::YLeaf authentication_send_challenges_received; //type: uint32
        ydk::YLeaf authentication_challenge_responses_sent; //type: uint32

}; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


class Rsvp::BwPoolInfo : public ydk::Entity
{
    public:
        BwPoolInfo();
        ~BwPoolInfo();

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

        ydk::YLeaf max_res_pool_percent; //type: uint32
        ydk::YLeaf bc0_percent; //type: uint32
        ydk::YLeaf bc1_percent; //type: uint32
        ydk::YLeaf is_max_res_pool_percent_configured; //type: boolean
        ydk::YLeaf is_bc0_percent_configured; //type: boolean
        ydk::YLeaf is_bc1_percent_configured; //type: boolean
        ydk::YLeaf bandwidth_configuration_model; //type: IgpteLibBwModel

}; // Rsvp::BwPoolInfo


class Rsvp::ControllerBriefs : public ydk::Entity
{
    public:
        ControllerBriefs();
        ~ControllerBriefs();

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

        class ControllerBrief; //type: Rsvp::ControllerBriefs::ControllerBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief> > controller_brief;
        
}; // Rsvp::ControllerBriefs


class Rsvp::ControllerBriefs::ControllerBrief : public ydk::Entity
{
    public:
        ControllerBrief();
        ~ControllerBrief();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        class BandwidthInformation; //type: Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation> bandwidth_information;
        
}; // Rsvp::ControllerBriefs::ControllerBrief


class Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation


class Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface


class Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface


class Rsvp::ControllerDetaileds : public ydk::Entity
{
    public:
        ControllerDetaileds();
        ~ControllerDetaileds();

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

        class ControllerDetailed; //type: Rsvp::ControllerDetaileds::ControllerDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed> > controller_detailed;
        
}; // Rsvp::ControllerDetaileds


class Rsvp::ControllerDetaileds::ControllerDetailed : public ydk::Entity
{
    public:
        ControllerDetailed();
        ~ControllerDetailed();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf signalling_ip_tos; //type: uint8
        ydk::YLeaf integrity_send_password; //type: string
        ydk::YLeaf integrity_receive_password; //type: string
        ydk::YLeaf integrity_receive_password_optional; //type: uint8
        ydk::YLeaf refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf summary_refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf refresh_interval; //type: int32
        ydk::YLeaf out_of_band_refresh_interval; //type: uint32
        ydk::YLeaf summary_refresh_max_size; //type: uint32
        ydk::YLeaf bundle_message_max_size; //type: uint32
        ydk::YLeaf expiry_timer_state; //type: RsvpTimerState
        ydk::YLeaf expiry_states; //type: int32
        ydk::YLeaf expiry_interval; //type: int32
        ydk::YLeaf expiry_drops_tolerated; //type: int32
        ydk::YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        ydk::YLeaf ack_hold_time; //type: uint32
        ydk::YLeaf ack_max_size; //type: uint32
        ydk::YLeaf retransmit_time; //type: uint32
        ydk::YLeaf pacing_interval; //type: uint32
        ydk::YLeaf pacing_message_rate; //type: uint32
        ydk::YLeaf pacing_timer_state; //type: RsvpTimerState
        ydk::YLeaf pacing_messages; //type: int32
        class BandwidthInformation; //type: Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation
        class Flags; //type: Rsvp::ControllerDetaileds::ControllerDetailed::Flags
        class NeighborArray; //type: Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray> > neighbor_array;
        
}; // Rsvp::ControllerDetaileds::ControllerDetailed


class Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation


class Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface


class Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface


class Rsvp::ControllerDetaileds::ControllerDetailed::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_enabled; //type: boolean
        ydk::YLeaf is_refresh_reduction_enabled; //type: boolean
        ydk::YLeaf is_pacing_enabled; //type: boolean
        ydk::YLeaf is_refresh_enabled; //type: boolean
        ydk::YLeaf is_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_interface_down; //type: boolean
        ydk::YLeaf is_interface_created; //type: boolean
        ydk::YLeaf is_rel_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_backup_tunnel; //type: boolean
        ydk::YLeaf is_rsvp_configured; //type: boolean
        ydk::YLeaf is_non_default_vrf; //type: boolean
        ydk::YLeaf is_message_bundling_enabled; //type: boolean

}; // Rsvp::ControllerDetaileds::ControllerDetailed::Flags


class Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray : public ydk::Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf message_ids; //type: uint32
        ydk::YLeaf outgoing_states; //type: int32
        class ExpiryTime; //type: Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;
        
}; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray


class Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime : public ydk::Entity
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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime


class Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId : public ydk::Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_id; //type: uint32

}; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId


class Rsvp::ControllerSummaries : public ydk::Entity
{
    public:
        ControllerSummaries();
        ~ControllerSummaries();

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

        class ControllerSummary; //type: Rsvp::ControllerSummaries::ControllerSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary> > controller_summary;
        
}; // Rsvp::ControllerSummaries


class Rsvp::ControllerSummaries::ControllerSummary : public ydk::Entity
{
    public:
        ControllerSummary();
        ~ControllerSummary();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf paths_in; //type: uint32
        ydk::YLeaf paths_out; //type: uint32
        ydk::YLeaf reservations_in; //type: uint32
        ydk::YLeaf reservations_out; //type: uint32
        class BandwidthInformation; //type: Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation> bandwidth_information;
        
}; // Rsvp::ControllerSummaries::ControllerSummary


class Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation


class Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface


class Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface


class Rsvp::Counters : public ydk::Entity
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

        class InterfaceMessages; //type: Rsvp::Counters::InterfaceMessages
        class MessageSummary; //type: Rsvp::Counters::MessageSummary
        class PrefixFiltering; //type: Rsvp::Counters::PrefixFiltering
        class OutOfResource; //type: Rsvp::Counters::OutOfResource
        class InterfaceEvents; //type: Rsvp::Counters::InterfaceEvents
        class Nsr; //type: Rsvp::Counters::Nsr
        class Issu; //type: Rsvp::Counters::Issu
        class Database; //type: Rsvp::Counters::Database
        class EventSyncs; //type: Rsvp::Counters::EventSyncs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs> event_syncs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents> interface_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages> interface_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary> message_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource> out_of_resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering> prefix_filtering;
        
}; // Rsvp::Counters


class Rsvp::Counters::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

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

        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf incoming_paths; //type: uint32
        ydk::YLeaf outgoing_paths; //type: uint32
        ydk::YLeaf incoming_reservations; //type: uint32
        ydk::YLeaf outgoing_reservations; //type: uint32
        ydk::YLeaf interfaces; //type: uint32

}; // Rsvp::Counters::Database


class Rsvp::Counters::EventSyncs : public ydk::Entity
{
    public:
        EventSyncs();
        ~EventSyncs();

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

        class EventSync; //type: Rsvp::Counters::EventSyncs::EventSync

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs::EventSync> > event_sync;
        
}; // Rsvp::Counters::EventSyncs


class Rsvp::Counters::EventSyncs::EventSync : public ydk::Entity
{
    public:
        EventSync();
        ~EventSync();

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
        ydk::YLeaf expired_paths; //type: uint32
        ydk::YLeaf expired_reservations; //type: uint32
        ydk::YLeaf nac_ks; //type: uint32

}; // Rsvp::Counters::EventSyncs::EventSync


class Rsvp::Counters::InterfaceEvents : public ydk::Entity
{
    public:
        InterfaceEvents();
        ~InterfaceEvents();

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

        class InterfaceEvent; //type: Rsvp::Counters::InterfaceEvents::InterfaceEvent

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents::InterfaceEvent> > interface_event;
        
}; // Rsvp::Counters::InterfaceEvents


class Rsvp::Counters::InterfaceEvents::InterfaceEvent : public ydk::Entity
{
    public:
        InterfaceEvent();
        ~InterfaceEvent();

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
        ydk::YLeaf expired_paths; //type: uint32
        ydk::YLeaf expired_reservations; //type: uint32
        ydk::YLeaf nac_ks; //type: uint32

}; // Rsvp::Counters::InterfaceEvents::InterfaceEvent


class Rsvp::Counters::InterfaceMessages : public ydk::Entity
{
    public:
        InterfaceMessages();
        ~InterfaceMessages();

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

        class InterfaceMessage; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage> > interface_message;
        
}; // Rsvp::Counters::InterfaceMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage : public ydk::Entity
{
    public:
        InterfaceMessage();
        ~InterfaceMessage();

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
        ydk::YLeaf retransmitted_messages; //type: uint32
        ydk::YLeaf out_of_order_messages; //type: uint32
        ydk::YLeaf rate_limited_messages; //type: uint32
        class ReceivedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages
        class TransmittedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages
        class BundleReceivedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages
        class BundleTransmittedMessages; //type: Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages> received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages> transmitted_messages;
        
}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages : public ydk::Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages : public ydk::Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages : public ydk::Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


class Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages : public ydk::Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


class Rsvp::Counters::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        ydk::YLeaf last_cleared_timestamp; //type: uint32
        ydk::YLeaf rsvp_process_role; //type: RsvpProcRole
        ydk::YLeaf last_idt_states; //type: uint32
        ydk::YLeaf total_states; //type: uint32
        ydk::YLeaf total_deletions; //type: uint32
        ydk::YLeaf total_nacks; //type: uint64
        ydk::YLeaf total_id_ts; //type: uint32

}; // Rsvp::Counters::Issu


class Rsvp::Counters::MessageSummary : public ydk::Entity
{
    public:
        MessageSummary();
        ~MessageSummary();

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

        ydk::YLeaf retransmitted_messages; //type: uint32
        ydk::YLeaf out_of_order_messages; //type: uint32
        ydk::YLeaf rate_limited_messages; //type: uint32
        class ReceivedMessages; //type: Rsvp::Counters::MessageSummary::ReceivedMessages
        class TransmittedMessages; //type: Rsvp::Counters::MessageSummary::TransmittedMessages
        class BundleReceivedMessages; //type: Rsvp::Counters::MessageSummary::BundleReceivedMessages
        class BundleTransmittedMessages; //type: Rsvp::Counters::MessageSummary::BundleTransmittedMessages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::ReceivedMessages> received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::TransmittedMessages> transmitted_messages;
        
}; // Rsvp::Counters::MessageSummary


class Rsvp::Counters::MessageSummary::BundleReceivedMessages : public ydk::Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::MessageSummary::BundleReceivedMessages


class Rsvp::Counters::MessageSummary::BundleTransmittedMessages : public ydk::Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::MessageSummary::BundleTransmittedMessages


class Rsvp::Counters::MessageSummary::ReceivedMessages : public ydk::Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::MessageSummary::ReceivedMessages


class Rsvp::Counters::MessageSummary::TransmittedMessages : public ydk::Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // Rsvp::Counters::MessageSummary::TransmittedMessages


class Rsvp::Counters::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        ydk::YLeaf last_cleared_timestamp; //type: uint32
        ydk::YLeaf rsvp_process_role; //type: RsvpProcRole
        ydk::YLeaf last_idt_states; //type: uint32
        ydk::YLeaf total_states; //type: uint32
        ydk::YLeaf total_deletions; //type: uint32
        ydk::YLeaf total_nacks; //type: uint64
        ydk::YLeaf total_id_ts; //type: uint32

}; // Rsvp::Counters::Nsr


class Rsvp::Counters::OutOfResource : public ydk::Entity
{
    public:
        OutOfResource();
        ~OutOfResource();

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

        class Interfaces; //type: Rsvp::Counters::OutOfResource::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces> interfaces;
        
}; // Rsvp::Counters::OutOfResource


class Rsvp::Counters::OutOfResource::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Summary; //type: Rsvp::Counters::OutOfResource::Interfaces::Summary
        class Interfaces_; //type: Rsvp::Counters::OutOfResource::Interfaces::Interfaces_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Summary> summary;
        
}; // Rsvp::Counters::OutOfResource::Interfaces


class Rsvp::Counters::OutOfResource::Interfaces::Interfaces_ : public ydk::Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

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

        class Interface; //type: Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;
        
}; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_


class Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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
        ydk::YLeaf dropped_path_messages; //type: uint32

}; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface


class Rsvp::Counters::OutOfResource::Interfaces::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf dropped_path_messages; //type: uint32

}; // Rsvp::Counters::OutOfResource::Interfaces::Summary


class Rsvp::Counters::PrefixFiltering : public ydk::Entity
{
    public:
        PrefixFiltering();
        ~PrefixFiltering();

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

        class Accesses; //type: Rsvp::Counters::PrefixFiltering::Accesses
        class Interfaces; //type: Rsvp::Counters::PrefixFiltering::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses> accesses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces> interfaces;
        
}; // Rsvp::Counters::PrefixFiltering


class Rsvp::Counters::PrefixFiltering::Accesses : public ydk::Entity
{
    public:
        Accesses();
        ~Accesses();

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

        class Access; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access> > access;
        
}; // Rsvp::Counters::PrefixFiltering::Accesses


class Rsvp::Counters::PrefixFiltering::Accesses::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf access_list_name; //type: string
        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped
        class Total; //type: Rsvp::Counters::PrefixFiltering::Accesses::Access::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped> dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded> forwarded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined> locally_destined;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Total> total;
        
}; // Rsvp::Counters::PrefixFiltering::Accesses::Access


class Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped


class Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded : public ydk::Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded


class Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined : public ydk::Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Accesses::Access::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Total


class Rsvp::Counters::PrefixFiltering::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Summary; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary
        class Interfaces_; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary> summary;
        
}; // Rsvp::Counters::PrefixFiltering::Interfaces


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_ : public ydk::Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

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

        class Interface; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface> > interface;
        
}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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
        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped
        class DefaultActionDropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped
        class DefaultActionProcessed; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed
        class Total; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;
        
}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped : public ydk::Entity
{
    public:
        DefaultActionDropped();
        ~DefaultActionDropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed : public ydk::Entity
{
    public:
        DefaultActionProcessed();
        ~DefaultActionProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded : public ydk::Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined : public ydk::Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped
        class DefaultActionDropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped
        class DefaultActionProcessed; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed
        class Total; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped> dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded> forwarded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined> locally_destined;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total> total;
        
}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped : public ydk::Entity
{
    public:
        DefaultActionDropped();
        ~DefaultActionDropped();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed : public ydk::Entity
{
    public:
        DefaultActionProcessed();
        ~DefaultActionProcessed();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded : public ydk::Entity
{
    public:
        Forwarded();
        ~Forwarded();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined : public ydk::Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total


class Rsvp::FrrSummary : public ydk::Entity
{
    public:
        FrrSummary();
        ~FrrSummary();

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

        class PathStates; //type: Rsvp::FrrSummary::PathStates
        class ReservationStates; //type: Rsvp::FrrSummary::ReservationStates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary::PathStates> path_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary::ReservationStates> reservation_states;
        
}; // Rsvp::FrrSummary


class Rsvp::FrrSummary::PathStates : public ydk::Entity
{
    public:
        PathStates();
        ~PathStates();

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

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf active_instances; //type: uint32
        ydk::YLeaf ready_instances; //type: uint32
        ydk::YLeaf active_wait_instances; //type: uint32

}; // Rsvp::FrrSummary::PathStates


class Rsvp::FrrSummary::ReservationStates : public ydk::Entity
{
    public:
        ReservationStates();
        ~ReservationStates();

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

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf active_instances; //type: uint32
        ydk::YLeaf ready_instances; //type: uint32
        ydk::YLeaf active_wait_instances; //type: uint32

}; // Rsvp::FrrSummary::ReservationStates


class Rsvp::Frrs : public ydk::Entity
{
    public:
        Frrs();
        ~Frrs();

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

        class Frr; //type: Rsvp::Frrs::Frr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr> > frr;
        
}; // Rsvp::Frrs


class Rsvp::Frrs::Frr : public ydk::Entity
{
    public:
        Frr();
        ~Frr();

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
        ydk::YLeaf path_status; //type: RsvpMgmtFrrStateEnum
        ydk::YLeaf reservation_status; //type: RsvpMgmtFrrStateEnum
        class Session; //type: Rsvp::Frrs::Frr::Session
        class S2LSubLsp; //type: Rsvp::Frrs::Frr::S2LSubLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session> session;
        
}; // Rsvp::Frrs::Frr


class Rsvp::Frrs::Frr::S2LSubLsp : public ydk::Entity
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

}; // Rsvp::Frrs::Frr::S2LSubLsp


class Rsvp::Frrs::Frr::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::Frrs::Frr::Session


class Rsvp::Frrs::Frr::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::Frrs::Frr::Session::RsvpSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


class Rsvp::GlobalNeighborBriefs : public ydk::Entity
{
    public:
        GlobalNeighborBriefs();
        ~GlobalNeighborBriefs();

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

        class GlobalNeighborBrief; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief> > global_neighbor_brief;
        
}; // Rsvp::GlobalNeighborBriefs


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief : public ydk::Entity
{
    public:
        GlobalNeighborBrief();
        ~GlobalNeighborBrief();

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
        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf node_address; //type: string
        ydk::YLeaf restart_state; //type: RsvpMgmtRestartState
        ydk::YLeafList local_node_address; //type: list of  string
        ydk::YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloState
        ydk::YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReason
        ydk::YLeafList lost_communication_total; //type: list of  uint16
        class GlobalNeighborFlags; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags
        class UpTime; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime
        class LostCommunicationTime; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime> > lost_communication_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime> > up_time;
        
}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags : public ydk::Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_application_ouni; //type: boolean
        ydk::YLeaf is_application_mpls; //type: boolean

}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime : public ydk::Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime : public ydk::Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime


class Rsvp::GlobalNeighborDetails : public ydk::Entity
{
    public:
        GlobalNeighborDetails();
        ~GlobalNeighborDetails();

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

        class GlobalNeighborDetail; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail> > global_neighbor_detail;
        
}; // Rsvp::GlobalNeighborDetails


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail : public ydk::Entity
{
    public:
        GlobalNeighborDetail();
        ~GlobalNeighborDetail();

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
        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf node_address; //type: string
        ydk::YLeaf restart_state; //type: RsvpMgmtRestartState
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf is_restart_timer_running; //type: boolean
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf missed_hellos; //type: uint8
        ydk::YLeaf pending_states; //type: uint32
        ydk::YLeafList local_node_address; //type: list of  string
        ydk::YLeafList interface_neighbor; //type: list of  string
        ydk::YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloState
        ydk::YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReason
        ydk::YLeafList lost_communication_total; //type: list of  uint16
        class GlobalNeighborFlags; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags
        class RestartTimeLeft; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft
        class RestartTimerExpiryTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime
        class RecoveryTimeLeft; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime
        class UpTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime
        class LostCommunicationTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime> > lost_communication_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime> recovery_timer_exp_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft> restart_time_left;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime> restart_timer_expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime> > up_time;
        
}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags : public ydk::Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_application_ouni; //type: boolean
        ydk::YLeaf is_application_mpls; //type: boolean

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime : public ydk::Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft : public ydk::Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime : public ydk::Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft : public ydk::Entity
{
    public:
        RestartTimeLeft();
        ~RestartTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime : public ydk::Entity
{
    public:
        RestartTimerExpiryTime();
        ~RestartTimerExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime : public ydk::Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime


class Rsvp::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf global_neighbors; //type: uint32
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf missed_hellos; //type: uint8
        ydk::YLeaf pending_states; //type: uint32
        class RecoveryTimeLeft; //type: Rsvp::GracefulRestart::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: Rsvp::GracefulRestart::RecoveryTimerExpTime
        class LocalNodeAddress; //type: Rsvp::GracefulRestart::LocalNodeAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::LocalNodeAddress> > local_node_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;
        
}; // Rsvp::GracefulRestart


class Rsvp::GracefulRestart::LocalNodeAddress : public ydk::Entity
{
    public:
        LocalNodeAddress();
        ~LocalNodeAddress();

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

        ydk::YLeaf local_node_ip_address; //type: string
        ydk::YLeaf application_type; //type: RsvpMgmtGrApp

}; // Rsvp::GracefulRestart::LocalNodeAddress


class Rsvp::GracefulRestart::RecoveryTimeLeft : public ydk::Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

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

}; // Rsvp::GracefulRestart::RecoveryTimeLeft


class Rsvp::GracefulRestart::RecoveryTimerExpTime : public ydk::Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

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

}; // Rsvp::GracefulRestart::RecoveryTimerExpTime


class Rsvp::HelloInstanceBriefs : public ydk::Entity
{
    public:
        HelloInstanceBriefs();
        ~HelloInstanceBriefs();

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

        class HelloInstanceBrief; //type: Rsvp::HelloInstanceBriefs::HelloInstanceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;
        
}; // Rsvp::HelloInstanceBriefs


class Rsvp::HelloInstanceBriefs::HelloInstanceBrief : public ydk::Entity
{
    public:
        HelloInstanceBrief();
        ~HelloInstanceBrief();

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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf neighbor_hello_state; //type: RsvpMgmtHelloState
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string
        ydk::YLeaf lost_communication_total; //type: uint16

}; // Rsvp::HelloInstanceBriefs::HelloInstanceBrief


class Rsvp::HelloInstanceDetails : public ydk::Entity
{
    public:
        HelloInstanceDetails();
        ~HelloInstanceDetails();

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

        class HelloInstanceDetail; //type: Rsvp::HelloInstanceDetails::HelloInstanceDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail> > hello_instance_detail;
        
}; // Rsvp::HelloInstanceDetails


class Rsvp::HelloInstanceDetails::HelloInstanceDetail : public ydk::Entity
{
    public:
        HelloInstanceDetail();
        ~HelloInstanceDetail();

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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf hello_instance_owner; //type: RsvpMgmtHelloInstanceOwner
        ydk::YLeaf neighbor_hello_state; //type: RsvpMgmtHelloState
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf missed_acks_allowed; //type: uint32
        ydk::YLeaf source_instance; //type: uint32
        ydk::YLeaf destination_instance; //type: uint32
        ydk::YLeaf communication_lost_reason; //type: RsvpMgmtHelloDownReason
        ydk::YLeaf total_communication_lost; //type: uint16
        ydk::YLeaf communication_lost_hello_missed; //type: uint16
        ydk::YLeaf communication_lost_wrong_source_inst; //type: uint16
        ydk::YLeaf communication_lost_wrong_destination_inst; //type: uint16
        ydk::YLeaf communication_lost_interface_down; //type: uint16
        ydk::YLeaf communication_lost_neighbor_disabled_hello; //type: uint16
        ydk::YLeaf hello_messages_sent; //type: uint64
        ydk::YLeaf hello_messages_received; //type: uint64
        ydk::YLeaf hello_request_suppressed; //type: uint64
        class UpTime; //type: Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime
        class CommunicationLostTime; //type: Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime> communication_lost_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime> up_time;
        
}; // Rsvp::HelloInstanceDetails::HelloInstanceDetail


class Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime : public ydk::Entity
{
    public:
        CommunicationLostTime();
        ~CommunicationLostTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime


class Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime : public ydk::Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime


class Rsvp::HelloInterfaceInstanceBriefs : public ydk::Entity
{
    public:
        HelloInterfaceInstanceBriefs();
        ~HelloInterfaceInstanceBriefs();

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

        class HelloInterfaceInstanceBrief; //type: Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;
        
}; // Rsvp::HelloInterfaceInstanceBriefs


class Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief : public ydk::Entity
{
    public:
        HelloInterfaceInstanceBrief();
        ~HelloInterfaceInstanceBrief();

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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string

}; // Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


class Rsvp::HelloInterfaceInstanceDetails : public ydk::Entity
{
    public:
        HelloInterfaceInstanceDetails();
        ~HelloInterfaceInstanceDetails();

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

        class HelloInterfaceInstanceDetail; //type: Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;
        
}; // Rsvp::HelloInterfaceInstanceDetails


class Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail : public ydk::Entity
{
    public:
        HelloInterfaceInstanceDetail();
        ~HelloInterfaceInstanceDetail();

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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf hello_global_neighbor_id; //type: string
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string
        ydk::YLeaf source_instance; //type: uint32
        ydk::YLeaf destination_instance; //type: uint32
        ydk::YLeaf hello_messages_sent; //type: uint64
        ydk::YLeaf hello_messages_received; //type: uint64
        class LastMessageSentTime; //type: Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;
        
}; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


class Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime : public ydk::Entity
{
    public:
        LastMessageSentTime();
        ~LastMessageSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


class Rsvp::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

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

        class InterfaceBrief; //type: Rsvp::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // Rsvp::InterfaceBriefs


class Rsvp::InterfaceBriefs::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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
        class BandwidthInformation; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;
        
}; // Rsvp::InterfaceBriefs::InterfaceBrief


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


class Rsvp::InterfaceDetaileds : public ydk::Entity
{
    public:
        InterfaceDetaileds();
        ~InterfaceDetaileds();

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

        class InterfaceDetailed; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;
        
}; // Rsvp::InterfaceDetaileds


class Rsvp::InterfaceDetaileds::InterfaceDetailed : public ydk::Entity
{
    public:
        InterfaceDetailed();
        ~InterfaceDetailed();

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
        ydk::YLeaf signalling_ip_tos; //type: uint8
        ydk::YLeaf integrity_send_password; //type: string
        ydk::YLeaf integrity_receive_password; //type: string
        ydk::YLeaf integrity_receive_password_optional; //type: uint8
        ydk::YLeaf refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf summary_refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf refresh_interval; //type: int32
        ydk::YLeaf out_of_band_refresh_interval; //type: uint32
        ydk::YLeaf summary_refresh_max_size; //type: uint32
        ydk::YLeaf bundle_message_max_size; //type: uint32
        ydk::YLeaf expiry_timer_state; //type: RsvpTimerState
        ydk::YLeaf expiry_states; //type: int32
        ydk::YLeaf expiry_interval; //type: int32
        ydk::YLeaf expiry_drops_tolerated; //type: int32
        ydk::YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        ydk::YLeaf ack_hold_time; //type: uint32
        ydk::YLeaf ack_max_size; //type: uint32
        ydk::YLeaf retransmit_time; //type: uint32
        ydk::YLeaf pacing_interval; //type: uint32
        ydk::YLeaf pacing_message_rate; //type: uint32
        ydk::YLeaf pacing_timer_state; //type: RsvpTimerState
        ydk::YLeaf pacing_messages; //type: int32
        class BandwidthInformation; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation
        class Flags; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags
        class NeighborArray; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;
        
}; // Rsvp::InterfaceDetaileds::InterfaceDetailed


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


class Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_enabled; //type: boolean
        ydk::YLeaf is_refresh_reduction_enabled; //type: boolean
        ydk::YLeaf is_pacing_enabled; //type: boolean
        ydk::YLeaf is_refresh_enabled; //type: boolean
        ydk::YLeaf is_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_interface_down; //type: boolean
        ydk::YLeaf is_interface_created; //type: boolean
        ydk::YLeaf is_rel_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_backup_tunnel; //type: boolean
        ydk::YLeaf is_rsvp_configured; //type: boolean
        ydk::YLeaf is_non_default_vrf; //type: boolean
        ydk::YLeaf is_message_bundling_enabled; //type: boolean

}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray : public ydk::Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf message_ids; //type: uint32
        ydk::YLeaf outgoing_states; //type: int32
        class ExpiryTime; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;
        
}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime : public ydk::Entity
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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId : public ydk::Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_id; //type: uint32

}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


class Rsvp::InterfaceNeighborBriefs : public ydk::Entity
{
    public:
        InterfaceNeighborBriefs();
        ~InterfaceNeighborBriefs();

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

        class InterfaceNeighborBrief; //type: Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;
        
}; // Rsvp::InterfaceNeighborBriefs


class Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief : public ydk::Entity
{
    public:
        InterfaceNeighborBrief();
        ~InterfaceNeighborBrief();

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
        ydk::YLeaf node_address; //type: string
        class InterfaceNeighborListCompact; //type: Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;
        
}; // Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief


class Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact : public ydk::Entity
{
    public:
        InterfaceNeighborListCompact();
        ~InterfaceNeighborListCompact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_address; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string

}; // Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


class Rsvp::InterfaceNeighborDetails : public ydk::Entity
{
    public:
        InterfaceNeighborDetails();
        ~InterfaceNeighborDetails();

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

        class InterfaceNeighborDetail; //type: Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;
        
}; // Rsvp::InterfaceNeighborDetails


class Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail : public ydk::Entity
{
    public:
        InterfaceNeighborDetail();
        ~InterfaceNeighborDetail();

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
        ydk::YLeaf node_address; //type: string
        class InterfaceNeighborListDetail; //type: Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;
        
}; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail


class Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail : public ydk::Entity
{
    public:
        InterfaceNeighborListDetail();
        ~InterfaceNeighborListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_address; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf is_rr_enabled; //type: boolean
        ydk::YLeaf neighbor_epoch; //type: uint32
        ydk::YLeaf out_of_order_messages; //type: uint32
        ydk::YLeaf retransmitted_messages; //type: uint32

}; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


class Rsvp::InterfaceSummaries : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class InterfaceSummary; //type: Rsvp::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary> > interface_summary;
        
}; // Rsvp::InterfaceSummaries


class Rsvp::InterfaceSummaries::InterfaceSummary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf paths_in; //type: uint32
        ydk::YLeaf paths_out; //type: uint32
        ydk::YLeaf reservations_in; //type: uint32
        ydk::YLeaf reservations_out; //type: uint32
        class BandwidthInformation; //type: Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;
        
}; // Rsvp::InterfaceSummaries::InterfaceSummary


class Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation


class Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


class Rsvp::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        class Status; //type: Rsvp::Issu::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status> status;
        
}; // Rsvp::Issu


class Rsvp::Issu::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        ydk::YLeaf role; //type: RsvpProcRole
        class IdtStatus; //type: Rsvp::Issu::Status::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Issu::Status::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status::PreviousIdtStatus> previous_idt_status;
        
}; // Rsvp::Issu::Status


class Rsvp::Issu::Status::IdtStatus : public ydk::Entity
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

}; // Rsvp::Issu::Status::IdtStatus


class Rsvp::Issu::Status::PreviousIdtStatus : public ydk::Entity
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

}; // Rsvp::Issu::Status::PreviousIdtStatus


class Rsvp::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        class Status; //type: Rsvp::Nsr::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status> status;
        
}; // Rsvp::Nsr


class Rsvp::Nsr::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        ydk::YLeaf role; //type: RsvpProcRole
        class IdtStatus; //type: Rsvp::Nsr::Status::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Nsr::Status::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::PreviousIdtStatus> previous_idt_status;
        
}; // Rsvp::Nsr::Status

class RsvpMgmtDsteModes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_standard;
        static const ydk::Enum::YLeaf standard;

};

class RsvpMgmtQosServiceEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_qos_unknown;
        static const ydk::Enum::YLeaf rsvp_mgmt_qos_guaranteed;
        static const ydk::Enum::YLeaf rsvp_mgmt_qos_controlled_load;
        static const ydk::Enum::YLeaf rsvp_mgmt_qos_qualitative;

};

class RsvpTimerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_timer_running_and_sleeping;
        static const ydk::Enum::YLeaf rsvp_timer_running;
        static const ydk::Enum::YLeaf rsvp_timer_not_running;

};

class RsvpMgmtGenericLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_label_type_gmpls;

};

class RsvpMgmtReservationTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ff_option;
        static const ydk::Enum::YLeaf rsvp_mgmt_wf_option;
        static const ydk::Enum::YLeaf rsvp_mgmt_se_option;

};

class RsvpMgmtHelloInstanceOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_graceful_restart;
        static const ydk::Enum::YLeaf mpls_ouni;

};

class RsvpSyncStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf ready;

};

class RsvpMgmtAuthChallengeStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_not_cfg;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_completed;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_in_progress;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_failure;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_not_supported;

};

class RsvpMgmtTspec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g709otn;
        static const ydk::Enum::YLeaf intsrv;

};

class RsvpMgmtSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_udp_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_lsp_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_uni_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_p2mp_lsp_ipv4;

};

class RsvpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf receive;

};

class RsvpMgmtRestartState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf done;
        static const ydk::Enum::YLeaf recovery;
        static const ydk::Enum::YLeaf abort;

};

class RsvpMgmtHelloInstance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class IgpteLibBwModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf mam;
        static const ydk::Enum::YLeaf not_set;

};

class RsvpMgmtFlowSpec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g709otn;

};

class RsvpMgmtHelloState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hello_state_init;
        static const ydk::Enum::YLeaf hello_state_up;
        static const ydk::Enum::YLeaf hello_state_down;

};

class RsvpMgmtHelloDownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf wrong_destination_instance;
        static const ydk::Enum::YLeaf wrong_source_instance;
        static const ydk::Enum::YLeaf hello_missed;
        static const ydk::Enum::YLeaf interface_down;
        static const ydk::Enum::YLeaf neighbor_disabled_hello;
        static const ydk::Enum::YLeaf control_channel_down;

};

class RsvpMgmtFrrStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready_state;
        static const ydk::Enum::YLeaf pending_state;
        static const ydk::Enum::YLeaf active_state;

};

class RsvpMgmtAssociation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf extended_ipv4;
        static const ydk::Enum::YLeaf extended_ipv6;

};

class RsvpSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf p2p_lsp_ipv4;
        static const ydk::Enum::YLeaf ouni_ipv4;
        static const ydk::Enum::YLeaf p2mp_lsp_ipv4;

};

class RsvpMgmtFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_filter_type_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_filter_type_p2mp_lsp_ipv4;

};

class RsvpMgmtAuthDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_direction_send;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_direction_recv;

};

class RsvpMgmtEroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_un_num;

};

class RsvpMgmtEroSubobjStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_not_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_bw_not_available;

};

class RsvpProcRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf v1_active;
        static const ydk::Enum::YLeaf v1_standby;
        static const ydk::Enum::YLeaf v2_active;
        static const ydk::Enum::YLeaf v2_standby;
        static const ydk::Enum::YLeaf v1_active_post_big_bang;
        static const ydk::Enum::YLeaf v1_standby_post_big_bang;
        static const ydk::Enum::YLeaf count;

};

class RsvpProcNsrNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf collab_time_out;
        static const ydk::Enum::YLeaf collab_conntection_idt;
        static const ydk::Enum::YLeaf nsr_peer_not_connected;
        static const ydk::Enum::YLeaf nsr_peer_not_in_sync;

};

class RsvpMgmtGrApp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ouni;
        static const ydk::Enum::YLeaf gmpls;

};

class RsvpMgmtRroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4rro_type;
        static const ydk::Enum::YLeaf label_rro_type;
        static const ydk::Enum::YLeaf unnumbered_rro_type;
        static const ydk::Enum::YLeaf srlg_rro_type;

};

class RsvpMgmtAuthKi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_none;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_global;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_interface;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_neighbor;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_0_ */

