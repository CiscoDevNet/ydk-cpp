#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_0_
#define _CISCO_IOS_XR_IP_RSVP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {

class RsvpStandby : public Entity
{
    public:
        RsvpStandby();
        ~RsvpStandby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class InterfaceNeighborBriefs; //type: RsvpStandby::InterfaceNeighborBriefs
        class AuthenticationBriefs; //type: RsvpStandby::AuthenticationBriefs
        class SessionBriefs; //type: RsvpStandby::SessionBriefs
        class PsbDetaileds; //type: RsvpStandby::PsbDetaileds
        class FrrSummary; //type: RsvpStandby::FrrSummary
        class RsbDetaileds; //type: RsvpStandby::RsbDetaileds
        class InterfaceSummaries; //type: RsvpStandby::InterfaceSummaries
        class HelloInstanceBriefs; //type: RsvpStandby::HelloInstanceBriefs
        class AuthenticationDetails; //type: RsvpStandby::AuthenticationDetails
        class RsbBriefs; //type: RsvpStandby::RsbBriefs
        class OpenConfig; //type: RsvpStandby::OpenConfig
        class Counters; //type: RsvpStandby::Counters
        class InterfaceDetaileds; //type: RsvpStandby::InterfaceDetaileds
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

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs> authentication_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails> authentication_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary> frr_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs> frrs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs> global_neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails> global_neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs> hello_instance_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails> hello_instance_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs> interface_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds> interface_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails> interface_neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries> interface_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig> open_config;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs> psb_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds> psb_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs> request_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails> request_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs> rsb_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds> rsb_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs> session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds> session_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary> summary;
        
}; // RsvpStandby


class RsvpStandby::InterfaceNeighborBriefs : public Entity
{
    public:
        InterfaceNeighborBriefs();
        ~InterfaceNeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceNeighborBrief; //type: RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;
        
}; // RsvpStandby::InterfaceNeighborBriefs


class RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief : public Entity
{
    public:
        InterfaceNeighborBrief();
        ~InterfaceNeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string
        YLeaf node_address; //type: string
        class InterfaceNeighborListCompact; //type: RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;
        
}; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief


class RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact : public Entity
{
    public:
        InterfaceNeighborListCompact();
        ~InterfaceNeighborListCompact();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_neighbor_address; //type: string
        YLeaf neighbor_interface_name; //type: string

}; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


class RsvpStandby::AuthenticationBriefs : public Entity
{
    public:
        AuthenticationBriefs();
        ~AuthenticationBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationBrief; //type: RsvpStandby::AuthenticationBriefs::AuthenticationBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;
        
}; // RsvpStandby::AuthenticationBriefs


class RsvpStandby::AuthenticationBriefs::AuthenticationBrief : public Entity
{
    public:
        AuthenticationBrief();
        ~AuthenticationBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf mode_id; //type: RsvpModeEnum
        YLeaf interface_name; //type: string
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf direction; //type: RsvpMgmtAuthDirectionEnum
        YLeaf key_type; //type: RsvpMgmtAuthKiEnum
        YLeaf key_source; //type: string
        YLeaf key_id; //type: uint64
        YLeaf key_id_valid; //type: uint32

}; // RsvpStandby::AuthenticationBriefs::AuthenticationBrief


class RsvpStandby::SessionBriefs : public Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionBrief; //type: RsvpStandby::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief> > session_brief;
        
}; // RsvpStandby::SessionBriefs


class RsvpStandby::SessionBriefs::SessionBrief : public Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf ps_bs; //type: uint32
        YLeaf rs_bs; //type: uint32
        YLeaf requests; //type: uint32
        YLeaf detail_list_size; //type: uint32
        class Session; //type: RsvpStandby::SessionBriefs::SessionBrief::Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session> session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief


class RsvpStandby::SessionBriefs::SessionBrief::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief::Session


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_type; //type: RsvpMgmtSessionEnum
        class Ipv4; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbDetaileds : public Entity
{
    public:
        PsbDetaileds();
        ~PsbDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PsbDetailed; //type: RsvpStandby::PsbDetaileds::PsbDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed> > psb_detailed;
        
}; // RsvpStandby::PsbDetaileds


class RsvpStandby::PsbDetaileds::PsbDetailed : public Entity
{
    public:
        PsbDetailed();
        ~PsbDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        YLeaf backup_tunnel_name; //type: string
        YLeaf is_in_ero_valid; //type: boolean
        YLeaf is_out_ero_valid; //type: boolean
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

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ClassType> class_type;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Hop> hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro> > in_ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc> > pfc;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_> template_;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed


class RsvpStandby::PsbDetaileds::PsbDetailed::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_type; //type: RsvpMgmtSessionEnum
        class Ipv4; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpFilter; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filter_type; //type: RsvpMgmtFilterEnum
        class UdpIpv4Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


class RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute : public Entity
{
    public:
        SessionAttribute();
        ~SessionAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf setup_priority; //type: uint8
        YLeaf reservation_priority; //type: uint8
        class SessAttributeFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute


class RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags : public Entity
{
    public:
        SessAttributeFlags();
        ~SessAttributeFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_local_protect; //type: boolean
        YLeaf is_node_protect; //type: boolean
        YLeaf is_bandwidth_protect; //type: boolean
        YLeaf is_record_labels; //type: boolean
        YLeaf is_shared_explicit_requested; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec : public Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec : public Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tspec_type; //type: RsvpMgmtTspecEnum
        class G709OtnTspec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec : public Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_signal_type; //type: uint8
        YLeaf traffic_nvc; //type: uint16
        YLeaf traffic_multiplier; //type: uint16
        YLeaf traffic_bit_rate; //type: uint64

}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec : public Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags : public Entity
{
    public:
        PathFlags();
        ~PathFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_non_rsvp_hop_upstream; //type: boolean
        YLeaf is_local_sender; //type: boolean
        YLeaf is_message_id_valid; //type: boolean
        YLeaf is_local_repair; //type: boolean
        YLeaf is_bidirectional; //type: boolean
        YLeaf is_lockout; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string
        YLeaf neighbor_logical_interface_name; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Hop


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo : public Entity
{
    public:
        PolicySourceInfo();
        ~PolicySourceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_te_link; //type: boolean
        YLeaf is_local; //type: boolean
        YLeaf is_cops; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_cable; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsvp_version; //type: uint8
        YLeaf rsvp_header_flags; //type: uint8
        YLeaf rsvp_ttl; //type: uint8
        YLeaf rsvp_message_type; //type: uint8
        YLeaf ip_tos; //type: uint8
        YLeaf ip_ttl; //type: uint8
        YLeaf ip_source_address; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Header


class RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime : public Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo : public Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf local_downstream_label; //type: uint32
        YLeaf outgoing_downstream_label; //type: uint32
        YLeaf merge_point_label; //type: uint32
        YLeaf outgoing_upstream_label; //type: uint32
        YLeaf local_upstream_label; //type: uint32
        YLeaf recovery_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32
        class GenericLocalDownstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel : public Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel : public Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::ClassType : public Entity
{
    public:
        ClassType();
        ~ClassType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_class_type_info_valid; //type: boolean
        YLeaf class_type; //type: uint8

}; // RsvpStandby::PsbDetaileds::PsbDetailed::ClassType


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc : public Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf output_interface; //type: string
        class PolicyFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro : public Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum
        class Ipv4EroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8

}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum

}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro : public Entity
{
    public:
        OutEro();
        ~OutEro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum
        class Ipv4EroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8

}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum

}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


class RsvpStandby::FrrSummary : public Entity
{
    public:
        FrrSummary();
        ~FrrSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PathStates; //type: RsvpStandby::FrrSummary::PathStates
        class ReservationStates; //type: RsvpStandby::FrrSummary::ReservationStates

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::PathStates> path_states;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::ReservationStates> reservation_states;
        
}; // RsvpStandby::FrrSummary


class RsvpStandby::FrrSummary::PathStates : public Entity
{
    public:
        PathStates();
        ~PathStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf active_instances; //type: uint32
        YLeaf ready_instances; //type: uint32
        YLeaf active_wait_instances; //type: uint32

}; // RsvpStandby::FrrSummary::PathStates


class RsvpStandby::FrrSummary::ReservationStates : public Entity
{
    public:
        ReservationStates();
        ~ReservationStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf active_instances; //type: uint32
        YLeaf ready_instances; //type: uint32
        YLeaf active_wait_instances; //type: uint32

}; // RsvpStandby::FrrSummary::ReservationStates


class RsvpStandby::RsbDetaileds : public Entity
{
    public:
        RsbDetaileds();
        ~RsbDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsbDetailed; //type: RsvpStandby::RsbDetaileds::RsbDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed> > rsb_detailed;
        
}; // RsvpStandby::RsbDetaileds


class RsvpStandby::RsbDetaileds::RsbDetailed : public Entity
{
    public:
        RsbDetailed();
        ~RsbDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Style> style;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed


class RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec : public Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_average_rate; //type: uint64
        YLeaf flow_max_burst; //type: uint64
        YLeaf flow_peak_rate; //type: uint64
        YLeaf flow_min_unit; //type: uint32
        YLeaf flow_max_unit; //type: uint32
        YLeaf flow_requested_rate; //type: uint64
        YLeaf flow_slack; //type: uint32
        YLeaf flow_qos; //type: RsvpMgmtQosServiceEnumEnum

}; // RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec : public Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_spec_type; //type: RsvpMgmtFlowSpecEnum
        class G709OtnFlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec : public Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_signal_type; //type: uint8
        YLeaf flow_nvc; //type: uint16
        YLeaf flow_multiplier; //type: uint16
        YLeaf flow_bit_rate; //type: uint64

}; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_type; //type: RsvpMgmtSessionEnum
        class Ipv4; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp


class RsvpStandby::RsbDetaileds::RsbDetailed::Style : public Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Style


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpFilter; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filter_type; //type: RsvpMgmtFilterEnum
        class UdpIpv4Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags : public Entity
{
    public:
        RsbFlags();
        ~RsbFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_local_receiver; //type: boolean
        YLeaf is_message_id_valid; //type: boolean
        YLeaf is_local_repair; //type: boolean
        YLeaf is_merge_point; //type: boolean
        YLeaf is_lockout; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string
        YLeaf neighbor_logical_interface_name; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Hop


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources : public Entity
{
    public:
        PolicySources();
        ~PolicySources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_te_link; //type: boolean
        YLeaf is_local; //type: boolean
        YLeaf is_cops; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_cable; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources


class RsvpStandby::RsbDetaileds::RsbDetailed::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsvp_version; //type: uint8
        YLeaf rsvp_header_flags; //type: uint8
        YLeaf rsvp_ttl; //type: uint8
        YLeaf rsvp_message_type; //type: uint8
        YLeaf ip_tos; //type: uint8
        YLeaf ip_ttl; //type: uint8
        YLeaf ip_source_address; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Header


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime : public Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo : public Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf local_downstream_label; //type: uint32
        YLeaf outgoing_downstream_label; //type: uint32
        YLeaf merge_point_label; //type: uint32
        YLeaf outgoing_upstream_label; //type: uint32
        YLeaf local_upstream_label; //type: uint32
        YLeaf recovery_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32
        class GenericLocalDownstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel : public Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel : public Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::InterfaceSummaries : public Entity
{
    public:
        InterfaceSummaries();
        ~InterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceSummary; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary> > interface_summary;
        
}; // RsvpStandby::InterfaceSummaries


class RsvpStandby::InterfaceSummaries::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf paths_in; //type: uint32
        YLeaf paths_out; //type: uint32
        YLeaf reservations_in; //type: uint32
        YLeaf reservations_out; //type: uint32
        class BandwidthInformation; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::InterfaceSummaries::InterfaceSummary


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation : public Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dste_mode; //type: RsvpMgmtDsteModesEnum
        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface : public Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_subpool_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface : public Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_pool0_bandwidth; //type: uint64
        YLeaf max_pool1_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


class RsvpStandby::HelloInstanceBriefs : public Entity
{
    public:
        HelloInstanceBriefs();
        ~HelloInstanceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelloInstanceBrief; //type: RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;
        
}; // RsvpStandby::HelloInstanceBriefs


class RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief : public Entity
{
    public:
        HelloInstanceBrief();
        ~HelloInstanceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf lost_communication_total; //type: uint16

}; // RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief


class RsvpStandby::AuthenticationDetails : public Entity
{
    public:
        AuthenticationDetails();
        ~AuthenticationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationDetail; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail> > authentication_detail;
        
}; // RsvpStandby::AuthenticationDetails


class RsvpStandby::AuthenticationDetails::AuthenticationDetail : public Entity
{
    public:
        AuthenticationDetail();
        ~AuthenticationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf mode_id; //type: RsvpModeEnum
        YLeaf interface_name; //type: string
        YLeaf key_status; //type: uint32
        YLeaf key_digest_info; //type: uint32
        YLeaf lifetime; //type: uint32
        YLeaf lifetime_left; //type: uint32
        YLeaf challenge_status; //type: RsvpMgmtAuthChallengeStatusEnum
        class AuthCompact; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact
        class DirectionInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact : public Entity
{
    public:
        AuthCompact();
        ~AuthCompact();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf direction; //type: RsvpMgmtAuthDirectionEnum
        YLeaf key_type; //type: RsvpMgmtAuthKiEnum
        YLeaf key_source; //type: string
        YLeaf key_id; //type: uint64
        YLeaf key_id_valid; //type: uint32

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo : public Entity
{
    public:
        DirectionInfo();
        ~DirectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_direction; //type: RsvpMgmtAuthDirectionEnum
        class SendInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo
        class ReceiveInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo : public Entity
{
    public:
        SendInfo();
        ~SendInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        class Counters; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authentication_sent; //type: uint32
        YLeaf authentication_failures; //type: uint32
        YLeaf authentication_send_challenges_received; //type: uint32
        YLeaf authentication_challenge_responses_sent; //type: uint32

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo : public Entity
{
    public:
        ReceiveInfo();
        ~ReceiveInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint64
        YLeaf sequence_window_size; //type: uint32
        YLeaf sequence_window_count; //type: uint32
        YLeafList sequence_window; //type: list of  uint64
        class Counters; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


class RsvpStandby::RsbBriefs : public Entity
{
    public:
        RsbBriefs();
        ~RsbBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsbBrief; //type: RsvpStandby::RsbBriefs::RsbBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief> > rsb_brief;
        
}; // RsvpStandby::RsbBriefs


class RsvpStandby::RsbBriefs::RsbBrief : public Entity
{
    public:
        RsbBrief();
        ~RsbBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Session
        class S2LSubLsp; //type: RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec
        class Style; //type: RsvpStandby::RsbBriefs::RsbBrief::Style
        class Filter; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Style> style;
        
}; // RsvpStandby::RsbBriefs::RsbBrief


class RsvpStandby::RsbBriefs::RsbBrief::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Session


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_type; //type: RsvpMgmtSessionEnum
        class Ipv4; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp


class RsvpStandby::RsbBriefs::RsbBrief::FlowSpec : public Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_average_rate; //type: uint64
        YLeaf flow_max_burst; //type: uint64
        YLeaf flow_peak_rate; //type: uint64
        YLeaf flow_min_unit; //type: uint32
        YLeaf flow_max_unit; //type: uint32
        YLeaf flow_requested_rate; //type: uint64
        YLeaf flow_slack; //type: uint32
        YLeaf flow_qos; //type: RsvpMgmtQosServiceEnumEnum

}; // RsvpStandby::RsbBriefs::RsbBrief::FlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec : public Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_spec_type; //type: RsvpMgmtFlowSpecEnum
        class G709OtnFlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec : public Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_signal_type; //type: uint8
        YLeaf flow_nvc; //type: uint16
        YLeaf flow_multiplier; //type: uint16
        YLeaf flow_bit_rate; //type: uint64

}; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::Style : public Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum

}; // RsvpStandby::RsbBriefs::RsbBrief::Style


class RsvpStandby::RsbBriefs::RsbBrief::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RsvpFilter; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Filter


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filter_type; //type: RsvpMgmtFilterEnum
        class UdpIpv4Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16

}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::OpenConfig : public Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GlobalCounters; //type: RsvpStandby::OpenConfig::GlobalCounters
        class InterfaceCounters; //type: RsvpStandby::OpenConfig::InterfaceCounters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::GlobalCounters> global_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters> interface_counters;
        
}; // RsvpStandby::OpenConfig


class RsvpStandby::OpenConfig::GlobalCounters : public Entity
{
    public:
        GlobalCounters();
        ~GlobalCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::OpenConfig::GlobalCounters


class RsvpStandby::OpenConfig::InterfaceCounters : public Entity
{
    public:
        InterfaceCounters();
        ~InterfaceCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceCounter; //type: RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter> > interface_counter;
        
}; // RsvpStandby::OpenConfig::InterfaceCounters


class RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter : public Entity
{
    public:
        InterfaceCounter();
        ~InterfaceCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter


class RsvpStandby::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceMessages; //type: RsvpStandby::Counters::InterfaceMessages
        class MessageSummary; //type: RsvpStandby::Counters::MessageSummary
        class PrefixFiltering; //type: RsvpStandby::Counters::PrefixFiltering
        class OutOfResource; //type: RsvpStandby::Counters::OutOfResource
        class InterfaceEvents; //type: RsvpStandby::Counters::InterfaceEvents
        class Nsr; //type: RsvpStandby::Counters::Nsr
        class Issu; //type: RsvpStandby::Counters::Issu
        class Database; //type: RsvpStandby::Counters::Database
        class EventSyncs; //type: RsvpStandby::Counters::EventSyncs

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Database> database;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::EventSyncs> event_syncs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceEvents> interface_events;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages> interface_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary> message_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource> out_of_resource;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering> prefix_filtering;
        
}; // RsvpStandby::Counters


class RsvpStandby::Counters::InterfaceMessages : public Entity
{
    public:
        InterfaceMessages();
        ~InterfaceMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceMessage; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage> > interface_message;
        
}; // RsvpStandby::Counters::InterfaceMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage : public Entity
{
    public:
        InterfaceMessage();
        ~InterfaceMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf retransmitted_messages; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf rate_limited_messages; //type: uint32
        class ReceivedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages
        class TransmittedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages
        class BundleReceivedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages
        class BundleTransmittedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages> received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages> transmitted_messages;
        
}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages : public Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages : public Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages : public Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages : public Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


class RsvpStandby::Counters::MessageSummary : public Entity
{
    public:
        MessageSummary();
        ~MessageSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmitted_messages; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf rate_limited_messages; //type: uint32
        class ReceivedMessages; //type: RsvpStandby::Counters::MessageSummary::ReceivedMessages
        class TransmittedMessages; //type: RsvpStandby::Counters::MessageSummary::TransmittedMessages
        class BundleReceivedMessages; //type: RsvpStandby::Counters::MessageSummary::BundleReceivedMessages
        class BundleTransmittedMessages; //type: RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::ReceivedMessages> received_messages;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::TransmittedMessages> transmitted_messages;
        
}; // RsvpStandby::Counters::MessageSummary


class RsvpStandby::Counters::MessageSummary::ReceivedMessages : public Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::MessageSummary::ReceivedMessages


class RsvpStandby::Counters::MessageSummary::TransmittedMessages : public Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::MessageSummary::TransmittedMessages


class RsvpStandby::Counters::MessageSummary::BundleReceivedMessages : public Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // RsvpStandby::Counters::MessageSummary::BundleReceivedMessages

class RsvpMgmtAssociationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf extended_ipv4;
        static const Enum::YLeaf extended_ipv6;

};

class RsvpMgmtEroSubobjEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_ero_type_ipv4;
        static const Enum::YLeaf rsvp_mgmt_ero_type_un_num;

};

class RsvpMgmtQosServiceEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_qos_unknown;
        static const Enum::YLeaf rsvp_mgmt_qos_guaranteed;
        static const Enum::YLeaf rsvp_mgmt_qos_controlled_load;
        static const Enum::YLeaf rsvp_mgmt_qos_qualitative;

};

class RsvpMgmtHelloInstanceEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class IgpteLibBwModelEnum : public Enum
{
    public:
        static const Enum::YLeaf rdm;
        static const Enum::YLeaf mam;
        static const Enum::YLeaf not_set;

};

class RsvpMgmtFrrStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf ready_state;
        static const Enum::YLeaf pending_state;
        static const Enum::YLeaf active_state;

};

class RsvpProcNsrNotReadyReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf collab_time_out;
        static const Enum::YLeaf collab_conntection_idt;
        static const Enum::YLeaf nsr_peer_not_connected;
        static const Enum::YLeaf nsr_peer_not_in_sync;

};

class RsvpMgmtDsteModesEnum : public Enum
{
    public:
        static const Enum::YLeaf pre_standard;
        static const Enum::YLeaf standard;

};

class RsvpMgmtRestartStateEnum : public Enum
{
    public:
        static const Enum::YLeaf done;
        static const Enum::YLeaf recovery;
        static const Enum::YLeaf abort;

};

class RsvpMgmtReservationTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_ff_option;
        static const Enum::YLeaf rsvp_mgmt_wf_option;
        static const Enum::YLeaf rsvp_mgmt_se_option;

};

class RsvpMgmtTspecEnum : public Enum
{
    public:
        static const Enum::YLeaf g709otn;
        static const Enum::YLeaf intsrv;

};

class RsvpMgmtAuthDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_auth_direction_send;
        static const Enum::YLeaf rsvp_mgmt_auth_direction_recv;

};

class RsvpMgmtFilterEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_filter_type_ipv4;
        static const Enum::YLeaf rsvp_mgmt_filter_type_p2mp_lsp_ipv4;

};

class RsvpProcRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf v1_active;
        static const Enum::YLeaf v1_standby;
        static const Enum::YLeaf v2_active;
        static const Enum::YLeaf v2_standby;
        static const Enum::YLeaf v1_active_post_big_bang;
        static const Enum::YLeaf v1_standby_post_big_bang;
        static const Enum::YLeaf count;

};

class RsvpSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf p2p_lsp_ipv4;
        static const Enum::YLeaf ouni_ipv4;
        static const Enum::YLeaf p2mp_lsp_ipv4;

};

class RsvpMgmtHelloStateEnum : public Enum
{
    public:
        static const Enum::YLeaf hello_state_init;
        static const Enum::YLeaf hello_state_up;
        static const Enum::YLeaf hello_state_down;

};

class RsvpMgmtFlowSpecEnum : public Enum
{
    public:
        static const Enum::YLeaf g709otn;

};

class RsvpMgmtHelloInstanceOwnerEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_graceful_restart;
        static const Enum::YLeaf mpls_ouni;

};

class RsvpMgmtRroSubobjEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4rro_type;
        static const Enum::YLeaf label_rro_type;
        static const Enum::YLeaf unnumbered_rro_type;
        static const Enum::YLeaf srlg_rro_type;

};

class RsvpMgmtSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_session_type_udp_ipv4;
        static const Enum::YLeaf rsvp_mgmt_session_type_lsp_ipv4;
        static const Enum::YLeaf rsvp_mgmt_session_type_uni_ipv4;
        static const Enum::YLeaf rsvp_mgmt_session_type_p2mp_lsp_ipv4;

};

class RsvpMgmtHelloDownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf not_applicable;
        static const Enum::YLeaf wrong_destination_instance;
        static const Enum::YLeaf wrong_source_instance;
        static const Enum::YLeaf hello_missed;
        static const Enum::YLeaf interface_down;
        static const Enum::YLeaf neighbor_disabled_hello;
        static const Enum::YLeaf control_channel_down;

};

class RsvpMgmtGenericLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_label_type_gmpls;

};

class RsvpMgmtGrAppEnum : public Enum
{
    public:
        static const Enum::YLeaf ouni;
        static const Enum::YLeaf gmpls;

};

class RsvpMgmtAuthChallengeStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_auth_cs_not_cfg;
        static const Enum::YLeaf rsvp_mgmt_auth_cs_completed;
        static const Enum::YLeaf rsvp_mgmt_auth_cs_in_progress;
        static const Enum::YLeaf rsvp_mgmt_auth_cs_failure;
        static const Enum::YLeaf rsvp_mgmt_auth_cs_not_supported;

};

class RsvpMgmtAuthKiEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_auth_ki_type_none;
        static const Enum::YLeaf rsvp_mgmt_auth_ki_type_global;
        static const Enum::YLeaf rsvp_mgmt_auth_ki_type_interface;
        static const Enum::YLeaf rsvp_mgmt_auth_ki_type_neighbor;

};

class RsvpTimerStateEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_timer_running_and_sleeping;
        static const Enum::YLeaf rsvp_timer_running;
        static const Enum::YLeaf rsvp_timer_not_running;

};

class RsvpSyncStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_ready;
        static const Enum::YLeaf ready;

};

class RsvpModeEnum : public Enum
{
    public:
        static const Enum::YLeaf send;
        static const Enum::YLeaf receive;

};

class RsvpMgmtEroSubobjStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_ero_status_not_available;
        static const Enum::YLeaf rsvp_mgmt_ero_status_available;
        static const Enum::YLeaf rsvp_mgmt_ero_status_bw_not_available;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_0_ */

