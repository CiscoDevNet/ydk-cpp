#ifndef _CISCO_IOS_XR_IP_RIP_OPER_
#define _CISCO_IOS_XR_IP_RIP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_rip_oper {

class Rip : public Entity
{
    public:
        Rip();
        ~Rip();

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



        class Vrfs; //type: Rip::Vrfs
        class Protocol; //type: Rip::Protocol
        class DefaultVrf; //type: Rip::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs> vrfs;


}; // Rip


class Rip::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Rip::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf> > vrf;


}; // Rip::Vrfs


class Rip::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Routes; //type: Rip::Vrfs::Vrf::Routes
        class Configuration; //type: Rip::Vrfs::Vrf::Configuration
        class Statistics; //type: Rip::Vrfs::Vrf::Statistics
        class Interfaces; //type: Rip::Vrfs::Vrf::Interfaces
        class Global; //type: Rip::Vrfs::Vrf::Global

        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Routes> routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Statistics> statistics;


}; // Rip::Vrfs::Vrf


class Rip::Vrfs::Vrf::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Rip::Vrfs::Vrf::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Routes::Route> > route;


}; // Rip::Vrfs::Vrf::Routes


class Rip::Vrfs::Vrf::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf prefix_length_xr; //type: uint32
        YLeaf distance; //type: uint16
        YLeaf bgp_count; //type: uint16
        YLeaf route_type; //type: uint16
        YLeaf route_summary; //type: boolean
        YLeaf route_tag; //type: uint16
        YLeaf version; //type: uint8
        YLeaf attributes; //type: uint32
        YLeaf active; //type: boolean
        YLeaf path_origin; //type: RipRouteOriginEnum
        YLeaf hold_down; //type: boolean

        class Paths; //type: Rip::Vrfs::Vrf::Routes::Route::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Routes::Route::Paths> > paths;


}; // Rip::Vrfs::Vrf::Routes::Route


class Rip::Vrfs::Vrf::Routes::Route::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf metric; //type: uint16
        YLeaf tag; //type: uint16
        YLeaf interface; //type: string
        YLeaf uptime; //type: uint32
        YLeaf is_permanent; //type: boolean



}; // Rip::Vrfs::Vrf::Routes::Route::Paths


class Rip::Vrfs::Vrf::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: boolean
        YLeaf vr_fised_socket; //type: boolean
        YLeaf rip_version; //type: int32
        YLeaf default_metric; //type: uint8
        YLeaf maximum_paths; //type: uint8
        YLeaf auto_summarize; //type: boolean
        YLeaf multicast_address; //type: boolean
        YLeaf flash_threshold; //type: uint8
        YLeaf input_q_length; //type: uint16
        YLeaf triggered_rip; //type: boolean
        YLeaf validation_indicator; //type: boolean
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf oom_flags; //type: uint32
        YLeaf nsf_status; //type: boolean
        YLeaf nsf_life_time; //type: uint32



}; // Rip::Vrfs::Vrf::Configuration


class Rip::Vrfs::Vrf::Statistics : public Entity
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


        YLeaf received_packets; //type: uint32
        YLeaf discarded_packets; //type: uint32
        YLeaf discarded_routes; //type: uint32
        YLeaf standby_packets_received; //type: uint32
        YLeaf sent_messages; //type: uint32
        YLeaf sent_message_failures; //type: uint32
        YLeaf query_responses; //type: uint32
        YLeaf periodic_updates; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf route_malloc_failures; //type: uint32
        YLeaf path_malloc_failures; //type: uint32
        YLeaf rib_updates; //type: uint32



}; // Rip::Vrfs::Vrf::Statistics


class Rip::Vrfs::Vrf::Interfaces : public Entity
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



        class Interface; //type: Rip::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces::Interface> > interface;


}; // Rip::Vrfs::Vrf::Interfaces


class Rip::Vrfs::Vrf::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf if_handle; //type: string
        YLeaf rip_enabled; //type: boolean
        YLeaf is_passive_interface; //type: boolean
        YLeaf multicast_address; //type: boolean
        YLeaf accept_metric; //type: boolean
        YLeaf send_version; //type: uint32
        YLeaf receive_version; //type: uint32
        YLeaf state; //type: InterfaceStateEnum
        YLeaf destination_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf metric_cost; //type: uint32
        YLeaf split_horizon; //type: boolean
        YLeaf poison_horizon; //type: boolean
        YLeaf triggered_rip; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf oom_flags; //type: uint32
        YLeaf join_status; //type: boolean
        YLeaf lpts_state; //type: boolean
        YLeaf auth_mode; //type: uint32
        YLeaf auth_keychain; //type: string
        YLeaf send_auth_key_exists; //type: boolean
        YLeaf auth_key_md5; //type: boolean
        YLeaf auth_key_send_id; //type: uint64
        YLeaf total_pkt_recvd; //type: uint32
        YLeaf pkt_drop_wrong_kc; //type: uint32
        YLeaf pkt_drop_no_auth; //type: uint32
        YLeaf pkt_drop_invalid_auth; //type: uint32
        YLeaf pkt_accepted_valid_auth; //type: uint32

        class RipSummary; //type: Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary
        class RipPeer; //type: Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer> > rip_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary> > rip_summary;


}; // Rip::Vrfs::Vrf::Interfaces::Interface


class Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary : public Entity
{
    public:
        RipSummary();
        ~RipSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf metric; //type: int32



}; // Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary


class Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer : public Entity
{
    public:
        RipPeer();
        ~RipPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_uptime; //type: uint32
        YLeaf peer_address; //type: string
        YLeaf peer_version; //type: uint8
        YLeaf discarded_peer_packets; //type: uint32
        YLeaf discarded_peer_routes; //type: uint32



}; // Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer


class Rip::Vrfs::Vrf::Global : public Entity
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



        class VrfSummary; //type: Rip::Vrfs::Vrf::Global::VrfSummary
        class InterfaceSummary; //type: Rip::Vrfs::Vrf::Global::InterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Global::InterfaceSummary> > interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Global::VrfSummary> vrf_summary;


}; // Rip::Vrfs::Vrf::Global


class Rip::Vrfs::Vrf::Global::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf active; //type: boolean
        YLeaf oom_flags; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf interface_configured_count; //type: uint32
        YLeaf active_interface_count; //type: uint32



}; // Rip::Vrfs::Vrf::Global::VrfSummary


class Rip::Vrfs::Vrf::Global::InterfaceSummary : public Entity
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
        YLeaf enabled; //type: boolean
        YLeaf state; //type: InterfaceStateEnum
        YLeaf destination_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf oom_flags; //type: uint32
        YLeaf send_version; //type: uint32
        YLeaf receive_version; //type: uint32
        YLeaf neighbor_count; //type: uint32



}; // Rip::Vrfs::Vrf::Global::InterfaceSummary


class Rip::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Process; //type: Rip::Protocol::Process
        class DefaultVrf; //type: Rip::Protocol::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::Process> process;


}; // Rip::Protocol


class Rip::Protocol::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_config_count; //type: uint32
        YLeaf vrf_active_count; //type: uint32
        YLeaf socket_descriptor; //type: int32
        YLeaf current_oom_state; //type: int32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32

        class VrfSummary; //type: Rip::Protocol::Process::VrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::Process::VrfSummary> > vrf_summary;


}; // Rip::Protocol::Process


class Rip::Protocol::Process::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf active; //type: boolean
        YLeaf oom_flags; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf interface_configured_count; //type: uint32
        YLeaf active_interface_count; //type: uint32



}; // Rip::Protocol::Process::VrfSummary


class Rip::Protocol::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routes; //type: Rip::Protocol::DefaultVrf::Routes
        class Configuration; //type: Rip::Protocol::DefaultVrf::Configuration
        class Statistics; //type: Rip::Protocol::DefaultVrf::Statistics
        class Interfaces; //type: Rip::Protocol::DefaultVrf::Interfaces
        class Global; //type: Rip::Protocol::DefaultVrf::Global

        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Routes> routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Statistics> statistics;


}; // Rip::Protocol::DefaultVrf


class Rip::Protocol::DefaultVrf::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Rip::Protocol::DefaultVrf::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Routes::Route> > route;


}; // Rip::Protocol::DefaultVrf::Routes


class Rip::Protocol::DefaultVrf::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf prefix_length_xr; //type: uint32
        YLeaf distance; //type: uint16
        YLeaf bgp_count; //type: uint16
        YLeaf route_type; //type: uint16
        YLeaf route_summary; //type: boolean
        YLeaf route_tag; //type: uint16
        YLeaf version; //type: uint8
        YLeaf attributes; //type: uint32
        YLeaf active; //type: boolean
        YLeaf path_origin; //type: RipRouteOriginEnum
        YLeaf hold_down; //type: boolean

        class Paths; //type: Rip::Protocol::DefaultVrf::Routes::Route::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Routes::Route::Paths> > paths;


}; // Rip::Protocol::DefaultVrf::Routes::Route


class Rip::Protocol::DefaultVrf::Routes::Route::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf metric; //type: uint16
        YLeaf tag; //type: uint16
        YLeaf interface; //type: string
        YLeaf uptime; //type: uint32
        YLeaf is_permanent; //type: boolean



}; // Rip::Protocol::DefaultVrf::Routes::Route::Paths


class Rip::Protocol::DefaultVrf::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: boolean
        YLeaf vr_fised_socket; //type: boolean
        YLeaf rip_version; //type: int32
        YLeaf default_metric; //type: uint8
        YLeaf maximum_paths; //type: uint8
        YLeaf auto_summarize; //type: boolean
        YLeaf multicast_address; //type: boolean
        YLeaf flash_threshold; //type: uint8
        YLeaf input_q_length; //type: uint16
        YLeaf triggered_rip; //type: boolean
        YLeaf validation_indicator; //type: boolean
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf oom_flags; //type: uint32
        YLeaf nsf_status; //type: boolean
        YLeaf nsf_life_time; //type: uint32



}; // Rip::Protocol::DefaultVrf::Configuration


class Rip::Protocol::DefaultVrf::Statistics : public Entity
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


        YLeaf received_packets; //type: uint32
        YLeaf discarded_packets; //type: uint32
        YLeaf discarded_routes; //type: uint32
        YLeaf standby_packets_received; //type: uint32
        YLeaf sent_messages; //type: uint32
        YLeaf sent_message_failures; //type: uint32
        YLeaf query_responses; //type: uint32
        YLeaf periodic_updates; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf route_malloc_failures; //type: uint32
        YLeaf path_malloc_failures; //type: uint32
        YLeaf rib_updates; //type: uint32



}; // Rip::Protocol::DefaultVrf::Statistics


class Rip::Protocol::DefaultVrf::Interfaces : public Entity
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



        class Interface; //type: Rip::Protocol::DefaultVrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces::Interface> > interface;


}; // Rip::Protocol::DefaultVrf::Interfaces


class Rip::Protocol::DefaultVrf::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf if_handle; //type: string
        YLeaf rip_enabled; //type: boolean
        YLeaf is_passive_interface; //type: boolean
        YLeaf multicast_address; //type: boolean
        YLeaf accept_metric; //type: boolean
        YLeaf send_version; //type: uint32
        YLeaf receive_version; //type: uint32
        YLeaf state; //type: InterfaceStateEnum
        YLeaf destination_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf metric_cost; //type: uint32
        YLeaf split_horizon; //type: boolean
        YLeaf poison_horizon; //type: boolean
        YLeaf triggered_rip; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf oom_flags; //type: uint32
        YLeaf join_status; //type: boolean
        YLeaf lpts_state; //type: boolean
        YLeaf auth_mode; //type: uint32
        YLeaf auth_keychain; //type: string
        YLeaf send_auth_key_exists; //type: boolean
        YLeaf auth_key_md5; //type: boolean
        YLeaf auth_key_send_id; //type: uint64
        YLeaf total_pkt_recvd; //type: uint32
        YLeaf pkt_drop_wrong_kc; //type: uint32
        YLeaf pkt_drop_no_auth; //type: uint32
        YLeaf pkt_drop_invalid_auth; //type: uint32
        YLeaf pkt_accepted_valid_auth; //type: uint32

        class RipSummary; //type: Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary
        class RipPeer; //type: Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer> > rip_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary> > rip_summary;


}; // Rip::Protocol::DefaultVrf::Interfaces::Interface


class Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary : public Entity
{
    public:
        RipSummary();
        ~RipSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf metric; //type: int32



}; // Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary


class Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer : public Entity
{
    public:
        RipPeer();
        ~RipPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_uptime; //type: uint32
        YLeaf peer_address; //type: string
        YLeaf peer_version; //type: uint8
        YLeaf discarded_peer_packets; //type: uint32
        YLeaf discarded_peer_routes; //type: uint32



}; // Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer


class Rip::Protocol::DefaultVrf::Global : public Entity
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



        class VrfSummary; //type: Rip::Protocol::DefaultVrf::Global::VrfSummary
        class InterfaceSummary; //type: Rip::Protocol::DefaultVrf::Global::InterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Global::InterfaceSummary> > interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Global::VrfSummary> vrf_summary;


}; // Rip::Protocol::DefaultVrf::Global


class Rip::Protocol::DefaultVrf::Global::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf active; //type: boolean
        YLeaf oom_flags; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf interface_configured_count; //type: uint32
        YLeaf active_interface_count; //type: uint32



}; // Rip::Protocol::DefaultVrf::Global::VrfSummary


class Rip::Protocol::DefaultVrf::Global::InterfaceSummary : public Entity
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
        YLeaf enabled; //type: boolean
        YLeaf state; //type: InterfaceStateEnum
        YLeaf destination_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf oom_flags; //type: uint32
        YLeaf send_version; //type: uint32
        YLeaf receive_version; //type: uint32
        YLeaf neighbor_count; //type: uint32



}; // Rip::Protocol::DefaultVrf::Global::InterfaceSummary


class Rip::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routes; //type: Rip::DefaultVrf::Routes
        class Configuration; //type: Rip::DefaultVrf::Configuration
        class Statistics; //type: Rip::DefaultVrf::Statistics
        class Interfaces; //type: Rip::DefaultVrf::Interfaces
        class Global; //type: Rip::DefaultVrf::Global

        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Routes> routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Statistics> statistics;


}; // Rip::DefaultVrf


class Rip::DefaultVrf::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Rip::DefaultVrf::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Routes::Route> > route;


}; // Rip::DefaultVrf::Routes


class Rip::DefaultVrf::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf prefix_length_xr; //type: uint32
        YLeaf distance; //type: uint16
        YLeaf bgp_count; //type: uint16
        YLeaf route_type; //type: uint16
        YLeaf route_summary; //type: boolean
        YLeaf route_tag; //type: uint16
        YLeaf version; //type: uint8
        YLeaf attributes; //type: uint32
        YLeaf active; //type: boolean
        YLeaf path_origin; //type: RipRouteOriginEnum
        YLeaf hold_down; //type: boolean

        class Paths; //type: Rip::DefaultVrf::Routes::Route::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Routes::Route::Paths> > paths;


}; // Rip::DefaultVrf::Routes::Route


class Rip::DefaultVrf::Routes::Route::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf metric; //type: uint16
        YLeaf tag; //type: uint16
        YLeaf interface; //type: string
        YLeaf uptime; //type: uint32
        YLeaf is_permanent; //type: boolean



}; // Rip::DefaultVrf::Routes::Route::Paths


class Rip::DefaultVrf::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: boolean
        YLeaf vr_fised_socket; //type: boolean
        YLeaf rip_version; //type: int32
        YLeaf default_metric; //type: uint8
        YLeaf maximum_paths; //type: uint8
        YLeaf auto_summarize; //type: boolean
        YLeaf multicast_address; //type: boolean
        YLeaf flash_threshold; //type: uint8
        YLeaf input_q_length; //type: uint16
        YLeaf triggered_rip; //type: boolean
        YLeaf validation_indicator; //type: boolean
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf oom_flags; //type: uint32
        YLeaf nsf_status; //type: boolean
        YLeaf nsf_life_time; //type: uint32



}; // Rip::DefaultVrf::Configuration


class Rip::DefaultVrf::Statistics : public Entity
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


        YLeaf received_packets; //type: uint32
        YLeaf discarded_packets; //type: uint32
        YLeaf discarded_routes; //type: uint32
        YLeaf standby_packets_received; //type: uint32
        YLeaf sent_messages; //type: uint32
        YLeaf sent_message_failures; //type: uint32
        YLeaf query_responses; //type: uint32
        YLeaf periodic_updates; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf route_malloc_failures; //type: uint32
        YLeaf path_malloc_failures; //type: uint32
        YLeaf rib_updates; //type: uint32



}; // Rip::DefaultVrf::Statistics


class Rip::DefaultVrf::Interfaces : public Entity
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



        class Interface; //type: Rip::DefaultVrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces::Interface> > interface;


}; // Rip::DefaultVrf::Interfaces


class Rip::DefaultVrf::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf if_handle; //type: string
        YLeaf rip_enabled; //type: boolean
        YLeaf is_passive_interface; //type: boolean
        YLeaf multicast_address; //type: boolean
        YLeaf accept_metric; //type: boolean
        YLeaf send_version; //type: uint32
        YLeaf receive_version; //type: uint32
        YLeaf state; //type: InterfaceStateEnum
        YLeaf destination_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf metric_cost; //type: uint32
        YLeaf split_horizon; //type: boolean
        YLeaf poison_horizon; //type: boolean
        YLeaf triggered_rip; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf oom_flags; //type: uint32
        YLeaf join_status; //type: boolean
        YLeaf lpts_state; //type: boolean
        YLeaf auth_mode; //type: uint32
        YLeaf auth_keychain; //type: string
        YLeaf send_auth_key_exists; //type: boolean
        YLeaf auth_key_md5; //type: boolean
        YLeaf auth_key_send_id; //type: uint64
        YLeaf total_pkt_recvd; //type: uint32
        YLeaf pkt_drop_wrong_kc; //type: uint32
        YLeaf pkt_drop_no_auth; //type: uint32
        YLeaf pkt_drop_invalid_auth; //type: uint32
        YLeaf pkt_accepted_valid_auth; //type: uint32

        class RipSummary; //type: Rip::DefaultVrf::Interfaces::Interface::RipSummary
        class RipPeer; //type: Rip::DefaultVrf::Interfaces::Interface::RipPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces::Interface::RipPeer> > rip_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces::Interface::RipSummary> > rip_summary;


}; // Rip::DefaultVrf::Interfaces::Interface


class Rip::DefaultVrf::Interfaces::Interface::RipSummary : public Entity
{
    public:
        RipSummary();
        ~RipSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf metric; //type: int32



}; // Rip::DefaultVrf::Interfaces::Interface::RipSummary


class Rip::DefaultVrf::Interfaces::Interface::RipPeer : public Entity
{
    public:
        RipPeer();
        ~RipPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_uptime; //type: uint32
        YLeaf peer_address; //type: string
        YLeaf peer_version; //type: uint8
        YLeaf discarded_peer_packets; //type: uint32
        YLeaf discarded_peer_routes; //type: uint32



}; // Rip::DefaultVrf::Interfaces::Interface::RipPeer


class Rip::DefaultVrf::Global : public Entity
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



        class VrfSummary; //type: Rip::DefaultVrf::Global::VrfSummary
        class InterfaceSummary; //type: Rip::DefaultVrf::Global::InterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Global::InterfaceSummary> > interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Global::VrfSummary> vrf_summary;


}; // Rip::DefaultVrf::Global


class Rip::DefaultVrf::Global::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf active; //type: boolean
        YLeaf oom_flags; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf update_timer; //type: uint32
        YLeaf next_update_time; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf hold_down_timer; //type: uint32
        YLeaf flush_timer; //type: uint32
        YLeaf interface_configured_count; //type: uint32
        YLeaf active_interface_count; //type: uint32



}; // Rip::DefaultVrf::Global::VrfSummary


class Rip::DefaultVrf::Global::InterfaceSummary : public Entity
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
        YLeaf enabled; //type: boolean
        YLeaf state; //type: InterfaceStateEnum
        YLeaf destination_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf oom_flags; //type: uint32
        YLeaf send_version; //type: uint32
        YLeaf receive_version; //type: uint32
        YLeaf neighbor_count; //type: uint32



}; // Rip::DefaultVrf::Global::InterfaceSummary

class RipRouteOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf rip_rt_org_runover;
        static const Enum::YLeaf rip_rt_org_redist;
        static const Enum::YLeaf rip_rt_org_auto_summary;
        static const Enum::YLeaf rip_rt_org_rip;
        static const Enum::YLeaf rip_rt_org_intsummary;
        static const Enum::YLeaf rip_rt_org_unused;

};

class InterfaceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf interface_none;
        static const Enum::YLeaf interface_down;
        static const Enum::YLeaf interface_up;
        static const Enum::YLeaf interface_unknown;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RIP_OPER_ */

