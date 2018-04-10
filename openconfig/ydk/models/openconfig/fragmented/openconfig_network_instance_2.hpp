#ifndef _OPENCONFIG_NETWORK_INSTANCE_2_
#define _OPENCONFIG_NETWORK_INSTANCE_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_network_instance_0.hpp"
#include "openconfig_network_instance_1.hpp"

namespace openconfig {
namespace openconfig_network_instance {


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups : public ydk::Entity
{
    public:
        PeerGroups();
        ~PeerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerGroup; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup> > peer_group;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config::peer_group_name)
        ydk::YLeaf peer_group_name;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::State
        class Timers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers
        class Transport; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport
        class ErrorHandling; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart
        class LoggingOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions
        class EbgpMultihop; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop
        class RouteReflector; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector
        class AsPathOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions
        class AddPaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy
        class AfiSafis; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers> timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport> transport;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling> error_handling;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions> logging_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector> route_reflector;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths> add_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis> afi_safis;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_prefixes; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Timers::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of string, union

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of string, union

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::Transport::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling : public ydk::Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ErrorHandling::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions : public ydk::Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::LoggingOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector : public ydk::Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::RouteReflector::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions : public ydk::Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AsPathOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths : public ydk::Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AddPaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp
        class Ibgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp> ibgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafi; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi> > afi_safi;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart
        class RouteSelectionOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3VpnIpv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions : public ydk::Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp
        class Ibgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public ydk::Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public ydk::Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public ydk::Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public ydk::Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls : public ydk::Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn : public ydk::Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global
        class Levels; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels
        class Interfaces; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global> global;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels> levels;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces> interfaces;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State
        class LspBit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit
        class ReferenceBandwidth; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth
        class Nsr; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart
        class Timers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers
        class Transport; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport
        class Mpls; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls
        class IgpShortcuts; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts
        class AfiSafi; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi
        class SegmentRouting; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting
        class InterLevelPropagationPolicies; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit> lsp_bit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth> reference_bandwidth;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr> nsr;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers> timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport> transport;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls> mpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts> igp_shortcuts;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi> afi_safi;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting> segment_routing;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies> inter_level_propagation_policies;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authentication_check; //type: boolean
        ydk::YLeaf instance; //type: string
        ydk::YLeaf maximum_area_addresses; //type: uint8
        ydk::YLeaf level_capability; //type: LevelType
        ydk::YLeaf max_ecmp_paths; //type: uint8
        ydk::YLeaf poi_tlv; //type: boolean
        ydk::YLeaf iid_tlv; //type: boolean
        ydk::YLeaf fast_flooding; //type: boolean
        ydk::YLeafList net; //type: list of  string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authentication_check; //type: boolean
        ydk::YLeaf instance; //type: string
        ydk::YLeaf maximum_area_addresses; //type: uint8
        ydk::YLeaf level_capability; //type: LevelType
        ydk::YLeaf max_ecmp_paths; //type: uint8
        ydk::YLeaf poi_tlv; //type: boolean
        ydk::YLeaf iid_tlv; //type: boolean
        ydk::YLeaf fast_flooding; //type: boolean
        ydk::YLeafList net; //type: list of  string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit : public ydk::Entity
{
    public:
        LspBit();
        ~LspBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OverloadBit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit
        class AttachedBit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit> overload_bit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit> attached_bit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit : public ydk::Entity
{
    public:
        OverloadBit();
        ~OverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State
        class ResetTriggers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers> reset_triggers;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_bit; //type: boolean
        ydk::YLeaf set_bit_on_boot; //type: boolean
        ydk::YLeaf advertise_high_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_bit; //type: boolean
        ydk::YLeaf set_bit_on_boot; //type: boolean
        ydk::YLeaf advertise_high_metric; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers : public ydk::Entity
{
    public:
        ResetTriggers();
        ~ResetTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ResetTrigger; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger> > reset_trigger;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger : public ydk::Entity
{
    public:
        ResetTrigger();
        ~ResetTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reset_trigger; //type: OVERLOADRESETTRIGGERTYPE
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reset_trigger; //type: OVERLOADRESETTRIGGERTYPE
        ydk::YLeaf delay; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reset_trigger; //type: OVERLOADRESETTRIGGERTYPE
        ydk::YLeaf delay; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit : public ydk::Entity
{
    public:
        AttachedBit();
        ~AttachedBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_bit; //type: boolean
        ydk::YLeaf suppress_bit; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_bit; //type: boolean
        ydk::YLeaf suppress_bit; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth : public ydk::Entity
{
    public:
        ReferenceBandwidth();
        ~ReferenceBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_bandwidth; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_bandwidth; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart : public ydk::Entity
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

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State
        class Spf; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf
        class LspGeneration; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf> spf;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration> lsp_generation;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_lifetime_interval; //type: uint16
        ydk::YLeaf lsp_refresh_interval; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_lifetime_interval; //type: uint16
        ydk::YLeaf lsp_refresh_interval; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf : public ydk::Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_hold_interval; //type: uint64
        ydk::YLeaf spf_first_interval; //type: uint64
        ydk::YLeaf spf_second_interval; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_hold_interval; //type: uint64
        ydk::YLeaf spf_first_interval; //type: uint64
        ydk::YLeaf spf_second_interval; //type: uint64
        ydk::YLeaf adaptive_timer; //type: AdaptiveTimerType

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration : public ydk::Entity
{
    public:
        LspGeneration();
        ~LspGeneration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_max_wait_interval; //type: uint64
        ydk::YLeaf lsp_first_wait_interval; //type: uint64
        ydk::YLeaf lsp_second_wait_interval; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_2_ */

