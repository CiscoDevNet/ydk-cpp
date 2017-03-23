#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_5_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role_is_active; //type: boolean
        YLeaf global_md5_password_enabled; //type: boolean
        YLeaf protocol_version; //type: uint32
        YLeaf router_id; //type: string
        YLeaf keepalive_interval; //type: uint32
        YLeaf hello_hold_time; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf targeted_hello_hold_time; //type: uint32
        YLeaf targeted_hello_interval; //type: uint32
        YLeaf session_hold_time; //type: uint32
        YLeaf housekeeping_timer_interval; //type: uint32
        YLeaf le_no_route_timeout; //type: uint32
        YLeaf ldp_recovery_timeout; //type: uint32
        YLeaf af_binding_withdraw_delay; //type: uint32
        YLeaf max_intf_attached; //type: uint32
        YLeaf max_intf_te; //type: uint32
        YLeaf max_peer; //type: uint32
        YLeaf ldp_out_of_mem_state; //type: uint32
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf igp_sync_delay_time_for_interface; //type: uint32
        YLeaf igp_sync_delay_time_on_restart; //type: uint32
        YLeaf global_discovery_quick_start_disabled; //type: boolean
        YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean

        class GracefulRestartInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation> graceful_restart_information;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation : public Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_graceful_restart_configured; //type: boolean
        YLeaf graceful_restart_reconnect_timeout; //type: uint32
        YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter : public Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf null_label; //type: string
        YLeaf label_imp_null_override_acl; //type: string
        YLeaf is_accepting_targeted_hellos; //type: boolean
        YLeaf targeted_hello_acl; //type: string

        class DiscoveryTransportAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Issu : public Entity
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



        class HaSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary> ha_summary;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaGlobal; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InitSync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities : public Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborCapability; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;


}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability : public Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32

        class Sent; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent> > sent;


}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32

        class ProtocolInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation> tcp_information;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation : public Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ta_holdtime; //type: uint32
        YLeaf ta_state; //type: string
        YLeaf ta_pies_sent; //type: uint32
        YLeaf ta_pies_rcvd; //type: uint32
        YLeaf ta_up_time_seconds; //type: uint32
        YLeaf downstream_on_demand; //type: boolean

        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_graceful_restartable; //type: boolean
        YLeaf reconnect_timeout; //type: uint32
        YLeaf recovery_time; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation : public Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf foreign_port; //type: uint16
        YLeaf local_port; //type: uint16
        YLeaf is_md5_on; //type: boolean

        class ForeignHost; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost : public Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation : public Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_holdtime; //type: uint32
        YLeaf keep_alive_interval; //type: uint32
        YLeaf peer_state; //type: string
        YLeaf has_ipv4_inbound; //type: boolean
        YLeaf inbound_ipv4acl; //type: string
        YLeaf has_ipv6_inbound; //type: boolean
        YLeaf inbound_ipv6acl; //type: string
        YLeaf has_ipv4_outbound; //type: boolean
        YLeaf outbound_ipv4acl; //type: string
        YLeaf has_ipv6_outbound; //type: boolean
        YLeaf outbound_ipv6acl; //type: string
        YLeaf has_sp; //type: boolean
        YLeaf sp_state; //type: string
        YLeaf sp_has_acl; //type: boolean
        YLeaf spacl; //type: string
        YLeaf sp_has_duration; //type: boolean
        YLeaf sp_duration; //type: uint32
        YLeaf spht_running; //type: boolean
        YLeaf spht_remaining; //type: uint32
        YLeaf nsr_sync_state; //type: MgmtLdpNsrPeerSyncStateEnum
        YLeaf nsr_last_sync_error; //type: MgmtLdpNsrPeerSyncErrEnum
        YLeaf nsr_last_sync_nack_reason; //type: MgmtLdpNsrPeerLdpSyncNackRsnEnum
        YLeaf bgp_advertisement_state; //type: MgmtLdpNbrBgpAdvtStateEnum
        YLeaf advertise_bgp_prefixes; //type: boolean

        class Capabilities; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sent; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdjacencyGroup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum

        class LinkHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: DhcbStateEnum

        class LocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdjacencyGroup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum

        class LinkHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: DhcbStateEnum

        class LocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::LdpId : public Entity
{
    public:
        LdpId();
        ~LdpId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::LdpId


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics : public Entity
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



        class Statistic; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic> > statistic;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf iccp_enabled; //type: boolean

        class MessageOut; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut> message_out;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut : public Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf init_count; //type: uint32
        YLeaf address_count; //type: uint32
        YLeaf address_withdraw_count; //type: uint32
        YLeaf label_map_count; //type: uint32
        YLeaf label_withdraw_count; //type: uint32
        YLeaf label_release_count; //type: uint32
        YLeaf label_request_count; //type: uint32
        YLeaf label_abort_request_count; //type: uint32
        YLeaf notification_count; //type: uint32
        YLeaf keep_alive_count; //type: uint32
        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn : public Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf init_count; //type: uint32
        YLeaf address_count; //type: uint32
        YLeaf address_withdraw_count; //type: uint32
        YLeaf label_map_count; //type: uint32
        YLeaf label_withdraw_count; //type: uint32
        YLeaf label_release_count; //type: uint32
        YLeaf label_request_count; //type: uint32
        YLeaf label_abort_request_count; //type: uint32
        YLeaf notification_count; //type: uint32
        YLeaf keep_alive_count; //type: uint32
        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn


class MplsLdp::Global::Active::DiscoverySummaryAll : public Entity
{
    public:
        DiscoverySummaryAll();
        ~DiscoverySummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_ldp_id; //type: string
        YLeaf num_of_ldp_interfaces; //type: uint32
        YLeaf num_of_active_ldp_interfaces; //type: uint32
        YLeaf num_of_lnk_disc_xmit; //type: uint32
        YLeaf num_of_tgt_disc_xmit; //type: uint32
        YLeaf num_of_lnk_disc_recv; //type: uint32
        YLeaf num_of_tgt_disc_recv; //type: uint32
        YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        YLeaf num_of_disc_with_same_router_id; //type: uint32
        YLeaf num_of_disc_with_wrong_router_id; //type: uint32

        class Vrf; //type: MplsLdp::Global::Active::DiscoverySummaryAll::Vrf

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DiscoverySummaryAll::Vrf> vrf;


}; // MplsLdp::Global::Active::DiscoverySummaryAll


class MplsLdp::Global::Active::DiscoverySummaryAll::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::DiscoverySummaryAll::Vrf


class MplsLdp::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: MplsLdp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node> > node;


}; // MplsLdp::Nodes


class MplsLdp::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class DefaultVrf; //type: MplsLdp::Nodes::Node::DefaultVrf
        class ForwardingSummaryAll; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::BindingsSummaryAll
        class AtoMdbTableEntries; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries
        class NsrSummaryAll; //type: MplsLdp::Nodes::Node::NsrSummaryAll
        class Summary; //type: MplsLdp::Nodes::Node::Summary
        class Vrfs; //type: MplsLdp::Nodes::Node::Vrfs
        class DiscoverySummaryAll; //type: MplsLdp::Nodes::Node::DiscoverySummaryAll

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries> ato_mdb_table_entries;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DiscoverySummaryAll> discovery_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll> forwarding_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll> nsr_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs> vrfs;


}; // MplsLdp::Nodes::Node


class MplsLdp::Nodes::Node::DefaultVrf : public Entity
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



        class GracefulRestart; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities
        class Summary; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary
        class Afs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs
        class NeighborBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Nodes::Node::DefaultVrf::Backoffs
        class Nsr; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr
        class Parameters; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters
        class Issu; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors
        class LdpId; //type: MplsLdp::Nodes::Node::DefaultVrf::LdpId
        class Statistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Backoffs> backoffs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::LdpId> ldp_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters> parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary> summary;


}; // MplsLdp::Nodes::Node::DefaultVrf


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart : public Entity
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


        YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf
        class GracefulRestartableNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor : public Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connect_count; //type: uint32
        YLeaf is_neighbor_up; //type: boolean
        YLeaf is_liveness_timer_running; //type: boolean
        YLeaf liveness_timer_remaining_seconds; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf recovery_timer_remaining_seconds; //type: uint32
        YLeaf down_nbr_flap_count; //type: uint8
        YLeaf down_nbr_flags; //type: uint32
        YLeaf down_nbr_down_reason; //type: uint32

        class GrPeer; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;


}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfIdEnum
        YLeaf interface_handle; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Capability; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability> > capability;


}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability_type; //type: int32
        YLeaf capability_owner; //type: string

        class Capability_; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_> capability;


}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_ : public Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_


class MplsLdp::Nodes::Node::DefaultVrf::Summary : public Entity
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



        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf
        class Common; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary::Common> common;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Summary


class MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Summary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Summary::Common


class MplsLdp::Nodes::Node::DefaultVrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af> > af;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MplsLdpOperAfNameEnum

        class InterfaceSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp> igp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces> interfaces;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary : public Entity
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


        YLeaf known_ip_interface_count; //type: uint32
        YLeaf known_ip_interface_ldp_enabled; //type: uint32
        YLeaf ldp_configured_attached_interface; //type: uint32
        YLeaf ldp_configured_te_interface; //type: uint32
        YLeaf forward_references; //type: uint32
        YLeaf auto_config_disabled; //type: uint32
        YLeaf auto_config; //type: uint32
        YLeaf auto_config_forward_reference_interfaces; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings : public Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding> > binding;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf local_label; //type: uint32
        YLeaf le_local_binding_revision; //type: uint32
        YLeaf le_local_label_state; //type: LocalLabelStateEnum
        YLeaf is_no_route; //type: boolean
        YLeaf label_oor; //type: boolean
        YLeaf advertise_prefix_acl; //type: string
        YLeaf advertise_tsr_acl; //type: string
        YLeaf config_enforced_local_label_value; //type: boolean
        YLeaf is_elc; //type: boolean

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf
        class PrefixXr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding : public Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_label; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_elc; //type: boolean

        class AssigningPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked : public Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Syncs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs> syncs;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs : public Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sync; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync> > sync;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf igp_sync_state; //type: LdpIgpSyncStateEnum
        YLeaf igp_sync_delay; //type: uint32
        YLeaf is_delay_timer_running; //type: boolean
        YLeaf delay_timer_remaining; //type: uint32
        YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReasonEnum

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf
        class Peers; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers : public Entity
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


        YLeaf peer_id; //type: string
        YLeaf is_gr_enabled; //type: boolean



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_id; //type: string
        YLeaf is_chkpt_created; //type: boolean



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart : public Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured; //type: boolean
        YLeaf delay_secs; //type: uint32
        YLeaf timer_running; //type: boolean
        YLeaf remaining_secs; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary : public Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces : public Entity
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



        class Interface; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface> > interface;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface : public Entity
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
        YLeaf interface_name_xr; //type: string
        YLeaf ldp_enabled; //type: boolean
        YLeaf is_im_stale; //type: boolean
        YLeaf ldp_config_mode; //type: boolean
        YLeaf ldp_autoconfig_disable; //type: boolean

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf
        class TeMeshGrp; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        YLeaf ldp_mesh_group_enabled; //type: boolean
        YLeaf te_mesh_group_id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig : public Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tuple; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHellos; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos : public Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHello; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello : public Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hello; //type: uint32
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf quick_start_disabled; //type: boolean

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf is_no_route; //type: boolean
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf is_targeted; //type: boolean
        YLeaf session_up; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_bringup_failure_reason; //type: string

        class NeighborSrcAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32

        class LocalSrcAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary : public Entity
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


        YLeaf local_ldp_id; //type: string
        YLeaf num_of_ldp_interfaces; //type: uint32
        YLeaf num_of_active_ldp_interfaces; //type: uint32
        YLeaf num_of_lnk_disc_xmit; //type: uint32
        YLeaf num_of_tgt_disc_xmit; //type: uint32
        YLeaf num_of_lnk_disc_recv; //type: uint32
        YLeaf num_of_tgt_disc_recv; //type: uint32
        YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        YLeaf num_of_disc_with_same_router_id; //type: uint32
        YLeaf num_of_disc_with_wrong_router_id; //type: uint32

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHello; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf state; //type: DhcbStateEnum
        YLeaf adjacency_ldp_identifier; //type: string
        YLeaf interval; //type: uint32
        YLeaf next_hello; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf quick_start_disabled; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_up; //type: boolean
        YLeaf session_bringup_failure_reason; //type: string

        class DhcbLocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf address_family; //type: LdpAfEnum
        YLeaf address_family_set; //type: LdpAfEnum
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHelloBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf address_family; //type: LdpAfEnum

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stat; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat> > stat;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat : public Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf adjacency_group_up_time; //type: uint32
        YLeaf tcp_open_count; //type: uint32
        YLeaf tcp_arb_chg_count; //type: uint32
        YLeaf tcp_role; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings : public Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Forwarding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding> > forwarding;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf
        class PrefixXr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf> vrf;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route : public Entity
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



        class Routing; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf source; //type: uint16
        YLeaf type; //type: uint16
        YLeaf flags; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf is_local_vrf_leaked; //type: boolean
        YLeaf routing_update_count; //type: uint32
        YLeaf routing_update_timestamp; //type: uint64
        YLeaf routing_update_age; //type: uint64
        YLeaf sr_local_label; //type: uint32



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf forwarding_update_count; //type: uint32
        YLeaf forwarding_update_timestamp; //type: uint64
        YLeaf forwarding_update_age; //type: uint64



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths : public Entity
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



        class Routing; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string
        YLeaf nh_is_overriden; //type: boolean
        YLeaf nexthop_id; //type: uint32
        YLeaf next_hop_table_id; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf path_id; //type: uint8
        YLeaf bkup_path_id; //type: uint8
        YLeaf path_flags; //type: LdpRoutePathFlagsEnum

        class NextHop; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean
        YLeaf needs_tldp; //type: boolean
        YLeaf has_q_node; //type: boolean

        class RemotePNodeId; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;


}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_5_ */

