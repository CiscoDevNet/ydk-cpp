#ifndef _CISCO_IOS_XR_IP_RIP_OPER_
#define _CISCO_IOS_XR_IP_RIP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rip_oper {

class Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

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

        class Vrfs; //type: Rip::Vrfs
        class Protocol; //type: Rip::Protocol
        class DefaultVrf; //type: Rip::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs> vrfs;
        
}; // Rip


class Rip::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Routes; //type: Rip::DefaultVrf::Routes
        class Configuration; //type: Rip::DefaultVrf::Configuration
        class Statistics; //type: Rip::DefaultVrf::Statistics
        class Interfaces; //type: Rip::DefaultVrf::Interfaces
        class Global; //type: Rip::DefaultVrf::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Configuration> configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Routes> routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Statistics> statistics;
        
}; // Rip::DefaultVrf


class Rip::DefaultVrf::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf active; //type: boolean
        ydk::YLeaf vr_fised_socket; //type: boolean
        ydk::YLeaf rip_version; //type: int32
        ydk::YLeaf default_metric; //type: uint8
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf auto_summarize; //type: boolean
        ydk::YLeaf multicast_address; //type: boolean
        ydk::YLeaf flash_threshold; //type: uint8
        ydk::YLeaf input_q_length; //type: uint16
        ydk::YLeaf triggered_rip; //type: boolean
        ydk::YLeaf validation_indicator; //type: boolean
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf nsf_status; //type: boolean
        ydk::YLeaf nsf_life_time; //type: uint32

}; // Rip::DefaultVrf::Configuration


class Rip::DefaultVrf::Global : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class VrfSummary; //type: Rip::DefaultVrf::Global::VrfSummary
        class InterfaceSummary; //type: Rip::DefaultVrf::Global::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Global::InterfaceSummary> > interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Global::VrfSummary> vrf_summary;
        
}; // Rip::DefaultVrf::Global


class Rip::DefaultVrf::Global::InterfaceSummary : public ydk::Entity
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
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf state; //type: InterfaceState
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf receive_version; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32

}; // Rip::DefaultVrf::Global::InterfaceSummary


class Rip::DefaultVrf::Global::VrfSummary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf interface_configured_count; //type: uint32
        ydk::YLeaf active_interface_count; //type: uint32

}; // Rip::DefaultVrf::Global::VrfSummary


class Rip::DefaultVrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Rip::DefaultVrf::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces::Interface> > interface;
        
}; // Rip::DefaultVrf::Interfaces


class Rip::DefaultVrf::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf rip_enabled; //type: boolean
        ydk::YLeaf is_passive_interface; //type: boolean
        ydk::YLeaf multicast_address; //type: boolean
        ydk::YLeaf accept_metric; //type: boolean
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf receive_version; //type: uint32
        ydk::YLeaf state; //type: InterfaceState
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf metric_cost; //type: uint32
        ydk::YLeaf split_horizon; //type: boolean
        ydk::YLeaf poison_horizon; //type: boolean
        ydk::YLeaf triggered_rip; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf join_status; //type: boolean
        ydk::YLeaf lpts_state; //type: boolean
        ydk::YLeaf auth_mode; //type: uint32
        ydk::YLeaf auth_keychain; //type: string
        ydk::YLeaf send_auth_key_exists; //type: boolean
        ydk::YLeaf auth_key_md5; //type: boolean
        ydk::YLeaf auth_key_send_id; //type: uint64
        ydk::YLeaf total_pkt_recvd; //type: uint32
        ydk::YLeaf pkt_drop_wrong_kc; //type: uint32
        ydk::YLeaf pkt_drop_no_auth; //type: uint32
        ydk::YLeaf pkt_drop_invalid_auth; //type: uint32
        ydk::YLeaf pkt_accepted_valid_auth; //type: uint32
        class RipSummary; //type: Rip::DefaultVrf::Interfaces::Interface::RipSummary
        class RipPeer; //type: Rip::DefaultVrf::Interfaces::Interface::RipPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces::Interface::RipPeer> > rip_peer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Interfaces::Interface::RipSummary> > rip_summary;
        
}; // Rip::DefaultVrf::Interfaces::Interface


class Rip::DefaultVrf::Interfaces::Interface::RipPeer : public ydk::Entity
{
    public:
        RipPeer();
        ~RipPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_uptime; //type: uint32
        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_version; //type: uint8
        ydk::YLeaf discarded_peer_packets; //type: uint32
        ydk::YLeaf discarded_peer_routes; //type: uint32

}; // Rip::DefaultVrf::Interfaces::Interface::RipPeer


class Rip::DefaultVrf::Interfaces::Interface::RipSummary : public ydk::Entity
{
    public:
        RipSummary();
        ~RipSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf metric; //type: int32

}; // Rip::DefaultVrf::Interfaces::Interface::RipSummary


class Rip::DefaultVrf::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Route; //type: Rip::DefaultVrf::Routes::Route

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Routes::Route> > route;
        
}; // Rip::DefaultVrf::Routes


class Rip::DefaultVrf::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint32
        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf bgp_count; //type: uint16
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf route_summary; //type: boolean
        ydk::YLeaf route_tag; //type: uint16
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf attributes; //type: uint32
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf path_origin; //type: RipRouteOrigin
        ydk::YLeaf hold_down; //type: boolean
        class Paths; //type: Rip::DefaultVrf::Routes::Route::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::DefaultVrf::Routes::Route::Paths> > paths;
        
}; // Rip::DefaultVrf::Routes::Route


class Rip::DefaultVrf::Routes::Route::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf metric; //type: uint16
        ydk::YLeaf tag; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_permanent; //type: boolean

}; // Rip::DefaultVrf::Routes::Route::Paths


class Rip::DefaultVrf::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf received_packets; //type: uint32
        ydk::YLeaf discarded_packets; //type: uint32
        ydk::YLeaf discarded_routes; //type: uint32
        ydk::YLeaf standby_packets_received; //type: uint32
        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_message_failures; //type: uint32
        ydk::YLeaf query_responses; //type: uint32
        ydk::YLeaf periodic_updates; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf route_malloc_failures; //type: uint32
        ydk::YLeaf path_malloc_failures; //type: uint32
        ydk::YLeaf rib_updates; //type: uint32

}; // Rip::DefaultVrf::Statistics


class Rip::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Process; //type: Rip::Protocol::Process
        class DefaultVrf; //type: Rip::Protocol::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::Process> process;
        
}; // Rip::Protocol


class Rip::Protocol::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Routes; //type: Rip::Protocol::DefaultVrf::Routes
        class Configuration; //type: Rip::Protocol::DefaultVrf::Configuration
        class Statistics; //type: Rip::Protocol::DefaultVrf::Statistics
        class Interfaces; //type: Rip::Protocol::DefaultVrf::Interfaces
        class Global; //type: Rip::Protocol::DefaultVrf::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Configuration> configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Routes> routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Statistics> statistics;
        
}; // Rip::Protocol::DefaultVrf


class Rip::Protocol::DefaultVrf::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf active; //type: boolean
        ydk::YLeaf vr_fised_socket; //type: boolean
        ydk::YLeaf rip_version; //type: int32
        ydk::YLeaf default_metric; //type: uint8
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf auto_summarize; //type: boolean
        ydk::YLeaf multicast_address; //type: boolean
        ydk::YLeaf flash_threshold; //type: uint8
        ydk::YLeaf input_q_length; //type: uint16
        ydk::YLeaf triggered_rip; //type: boolean
        ydk::YLeaf validation_indicator; //type: boolean
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf nsf_status; //type: boolean
        ydk::YLeaf nsf_life_time; //type: uint32

}; // Rip::Protocol::DefaultVrf::Configuration


class Rip::Protocol::DefaultVrf::Global : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class VrfSummary; //type: Rip::Protocol::DefaultVrf::Global::VrfSummary
        class InterfaceSummary; //type: Rip::Protocol::DefaultVrf::Global::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Global::InterfaceSummary> > interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Global::VrfSummary> vrf_summary;
        
}; // Rip::Protocol::DefaultVrf::Global


class Rip::Protocol::DefaultVrf::Global::InterfaceSummary : public ydk::Entity
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
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf state; //type: InterfaceState
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf receive_version; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32

}; // Rip::Protocol::DefaultVrf::Global::InterfaceSummary


class Rip::Protocol::DefaultVrf::Global::VrfSummary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf interface_configured_count; //type: uint32
        ydk::YLeaf active_interface_count; //type: uint32

}; // Rip::Protocol::DefaultVrf::Global::VrfSummary


class Rip::Protocol::DefaultVrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Rip::Protocol::DefaultVrf::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces::Interface> > interface;
        
}; // Rip::Protocol::DefaultVrf::Interfaces


class Rip::Protocol::DefaultVrf::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf rip_enabled; //type: boolean
        ydk::YLeaf is_passive_interface; //type: boolean
        ydk::YLeaf multicast_address; //type: boolean
        ydk::YLeaf accept_metric; //type: boolean
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf receive_version; //type: uint32
        ydk::YLeaf state; //type: InterfaceState
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf metric_cost; //type: uint32
        ydk::YLeaf split_horizon; //type: boolean
        ydk::YLeaf poison_horizon; //type: boolean
        ydk::YLeaf triggered_rip; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf join_status; //type: boolean
        ydk::YLeaf lpts_state; //type: boolean
        ydk::YLeaf auth_mode; //type: uint32
        ydk::YLeaf auth_keychain; //type: string
        ydk::YLeaf send_auth_key_exists; //type: boolean
        ydk::YLeaf auth_key_md5; //type: boolean
        ydk::YLeaf auth_key_send_id; //type: uint64
        ydk::YLeaf total_pkt_recvd; //type: uint32
        ydk::YLeaf pkt_drop_wrong_kc; //type: uint32
        ydk::YLeaf pkt_drop_no_auth; //type: uint32
        ydk::YLeaf pkt_drop_invalid_auth; //type: uint32
        ydk::YLeaf pkt_accepted_valid_auth; //type: uint32
        class RipSummary; //type: Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary
        class RipPeer; //type: Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer> > rip_peer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary> > rip_summary;
        
}; // Rip::Protocol::DefaultVrf::Interfaces::Interface


class Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer : public ydk::Entity
{
    public:
        RipPeer();
        ~RipPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_uptime; //type: uint32
        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_version; //type: uint8
        ydk::YLeaf discarded_peer_packets; //type: uint32
        ydk::YLeaf discarded_peer_routes; //type: uint32

}; // Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer


class Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary : public ydk::Entity
{
    public:
        RipSummary();
        ~RipSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf metric; //type: int32

}; // Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary


class Rip::Protocol::DefaultVrf::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Route; //type: Rip::Protocol::DefaultVrf::Routes::Route

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Routes::Route> > route;
        
}; // Rip::Protocol::DefaultVrf::Routes


class Rip::Protocol::DefaultVrf::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint32
        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf bgp_count; //type: uint16
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf route_summary; //type: boolean
        ydk::YLeaf route_tag; //type: uint16
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf attributes; //type: uint32
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf path_origin; //type: RipRouteOrigin
        ydk::YLeaf hold_down; //type: boolean
        class Paths; //type: Rip::Protocol::DefaultVrf::Routes::Route::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::DefaultVrf::Routes::Route::Paths> > paths;
        
}; // Rip::Protocol::DefaultVrf::Routes::Route


class Rip::Protocol::DefaultVrf::Routes::Route::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf metric; //type: uint16
        ydk::YLeaf tag; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_permanent; //type: boolean

}; // Rip::Protocol::DefaultVrf::Routes::Route::Paths


class Rip::Protocol::DefaultVrf::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf received_packets; //type: uint32
        ydk::YLeaf discarded_packets; //type: uint32
        ydk::YLeaf discarded_routes; //type: uint32
        ydk::YLeaf standby_packets_received; //type: uint32
        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_message_failures; //type: uint32
        ydk::YLeaf query_responses; //type: uint32
        ydk::YLeaf periodic_updates; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf route_malloc_failures; //type: uint32
        ydk::YLeaf path_malloc_failures; //type: uint32
        ydk::YLeaf rib_updates; //type: uint32

}; // Rip::Protocol::DefaultVrf::Statistics


class Rip::Protocol::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_config_count; //type: uint32
        ydk::YLeaf vrf_active_count; //type: uint32
        ydk::YLeaf socket_descriptor; //type: int32
        ydk::YLeaf current_oom_state; //type: int32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        class VrfSummary; //type: Rip::Protocol::Process::VrfSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Protocol::Process::VrfSummary> > vrf_summary;
        
}; // Rip::Protocol::Process


class Rip::Protocol::Process::VrfSummary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf interface_configured_count; //type: uint32
        ydk::YLeaf active_interface_count; //type: uint32

}; // Rip::Protocol::Process::VrfSummary


class Rip::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vrf; //type: Rip::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf> > vrf;
        
}; // Rip::Vrfs


class Rip::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Routes; //type: Rip::Vrfs::Vrf::Routes
        class Configuration; //type: Rip::Vrfs::Vrf::Configuration
        class Statistics; //type: Rip::Vrfs::Vrf::Statistics
        class Interfaces; //type: Rip::Vrfs::Vrf::Interfaces
        class Global; //type: Rip::Vrfs::Vrf::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Configuration> configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Routes> routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Statistics> statistics;
        
}; // Rip::Vrfs::Vrf


class Rip::Vrfs::Vrf::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: boolean
        ydk::YLeaf vr_fised_socket; //type: boolean
        ydk::YLeaf rip_version; //type: int32
        ydk::YLeaf default_metric; //type: uint8
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf auto_summarize; //type: boolean
        ydk::YLeaf multicast_address; //type: boolean
        ydk::YLeaf flash_threshold; //type: uint8
        ydk::YLeaf input_q_length; //type: uint16
        ydk::YLeaf triggered_rip; //type: boolean
        ydk::YLeaf validation_indicator; //type: boolean
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf nsf_status; //type: boolean
        ydk::YLeaf nsf_life_time; //type: uint32

}; // Rip::Vrfs::Vrf::Configuration


class Rip::Vrfs::Vrf::Global : public ydk::Entity
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

        class VrfSummary; //type: Rip::Vrfs::Vrf::Global::VrfSummary
        class InterfaceSummary; //type: Rip::Vrfs::Vrf::Global::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Global::InterfaceSummary> > interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Global::VrfSummary> vrf_summary;
        
}; // Rip::Vrfs::Vrf::Global


class Rip::Vrfs::Vrf::Global::InterfaceSummary : public ydk::Entity
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
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf state; //type: InterfaceState
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf receive_version; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32

}; // Rip::Vrfs::Vrf::Global::InterfaceSummary


class Rip::Vrfs::Vrf::Global::VrfSummary : public ydk::Entity
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
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf next_update_time; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf hold_down_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32
        ydk::YLeaf interface_configured_count; //type: uint32
        ydk::YLeaf active_interface_count; //type: uint32

}; // Rip::Vrfs::Vrf::Global::VrfSummary


class Rip::Vrfs::Vrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Rip::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Rip::Vrfs::Vrf::Interfaces


class Rip::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf rip_enabled; //type: boolean
        ydk::YLeaf is_passive_interface; //type: boolean
        ydk::YLeaf multicast_address; //type: boolean
        ydk::YLeaf accept_metric; //type: boolean
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf receive_version; //type: uint32
        ydk::YLeaf state; //type: InterfaceState
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf metric_cost; //type: uint32
        ydk::YLeaf split_horizon; //type: boolean
        ydk::YLeaf poison_horizon; //type: boolean
        ydk::YLeaf triggered_rip; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf oom_flags; //type: uint32
        ydk::YLeaf join_status; //type: boolean
        ydk::YLeaf lpts_state; //type: boolean
        ydk::YLeaf auth_mode; //type: uint32
        ydk::YLeaf auth_keychain; //type: string
        ydk::YLeaf send_auth_key_exists; //type: boolean
        ydk::YLeaf auth_key_md5; //type: boolean
        ydk::YLeaf auth_key_send_id; //type: uint64
        ydk::YLeaf total_pkt_recvd; //type: uint32
        ydk::YLeaf pkt_drop_wrong_kc; //type: uint32
        ydk::YLeaf pkt_drop_no_auth; //type: uint32
        ydk::YLeaf pkt_drop_invalid_auth; //type: uint32
        ydk::YLeaf pkt_accepted_valid_auth; //type: uint32
        class RipSummary; //type: Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary
        class RipPeer; //type: Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer> > rip_peer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary> > rip_summary;
        
}; // Rip::Vrfs::Vrf::Interfaces::Interface


class Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer : public ydk::Entity
{
    public:
        RipPeer();
        ~RipPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_uptime; //type: uint32
        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_version; //type: uint8
        ydk::YLeaf discarded_peer_packets; //type: uint32
        ydk::YLeaf discarded_peer_routes; //type: uint32

}; // Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer


class Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary : public ydk::Entity
{
    public:
        RipSummary();
        ~RipSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf metric; //type: int32

}; // Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary


class Rip::Vrfs::Vrf::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Rip::Vrfs::Vrf::Routes::Route

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Routes::Route> > route;
        
}; // Rip::Vrfs::Vrf::Routes


class Rip::Vrfs::Vrf::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint32
        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf bgp_count; //type: uint16
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf route_summary; //type: boolean
        ydk::YLeaf route_tag; //type: uint16
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf attributes; //type: uint32
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf path_origin; //type: RipRouteOrigin
        ydk::YLeaf hold_down; //type: boolean
        class Paths; //type: Rip::Vrfs::Vrf::Routes::Route::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_oper::Rip::Vrfs::Vrf::Routes::Route::Paths> > paths;
        
}; // Rip::Vrfs::Vrf::Routes::Route


class Rip::Vrfs::Vrf::Routes::Route::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf metric; //type: uint16
        ydk::YLeaf tag; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_permanent; //type: boolean

}; // Rip::Vrfs::Vrf::Routes::Route::Paths


class Rip::Vrfs::Vrf::Statistics : public ydk::Entity
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

        ydk::YLeaf received_packets; //type: uint32
        ydk::YLeaf discarded_packets; //type: uint32
        ydk::YLeaf discarded_routes; //type: uint32
        ydk::YLeaf standby_packets_received; //type: uint32
        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_message_failures; //type: uint32
        ydk::YLeaf query_responses; //type: uint32
        ydk::YLeaf periodic_updates; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf route_malloc_failures; //type: uint32
        ydk::YLeaf path_malloc_failures; //type: uint32
        ydk::YLeaf rib_updates; //type: uint32

}; // Rip::Vrfs::Vrf::Statistics

class InterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_none;
        static const ydk::Enum::YLeaf interface_down;
        static const ydk::Enum::YLeaf interface_up;
        static const ydk::Enum::YLeaf interface_unknown;

};

class RipRouteOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rip_rt_org_runover;
        static const ydk::Enum::YLeaf rip_rt_org_redist;
        static const ydk::Enum::YLeaf rip_rt_org_auto_summary;
        static const ydk::Enum::YLeaf rip_rt_org_rip;
        static const ydk::Enum::YLeaf rip_rt_org_intsummary;
        static const ydk::Enum::YLeaf rip_rt_org_unused;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RIP_OPER_ */

