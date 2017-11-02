#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_0_
#define _CISCO_IOS_XR_IP_RSVP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

class RsvpStandby : public ydk::Entity
{
    public:
        RsvpStandby();
        ~RsvpStandby();

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

        class InterfaceNeighborBriefs; //type: RsvpStandby::InterfaceNeighborBriefs
        class ControllerSummaries; //type: RsvpStandby::ControllerSummaries
        class AuthenticationBriefs; //type: RsvpStandby::AuthenticationBriefs
        class SessionBriefs; //type: RsvpStandby::SessionBriefs
        class PsbDetaileds; //type: RsvpStandby::PsbDetaileds
        class ControllerDetaileds; //type: RsvpStandby::ControllerDetaileds
        class FrrSummary; //type: RsvpStandby::FrrSummary
        class RsbDetaileds; //type: RsvpStandby::RsbDetaileds
        class InterfaceSummaries; //type: RsvpStandby::InterfaceSummaries
        class HelloInstanceBriefs; //type: RsvpStandby::HelloInstanceBriefs
        class AuthenticationDetails; //type: RsvpStandby::AuthenticationDetails
        class RsbBriefs; //type: RsvpStandby::RsbBriefs
        class OpenConfig; //type: RsvpStandby::OpenConfig
        class Counters; //type: RsvpStandby::Counters
        class InterfaceDetaileds; //type: RsvpStandby::InterfaceDetaileds
        class ControllerBriefs; //type: RsvpStandby::ControllerBriefs
        class GracefulRestart; //type: RsvpStandby::GracefulRestart
        class HelloInterfaceInstanceBriefs; //type: RsvpStandby::HelloInterfaceInstanceBriefs
        class HelloInterfaceInstanceDetails; //type: RsvpStandby::HelloInterfaceInstanceDetails
        class InterfaceNeighborDetails; //type: RsvpStandby::InterfaceNeighborDetails
        class Nsr; //type: RsvpStandby::Nsr
        class Summary; //type: RsvpStandby::Summary
        class Frrs; //type: RsvpStandby::Frrs
        class RequestBriefs; //type: RsvpStandby::RequestBriefs
        class RequestDetails; //type: RsvpStandby::RequestDetails
        class InterfaceBriefs; //type: RsvpStandby::InterfaceBriefs
        class SessionDetaileds; //type: RsvpStandby::SessionDetaileds
        class HelloInstanceDetails; //type: RsvpStandby::HelloInstanceDetails
        class GlobalNeighborDetails; //type: RsvpStandby::GlobalNeighborDetails
        class PsbBriefs; //type: RsvpStandby::PsbBriefs
        class GlobalNeighborBriefs; //type: RsvpStandby::GlobalNeighborBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries> controller_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs> authentication_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs> session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds> psb_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds> controller_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary> frr_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds> rsb_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries> interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs> hello_instance_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails> authentication_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs> rsb_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig> open_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds> interface_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerBriefs> controller_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails> interface_neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs> frrs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs> request_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails> request_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds> session_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails> hello_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails> global_neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs> psb_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs> global_neighbor_briefs;
        
}; // RsvpStandby


class RsvpStandby::InterfaceNeighborBriefs : public ydk::Entity
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

        class InterfaceNeighborBrief; //type: RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;
        
}; // RsvpStandby::InterfaceNeighborBriefs


class RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief : public ydk::Entity
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
        class InterfaceNeighborListCompact; //type: RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;
        
}; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief


class RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact : public ydk::Entity
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

}; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


class RsvpStandby::ControllerSummaries : public ydk::Entity
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

        class ControllerSummary; //type: RsvpStandby::ControllerSummaries::ControllerSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary> > controller_summary;
        
}; // RsvpStandby::ControllerSummaries


class RsvpStandby::ControllerSummaries::ControllerSummary : public ydk::Entity
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
        class BandwidthInformation; //type: RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::ControllerSummaries::ControllerSummary


class RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation : public ydk::Entity
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
        class PreStandardDsteInterface; //type: RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation


class RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface


class RsvpStandby::AuthenticationBriefs : public ydk::Entity
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

        class AuthenticationBrief; //type: RsvpStandby::AuthenticationBriefs::AuthenticationBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;
        
}; // RsvpStandby::AuthenticationBriefs


class RsvpStandby::AuthenticationBriefs::AuthenticationBrief : public ydk::Entity
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

}; // RsvpStandby::AuthenticationBriefs::AuthenticationBrief


class RsvpStandby::SessionBriefs : public ydk::Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionBrief; //type: RsvpStandby::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief> > session_brief;
        
}; // RsvpStandby::SessionBriefs


class RsvpStandby::SessionBriefs::SessionBrief : public ydk::Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

        bool has_data() const override;
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
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ps_bs; //type: uint32
        ydk::YLeaf rs_bs; //type: uint32
        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf detail_list_size; //type: uint32
        class Session; //type: RsvpStandby::SessionBriefs::SessionBrief::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session> session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief


class RsvpStandby::SessionBriefs::SessionBrief::Session : public ydk::Entity
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

        class RsvpSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief::Session


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbDetaileds : public ydk::Entity
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

        class PsbDetailed; //type: RsvpStandby::PsbDetaileds::PsbDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed> > psb_detailed;
        
}; // RsvpStandby::PsbDetaileds


class RsvpStandby::PsbDetaileds::PsbDetailed : public ydk::Entity
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
        class Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session
        class S2LSubLsp; //type: RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp
        class Template_; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_
        class SessionAttribute; //type: RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute
        class TrafficSpec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec
        class GenericTrafficSpec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec
        class PathFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags
        class Hop; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Hop
        class PolicySourceInfo; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo
        class Header; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Header
        class ExpiryTime; //type: RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime
        class PolicyFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo
        class ClassType; //type: RsvpStandby::PsbDetaileds::PsbDetailed::ClassType
        class Pfc; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc
        class InEro; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro
        class OutEro; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ClassType> class_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc> > pfc;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro> > in_ero;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed


class RsvpStandby::PsbDetaileds::PsbDetailed::Session : public ydk::Entity
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

        class RsvpSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_ : public ydk::Entity
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

        class RsvpFilter; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter : public ydk::Entity
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
        class UdpIpv4Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


class RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute : public ydk::Entity
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
        class SessAttributeFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute


class RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec : public ydk::Entity
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
        class G709OtnTspec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Hop : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Hop


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::Header : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Header


class RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo : public ydk::Entity
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
        class GenericLocalDownstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::ClassType : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::ClassType


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc : public ydk::Entity
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
        class PolicyFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro : public ydk::Entity
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
        class Ipv4EroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro : public ydk::Entity
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
        class Ipv4EroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject : public ydk::Entity
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

}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


class RsvpStandby::ControllerDetaileds : public ydk::Entity
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

        class ControllerDetailed; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed> > controller_detailed;
        
}; // RsvpStandby::ControllerDetaileds


class RsvpStandby::ControllerDetaileds::ControllerDetailed : public ydk::Entity
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
        class BandwidthInformation; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation
        class Flags; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags
        class NeighborArray; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray> > neighbor_array;
        
}; // RsvpStandby::ControllerDetaileds::ControllerDetailed


class RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation : public ydk::Entity
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
        class PreStandardDsteInterface; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation


class RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface


class RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags : public ydk::Entity
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

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags


class RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray : public ydk::Entity
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
        class ExpiryTime; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;
        
}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray


class RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime : public ydk::Entity
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

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime


class RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId : public ydk::Entity
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

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId


class RsvpStandby::FrrSummary : public ydk::Entity
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

        class PathStates; //type: RsvpStandby::FrrSummary::PathStates
        class ReservationStates; //type: RsvpStandby::FrrSummary::ReservationStates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::PathStates> path_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::ReservationStates> reservation_states;
        
}; // RsvpStandby::FrrSummary


class RsvpStandby::FrrSummary::PathStates : public ydk::Entity
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

}; // RsvpStandby::FrrSummary::PathStates


class RsvpStandby::FrrSummary::ReservationStates : public ydk::Entity
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

}; // RsvpStandby::FrrSummary::ReservationStates


class RsvpStandby::RsbDetaileds : public ydk::Entity
{
    public:
        RsbDetaileds();
        ~RsbDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RsbDetailed; //type: RsvpStandby::RsbDetaileds::RsbDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed> > rsb_detailed;
        
}; // RsvpStandby::RsbDetaileds


class RsvpStandby::RsbDetaileds::RsbDetailed : public ydk::Entity
{
    public:
        RsbDetailed();
        ~RsbDetailed();

        bool has_data() const override;
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
        ydk::YLeaf input_adjusted_interface; //type: string
        ydk::YLeaf input_physical_interface; //type: string
        class FlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec
        class Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session
        class S2LSubLsp; //type: RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp
        class Style; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Style
        class Filter; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter
        class RsbFlags; //type: RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags
        class Hop; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Hop
        class PolicySources; //type: RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources
        class Header; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Header
        class PolicyFlags; //type: RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags
        class ExpiryTime; //type: RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime
        class PolicyQueryFlags; //type: RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Style> style;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed


class RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec : public ydk::Entity
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
        class G709OtnFlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::Session : public ydk::Entity
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

        class RsvpSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp


class RsvpStandby::RsbDetaileds::RsbDetailed::Style : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Style


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter : public ydk::Entity
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

        class RsvpFilter; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter : public ydk::Entity
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
        class UdpIpv4Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags : public ydk::Entity
{
    public:
        RsbFlags();
        ~RsbFlags();

        bool has_data() const override;
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
        ydk::YLeaf is_message_id_valid; //type: boolean
        ydk::YLeaf is_local_repair; //type: boolean
        ydk::YLeaf is_merge_point; //type: boolean
        ydk::YLeaf is_lockout; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::Hop : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Hop


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources


class RsvpStandby::RsbDetaileds::RsbDetailed::Header : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Header


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo : public ydk::Entity
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
        class GenericLocalDownstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel : public ydk::Entity
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
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public ydk::Entity
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

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::InterfaceSummaries : public ydk::Entity
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

        class InterfaceSummary; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary> > interface_summary;
        
}; // RsvpStandby::InterfaceSummaries


class RsvpStandby::InterfaceSummaries::InterfaceSummary : public ydk::Entity
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
        class BandwidthInformation; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::InterfaceSummaries::InterfaceSummary


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation : public ydk::Entity
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
        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


class RsvpStandby::HelloInstanceBriefs : public ydk::Entity
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

        class HelloInstanceBrief; //type: RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;
        
}; // RsvpStandby::HelloInstanceBriefs


class RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief : public ydk::Entity
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

}; // RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief


class RsvpStandby::AuthenticationDetails : public ydk::Entity
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

        class AuthenticationDetail; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail> > authentication_detail;
        
}; // RsvpStandby::AuthenticationDetails


class RsvpStandby::AuthenticationDetails::AuthenticationDetail : public ydk::Entity
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
        class AuthCompact; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact
        class DirectionInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact : public ydk::Entity
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

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo : public ydk::Entity
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
        class SendInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo
        class ReceiveInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo : public ydk::Entity
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
        class Counters; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters : public ydk::Entity
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

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo : public ydk::Entity
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
        class Counters; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters : public ydk::Entity
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

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


class RsvpStandby::RsbBriefs : public ydk::Entity
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

        class RsbBrief; //type: RsvpStandby::RsbBriefs::RsbBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief> > rsb_brief;
        
}; // RsvpStandby::RsbBriefs


class RsvpStandby::RsbBriefs::RsbBrief : public ydk::Entity
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
        class Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Session
        class S2LSubLsp; //type: RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec
        class Style; //type: RsvpStandby::RsbBriefs::RsbBrief::Style
        class Filter; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Style> style;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter> filter;
        
}; // RsvpStandby::RsbBriefs::RsbBrief


class RsvpStandby::RsbBriefs::RsbBrief::Session : public ydk::Entity
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

        class RsvpSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Session


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp


class RsvpStandby::RsbBriefs::RsbBrief::FlowSpec : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::FlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec : public ydk::Entity
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
        class G709OtnFlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::Style : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Style


class RsvpStandby::RsbBriefs::RsbBrief::Filter : public ydk::Entity
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

        class RsvpFilter; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Filter


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter : public ydk::Entity
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
        class UdpIpv4Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
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

}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::OpenConfig : public ydk::Entity
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

        class GlobalCounters; //type: RsvpStandby::OpenConfig::GlobalCounters
        class InterfaceCounters; //type: RsvpStandby::OpenConfig::InterfaceCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::GlobalCounters> global_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters> interface_counters;
        
}; // RsvpStandby::OpenConfig

class RsvpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf receive;

};

class RsvpSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf p2p_lsp_ipv4;
        static const ydk::Enum::YLeaf ouni_ipv4;
        static const ydk::Enum::YLeaf p2mp_lsp_ipv4;

};

class IgpteLibBwModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf mam;
        static const ydk::Enum::YLeaf not_set;

};

class RsvpMgmtRestartState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf done;
        static const ydk::Enum::YLeaf recovery;
        static const ydk::Enum::YLeaf abort;

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

class RsvpMgmtHelloInstanceOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_graceful_restart;
        static const ydk::Enum::YLeaf mpls_ouni;

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

class RsvpMgmtRroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4rro_type;
        static const ydk::Enum::YLeaf label_rro_type;
        static const ydk::Enum::YLeaf unnumbered_rro_type;
        static const ydk::Enum::YLeaf srlg_rro_type;

};

class RsvpMgmtFrrStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready_state;
        static const ydk::Enum::YLeaf pending_state;
        static const ydk::Enum::YLeaf active_state;

};

class RsvpProcNsrNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf collab_time_out;
        static const ydk::Enum::YLeaf collab_conntection_idt;
        static const ydk::Enum::YLeaf nsr_peer_not_connected;
        static const ydk::Enum::YLeaf nsr_peer_not_in_sync;

};

class RsvpSyncStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf ready;

};

class RsvpMgmtGrApp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ouni;
        static const ydk::Enum::YLeaf gmpls;

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

class RsvpMgmtAuthChallengeStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_not_cfg;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_completed;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_in_progress;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_failure;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_cs_not_supported;

};

class RsvpMgmtHelloInstance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class RsvpMgmtHelloState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hello_state_init;
        static const ydk::Enum::YLeaf hello_state_up;
        static const ydk::Enum::YLeaf hello_state_down;

};

class RsvpMgmtReservationTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ff_option;
        static const ydk::Enum::YLeaf rsvp_mgmt_wf_option;
        static const ydk::Enum::YLeaf rsvp_mgmt_se_option;

};

class RsvpMgmtFlowSpec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g709otn;

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

class RsvpMgmtEroSubobjStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_not_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_bw_not_available;

};

class RsvpMgmtEroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_un_num;

};

class RsvpMgmtGenericLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_label_type_gmpls;

};

class RsvpMgmtTspec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g709otn;
        static const ydk::Enum::YLeaf intsrv;

};

class RsvpMgmtFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_filter_type_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_filter_type_p2mp_lsp_ipv4;

};

class RsvpMgmtSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_udp_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_lsp_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_uni_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_session_type_p2mp_lsp_ipv4;

};

class RsvpMgmtAuthKi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_none;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_global;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_interface;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_ki_type_neighbor;

};

class RsvpMgmtAuthDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_direction_send;
        static const ydk::Enum::YLeaf rsvp_mgmt_auth_direction_recv;

};

class RsvpMgmtDsteModes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_standard;
        static const ydk::Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_0_ */

