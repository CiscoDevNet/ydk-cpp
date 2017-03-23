#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_
#define _CISCO_IOS_XR_IP_RSVP_OPER_

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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_ : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Hop : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::Hop


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::Header : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::Header


class RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::ClassType : public Entity
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



}; // RsvpStandby::PsbDetaileds::PsbDetailed::ClassType


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp


class RsvpStandby::RsbDetaileds::RsbDetailed::Style : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::Style


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::Hop : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::Hop


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources


class RsvpStandby::RsbDetaileds::RsbDetailed::Header : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::Header


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags : public Entity
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



}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::InterfaceSummaries : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


class RsvpStandby::HelloInstanceBriefs : public Entity
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



}; // RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief


class RsvpStandby::AuthenticationDetails : public Entity
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



}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


class RsvpStandby::RsbBriefs : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp


class RsvpStandby::RsbBriefs::RsbBrief::FlowSpec : public Entity
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



}; // RsvpStandby::RsbBriefs::RsbBrief::FlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum



}; // RsvpStandby::RsbBriefs::RsbBrief::Style


class RsvpStandby::RsbBriefs::RsbBrief::Filter : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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



}; // RsvpStandby::OpenConfig::GlobalCounters


class RsvpStandby::OpenConfig::InterfaceCounters : public Entity
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



}; // RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter


class RsvpStandby::Counters : public Entity
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages : public Entity
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



}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages : public Entity
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



}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages : public Entity
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



}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


class RsvpStandby::Counters::MessageSummary : public Entity
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



}; // RsvpStandby::Counters::MessageSummary::ReceivedMessages


class RsvpStandby::Counters::MessageSummary::TransmittedMessages : public Entity
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



}; // RsvpStandby::Counters::MessageSummary::TransmittedMessages


class RsvpStandby::Counters::MessageSummary::BundleReceivedMessages : public Entity
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



}; // RsvpStandby::Counters::MessageSummary::BundleReceivedMessages


class RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages : public Entity
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



}; // RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages


class RsvpStandby::Counters::PrefixFiltering : public Entity
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



        class Accesses; //type: RsvpStandby::Counters::PrefixFiltering::Accesses
        class Interfaces; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses> accesses;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces> interfaces;


}; // RsvpStandby::Counters::PrefixFiltering


class RsvpStandby::Counters::PrefixFiltering::Accesses : public Entity
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



        class Access; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access> > access;


}; // RsvpStandby::Counters::PrefixFiltering::Accesses


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access : public Entity
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

        class Forwarded; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded
        class LocallyDestined; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined
        class Dropped; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped
        class Total; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total> total;


}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total


class RsvpStandby::Counters::PrefixFiltering::Interfaces : public Entity
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



        class Summary; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary
        class Interfaces_; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary> summary;


}; // RsvpStandby::Counters::PrefixFiltering::Interfaces


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary : public Entity
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



        class Forwarded; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded
        class LocallyDestined; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined
        class Dropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped
        class DefaultActionDropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped
        class DefaultActionProcessed; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed
        class Total; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total> total;


}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_ : public Entity
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



        class Interface; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface> > interface;


}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Forwarded; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded
        class LocallyDestined; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined
        class Dropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped
        class DefaultActionDropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped
        class DefaultActionProcessed; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed
        class Total; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;


}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total : public Entity
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



}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


class RsvpStandby::Counters::OutOfResource : public Entity
{
    public:
        OutOfResource();
        ~OutOfResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: RsvpStandby::Counters::OutOfResource::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces> interfaces;


}; // RsvpStandby::Counters::OutOfResource


class RsvpStandby::Counters::OutOfResource::Interfaces : public Entity
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



        class Summary; //type: RsvpStandby::Counters::OutOfResource::Interfaces::Summary
        class Interfaces_; //type: RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Summary> summary;


}; // RsvpStandby::Counters::OutOfResource::Interfaces


class RsvpStandby::Counters::OutOfResource::Interfaces::Summary : public Entity
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


        YLeaf dropped_path_messages; //type: uint32



}; // RsvpStandby::Counters::OutOfResource::Interfaces::Summary


class RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_ : public Entity
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



        class Interface; //type: RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;


}; // RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_


class RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf dropped_path_messages; //type: uint32



}; // RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface


class RsvpStandby::Counters::InterfaceEvents : public Entity
{
    public:
        InterfaceEvents();
        ~InterfaceEvents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceEvent; //type: RsvpStandby::Counters::InterfaceEvents::InterfaceEvent

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceEvents::InterfaceEvent> > interface_event;


}; // RsvpStandby::Counters::InterfaceEvents


class RsvpStandby::Counters::InterfaceEvents::InterfaceEvent : public Entity
{
    public:
        InterfaceEvent();
        ~InterfaceEvent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf expired_paths; //type: uint32
        YLeaf expired_reservations; //type: uint32
        YLeaf nac_ks; //type: uint32



}; // RsvpStandby::Counters::InterfaceEvents::InterfaceEvent


class RsvpStandby::Counters::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf rsvp_process_role; //type: RsvpProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nacks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // RsvpStandby::Counters::Nsr


class RsvpStandby::Counters::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf rsvp_process_role; //type: RsvpProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nacks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // RsvpStandby::Counters::Issu


class RsvpStandby::Counters::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions; //type: uint32
        YLeaf incoming_paths; //type: uint32
        YLeaf outgoing_paths; //type: uint32
        YLeaf incoming_reservations; //type: uint32
        YLeaf outgoing_reservations; //type: uint32
        YLeaf interfaces; //type: uint32



}; // RsvpStandby::Counters::Database


class RsvpStandby::Counters::EventSyncs : public Entity
{
    public:
        EventSyncs();
        ~EventSyncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventSync; //type: RsvpStandby::Counters::EventSyncs::EventSync

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::EventSyncs::EventSync> > event_sync;


}; // RsvpStandby::Counters::EventSyncs


class RsvpStandby::Counters::EventSyncs::EventSync : public Entity
{
    public:
        EventSync();
        ~EventSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf expired_paths; //type: uint32
        YLeaf expired_reservations; //type: uint32
        YLeaf nac_ks; //type: uint32



}; // RsvpStandby::Counters::EventSyncs::EventSync


class RsvpStandby::InterfaceDetaileds : public Entity
{
    public:
        InterfaceDetaileds();
        ~InterfaceDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceDetailed; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;


}; // RsvpStandby::InterfaceDetaileds


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed : public Entity
{
    public:
        InterfaceDetailed();
        ~InterfaceDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf signalling_ip_tos; //type: uint8
        YLeaf integrity_send_password; //type: string
        YLeaf integrity_receive_password; //type: string
        YLeaf integrity_receive_password_optional; //type: uint8
        YLeaf refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf summary_refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf refresh_interval; //type: int32
        YLeaf out_of_band_refresh_interval; //type: uint32
        YLeaf summary_refresh_max_size; //type: uint32
        YLeaf bundle_message_max_size; //type: uint32
        YLeaf expiry_timer_state; //type: RsvpTimerStateEnum
        YLeaf expiry_states; //type: int32
        YLeaf expiry_interval; //type: int32
        YLeaf expiry_drops_tolerated; //type: int32
        YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        YLeaf ack_hold_time; //type: uint32
        YLeaf ack_max_size; //type: uint32
        YLeaf retransmit_time; //type: uint32
        YLeaf pacing_interval; //type: uint32
        YLeaf pacing_message_rate; //type: uint32
        YLeaf pacing_timer_state; //type: RsvpTimerStateEnum
        YLeaf pacing_messages; //type: int32

        class BandwidthInformation; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation
        class Flags; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags
        class NeighborArray; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;


}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_enabled; //type: boolean
        YLeaf is_refresh_reduction_enabled; //type: boolean
        YLeaf is_pacing_enabled; //type: boolean
        YLeaf is_refresh_enabled; //type: boolean
        YLeaf is_s_refresh_enabled; //type: boolean
        YLeaf is_interface_down; //type: boolean
        YLeaf is_interface_created; //type: boolean
        YLeaf is_rel_s_refresh_enabled; //type: boolean
        YLeaf is_backup_tunnel; //type: boolean
        YLeaf is_rsvp_configured; //type: boolean
        YLeaf is_non_default_vrf; //type: boolean
        YLeaf is_message_bundling_enabled; //type: boolean



}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray : public Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf message_ids; //type: uint32
        YLeaf outgoing_states; //type: int32

        class ExpiryTime; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime : public Entity
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



}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId : public Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf message_id; //type: uint32



}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


class RsvpStandby::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_gr_enabled; //type: boolean
        YLeaf global_neighbors; //type: uint32
        YLeaf restart_time; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf missed_hellos; //type: uint8
        YLeaf pending_states; //type: uint32

        class RecoveryTimeLeft; //type: RsvpStandby::GracefulRestart::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: RsvpStandby::GracefulRestart::RecoveryTimerExpTime
        class LocalNodeAddress; //type: RsvpStandby::GracefulRestart::LocalNodeAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::LocalNodeAddress> > local_node_address;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;


}; // RsvpStandby::GracefulRestart


class RsvpStandby::GracefulRestart::RecoveryTimeLeft : public Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GracefulRestart::RecoveryTimeLeft


class RsvpStandby::GracefulRestart::RecoveryTimerExpTime : public Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GracefulRestart::RecoveryTimerExpTime


class RsvpStandby::GracefulRestart::LocalNodeAddress : public Entity
{
    public:
        LocalNodeAddress();
        ~LocalNodeAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_node_ip_address; //type: string
        YLeaf application_type; //type: RsvpMgmtGrAppEnum



}; // RsvpStandby::GracefulRestart::LocalNodeAddress


class RsvpStandby::HelloInterfaceInstanceBriefs : public Entity
{
    public:
        HelloInterfaceInstanceBriefs();
        ~HelloInterfaceInstanceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterfaceInstanceBrief; //type: RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;


}; // RsvpStandby::HelloInterfaceInstanceBriefs


class RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief : public Entity
{
    public:
        HelloInterfaceInstanceBrief();
        ~HelloInterfaceInstanceBrief();

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
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string



}; // RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


class RsvpStandby::HelloInterfaceInstanceDetails : public Entity
{
    public:
        HelloInterfaceInstanceDetails();
        ~HelloInterfaceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterfaceInstanceDetail; //type: RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;


}; // RsvpStandby::HelloInterfaceInstanceDetails


class RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail : public Entity
{
    public:
        HelloInterfaceInstanceDetail();
        ~HelloInterfaceInstanceDetail();

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
        YLeaf hello_global_neighbor_id; //type: string
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf source_instance; //type: uint32
        YLeaf destination_instance; //type: uint32
        YLeaf hello_messages_sent; //type: uint64
        YLeaf hello_messages_received; //type: uint64

        class LastMessageSentTime; //type: RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;


}; // RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


class RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime : public Entity
{
    public:
        LastMessageSentTime();
        ~LastMessageSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


class RsvpStandby::InterfaceNeighborDetails : public Entity
{
    public:
        InterfaceNeighborDetails();
        ~InterfaceNeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceNeighborDetail; //type: RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;


}; // RsvpStandby::InterfaceNeighborDetails


class RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail : public Entity
{
    public:
        InterfaceNeighborDetail();
        ~InterfaceNeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf node_address; //type: string

        class InterfaceNeighborListDetail; //type: RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;


}; // RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail


class RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail : public Entity
{
    public:
        InterfaceNeighborListDetail();
        ~InterfaceNeighborListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_neighbor_address; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf is_rr_enabled; //type: boolean
        YLeaf neighbor_epoch; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf retransmitted_messages; //type: uint32



}; // RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


class RsvpStandby::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Status; //type: RsvpStandby::Nsr::Status

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status> status;


}; // RsvpStandby::Nsr


class RsvpStandby::Nsr::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: RsvpStandby::Nsr::Status::IdtStatus
        class PreviousIdtStatus; //type: RsvpStandby::Nsr::Status::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status::PreviousIdtStatus> previous_idt_status;


}; // RsvpStandby::Nsr::Status


class RsvpStandby::Nsr::Status::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // RsvpStandby::Nsr::Status::IdtStatus


class RsvpStandby::Nsr::Status::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // RsvpStandby::Nsr::Status::PreviousIdtStatus


class RsvpStandby::Summary : public Entity
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


        YLeaf interfaces; //type: uint32
        YLeaf ls_ps; //type: uint32

        class IssuStatus; //type: RsvpStandby::Summary::IssuStatus
        class NsrStatus; //type: RsvpStandby::Summary::NsrStatus
        class DatabaseCounters; //type: RsvpStandby::Summary::DatabaseCounters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::DatabaseCounters> database_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::NsrStatus> nsr_status;


}; // RsvpStandby::Summary


class RsvpStandby::Summary::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: RsvpStandby::Summary::IssuStatus::IdtStatus
        class PreviousIdtStatus; //type: RsvpStandby::Summary::IssuStatus::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::IssuStatus::PreviousIdtStatus> previous_idt_status;


}; // RsvpStandby::Summary::IssuStatus


class RsvpStandby::Summary::IssuStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // RsvpStandby::Summary::IssuStatus::IdtStatus


class RsvpStandby::Summary::IssuStatus::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // RsvpStandby::Summary::IssuStatus::PreviousIdtStatus


class RsvpStandby::Summary::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: RsvpStandby::Summary::NsrStatus::IdtStatus
        class PreviousIdtStatus; //type: RsvpStandby::Summary::NsrStatus::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::NsrStatus::PreviousIdtStatus> previous_idt_status;


}; // RsvpStandby::Summary::NsrStatus


class RsvpStandby::Summary::NsrStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // RsvpStandby::Summary::NsrStatus::IdtStatus


class RsvpStandby::Summary::NsrStatus::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // RsvpStandby::Summary::NsrStatus::PreviousIdtStatus


class RsvpStandby::Summary::DatabaseCounters : public Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions; //type: uint32
        YLeaf incoming_paths; //type: uint32
        YLeaf outgoing_paths; //type: uint32
        YLeaf incoming_reservations; //type: uint32
        YLeaf outgoing_reservations; //type: uint32
        YLeaf interfaces; //type: uint32



}; // RsvpStandby::Summary::DatabaseCounters


class RsvpStandby::Frrs : public Entity
{
    public:
        Frrs();
        ~Frrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Frr; //type: RsvpStandby::Frrs::Frr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr> > frr;


}; // RsvpStandby::Frrs


class RsvpStandby::Frrs::Frr : public Entity
{
    public:
        Frr();
        ~Frr();

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
        YLeaf path_status; //type: RsvpMgmtFrrStateEnumEnum
        YLeaf reservation_status; //type: RsvpMgmtFrrStateEnumEnum

        class Session; //type: RsvpStandby::Frrs::Frr::Session
        class S2LSubLsp; //type: RsvpStandby::Frrs::Frr::S2LSubLsp

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session> session;


}; // RsvpStandby::Frrs::Frr


class RsvpStandby::Frrs::Frr::Session : public Entity
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



        class RsvpSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession> rsvp_session;


}; // RsvpStandby::Frrs::Frr::Session


class RsvpStandby::Frrs::Frr::Session::RsvpSession : public Entity
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

        class Ipv4; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // RsvpStandby::Frrs::Frr::Session::RsvpSession


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4 : public Entity
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



}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::Frrs::Frr::S2LSubLsp : public Entity
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



}; // RsvpStandby::Frrs::Frr::S2LSubLsp


class RsvpStandby::RequestBriefs : public Entity
{
    public:
        RequestBriefs();
        ~RequestBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RequestBrief; //type: RsvpStandby::RequestBriefs::RequestBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief> > request_brief;


}; // RsvpStandby::RequestBriefs


class RsvpStandby::RequestBriefs::RequestBrief : public Entity
{
    public:
        RequestBrief();
        ~RequestBrief();

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
        YLeaf output_interface; //type: string

        class Session; //type: RsvpStandby::RequestBriefs::RequestBrief::Session
        class S2LSubLsp; //type: RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RequestBriefs::RequestBrief::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec
        class Filter; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter
        class Style; //type: RsvpStandby::RequestBriefs::RequestBrief::Style

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Style> style;


}; // RsvpStandby::RequestBriefs::RequestBrief


class RsvpStandby::RequestBriefs::RequestBrief::Session : public Entity
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



        class RsvpSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;


}; // RsvpStandby::RequestBriefs::RequestBrief::Session


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession : public Entity
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

        class Ipv4; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4 : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp


class RsvpStandby::RequestBriefs::RequestBrief::FlowSpec : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::FlowSpec


class RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec


class RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RequestBriefs::RequestBrief::Filter : public Entity
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



        class RsvpFilter; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;


}; // RsvpStandby::RequestBriefs::RequestBrief::Filter


class RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter


class RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RequestBriefs::RequestBrief::Style : public Entity
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



}; // RsvpStandby::RequestBriefs::RequestBrief::Style


class RsvpStandby::RequestDetails : public Entity
{
    public:
        RequestDetails();
        ~RequestDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RequestDetail; //type: RsvpStandby::RequestDetails::RequestDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail> > request_detail;


}; // RsvpStandby::RequestDetails


class RsvpStandby::RequestDetails::RequestDetail : public Entity
{
    public:
        RequestDetail();
        ~RequestDetail();

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
        YLeaf output_interface; //type: string

        class Session; //type: RsvpStandby::RequestDetails::RequestDetail::Session
        class S2LSubLsp; //type: RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RequestDetails::RequestDetail::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec
        class Filter; //type: RsvpStandby::RequestDetails::RequestDetail::Filter
        class Style; //type: RsvpStandby::RequestDetails::RequestDetail::Style
        class ReqFlags; //type: RsvpStandby::RequestDetails::RequestDetail::ReqFlags
        class Hop; //type: RsvpStandby::RequestDetails::RequestDetail::Hop
        class Header; //type: RsvpStandby::RequestDetails::RequestDetail::Header
        class PolicySources; //type: RsvpStandby::RequestDetails::RequestDetail::PolicySources
        class PolicyFlags; //type: RsvpStandby::RequestDetails::RequestDetail::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags
        class PsbKey; //type: RsvpStandby::RequestDetails::RequestDetail::PsbKey
        class RsbKey; //type: RsvpStandby::RequestDetails::RequestDetail::RsbKey

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicySources> policy_sources;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PsbKey> > psb_key;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::ReqFlags> req_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::RsbKey> > rsb_key;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Style> style;


}; // RsvpStandby::RequestDetails::RequestDetail


class RsvpStandby::RequestDetails::RequestDetail::Session : public Entity
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



        class RsvpSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;


}; // RsvpStandby::RequestDetails::RequestDetail::Session


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession : public Entity
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

        class Ipv4; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4 : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp


class RsvpStandby::RequestDetails::RequestDetail::FlowSpec : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::FlowSpec


class RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec


class RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RequestDetails::RequestDetail::Filter : public Entity
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



        class RsvpFilter; //type: RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;


}; // RsvpStandby::RequestDetails::RequestDetail::Filter


class RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter


class RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RequestDetails::RequestDetail::Style : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Style


class RsvpStandby::RequestDetails::RequestDetail::ReqFlags : public Entity
{
    public:
        ReqFlags();
        ~ReqFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_local_receiver; //type: boolean
        YLeaf is_refreshing; //type: boolean
        YLeaf is_send_confirm; //type: boolean
        YLeaf is_ack_outstanding; //type: boolean
        YLeaf is_message_id_allocated; //type: boolean
        YLeaf is_nack_received; //type: boolean
        YLeaf is_retransmit; //type: boolean
        YLeaf is_paced; //type: boolean
        YLeaf is_label_request_in_path; //type: boolean
        YLeaf is_rro_in_path; //type: boolean
        YLeaf is_record_label_in_path; //type: boolean
        YLeaf is_merge_point; //type: boolean



}; // RsvpStandby::RequestDetails::RequestDetail::ReqFlags


class RsvpStandby::RequestDetails::RequestDetail::Hop : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Hop


class RsvpStandby::RequestDetails::RequestDetail::Header : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::Header


class RsvpStandby::RequestDetails::RequestDetail::PolicySources : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::PolicySources


class RsvpStandby::RequestDetails::RequestDetail::PolicyFlags : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::PolicyFlags


class RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags : public Entity
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



}; // RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags


class RsvpStandby::RequestDetails::RequestDetail::PsbKey : public Entity
{
    public:
        PsbKey();
        ~PsbKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf destination_port_or_tunnel_id; //type: uint32
        YLeaf protocol; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpMgmtSessionEnum
        YLeaf source_address; //type: string
        YLeaf source_port_or_lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf vrfid; //type: uint32



}; // RsvpStandby::RequestDetails::RequestDetail::PsbKey


class RsvpStandby::RequestDetails::RequestDetail::RsbKey : public Entity
{
    public:
        RsbKey();
        ~RsbKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf destination_port_or_tunnel_id; //type: uint32
        YLeaf protocol; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpMgmtSessionEnum
        YLeaf source_address; //type: string
        YLeaf source_port_or_lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf vrfid; //type: uint32



}; // RsvpStandby::RequestDetails::RequestDetail::RsbKey


class RsvpStandby::InterfaceBriefs : public Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceBrief; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief> > interface_brief;


}; // RsvpStandby::InterfaceBriefs


class RsvpStandby::InterfaceBriefs::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string

        class BandwidthInformation; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;


}; // RsvpStandby::InterfaceBriefs::InterfaceBrief


class RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation


class RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


class RsvpStandby::SessionDetaileds : public Entity
{
    public:
        SessionDetaileds();
        ~SessionDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionDetailed; //type: RsvpStandby::SessionDetaileds::SessionDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed> > session_detailed;


}; // RsvpStandby::SessionDetaileds


class RsvpStandby::SessionDetaileds::SessionDetailed : public Entity
{
    public:
        SessionDetailed();
        ~SessionDetailed();

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
        YLeaf vrf_name; //type: string

        class Compact; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact
        class S2LSubLsp; //type: RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp
        class PsbRsbInfo; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact> compact;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo> > psb_rsb_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp> s2l_sub_lsp;


}; // RsvpStandby::SessionDetaileds::SessionDetailed


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact : public Entity
{
    public:
        Compact();
        ~Compact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ps_bs; //type: uint32
        YLeaf rs_bs; //type: uint32
        YLeaf requests; //type: uint32
        YLeaf detail_list_size; //type: uint32

        class Session; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session> session;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session : public Entity
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



        class RsvpSession; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession> rsvp_session;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession : public Entity
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

        class Ipv4; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4 : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo : public Entity
{
    public:
        PsbRsbInfo();
        ~PsbRsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PsbInfo; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo
        class RsbInfo; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo> > psb_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo> > rsb_info;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo : public Entity
{
    public:
        PsbInfo();
        ~PsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf destination_address; //type: string
        YLeaf lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf in_interface; //type: string
        YLeaf in_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32
        YLeaf is_bad_address; //type: boolean
        YLeaf incoming_interface_address; //type: string
        YLeaf is_ero_valid; //type: boolean
        YLeaf is_rro_valid; //type: boolean
        YLeaf is_traffic_spec_valid; //type: boolean
        YLeaf tunnel_name; //type: string

        class GenericInLabel; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel
        class TrafficSpec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec
        class GenericTrafficSpec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec
        class Association; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association
        class Protection; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection
        class ReverseLsp; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp
        class Ero; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero
        class Rro; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association> association;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero> > ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel> generic_in_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp> reverse_lsp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro> > rro;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec> traffic_spec;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel : public Entity
{
    public:
        GenericInLabel();
        ~GenericInLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel> generalized_label;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_type; //type: RsvpMgmtAssociationEnum

        class Ipv4; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4
        class Ipv6; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6
        class ExtendedIpv4; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4
        class ExtendedIpv6; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4> extended_ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6> extended_ipv6;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6> ipv6;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4 : public Entity
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


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4 : public Entity
{
    public:
        ExtendedIpv4();
        ~ExtendedIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string
        YLeaf global_source; //type: uint32
        YLeafList extended_id; //type: list of  uint32



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6 : public Entity
{
    public:
        ExtendedIpv6();
        ~ExtendedIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string
        YLeaf global_source; //type: uint32
        YLeafList extended_id; //type: list of  uint32



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s; //type: boolean
        YLeaf p; //type: boolean
        YLeaf n; //type: boolean
        YLeaf o; //type: boolean

        class LspFlags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags
        class LinkFlags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags> link_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags> lsp_flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags : public Entity
{
    public:
        LspFlags();
        ~LspFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags : public Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf reserved_bit1; //type: boolean
        YLeaf reserved_bit2; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GenericTrafficSpec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec
        class Ero; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero
        class UnsupSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero> > ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec> generic_traffic_spec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject> > unsup_sub_object;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject : public Entity
{
    public:
        UnsupSubObject();
        ~UnsupSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList rsvp_mgmt_rev_lsp_unsupported_subobj; //type: list of  uint8



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags> flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject : public Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_address; //type: string
        YLeaf interface_id; //type: uint32

        class Flags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject : public Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList srl_gs; //type: list of  uint32



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo : public Entity
{
    public:
        RsbInfo();
        ~RsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf destination_address; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf backup_interface; //type: string
        YLeaf backup_label; //type: uint32
        YLeaf is_rro_valid; //type: boolean
        YLeaf is_flow_spec_valid; //type: boolean

        class GenericOutLabel; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel
        class FlowSpec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec
        class Rro; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel> generic_out_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro> > rro;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel : public Entity
{
    public:
        GenericOutLabel();
        ~GenericOutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel> generalized_label;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags> flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject : public Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_address; //type: string
        YLeaf interface_id; //type: uint32

        class Flags; //type: RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags


class RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject : public Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList srl_gs; //type: list of  uint32



}; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject


class RsvpStandby::HelloInstanceDetails : public Entity
{
    public:
        HelloInstanceDetails();
        ~HelloInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInstanceDetail; //type: RsvpStandby::HelloInstanceDetails::HelloInstanceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail> > hello_instance_detail;


}; // RsvpStandby::HelloInstanceDetails


class RsvpStandby::HelloInstanceDetails::HelloInstanceDetail : public Entity
{
    public:
        HelloInstanceDetail();
        ~HelloInstanceDetail();

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
        YLeaf hello_instance_owner; //type: RsvpMgmtHelloInstanceOwnerEnum
        YLeaf neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf missed_acks_allowed; //type: uint32
        YLeaf source_instance; //type: uint32
        YLeaf destination_instance; //type: uint32
        YLeaf communication_lost_reason; //type: RsvpMgmtHelloDownReasonEnum
        YLeaf total_communication_lost; //type: uint16
        YLeaf communication_lost_hello_missed; //type: uint16
        YLeaf communication_lost_wrong_source_inst; //type: uint16
        YLeaf communication_lost_wrong_destination_inst; //type: uint16
        YLeaf communication_lost_interface_down; //type: uint16
        YLeaf communication_lost_neighbor_disabled_hello; //type: uint16
        YLeaf hello_messages_sent; //type: uint64
        YLeaf hello_messages_received; //type: uint64
        YLeaf hello_request_suppressed; //type: uint64

        class UpTime; //type: RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime
        class CommunicationLostTime; //type: RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime> communication_lost_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime> up_time;


}; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail


class RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime : public Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime


class RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime : public Entity
{
    public:
        CommunicationLostTime();
        ~CommunicationLostTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime


class RsvpStandby::GlobalNeighborDetails : public Entity
{
    public:
        GlobalNeighborDetails();
        ~GlobalNeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalNeighborDetail; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail> > global_neighbor_detail;


}; // RsvpStandby::GlobalNeighborDetails


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail : public Entity
{
    public:
        GlobalNeighborDetail();
        ~GlobalNeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_gr_enabled; //type: boolean
        YLeaf node_address; //type: string
        YLeaf restart_state; //type: RsvpMgmtRestartStateEnum
        YLeaf restart_time; //type: uint32
        YLeaf is_restart_timer_running; //type: boolean
        YLeaf recovery_time; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf missed_hellos; //type: uint8
        YLeaf pending_states; //type: uint32
        YLeafList local_node_address; //type: list of  string
        YLeafList interface_neighbor; //type: list of  string
        YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
        YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
        YLeafList lost_communication_total; //type: list of  uint16

        class GlobalNeighborFlags; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags
        class RestartTimeLeft; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft
        class RestartTimerExpiryTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime
        class RecoveryTimeLeft; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime
        class UpTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime
        class LostCommunicationTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime> > lost_communication_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime> recovery_timer_exp_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft> restart_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime> restart_timer_expiry_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime> > up_time;


}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags : public Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_application_ouni; //type: boolean
        YLeaf is_application_mpls; //type: boolean



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft : public Entity
{
    public:
        RestartTimeLeft();
        ~RestartTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime : public Entity
{
    public:
        RestartTimerExpiryTime();
        ~RestartTimerExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft : public Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime : public Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime : public Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime : public Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime


class RsvpStandby::PsbBriefs : public Entity
{
    public:
        PsbBriefs();
        ~PsbBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PsbBrief; //type: RsvpStandby::PsbBriefs::PsbBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief> > psb_brief;


}; // RsvpStandby::PsbBriefs


class RsvpStandby::PsbBriefs::PsbBrief : public Entity
{
    public:
        PsbBrief();
        ~PsbBrief();

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

        class Session; //type: RsvpStandby::PsbBriefs::PsbBrief::Session
        class S2LSubLsp; //type: RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp
        class Template_; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_
        class SessionAttribute; //type: RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute
        class TrafficSpec; //type: RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec
        class GenericTrafficSpec; //type: RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute> session_attribute;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_> template_;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec> traffic_spec;


}; // RsvpStandby::PsbBriefs::PsbBrief


class RsvpStandby::PsbBriefs::PsbBrief::Session : public Entity
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



        class RsvpSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession> rsvp_session;


}; // RsvpStandby::PsbBriefs::PsbBrief::Session


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession : public Entity
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

        class Ipv4; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4 : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp


class RsvpStandby::PsbBriefs::PsbBrief::Template_ : public Entity
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



        class RsvpFilter; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter> rsvp_filter;


}; // RsvpStandby::PsbBriefs::PsbBrief::Template_


class RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter


class RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session


class RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session


class RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute : public Entity
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

        class SessAttributeFlags; //type: RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


}; // RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute


class RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags


class RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec


class RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec


class RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::GlobalNeighborBriefs : public Entity
{
    public:
        GlobalNeighborBriefs();
        ~GlobalNeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalNeighborBrief; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief> > global_neighbor_brief;


}; // RsvpStandby::GlobalNeighborBriefs


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief : public Entity
{
    public:
        GlobalNeighborBrief();
        ~GlobalNeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_gr_enabled; //type: boolean
        YLeaf node_address; //type: string
        YLeaf restart_state; //type: RsvpMgmtRestartStateEnum
        YLeafList local_node_address; //type: list of  string
        YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
        YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
        YLeafList lost_communication_total; //type: list of  uint16

        class GlobalNeighborFlags; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags
        class UpTime; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime
        class LostCommunicationTime; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime> > lost_communication_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime> > up_time;


}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags : public Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_application_ouni; //type: boolean
        YLeaf is_application_mpls; //type: boolean



}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime : public Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime : public Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime

class Rsvp : public Entity
{
    public:
        Rsvp();
        ~Rsvp();

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



        class ControllerSummaries; //type: Rsvp::ControllerSummaries
        class Issu; //type: Rsvp::Issu
        class ControllerDetaileds; //type: Rsvp::ControllerDetaileds
        class BwPoolInfo; //type: Rsvp::BwPoolInfo
        class ControllerBriefs; //type: Rsvp::ControllerBriefs
        class PxsbDetails; //type: Rsvp::PxsbDetails
        class RxsbDetails; //type: Rsvp::RxsbDetails
        class InterfaceNeighborBriefs; //type: Rsvp::InterfaceNeighborBriefs
        class AuthenticationBriefs; //type: Rsvp::AuthenticationBriefs
        class SessionBriefs; //type: Rsvp::SessionBriefs
        class PsbDetaileds; //type: Rsvp::PsbDetaileds
        class FrrSummary; //type: Rsvp::FrrSummary
        class RsbDetaileds; //type: Rsvp::RsbDetaileds
        class InterfaceSummaries; //type: Rsvp::InterfaceSummaries
        class HelloInstanceBriefs; //type: Rsvp::HelloInstanceBriefs
        class AuthenticationDetails; //type: Rsvp::AuthenticationDetails
        class RsbBriefs; //type: Rsvp::RsbBriefs
        class OpenConfig; //type: Rsvp::OpenConfig
        class Counters; //type: Rsvp::Counters
        class InterfaceDetaileds; //type: Rsvp::InterfaceDetaileds
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

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationBriefs> authentication_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails> authentication_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::BwPoolInfo> bw_pool_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs> controller_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds> controller_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries> controller_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary> frr_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs> frrs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs> global_neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails> global_neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceBriefs> hello_instance_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails> hello_instance_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs> interface_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds> interface_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails> interface_neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries> interface_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig> open_config;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs> psb_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds> psb_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails> pxsb_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs> request_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails> request_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs> rsb_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds> rsb_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails> rxsb_details;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs> session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds> session_detaileds;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary> summary;


}; // Rsvp


class Rsvp::ControllerSummaries : public Entity
{
    public:
        ControllerSummaries();
        ~ControllerSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ControllerSummary; //type: Rsvp::ControllerSummaries::ControllerSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary> > controller_summary;


}; // Rsvp::ControllerSummaries


class Rsvp::ControllerSummaries::ControllerSummary : public Entity
{
    public:
        ControllerSummary();
        ~ControllerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf controller_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf paths_in; //type: uint32
        YLeaf paths_out; //type: uint32
        YLeaf reservations_in; //type: uint32
        YLeaf reservations_out; //type: uint32

        class BandwidthInformation; //type: Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation> bandwidth_information;


}; // Rsvp::ControllerSummaries::ControllerSummary


class Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation


class Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface


class Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface


class Rsvp::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Status; //type: Rsvp::Issu::Status

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status> status;


}; // Rsvp::Issu


class Rsvp::Issu::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Issu::Status::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Issu::Status::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Issu::Status


class Rsvp::Issu::Status::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Issu::Status::IdtStatus


class Rsvp::Issu::Status::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Issu::Status::PreviousIdtStatus


class Rsvp::ControllerDetaileds : public Entity
{
    public:
        ControllerDetaileds();
        ~ControllerDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ControllerDetailed; //type: Rsvp::ControllerDetaileds::ControllerDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed> > controller_detailed;


}; // Rsvp::ControllerDetaileds


class Rsvp::ControllerDetaileds::ControllerDetailed : public Entity
{
    public:
        ControllerDetailed();
        ~ControllerDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf controller_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf signalling_ip_tos; //type: uint8
        YLeaf integrity_send_password; //type: string
        YLeaf integrity_receive_password; //type: string
        YLeaf integrity_receive_password_optional; //type: uint8
        YLeaf refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf summary_refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf refresh_interval; //type: int32
        YLeaf out_of_band_refresh_interval; //type: uint32
        YLeaf summary_refresh_max_size; //type: uint32
        YLeaf bundle_message_max_size; //type: uint32
        YLeaf expiry_timer_state; //type: RsvpTimerStateEnum
        YLeaf expiry_states; //type: int32
        YLeaf expiry_interval; //type: int32
        YLeaf expiry_drops_tolerated; //type: int32
        YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        YLeaf ack_hold_time; //type: uint32
        YLeaf ack_max_size; //type: uint32
        YLeaf retransmit_time; //type: uint32
        YLeaf pacing_interval; //type: uint32
        YLeaf pacing_message_rate; //type: uint32
        YLeaf pacing_timer_state; //type: RsvpTimerStateEnum
        YLeaf pacing_messages; //type: int32

        class BandwidthInformation; //type: Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation
        class Flags; //type: Rsvp::ControllerDetaileds::ControllerDetailed::Flags
        class NeighborArray; //type: Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::Flags> flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray> > neighbor_array;


}; // Rsvp::ControllerDetaileds::ControllerDetailed


class Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation


class Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface


class Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface


class Rsvp::ControllerDetaileds::ControllerDetailed::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_enabled; //type: boolean
        YLeaf is_refresh_reduction_enabled; //type: boolean
        YLeaf is_pacing_enabled; //type: boolean
        YLeaf is_refresh_enabled; //type: boolean
        YLeaf is_s_refresh_enabled; //type: boolean
        YLeaf is_interface_down; //type: boolean
        YLeaf is_interface_created; //type: boolean
        YLeaf is_rel_s_refresh_enabled; //type: boolean
        YLeaf is_backup_tunnel; //type: boolean
        YLeaf is_rsvp_configured; //type: boolean
        YLeaf is_non_default_vrf; //type: boolean
        YLeaf is_message_bundling_enabled; //type: boolean



}; // Rsvp::ControllerDetaileds::ControllerDetailed::Flags


class Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray : public Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf message_ids; //type: uint32
        YLeaf outgoing_states; //type: int32

        class ExpiryTime; //type: Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


}; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray


class Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime : public Entity
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



}; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime


class Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId : public Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf message_id; //type: uint32



}; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId


class Rsvp::BwPoolInfo : public Entity
{
    public:
        BwPoolInfo();
        ~BwPoolInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_res_pool_percent; //type: uint32
        YLeaf bc0_percent; //type: uint32
        YLeaf bc1_percent; //type: uint32
        YLeaf is_max_res_pool_percent_configured; //type: boolean
        YLeaf is_bc0_percent_configured; //type: boolean
        YLeaf is_bc1_percent_configured; //type: boolean
        YLeaf bandwidth_configuration_model; //type: IgpteLibBwModelEnum



}; // Rsvp::BwPoolInfo


class Rsvp::ControllerBriefs : public Entity
{
    public:
        ControllerBriefs();
        ~ControllerBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ControllerBrief; //type: Rsvp::ControllerBriefs::ControllerBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief> > controller_brief;


}; // Rsvp::ControllerBriefs


class Rsvp::ControllerBriefs::ControllerBrief : public Entity
{
    public:
        ControllerBrief();
        ~ControllerBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf controller_name; //type: string
        YLeaf interface_name_xr; //type: string

        class BandwidthInformation; //type: Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation> bandwidth_information;


}; // Rsvp::ControllerBriefs::ControllerBrief


class Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation


class Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface


class Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface


class Rsvp::PxsbDetails : public Entity
{
    public:
        PxsbDetails();
        ~PxsbDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PxsbDetail; //type: Rsvp::PxsbDetails::PxsbDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail> > pxsb_detail;


}; // Rsvp::PxsbDetails


class Rsvp::PxsbDetails::PxsbDetail : public Entity
{
    public:
        PxsbDetail();
        ~PxsbDetail();

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
        YLeaf dynamic_state; //type: uint32

        class Session; //type: Rsvp::PxsbDetails::PxsbDetail::Session
        class S2LSubLsp; //type: Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp
        class Template_; //type: Rsvp::PxsbDetails::PxsbDetail::Template_
        class TrafficSpec; //type: Rsvp::PxsbDetails::PxsbDetail::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec
        class Hop; //type: Rsvp::PxsbDetails::PxsbDetail::Hop
        class RsvpHeader; //type: Rsvp::PxsbDetails::PxsbDetail::RsvpHeader

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::RsvpHeader> rsvp_header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_> template_;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::TrafficSpec> traffic_spec;


}; // Rsvp::PxsbDetails::PxsbDetail


class Rsvp::PxsbDetails::PxsbDetail::Session : public Entity
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



        class RsvpSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession> rsvp_session;


}; // Rsvp::PxsbDetails::PxsbDetail::Session


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp


class Rsvp::PxsbDetails::PxsbDetail::Template_ : public Entity
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



        class RsvpFilter; //type: Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter> rsvp_filter;


}; // Rsvp::PxsbDetails::PxsbDetail::Template_


class Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter


class Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session


class Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session


class Rsvp::PxsbDetails::PxsbDetail::TrafficSpec : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::TrafficSpec


class Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec


class Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec


class Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec


class Rsvp::PxsbDetails::PxsbDetail::Hop : public Entity
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



}; // Rsvp::PxsbDetails::PxsbDetail::Hop


class Rsvp::PxsbDetails::PxsbDetail::RsvpHeader : public Entity
{
    public:
        RsvpHeader();
        ~RsvpHeader();

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



}; // Rsvp::PxsbDetails::PxsbDetail::RsvpHeader


class Rsvp::RxsbDetails : public Entity
{
    public:
        RxsbDetails();
        ~RxsbDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RxsbDetail; //type: Rsvp::RxsbDetails::RxsbDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail> > rxsb_detail;


}; // Rsvp::RxsbDetails


class Rsvp::RxsbDetails::RxsbDetail : public Entity
{
    public:
        RxsbDetail();
        ~RxsbDetail();

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
        YLeaf dynamic_state; //type: uint32

        class Session; //type: Rsvp::RxsbDetails::RxsbDetail::Session
        class S2LSubLsp; //type: Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp
        class Style; //type: Rsvp::RxsbDetails::RxsbDetail::Style
        class Filter; //type: Rsvp::RxsbDetails::RxsbDetail::Filter
        class FlowSpec; //type: Rsvp::RxsbDetails::RxsbDetail::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec
        class Hop; //type: Rsvp::RxsbDetails::RxsbDetail::Hop
        class RsvpHeader; //type: Rsvp::RxsbDetails::RxsbDetail::RsvpHeader

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::RsvpHeader> rsvp_header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Style> style;


}; // Rsvp::RxsbDetails::RxsbDetail


class Rsvp::RxsbDetails::RxsbDetail::Session : public Entity
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



        class RsvpSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession> rsvp_session;


}; // Rsvp::RxsbDetails::RxsbDetail::Session


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp


class Rsvp::RxsbDetails::RxsbDetail::Style : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Style


class Rsvp::RxsbDetails::RxsbDetail::Filter : public Entity
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



        class RsvpFilter; //type: Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RxsbDetails::RxsbDetail::Filter


class Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter


class Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RxsbDetails::RxsbDetail::FlowSpec : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::FlowSpec


class Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec


class Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RxsbDetails::RxsbDetail::Hop : public Entity
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



}; // Rsvp::RxsbDetails::RxsbDetail::Hop


class Rsvp::RxsbDetails::RxsbDetail::RsvpHeader : public Entity
{
    public:
        RsvpHeader();
        ~RsvpHeader();

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



}; // Rsvp::RxsbDetails::RxsbDetail::RsvpHeader


class Rsvp::InterfaceNeighborBriefs : public Entity
{
    public:
        InterfaceNeighborBriefs();
        ~InterfaceNeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceNeighborBrief; //type: Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;


}; // Rsvp::InterfaceNeighborBriefs


class Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief : public Entity
{
    public:
        InterfaceNeighborBrief();
        ~InterfaceNeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf node_address; //type: string

        class InterfaceNeighborListCompact; //type: Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;


}; // Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief


class Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact : public Entity
{
    public:
        InterfaceNeighborListCompact();
        ~InterfaceNeighborListCompact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_neighbor_address; //type: string
        YLeaf neighbor_interface_name; //type: string



}; // Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


class Rsvp::AuthenticationBriefs : public Entity
{
    public:
        AuthenticationBriefs();
        ~AuthenticationBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AuthenticationBrief; //type: Rsvp::AuthenticationBriefs::AuthenticationBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;


}; // Rsvp::AuthenticationBriefs


class Rsvp::AuthenticationBriefs::AuthenticationBrief : public Entity
{
    public:
        AuthenticationBrief();
        ~AuthenticationBrief();

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
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf direction; //type: RsvpMgmtAuthDirectionEnum
        YLeaf key_type; //type: RsvpMgmtAuthKiEnum
        YLeaf key_source; //type: string
        YLeaf key_id; //type: uint64
        YLeaf key_id_valid; //type: uint32



}; // Rsvp::AuthenticationBriefs::AuthenticationBrief


class Rsvp::SessionBriefs : public Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionBrief; //type: Rsvp::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief> > session_brief;


}; // Rsvp::SessionBriefs


class Rsvp::SessionBriefs::SessionBrief : public Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

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
        YLeaf vrf_name; //type: string
        YLeaf ps_bs; //type: uint32
        YLeaf rs_bs; //type: uint32
        YLeaf requests; //type: uint32
        YLeaf detail_list_size; //type: uint32

        class Session; //type: Rsvp::SessionBriefs::SessionBrief::Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session> session;


}; // Rsvp::SessionBriefs::SessionBrief


class Rsvp::SessionBriefs::SessionBrief::Session : public Entity
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



        class RsvpSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession> rsvp_session;


}; // Rsvp::SessionBriefs::SessionBrief::Session


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PsbDetaileds : public Entity
{
    public:
        PsbDetaileds();
        ~PsbDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PsbDetailed; //type: Rsvp::PsbDetaileds::PsbDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed> > psb_detailed;


}; // Rsvp::PsbDetaileds


class Rsvp::PsbDetaileds::PsbDetailed : public Entity
{
    public:
        PsbDetailed();
        ~PsbDetailed();

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
        YLeaf backup_tunnel_name; //type: string
        YLeaf is_in_ero_valid; //type: boolean
        YLeaf is_out_ero_valid; //type: boolean

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

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::ClassType> class_type;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Hop> hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro> > in_ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc> > pfc;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_> template_;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;


}; // Rsvp::PsbDetaileds::PsbDetailed


class Rsvp::PsbDetaileds::PsbDetailed::Session : public Entity
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



        class RsvpSession; //type: Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;


}; // Rsvp::PsbDetaileds::PsbDetailed::Session


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


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped
        class DefaultActionDropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped
        class DefaultActionProcessed; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed
        class Total; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;


}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded : public Entity
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



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined : public Entity
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



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped : public Entity
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



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped : public Entity
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



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed : public Entity
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



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total : public Entity
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



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


class Rsvp::Counters::OutOfResource : public Entity
{
    public:
        OutOfResource();
        ~OutOfResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: Rsvp::Counters::OutOfResource::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces> interfaces;


}; // Rsvp::Counters::OutOfResource


class Rsvp::Counters::OutOfResource::Interfaces : public Entity
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



        class Summary; //type: Rsvp::Counters::OutOfResource::Interfaces::Summary
        class Interfaces_; //type: Rsvp::Counters::OutOfResource::Interfaces::Interfaces_

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Summary> summary;


}; // Rsvp::Counters::OutOfResource::Interfaces


class Rsvp::Counters::OutOfResource::Interfaces::Summary : public Entity
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


        YLeaf dropped_path_messages; //type: uint32



}; // Rsvp::Counters::OutOfResource::Interfaces::Summary


class Rsvp::Counters::OutOfResource::Interfaces::Interfaces_ : public Entity
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



        class Interface; //type: Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;


}; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_


class Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf dropped_path_messages; //type: uint32



}; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface


class Rsvp::Counters::InterfaceEvents : public Entity
{
    public:
        InterfaceEvents();
        ~InterfaceEvents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceEvent; //type: Rsvp::Counters::InterfaceEvents::InterfaceEvent

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents::InterfaceEvent> > interface_event;


}; // Rsvp::Counters::InterfaceEvents


class Rsvp::Counters::InterfaceEvents::InterfaceEvent : public Entity
{
    public:
        InterfaceEvent();
        ~InterfaceEvent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf expired_paths; //type: uint32
        YLeaf expired_reservations; //type: uint32
        YLeaf nac_ks; //type: uint32



}; // Rsvp::Counters::InterfaceEvents::InterfaceEvent


class Rsvp::Counters::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf rsvp_process_role; //type: RsvpProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nacks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // Rsvp::Counters::Nsr


class Rsvp::Counters::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf rsvp_process_role; //type: RsvpProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nacks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // Rsvp::Counters::Issu


class Rsvp::Counters::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions; //type: uint32
        YLeaf incoming_paths; //type: uint32
        YLeaf outgoing_paths; //type: uint32
        YLeaf incoming_reservations; //type: uint32
        YLeaf outgoing_reservations; //type: uint32
        YLeaf interfaces; //type: uint32



}; // Rsvp::Counters::Database


class Rsvp::Counters::EventSyncs : public Entity
{
    public:
        EventSyncs();
        ~EventSyncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventSync; //type: Rsvp::Counters::EventSyncs::EventSync

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs::EventSync> > event_sync;


}; // Rsvp::Counters::EventSyncs


class Rsvp::Counters::EventSyncs::EventSync : public Entity
{
    public:
        EventSync();
        ~EventSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf expired_paths; //type: uint32
        YLeaf expired_reservations; //type: uint32
        YLeaf nac_ks; //type: uint32



}; // Rsvp::Counters::EventSyncs::EventSync


class Rsvp::InterfaceDetaileds : public Entity
{
    public:
        InterfaceDetaileds();
        ~InterfaceDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceDetailed; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;


}; // Rsvp::InterfaceDetaileds


class Rsvp::InterfaceDetaileds::InterfaceDetailed : public Entity
{
    public:
        InterfaceDetailed();
        ~InterfaceDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf signalling_ip_tos; //type: uint8
        YLeaf integrity_send_password; //type: string
        YLeaf integrity_receive_password; //type: string
        YLeaf integrity_receive_password_optional; //type: uint8
        YLeaf refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf summary_refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf refresh_interval; //type: int32
        YLeaf out_of_band_refresh_interval; //type: uint32
        YLeaf summary_refresh_max_size; //type: uint32
        YLeaf bundle_message_max_size; //type: uint32
        YLeaf expiry_timer_state; //type: RsvpTimerStateEnum
        YLeaf expiry_states; //type: int32
        YLeaf expiry_interval; //type: int32
        YLeaf expiry_drops_tolerated; //type: int32
        YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        YLeaf ack_hold_time; //type: uint32
        YLeaf ack_max_size; //type: uint32
        YLeaf retransmit_time; //type: uint32
        YLeaf pacing_interval; //type: uint32
        YLeaf pacing_message_rate; //type: uint32
        YLeaf pacing_timer_state; //type: RsvpTimerStateEnum
        YLeaf pacing_messages; //type: int32

        class BandwidthInformation; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation
        class Flags; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags
        class NeighborArray; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;


}; // Rsvp::InterfaceDetaileds::InterfaceDetailed


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


class Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_enabled; //type: boolean
        YLeaf is_refresh_reduction_enabled; //type: boolean
        YLeaf is_pacing_enabled; //type: boolean
        YLeaf is_refresh_enabled; //type: boolean
        YLeaf is_s_refresh_enabled; //type: boolean
        YLeaf is_interface_down; //type: boolean
        YLeaf is_interface_created; //type: boolean
        YLeaf is_rel_s_refresh_enabled; //type: boolean
        YLeaf is_backup_tunnel; //type: boolean
        YLeaf is_rsvp_configured; //type: boolean
        YLeaf is_non_default_vrf; //type: boolean
        YLeaf is_message_bundling_enabled; //type: boolean



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray : public Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf message_ids; //type: uint32
        YLeaf outgoing_states; //type: int32

        class ExpiryTime; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime : public Entity
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



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId : public Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf message_id; //type: uint32



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


class Rsvp::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_gr_enabled; //type: boolean
        YLeaf global_neighbors; //type: uint32
        YLeaf restart_time; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf missed_hellos; //type: uint8
        YLeaf pending_states; //type: uint32

        class RecoveryTimeLeft; //type: Rsvp::GracefulRestart::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: Rsvp::GracefulRestart::RecoveryTimerExpTime
        class LocalNodeAddress; //type: Rsvp::GracefulRestart::LocalNodeAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::LocalNodeAddress> > local_node_address;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;


}; // Rsvp::GracefulRestart


class Rsvp::GracefulRestart::RecoveryTimeLeft : public Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GracefulRestart::RecoveryTimeLeft


class Rsvp::GracefulRestart::RecoveryTimerExpTime : public Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GracefulRestart::RecoveryTimerExpTime


class Rsvp::GracefulRestart::LocalNodeAddress : public Entity
{
    public:
        LocalNodeAddress();
        ~LocalNodeAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_node_ip_address; //type: string
        YLeaf application_type; //type: RsvpMgmtGrAppEnum



}; // Rsvp::GracefulRestart::LocalNodeAddress


class Rsvp::HelloInterfaceInstanceBriefs : public Entity
{
    public:
        HelloInterfaceInstanceBriefs();
        ~HelloInterfaceInstanceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterfaceInstanceBrief; //type: Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;


}; // Rsvp::HelloInterfaceInstanceBriefs


class Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief : public Entity
{
    public:
        HelloInterfaceInstanceBrief();
        ~HelloInterfaceInstanceBrief();

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
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string



}; // Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


class Rsvp::HelloInterfaceInstanceDetails : public Entity
{
    public:
        HelloInterfaceInstanceDetails();
        ~HelloInterfaceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterfaceInstanceDetail; //type: Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;


}; // Rsvp::HelloInterfaceInstanceDetails


class Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail : public Entity
{
    public:
        HelloInterfaceInstanceDetail();
        ~HelloInterfaceInstanceDetail();

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
        YLeaf hello_global_neighbor_id; //type: string
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf source_instance; //type: uint32
        YLeaf destination_instance; //type: uint32
        YLeaf hello_messages_sent; //type: uint64
        YLeaf hello_messages_received; //type: uint64

        class LastMessageSentTime; //type: Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;


}; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


class Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime : public Entity
{
    public:
        LastMessageSentTime();
        ~LastMessageSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


class Rsvp::InterfaceNeighborDetails : public Entity
{
    public:
        InterfaceNeighborDetails();
        ~InterfaceNeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceNeighborDetail; //type: Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;


}; // Rsvp::InterfaceNeighborDetails


class Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail : public Entity
{
    public:
        InterfaceNeighborDetail();
        ~InterfaceNeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf node_address; //type: string

        class InterfaceNeighborListDetail; //type: Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;


}; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail


class Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail : public Entity
{
    public:
        InterfaceNeighborListDetail();
        ~InterfaceNeighborListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_neighbor_address; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf is_rr_enabled; //type: boolean
        YLeaf neighbor_epoch; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf retransmitted_messages; //type: uint32



}; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


class Rsvp::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Status; //type: Rsvp::Nsr::Status

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status> status;


}; // Rsvp::Nsr


class Rsvp::Nsr::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Nsr::Status::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Nsr::Status::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Nsr::Status


class Rsvp::Nsr::Status::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Nsr::Status::IdtStatus


class Rsvp::Nsr::Status::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Nsr::Status::PreviousIdtStatus


class Rsvp::Summary : public Entity
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


        YLeaf interfaces; //type: uint32
        YLeaf ls_ps; //type: uint32

        class IssuStatus; //type: Rsvp::Summary::IssuStatus
        class NsrStatus; //type: Rsvp::Summary::NsrStatus
        class DatabaseCounters; //type: Rsvp::Summary::DatabaseCounters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::DatabaseCounters> database_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus> nsr_status;


}; // Rsvp::Summary


class Rsvp::Summary::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Summary::IssuStatus::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Summary::IssuStatus::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Summary::IssuStatus


class Rsvp::Summary::IssuStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::IssuStatus::IdtStatus


class Rsvp::Summary::IssuStatus::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::IssuStatus::PreviousIdtStatus


class Rsvp::Summary::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Summary::NsrStatus::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Summary::NsrStatus::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Summary::NsrStatus


class Rsvp::Summary::NsrStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::NsrStatus::IdtStatus


class Rsvp::Summary::NsrStatus::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::NsrStatus::PreviousIdtStatus


class Rsvp::Summary::DatabaseCounters : public Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions; //type: uint32
        YLeaf incoming_paths; //type: uint32
        YLeaf outgoing_paths; //type: uint32
        YLeaf incoming_reservations; //type: uint32
        YLeaf outgoing_reservations; //type: uint32
        YLeaf interfaces; //type: uint32



}; // Rsvp::Summary::DatabaseCounters


class Rsvp::Frrs : public Entity
{
    public:
        Frrs();
        ~Frrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Frr; //type: Rsvp::Frrs::Frr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr> > frr;


}; // Rsvp::Frrs


class Rsvp::Frrs::Frr : public Entity
{
    public:
        Frr();
        ~Frr();

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
        YLeaf path_status; //type: RsvpMgmtFrrStateEnumEnum
        YLeaf reservation_status; //type: RsvpMgmtFrrStateEnumEnum

        class Session; //type: Rsvp::Frrs::Frr::Session
        class S2LSubLsp; //type: Rsvp::Frrs::Frr::S2LSubLsp

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session> session;


}; // Rsvp::Frrs::Frr


class Rsvp::Frrs::Frr::Session : public Entity
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



        class RsvpSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession> rsvp_session;


}; // Rsvp::Frrs::Frr::Session


class Rsvp::Frrs::Frr::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::Frrs::Frr::Session::RsvpSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::Frrs::Frr::S2LSubLsp : public Entity
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



}; // Rsvp::Frrs::Frr::S2LSubLsp


class Rsvp::RequestBriefs : public Entity
{
    public:
        RequestBriefs();
        ~RequestBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RequestBrief; //type: Rsvp::RequestBriefs::RequestBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief> > request_brief;


}; // Rsvp::RequestBriefs


class Rsvp::RequestBriefs::RequestBrief : public Entity
{
    public:
        RequestBrief();
        ~RequestBrief();

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
        YLeaf output_interface; //type: string

        class Session; //type: Rsvp::RequestBriefs::RequestBrief::Session
        class S2LSubLsp; //type: Rsvp::RequestBriefs::RequestBrief::S2LSubLsp
        class FlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec
        class Filter; //type: Rsvp::RequestBriefs::RequestBrief::Filter
        class Style; //type: Rsvp::RequestBriefs::RequestBrief::Style

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Style> style;


}; // Rsvp::RequestBriefs::RequestBrief


class Rsvp::RequestBriefs::RequestBrief::Session : public Entity
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



        class RsvpSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;


}; // Rsvp::RequestBriefs::RequestBrief::Session


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RequestBriefs::RequestBrief::S2LSubLsp : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::S2LSubLsp


class Rsvp::RequestBriefs::RequestBrief::FlowSpec : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::FlowSpec


class Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec


class Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RequestBriefs::RequestBrief::Filter : public Entity
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



        class RsvpFilter; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RequestBriefs::RequestBrief::Filter


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RequestBriefs::RequestBrief::Style : public Entity
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



}; // Rsvp::RequestBriefs::RequestBrief::Style


class Rsvp::RequestDetails : public Entity
{
    public:
        RequestDetails();
        ~RequestDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RequestDetail; //type: Rsvp::RequestDetails::RequestDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail> > request_detail;


}; // Rsvp::RequestDetails


class Rsvp::RequestDetails::RequestDetail : public Entity
{
    public:
        RequestDetail();
        ~RequestDetail();

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
        YLeaf output_interface; //type: string

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

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicySources> policy_sources;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PsbKey> > psb_key;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::ReqFlags> req_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::RsbKey> > rsb_key;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Style> style;


}; // Rsvp::RequestDetails::RequestDetail


class Rsvp::RequestDetails::RequestDetail::Session : public Entity
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



        class RsvpSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;


}; // Rsvp::RequestDetails::RequestDetail::Session


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RequestDetails::RequestDetail::S2LSubLsp : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::S2LSubLsp


class Rsvp::RequestDetails::RequestDetail::FlowSpec : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::FlowSpec


class Rsvp::RequestDetails::RequestDetail::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec


class Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RequestDetails::RequestDetail::Filter : public Entity
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



        class RsvpFilter; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RequestDetails::RequestDetail::Filter


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RequestDetails::RequestDetail::Style : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Style


class Rsvp::RequestDetails::RequestDetail::ReqFlags : public Entity
{
    public:
        ReqFlags();
        ~ReqFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_local_receiver; //type: boolean
        YLeaf is_refreshing; //type: boolean
        YLeaf is_send_confirm; //type: boolean
        YLeaf is_ack_outstanding; //type: boolean
        YLeaf is_message_id_allocated; //type: boolean
        YLeaf is_nack_received; //type: boolean
        YLeaf is_retransmit; //type: boolean
        YLeaf is_paced; //type: boolean
        YLeaf is_label_request_in_path; //type: boolean
        YLeaf is_rro_in_path; //type: boolean
        YLeaf is_record_label_in_path; //type: boolean
        YLeaf is_merge_point; //type: boolean



}; // Rsvp::RequestDetails::RequestDetail::ReqFlags


class Rsvp::RequestDetails::RequestDetail::Hop : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Hop


class Rsvp::RequestDetails::RequestDetail::Header : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::Header


class Rsvp::RequestDetails::RequestDetail::PolicySources : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::PolicySources


class Rsvp::RequestDetails::RequestDetail::PolicyFlags : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::PolicyFlags


class Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags : public Entity
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



}; // Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags


class Rsvp::RequestDetails::RequestDetail::PsbKey : public Entity
{
    public:
        PsbKey();
        ~PsbKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf destination_port_or_tunnel_id; //type: uint32
        YLeaf protocol; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpMgmtSessionEnum
        YLeaf source_address; //type: string
        YLeaf source_port_or_lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf vrfid; //type: uint32



}; // Rsvp::RequestDetails::RequestDetail::PsbKey


class Rsvp::RequestDetails::RequestDetail::RsbKey : public Entity
{
    public:
        RsbKey();
        ~RsbKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf destination_port_or_tunnel_id; //type: uint32
        YLeaf protocol; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpMgmtSessionEnum
        YLeaf source_address; //type: string
        YLeaf source_port_or_lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf vrfid; //type: uint32



}; // Rsvp::RequestDetails::RequestDetail::RsbKey


class Rsvp::InterfaceBriefs : public Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceBrief; //type: Rsvp::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief> > interface_brief;


}; // Rsvp::InterfaceBriefs


class Rsvp::InterfaceBriefs::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string

        class BandwidthInformation; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;


}; // Rsvp::InterfaceBriefs::InterfaceBrief


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation : public Entity
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

        class PreStandardDsteInterface; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface : public Entity
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



}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface : public Entity
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



}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


class Rsvp::SessionDetaileds : public Entity
{
    public:
        SessionDetaileds();
        ~SessionDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionDetailed; //type: Rsvp::SessionDetaileds::SessionDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed> > session_detailed;


}; // Rsvp::SessionDetaileds


class Rsvp::SessionDetaileds::SessionDetailed : public Entity
{
    public:
        SessionDetailed();
        ~SessionDetailed();

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
        YLeaf vrf_name; //type: string

        class Compact; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact
        class S2LSubLsp; //type: Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp
        class PsbRsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact> compact;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo> > psb_rsb_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp> s2l_sub_lsp;


}; // Rsvp::SessionDetaileds::SessionDetailed


class Rsvp::SessionDetaileds::SessionDetailed::Compact : public Entity
{
    public:
        Compact();
        ~Compact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ps_bs; //type: uint32
        YLeaf rs_bs; //type: uint32
        YLeaf requests; //type: uint32
        YLeaf detail_list_size; //type: uint32

        class Session; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session> session;


}; // Rsvp::SessionDetaileds::SessionDetailed::Compact


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session : public Entity
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



        class RsvpSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession> rsvp_session;


}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo : public Entity
{
    public:
        PsbRsbInfo();
        ~PsbRsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo
        class RsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo> > psb_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo> > rsb_info;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo : public Entity
{
    public:
        PsbInfo();
        ~PsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf destination_address; //type: string
        YLeaf lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf in_interface; //type: string
        YLeaf in_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32
        YLeaf is_bad_address; //type: boolean
        YLeaf incoming_interface_address; //type: string
        YLeaf is_ero_valid; //type: boolean
        YLeaf is_rro_valid; //type: boolean
        YLeaf is_traffic_spec_valid; //type: boolean
        YLeaf tunnel_name; //type: string

        class GenericInLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel
        class TrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec
        class Association; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association
        class Protection; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection
        class ReverseLsp; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp
        class Ero; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero
        class Rro; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association> association;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero> > ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel> generic_in_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp> reverse_lsp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro> > rro;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec> traffic_spec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel : public Entity
{
    public:
        GenericInLabel();
        ~GenericInLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_type; //type: RsvpMgmtAssociationEnum

        class Ipv4; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4
        class Ipv6; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6
        class ExtendedIpv4; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4
        class ExtendedIpv6; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4> extended_ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6> extended_ipv6;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6> ipv6;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4 : public Entity
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


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4 : public Entity
{
    public:
        ExtendedIpv4();
        ~ExtendedIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string
        YLeaf global_source; //type: uint32
        YLeafList extended_id; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6 : public Entity
{
    public:
        ExtendedIpv6();
        ~ExtendedIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string
        YLeaf global_source; //type: uint32
        YLeafList extended_id; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s; //type: boolean
        YLeaf p; //type: boolean
        YLeaf n; //type: boolean
        YLeaf o; //type: boolean

        class LspFlags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags
        class LinkFlags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags> link_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags> lsp_flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags : public Entity
{
    public:
        LspFlags();
        ~LspFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags : public Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf reserved_bit1; //type: boolean
        YLeaf reserved_bit2; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GenericTrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec
        class Ero; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero
        class UnsupSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero> > ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec> generic_traffic_spec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject> > unsup_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject : public Entity
{
    public:
        UnsupSubObject();
        ~UnsupSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList rsvp_mgmt_rev_lsp_unsupported_subobj; //type: list of  uint8



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject : public Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_address; //type: string
        YLeaf interface_id; //type: uint32

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject : public Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList srl_gs; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo : public Entity
{
    public:
        RsbInfo();
        ~RsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf destination_address; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf backup_interface; //type: string
        YLeaf backup_label; //type: uint32
        YLeaf is_rro_valid; //type: boolean
        YLeaf is_flow_spec_valid; //type: boolean

        class GenericOutLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel
        class FlowSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec
        class GenericFlowSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec
        class Rro; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel> generic_out_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro> > rro;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel : public Entity
{
    public:
        GenericOutLabel();
        ~GenericOutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec : public Entity
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

        class G709OtnFlowSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec : public Entity
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



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject : public Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_address; //type: string
        YLeaf interface_id; //type: uint32

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject : public Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList srl_gs; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject


class Rsvp::HelloInstanceDetails : public Entity
{
    public:
        HelloInstanceDetails();
        ~HelloInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInstanceDetail; //type: Rsvp::HelloInstanceDetails::HelloInstanceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail> > hello_instance_detail;


}; // Rsvp::HelloInstanceDetails


class Rsvp::HelloInstanceDetails::HelloInstanceDetail : public Entity
{
    public:
        HelloInstanceDetail();
        ~HelloInstanceDetail();

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
        YLeaf hello_instance_owner; //type: RsvpMgmtHelloInstanceOwnerEnum
        YLeaf neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf missed_acks_allowed; //type: uint32
        YLeaf source_instance; //type: uint32
        YLeaf destination_instance; //type: uint32
        YLeaf communication_lost_reason; //type: RsvpMgmtHelloDownReasonEnum
        YLeaf total_communication_lost; //type: uint16
        YLeaf communication_lost_hello_missed; //type: uint16
        YLeaf communication_lost_wrong_source_inst; //type: uint16
        YLeaf communication_lost_wrong_destination_inst; //type: uint16
        YLeaf communication_lost_interface_down; //type: uint16
        YLeaf communication_lost_neighbor_disabled_hello; //type: uint16
        YLeaf hello_messages_sent; //type: uint64
        YLeaf hello_messages_received; //type: uint64
        YLeaf hello_request_suppressed; //type: uint64

        class UpTime; //type: Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime
        class CommunicationLostTime; //type: Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime> communication_lost_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime> up_time;


}; // Rsvp::HelloInstanceDetails::HelloInstanceDetail


class Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime : public Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime


class Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime : public Entity
{
    public:
        CommunicationLostTime();
        ~CommunicationLostTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime


class Rsvp::GlobalNeighborDetails : public Entity
{
    public:
        GlobalNeighborDetails();
        ~GlobalNeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalNeighborDetail; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail> > global_neighbor_detail;


}; // Rsvp::GlobalNeighborDetails


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail : public Entity
{
    public:
        GlobalNeighborDetail();
        ~GlobalNeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_gr_enabled; //type: boolean
        YLeaf node_address; //type: string
        YLeaf restart_state; //type: RsvpMgmtRestartStateEnum
        YLeaf restart_time; //type: uint32
        YLeaf is_restart_timer_running; //type: boolean
        YLeaf recovery_time; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf missed_hellos; //type: uint8
        YLeaf pending_states; //type: uint32
        YLeafList local_node_address; //type: list of  string
        YLeafList interface_neighbor; //type: list of  string
        YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
        YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
        YLeafList lost_communication_total; //type: list of  uint16

        class GlobalNeighborFlags; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags
        class RestartTimeLeft; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft
        class RestartTimerExpiryTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime
        class RecoveryTimeLeft; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime
        class UpTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime
        class LostCommunicationTime; //type: Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime> > lost_communication_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime> recovery_timer_exp_time;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft> restart_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime> restart_timer_expiry_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime> > up_time;


}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags : public Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_application_ouni; //type: boolean
        YLeaf is_application_mpls; //type: boolean



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft : public Entity
{
    public:
        RestartTimeLeft();
        ~RestartTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime : public Entity
{
    public:
        RestartTimerExpiryTime();
        ~RestartTimerExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft : public Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime : public Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime : public Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime


class Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime : public Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime


class Rsvp::PsbBriefs : public Entity
{
    public:
        PsbBriefs();
        ~PsbBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PsbBrief; //type: Rsvp::PsbBriefs::PsbBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief> > psb_brief;


}; // Rsvp::PsbBriefs


class Rsvp::PsbBriefs::PsbBrief : public Entity
{
    public:
        PsbBrief();
        ~PsbBrief();

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

        class Session; //type: Rsvp::PsbBriefs::PsbBrief::Session
        class S2LSubLsp; //type: Rsvp::PsbBriefs::PsbBrief::S2LSubLsp
        class Template_; //type: Rsvp::PsbBriefs::PsbBrief::Template_
        class SessionAttribute; //type: Rsvp::PsbBriefs::PsbBrief::SessionAttribute
        class TrafficSpec; //type: Rsvp::PsbBriefs::PsbBrief::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::SessionAttribute> session_attribute;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_> template_;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::TrafficSpec> traffic_spec;


}; // Rsvp::PsbBriefs::PsbBrief


class Rsvp::PsbBriefs::PsbBrief::Session : public Entity
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



        class RsvpSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession> rsvp_session;


}; // Rsvp::PsbBriefs::PsbBrief::Session


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession : public Entity
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

        class Ipv4; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4 : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::PsbBriefs::PsbBrief::S2LSubLsp : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::S2LSubLsp


class Rsvp::PsbBriefs::PsbBrief::Template_ : public Entity
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



        class RsvpFilter; //type: Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter> rsvp_filter;


}; // Rsvp::PsbBriefs::PsbBrief::Template_


class Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter : public Entity
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

        class UdpIpv4Session; //type: Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter


class Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session


class Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session


class Rsvp::PsbBriefs::PsbBrief::SessionAttribute : public Entity
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

        class SessAttributeFlags; //type: Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


}; // Rsvp::PsbBriefs::PsbBrief::SessionAttribute


class Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags


class Rsvp::PsbBriefs::PsbBrief::TrafficSpec : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::TrafficSpec


class Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec : public Entity
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

        class G709OtnTspec; //type: Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec


class Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec


class Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec : public Entity
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



}; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec


class Rsvp::GlobalNeighborBriefs : public Entity
{
    public:
        GlobalNeighborBriefs();
        ~GlobalNeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalNeighborBrief; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief> > global_neighbor_brief;


}; // Rsvp::GlobalNeighborBriefs


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief : public Entity
{
    public:
        GlobalNeighborBrief();
        ~GlobalNeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_gr_enabled; //type: boolean
        YLeaf node_address; //type: string
        YLeaf restart_state; //type: RsvpMgmtRestartStateEnum
        YLeafList local_node_address; //type: list of  string
        YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
        YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
        YLeafList lost_communication_total; //type: list of  uint16

        class GlobalNeighborFlags; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags
        class UpTime; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime
        class LostCommunicationTime; //type: Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime> > lost_communication_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime> > up_time;


}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags : public Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_application_ouni; //type: boolean
        YLeaf is_application_mpls; //type: boolean



}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime : public Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime


class Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime : public Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime

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

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_ */

