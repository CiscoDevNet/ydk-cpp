#ifndef _CISCO_IOS_XR_IPV4_BGP_CFG_2_
#define _CISCO_IOS_XR_IPV4_BGP_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval : public Entity
{
    public:
        AdvertisementInterval();
        ~AdvertisementInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_interval; //type: uint32
        YLeaf minimum_interval_msecs; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId : public Entity
{
    public:
        NeighborClusterId();
        ~NeighborClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_number; //type: uint32
        YLeaf cluster_id_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss : public Entity
{
    public:
        Tcpmss();
        ~Tcpmss();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcpmss_disable; //type: boolean
        YLeaf mss; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpTosEnum
        YLeaf value_; //type: one of uint32, enumeration



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering : public Entity
{
    public:
        UpdateInFiltering();
        ~UpdateInFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf update_in_filtering_attribute_filter_group; //type: string
        YLeaf update_in_filtering_syslog_disable; //type: empty

        class UpdateInFilteringMessageBuffers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers : public Entity
{
    public:
        UpdateInFilteringMessageBuffers();
        ~UpdateInFilteringMessageBuffers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_of_buffers; //type: uint32
        YLeaf non_circular_buffer; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut : public Entity
{
    public:
        MsgLogOut();
        ~MsgLogOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize : public Entity
{
    public:
        ReceiveBufferSize();
        ~ReceiveBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_receive_size; //type: uint32
        YLeaf bgp_receive_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn : public Entity
{
    public:
        MsgLogIn();
        ~MsgLogIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_log_disable; //type: boolean
        YLeaf msg_log_inherit_disable; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize : public Entity
{
    public:
        SendBufferSize();
        ~SendBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_send_size; //type: uint32
        YLeaf bgp_send_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keepalive_interval; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf min_accept_hold_time; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain : public Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keychain_disable; //type: boolean
        YLeaf keychain_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance : public Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf graceful_maintenance_activate; //type: boolean

        class GracefulMaintenanceLocalPreference; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference
        class GracefulMaintenanceAsPrepends; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference : public Entity
{
    public:
        GracefulMaintenanceLocalPreference();
        ~GracefulMaintenanceLocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_loc_pref_disable; //type: boolean
        YLeaf local_preference; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends : public Entity
{
    public:
        GracefulMaintenanceAsPrepends();
        ~GracefulMaintenanceAsPrepends();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_prepends_disable; //type: boolean
        YLeaf as_prepends; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global : public Entity
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


        YLeaf graceful_restart; //type: empty
        YLeaf update_out_logging; //type: empty
        YLeaf install_diversion; //type: empty
        YLeaf next_hop_trigger_delay; //type: uint32
        YLeaf nsr; //type: boolean
        YLeaf neighbor_logging_detail; //type: empty
        YLeaf mvpn; //type: empty
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf rpki_origin_as_validity_signal_ibgp; //type: empty
        YLeaf global_scan_time; //type: uint32
        YLeaf rpki_bestpath_use_origin_as_validity; //type: empty
        YLeaf rpki_origin_as_validation_time; //type: uint32
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf graceful_restart_purge_time; //type: uint32
        YLeaf enforce_ibgp_out_policy; //type: empty
        YLeaf update_limit_process; //type: uint32
        YLeaf graceful_restart_time; //type: uint32
        YLeaf update_error_handling_basic_ibgp_disable; //type: empty
        YLeaf read_only; //type: empty
        YLeaf graceful_restart_stalepath_time; //type: uint32
        YLeaf update_error_handling_extended_ebgp; //type: empty
        YLeaf update_error_handling_basic_ebgp_disable; //type: empty
        YLeaf graceful_reset; //type: empty
        YLeaf igp_loop_check; //type: empty
        YLeaf update_error_handling_extended_ibgp; //type: empty
        YLeaf router_id; //type: string
        YLeaf disable_enforce_first_as; //type: empty
        YLeaf best_path_cost_community; //type: empty
        YLeaf best_path_aigp_ignore; //type: empty
        YLeaf best_path_as_path_length; //type: empty
        YLeaf igp_redist_internal; //type: empty
        YLeaf multi_path_as_path_ignore_onwards; //type: empty
        YLeaf disable_fast_external_fallover; //type: empty
        YLeaf default_metric; //type: uint32
        YLeaf default_info_originate; //type: empty
        YLeaf best_path_confederation_paths; //type: empty
        YLeaf best_path_as_multipath_relax; //type: empty
        YLeaf disable_auto_soft_reset; //type: empty
        YLeaf disable_msg_log; //type: empty
        YLeaf disable_neighbor_logging; //type: empty
        YLeaf best_path_med_always; //type: empty
        YLeaf best_path_router_id; //type: empty
        YLeaf best_path_med_missing; //type: empty
        YLeaf local_preference; //type: uint32

        class ClusterId; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId
        class WriteLimit; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit
        class UpdateDelay; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay
        class AsLeague; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague
        class RpkiServers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers
        class AsListGroups; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups
        class Limits; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits
        class ConfederationDomain; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain
        class ConfederationPeerAses; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses
        class AttributeFilterGroups; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups
        class GlobalGracefulMaintenanceActivate; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate
        class GlobalAfs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs
        class RpkiStaticRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes
        class MplsActivatedInterfaces; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces
        class GlobalTimers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers
        class Bfd; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd
        class SendSocketBufferSizes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes
        class ReceiveSocketBufferSizes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague> as_league;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups> as_list_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups> attribute_filter_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId> cluster_id;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain> confederation_domain;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses> confederation_peer_ases;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs> global_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate> global_graceful_maintenance_activate;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers> global_timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits> limits;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces> mpls_activated_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes> receive_socket_buffer_sizes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers> rpki_servers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes> rpki_static_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes> send_socket_buffer_sizes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay> update_delay;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit> write_limit;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId : public Entity
{
    public:
        ClusterId();
        ~ClusterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_number; //type: uint32
        YLeaf cluster_id_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit : public Entity
{
    public:
        WriteLimit();
        ~WriteLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf formatted_messages; //type: uint32
        YLeaf enqueued_messages; //type: uint32
        YLeaf desynchronize; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay : public Entity
{
    public:
        UpdateDelay();
        ~UpdateDelay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf delay; //type: uint32
        YLeaf always; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague : public Entity
{
    public:
        AsLeague();
        ~AsLeague();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Peers; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers> peers;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer> > peer;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers : public Entity
{
    public:
        RpkiServers();
        ~RpkiServers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpkiServer; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer> > rpki_server;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer : public Entity
{
    public:
        RpkiServer();
        ~RpkiServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server; //type: string
        YLeaf enable; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf password; //type: string
        YLeaf response_time; //type: int32
        YLeaf username; //type: string
        YLeaf refresh_time; //type: int32
        YLeaf purge_time; //type: int32

        class Transport; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport> transport;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transport; //type: BgpRpkiTransportEnum
        YLeaf port; //type: uint16



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups : public Entity
{
    public:
        AsListGroups();
        ~AsListGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsListGroup; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup> > as_list_group;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup : public Entity
{
    public:
        AsListGroup();
        ~AsListGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_list_group_name; //type: string
        YLeaf enable; //type: empty

        class Ases; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases> ases;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases : public Entity
{
    public:
        Ases();
        ~Ases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class As; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As> > as;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits : public Entity
{
    public:
        Limits();
        ~Limits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_neighbors; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain : public Entity
{
    public:
        ConfederationDomain();
        ~ConfederationDomain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses : public Entity
{
    public:
        ConfederationPeerAses();
        ~ConfederationPeerAses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConfederationPeerAs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs> > confederation_peer_as;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs : public Entity
{
    public:
        ConfederationPeerAs();
        ~ConfederationPeerAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups : public Entity
{
    public:
        AttributeFilterGroups();
        ~AttributeFilterGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AttributeFilterGroup; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup> > attribute_filter_group;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup : public Entity
{
    public:
        AttributeFilterGroup();
        ~AttributeFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_filter_group_name; //type: string
        YLeaf enable; //type: empty

        class AttributeFilters; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters> attribute_filters;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters : public Entity
{
    public:
        AttributeFilters();
        ~AttributeFilters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AttributeFilter; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter> > attribute_filter;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter : public Entity
{
    public:
        AttributeFilter();
        ~AttributeFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_start; //type: uint32
        YLeaf attribute_end; //type: uint32
        YLeaf filter_action; //type: BgpUpdateFilterActionEnum



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate : public Entity
{
    public:
        GlobalGracefulMaintenanceActivate();
        ~GlobalGracefulMaintenanceActivate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_neighbors; //type: boolean
        YLeaf retain_routes; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs : public Entity
{
    public:
        GlobalAfs();
        ~GlobalAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalAf; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf> > global_af;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf : public Entity
{
    public:
        GlobalAf();
        ~GlobalAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum
        YLeaf inter_as_install; //type: empty
        YLeaf segmented_mcast; //type: empty
        YLeaf disable_default_martian_check; //type: empty
        YLeaf next_hop_critical_trigger_delay; //type: uint32
        YLeaf next_hop_non_critical_trigger_delay; //type: uint32
        YLeaf label_security_rpf; //type: empty
        YLeaf use_igpsr_label; //type: empty
        YLeaf label_retain; //type: uint32
        YLeaf scan_time; //type: uint32
        YLeaf rpki_origin_as_validation_disable; //type: empty
        YLeaf rpki_origin_as_validity_signal_ibgp; //type: empty
        YLeaf update_limit_sub_group_ebgp; //type: uint32
        YLeaf update_limit_address_family; //type: uint32
        YLeaf rpki_bestpath_use_origin_as_validity; //type: empty
        YLeaf update_limit_sub_group_ibgp; //type: uint32
        YLeaf rpki_bestpath_origin_as_allow_invalid; //type: empty
        YLeaf disable_client_to_client_rr; //type: empty
        YLeaf next_hop_route_policy; //type: string
        YLeaf global_table_mcast; //type: empty
        YLeaf wait_rib_install; //type: empty
        YLeaf dynamic_med_interval; //type: uint32
        YLeaf enable; //type: empty
        YLeaf table_policy; //type: string
        YLeaf attribute_download; //type: empty
        YLeaf best_external; //type: boolean
        YLeaf additional_paths_receive; //type: BgpafAdditionalPathsCfgEnum
        YLeaf permanent_network; //type: string
        YLeaf next_hop_resolution_prefix_length_minimum; //type: uint32
        YLeaf reset_weight_on_import; //type: boolean
        YLeaf additional_paths_send; //type: BgpafAdditionalPathsCfgEnum
        YLeaf advertise_local_labeled_route_safi_unicast; //type: BgpAdvertiseLocalLabeledRouteCfgEnum
        YLeaf disable_as_path_loop_check; //type: empty

        class IsisRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes
        class DomainDistinguisher; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher
        class VrfAll; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll
        class ApplicationRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes
        class DisableClusterClientToClientRrs; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs
        class LabelDelay; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay
        class Ebgp; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp
        class Eibgp; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp
        class RetainRt; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt
        class Ibgp; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp
        class ImportDelay; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay
        class AggregateAddresses; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses
        class Dampening; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening
        class RipRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes
        class LispRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes
        class StaticRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes
        class Distance; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance
        class LabelMode; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode
        class EigrpRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes
        class SourcedNetworks; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks
        class ConnectedRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes
        class AllocateLabel; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel
        class AdditionalPathsSelection; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection
        class OspfRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes
        class MobileRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes
        class SubscriberRoutes; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection> additional_paths_selection;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses> aggregate_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel> allocate_label;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes> application_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes> connected_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs> disable_cluster_client_to_client_rrs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance> distance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher> domain_distinguisher; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp> ebgp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp> eibgp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes> eigrp_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp> ibgp; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay> import_delay; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes> isis_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay> label_delay; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode> label_mode;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes> lisp_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes> mobile_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes> ospf_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt> retain_rt;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes> rip_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks> sourced_networks;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes> static_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes> subscriber_routes; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll> vrf_all;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes : public Entity
{
    public:
        IsisRoutes();
        ~IsisRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IsisRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute> > isis_route;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute : public Entity
{
    public:
        IsisRoute();
        ~IsisRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf redist_type; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher : public Entity
{
    public:
        DomainDistinguisher();
        ~DomainDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: uint32
        YLeaf router_id; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll : public Entity
{
    public:
        VrfAll();
        ~VrfAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf table_policy; //type: string
        YLeaf source_rt_import_policy; //type: empty

        class LabelMode; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode> label_mode;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode : public Entity
{
    public:
        LabelMode();
        ~LabelMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_allocation_mode; //type: string
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes : public Entity
{
    public:
        ApplicationRoutes();
        ~ApplicationRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute> > application_route;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute : public Entity
{
    public:
        ApplicationRoute();
        ~ApplicationRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf not_used; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs : public Entity
{
    public:
        DisableClusterClientToClientRrs();
        ~DisableClusterClientToClientRrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DisableClusterClientToClientRr; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr> > disable_cluster_client_to_client_rr;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr : public Entity
{
    public:
        DisableClusterClientToClientRr();
        ~DisableClusterClientToClientRr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_type; //type: BgpClusterIdEnum

        class Number; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number
        class Ipv4Address; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address> > ipv4_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number> > number;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number : public Entity
{
    public:
        Number();
        ~Number();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_number; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_address; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay : public Entity
{
    public:
        LabelDelay();
        ~LabelDelay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf milliseconds; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf paths_value; //type: uint32
        YLeaf unequal_cost; //type: boolean
        YLeaf selective; //type: boolean
        YLeaf order_by_igp_metric; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp : public Entity
{
    public:
        Eibgp();
        ~Eibgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf paths_value; //type: uint32
        YLeaf unequal_cost; //type: boolean
        YLeaf selective; //type: boolean
        YLeaf order_by_igp_metric; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt : public Entity
{
    public:
        RetainRt();
        ~RetainRt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf paths_value; //type: uint32
        YLeaf unequal_cost; //type: boolean
        YLeaf selective; //type: boolean
        YLeaf order_by_igp_metric; //type: boolean



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay : public Entity
{
    public:
        ImportDelay();
        ~ImportDelay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf milliseconds; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses : public Entity
{
    public:
        AggregateAddresses();
        ~AggregateAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AggregateAddress; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress> > aggregate_address;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress : public Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aggregate_addr; //type: string
        YLeaf aggregate_prefix; //type: uint16
        YLeaf generate_set_info; //type: boolean
        YLeaf generate_confederation_set_info; //type: boolean
        YLeaf summary_only; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf half_life; //type: uint32
        YLeaf reuse_threshold; //type: uint32
        YLeaf suppress_threshold; //type: uint32
        YLeaf suppress_time; //type: uint32
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes : public Entity
{
    public:
        RipRoutes();
        ~RipRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf not_used; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes : public Entity
{
    public:
        LispRoutes();
        ~LispRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes : public Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf not_used; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf external_routes; //type: uint32
        YLeaf internal_routes; //type: uint32
        YLeaf local_routes; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode : public Entity
{
    public:
        LabelMode();
        ~LabelMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_allocation_mode; //type: string
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes : public Entity
{
    public:
        EigrpRoutes();
        ~EigrpRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EigrpRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute> > eigrp_route;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute : public Entity
{
    public:
        EigrpRoute();
        ~EigrpRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf redist_type; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks : public Entity
{
    public:
        SourcedNetworks();
        ~SourcedNetworks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SourcedNetwork; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork> > sourced_network;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork : public Entity
{
    public:
        SourcedNetwork();
        ~SourcedNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf network_addr; //type: string
        YLeaf network_prefix; //type: uint16
        YLeaf backdoor; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes : public Entity
{
    public:
        ConnectedRoutes();
        ~ConnectedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf not_used; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel : public Entity
{
    public:
        AllocateLabel();
        ~AllocateLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all; //type: boolean
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection : public Entity
{
    public:
        AdditionalPathsSelection();
        ~AdditionalPathsSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf selection; //type: BgpafAdditionalPathsCfgEnum
        YLeaf route_policy_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes : public Entity
{
    public:
        OspfRoutes();
        ~OspfRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OspfRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute> > ospf_route;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute : public Entity
{
    public:
        OspfRoute();
        ~OspfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf redist_type; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes : public Entity
{
    public:
        MobileRoutes();
        ~MobileRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf not_used; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes : public Entity
{
    public:
        SubscriberRoutes();
        ~SubscriberRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_metric; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf not_used; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes : public Entity
{
    public:
        RpkiStaticRoutes();
        ~RpkiStaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpkiStaticRoute; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute> > rpki_static_route;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute : public Entity
{
    public:
        RpkiStaticRoute();
        ~RpkiStaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf addrress; //type: string
        YLeaf minimum; //type: int32
        YLeaf maximum; //type: int32
        YLeaf as; //type: int32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces : public Entity
{
    public:
        MplsActivatedInterfaces();
        ~MplsActivatedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MplsActivatedInterface; //type: Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface> > mpls_activated_interface;


}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface : public Entity
{
    public:
        MplsActivatedInterface();
        ~MplsActivatedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers : public Entity
{
    public:
        GlobalTimers();
        ~GlobalTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keepalive; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf min_accept_hold_time; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes : public Entity
{
    public:
        SendSocketBufferSizes();
        ~SendSocketBufferSizes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_send_size; //type: uint32
        YLeaf bgp_send_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes


class Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes : public Entity
{
    public:
        ReceiveSocketBufferSizes();
        ~ReceiveSocketBufferSizes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf socket_receive_size; //type: uint32
        YLeaf bgp_receive_size; //type: uint32



}; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes

class BmpServers : public Entity
{
    public:
        BmpServers();
        ~BmpServers();

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



        class BmpServer; //type: BmpServers::BmpServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer> > bmp_server;


}; // BmpServers


class BmpServers::BmpServer : public Entity
{
    public:
        BmpServer();
        ~BmpServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32
        YLeaf create; //type: empty
        YLeaf maximum_buffer_size; //type: uint32
        YLeaf initial_delay; //type: uint32
        YLeaf flapping_delay; //type: uint32
        YLeaf status_report_interval; //type: uint32
        YLeaf description; //type: string
        YLeaf bmptcp_maximum_segment_size; //type: uint32
        YLeaf bmptcp_keep_alive; //type: uint32
        YLeaf vrf; //type: string
        YLeaf shutdown; //type: boolean
        YLeaf update_source_interface; //type: string

        class InitialRefreshDelay; //type: BmpServers::BmpServer::InitialRefreshDelay
        class HostPort; //type: BmpServers::BmpServer::HostPort
        class RouteMonitoring; //type: BmpServers::BmpServer::RouteMonitoring
        class Tos; //type: BmpServers::BmpServer::Tos

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::HostPort> host_port;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::InitialRefreshDelay> initial_refresh_delay;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::RouteMonitoring> route_monitoring;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::Tos> tos;


}; // BmpServers::BmpServer


class BmpServers::BmpServer::InitialRefreshDelay : public Entity
{
    public:
        InitialRefreshDelay();
        ~InitialRefreshDelay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf delay; //type: uint32
        YLeaf spread; //type: uint32



}; // BmpServers::BmpServer::InitialRefreshDelay


class BmpServers::BmpServer::HostPort : public Entity
{
    public:
        HostPort();
        ~HostPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf host; //type: string
        YLeaf port; //type: uint16



}; // BmpServers::BmpServer::HostPort


class BmpServers::BmpServer::RouteMonitoring : public Entity
{
    public:
        RouteMonitoring();
        ~RouteMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy; //type: BmpPolicySelectEnum
        YLeaf direction; //type: BmpRouteDirectionEnum



}; // BmpServers::BmpServer::RouteMonitoring


class BmpServers::BmpServer::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpTosEnum
        YLeaf value_; //type: one of uint32, enumeration



}; // BmpServers::BmpServer::Tos


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_CFG_2_ */

