#ifndef _CISCO_IOS_XR_ICPE_INFRA_OPER_
#define _CISCO_IOS_XR_ICPE_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_icpe_infra_oper {

class NvSatellite : public Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

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



        class ReloadOpStatuses; //type: NvSatellite::ReloadOpStatuses
        class InstallStatuses; //type: NvSatellite::InstallStatuses
        class SdacpRedundancies; //type: NvSatellite::SdacpRedundancies
        class InstallShows; //type: NvSatellite::InstallShows
        class SatelliteStatuses; //type: NvSatellite::SatelliteStatuses
        class SatellitePriorities; //type: NvSatellite::SatellitePriorities
        class SatelliteVersions; //type: NvSatellite::SatelliteVersions
        class SatelliteTopologies; //type: NvSatellite::SatelliteTopologies
        class InstallProgresses; //type: NvSatellite::InstallProgresses
        class ReloadStatuses; //type: NvSatellite::ReloadStatuses
        class Install; //type: NvSatellite::Install
        class InstallOpStatuses; //type: NvSatellite::InstallOpStatuses
        class SatelliteProperties; //type: NvSatellite::SatelliteProperties
        class SdacpDiscovery2S; //type: NvSatellite::SdacpDiscovery2S
        class IcpeDpms; //type: NvSatellite::IcpeDpms
        class SdacpControls; //type: NvSatellite::SdacpControls

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms> icpe_dpms;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install> install;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpStatuses> install_op_statuses;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallProgresses> install_progresses;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallShows> install_shows;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallStatuses> install_statuses;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadOpStatuses> reload_op_statuses;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadStatuses> reload_statuses;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatellitePriorities> satellite_priorities;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties> satellite_properties;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses> satellite_statuses;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies> satellite_topologies;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions> satellite_versions;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls> sdacp_controls;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S> sdacp_discovery2s;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies> sdacp_redundancies;


}; // NvSatellite


class NvSatellite::ReloadOpStatuses : public Entity
{
    public:
        ReloadOpStatuses();
        ~ReloadOpStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ReloadOpStatus; //type: NvSatellite::ReloadOpStatuses::ReloadOpStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadOpStatuses::ReloadOpStatus> > reload_op_status;


}; // NvSatellite::ReloadOpStatuses


class NvSatellite::ReloadOpStatuses::ReloadOpStatus : public Entity
{
    public:
        ReloadOpStatus();
        ~ReloadOpStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operation_id; //type: uint32
        YLeaf operation_id_xr; //type: uint32
        YLeaf satellite_range; //type: string
        YLeafList sats_not_initiated; //type: list of  uint16
        YLeafList sats_reloading; //type: list of  uint16
        YLeafList sats_reloaded; //type: list of  uint16
        YLeafList sats_reload_failed; //type: list of  uint16



}; // NvSatellite::ReloadOpStatuses::ReloadOpStatus


class NvSatellite::InstallStatuses : public Entity
{
    public:
        InstallStatuses();
        ~InstallStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InstallStatus; //type: NvSatellite::InstallStatuses::InstallStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallStatuses::InstallStatus> > install_status;


}; // NvSatellite::InstallStatuses


class NvSatellite::InstallStatuses::InstallStatus : public Entity
{
    public:
        InstallStatus();
        ~InstallStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_range; //type: string
        YLeaf satellite_range_xr; //type: string
        YLeaf operation_id; //type: uint32
        YLeafList sats_not_initiated; //type: list of  uint16
        YLeafList sats_transferring; //type: list of  uint16
        YLeafList sats_activating; //type: list of  uint16
        YLeafList sats_updating; //type: list of  uint16
        YLeafList sats_deactivating; //type: list of  uint16
        YLeafList sats_removing; //type: list of  uint16
        YLeafList sats_transfer_failed; //type: list of  uint16
        YLeafList sats_activate_failed; //type: list of  uint16
        YLeafList sats_update_failed; //type: list of  uint16
        YLeafList sats_deactivate_failed; //type: list of  uint16
        YLeafList sats_remove_failed; //type: list of  uint16
        YLeafList sats_transfer_aborted; //type: list of  uint16
        YLeafList sats_activate_aborted; //type: list of  uint16
        YLeafList sats_update_aborted; //type: list of  uint16
        YLeafList sats_deactivate_aborted; //type: list of  uint16
        YLeafList sats_remove_aborted; //type: list of  uint16
        YLeafList sats_no_operation; //type: list of  uint16
        YLeafList sats_completed; //type: list of  uint16



}; // NvSatellite::InstallStatuses::InstallStatus


class NvSatellite::SdacpRedundancies : public Entity
{
    public:
        SdacpRedundancies();
        ~SdacpRedundancies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SdacpRedundancy; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy> > sdacp_redundancy;


}; // NvSatellite::SdacpRedundancies


class NvSatellite::SdacpRedundancies::SdacpRedundancy : public Entity
{
    public:
        SdacpRedundancy();
        ~SdacpRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32
        YLeaf iccp_group_xr; //type: uint32
        YLeaf protocol_state; //type: IcpeOpmSessStateEnum
        YLeaf transport_state; //type: IcpeOpmTransportStateEnum
        YLeaf authentication_state; //type: IcpeOpmAuthFsmStateEnum
        YLeaf arbitration_state; //type: IcpeOpmArbitrationFsmStateEnum
        YLeaf synchronization_state; //type: IcpeOpmSyncFsmStateEnum
        YLeaf primacy; //type: IcpeOpmControllerEnum
        YLeaf system_mac; //type: string
        YLeaf isolated; //type: boolean

        class ProtocolStateTimestamp; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp
        class Channel; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel> > channel;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp> protocol_state_timestamp;


}; // NvSatellite::SdacpRedundancies::SdacpRedundancy


class NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp : public Entity
{
    public:
        ProtocolStateTimestamp();
        ~ProtocolStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf channel_id; //type: uint32
        YLeaf chan_state; //type: IcpeOpmChanFsmStateEnum
        YLeaf resync_state; //type: IcpeOpmResyncFsmStateEnum
        YLeaf control_messages_sent; //type: uint64
        YLeaf normal_messages_sent; //type: uint64
        YLeaf control_messages_received; //type: uint64
        YLeaf normal_messages_received; //type: uint64

        class ChannelStateTimestamp; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp
        class ResyncStateTimestamp; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp> channel_state_timestamp;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp> resync_state_timestamp;


}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp : public Entity
{
    public:
        ChannelStateTimestamp();
        ~ChannelStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp : public Entity
{
    public:
        ResyncStateTimestamp();
        ~ResyncStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp


class NvSatellite::InstallShows : public Entity
{
    public:
        InstallShows();
        ~InstallShows();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InstallShow; //type: NvSatellite::InstallShows::InstallShow

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallShows::InstallShow> > install_show;


}; // NvSatellite::InstallShows


class NvSatellite::InstallShows::InstallShow : public Entity
{
    public:
        InstallShow();
        ~InstallShow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operation_id; //type: uint32
        YLeaf operation_id_xr; //type: uint32
        YLeaf satellite_range; //type: string
        YLeaf operation_type; //type: uint16
        YLeaf progress_percentage; //type: uint16
        YLeaf start_time; //type: uint32
        YLeaf end_time; //type: uint32
        YLeaf ref_state; //type: IcpeInstallSatStateEnum
        YLeafList sats_not_initiated; //type: list of  uint16
        YLeafList sats_transferring; //type: list of  uint16
        YLeafList sats_activating; //type: list of  uint16
        YLeafList sats_updating; //type: list of  uint16
        YLeafList sats_deactivating; //type: list of  uint16
        YLeafList sats_removing; //type: list of  uint16
        YLeafList sats_transfer_failed; //type: list of  uint16
        YLeafList sats_activate_failed; //type: list of  uint16
        YLeafList sats_update_failed; //type: list of  uint16
        YLeafList sats_deactivate_failed; //type: list of  uint16
        YLeafList sats_remove_failed; //type: list of  uint16
        YLeafList sats_transfer_aborted; //type: list of  uint16
        YLeafList sats_activate_aborted; //type: list of  uint16
        YLeafList sats_update_aborted; //type: list of  uint16
        YLeafList sats_deactivate_aborted; //type: list of  uint16
        YLeafList sats_remove_aborted; //type: list of  uint16
        YLeafList sats_no_operation; //type: list of  uint16
        YLeafList sats_completed; //type: list of  uint16
        YLeafList name_string; //type: list of  string

        class Satellite; //type: NvSatellite::InstallShows::InstallShow::Satellite

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallShows::InstallShow::Satellite> > satellite;


}; // NvSatellite::InstallShows::InstallShow


class NvSatellite::InstallShows::InstallShow::Satellite : public Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint16
        YLeaf state; //type: IcpeInstallSatStateEnum
        YLeaf percentage; //type: uint16
        YLeaf retries; //type: uint16
        YLeaf start_time; //type: uint32
        YLeaf end_time; //type: uint32
        YLeaf info; //type: string



}; // NvSatellite::InstallShows::InstallShow::Satellite


class NvSatellite::SatelliteStatuses : public Entity
{
    public:
        SatelliteStatuses();
        ~SatelliteStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatelliteStatus; //type: NvSatellite::SatelliteStatuses::SatelliteStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus> > satellite_status;


}; // NvSatellite::SatelliteStatuses


class NvSatellite::SatelliteStatuses::SatelliteStatus : public Entity
{
    public:
        SatelliteStatus();
        ~SatelliteStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_id_xr; //type: uint32
        YLeaf version_check_state; //type: IcpeOperVerCheckStateEnum
        YLeaf remote_version_present; //type: boolean
        YLeaf type; //type: string
        YLeaf ethernet_fabric_supported; //type: boolean
        YLeaf optical_supported; //type: boolean
        YLeaf ip_address; //type: string
        YLeaf ip_address_present; //type: boolean
        YLeaf ip_address_auto; //type: boolean
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_address_present; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf vrfid; //type: uint32
        YLeaf description; //type: string
        YLeaf description_present; //type: boolean
        YLeaf mac_address; //type: string
        YLeaf mac_address_present; //type: boolean
        YLeaf configured_serial_number; //type: string
        YLeaf configured_serial_number_present; //type: boolean
        YLeaf received_serial_number; //type: string
        YLeaf received_serial_number_present; //type: boolean
        YLeaf password; //type: string
        YLeaf password_error; //type: string
        YLeaf received_host_name; //type: string
        YLeaf cfgd_timeout; //type: uint32
        YLeaf timeout_warning; //type: uint32
        YLeaf conflict_reason; //type: IcpeOperConflictEnum
        YLeaf conflict_context; //type: string
        YLeaf redundancy_iccp_group; //type: uint32
        YLeaf recovery_delay_time_left; //type: uint16
        YLeaf host_treating_as_active; //type: boolean
        YLeaf satellite_treating_as_active; //type: boolean
        YLeaf sdacp_session_state; //type: IcpeOperSdacpSessStateEnum
        YLeaf sdacp_session_failure_reason; //type: IcpeGcoOperControlReasonEnum
        YLeaf install_state; //type: IcpeOperInstallStateEnum
        YLeafList remote_version; //type: list of  string

        class CandidateFabricPorts; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts
        class OpticalStatus; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus
        class RedundancyOutOfSyncTimestamp; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp
        class ConfiguredLink; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts> candidate_fabric_ports;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink> > configured_link;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus> optical_status;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp> redundancy_out_of_sync_timestamp;


}; // NvSatellite::SatelliteStatuses::SatelliteStatus


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts : public Entity
{
    public:
        CandidateFabricPorts();
        ~CandidateFabricPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf channel_up; //type: boolean
        YLeaf out_of_sync; //type: boolean
        YLeaf error_string; //type: string

        class ConfiguredPort; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort
        class CurrentPort; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort> > configured_port;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort> > current_port;


}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort : public Entity
{
    public:
        ConfiguredPort();
        ~ConfiguredPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_type; //type: IcpeOperFabricPortEnum
        YLeaf slot; //type: uint16
        YLeaf subslot; //type: uint16
        YLeaf port; //type: uint16
        YLeaf valid; //type: boolean



}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort : public Entity
{
    public:
        CurrentPort();
        ~CurrentPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_type; //type: IcpeOperFabricPortEnum
        YLeaf slot; //type: uint16
        YLeaf subslot; //type: uint16
        YLeaf port; //type: uint16
        YLeaf permanent; //type: boolean
        YLeaf requested; //type: boolean



}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort


class NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus : public Entity
{
    public:
        OpticalStatus();
        ~OpticalStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf chassis_sync_state; //type: IcpeOpticalSyncStateEnum

        class Application; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application> > application;


}; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus


class NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf sync_state; //type: IcpeOpticalSyncStateEnum



}; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application


class NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp : public Entity
{
    public:
        RedundancyOutOfSyncTimestamp();
        ~RedundancyOutOfSyncTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink : public Entity
{
    public:
        ConfiguredLink();
        ~ConfiguredLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf ip_address; //type: string
        YLeaf ip_address_auto; //type: boolean
        YLeaf vrf_id_present; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf minimum_preferred_links; //type: uint32
        YLeaf number_active_links; //type: uint32
        YLeaf min_links_satisfied; //type: boolean
        YLeaf minimum_required_links; //type: uint32
        YLeaf required_min_links_satisfied; //type: boolean
        YLeaf conflict_reason; //type: IcpeOperConflictEnum
        YLeaf conflict_context; //type: string

        class PortRange; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange
        class DiscoveredLink; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink> > discovered_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange> > port_range;


}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange : public Entity
{
    public:
        PortRange();
        ~PortRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slot; //type: uint32
        YLeaf subslot; //type: uint32
        YLeaf low_port; //type: uint32
        YLeaf high_port; //type: uint32
        YLeaf port_type; //type: IcpeOperPortEnum
        YLeaf conflict_reason; //type: IcpeOperConflictEnum
        YLeaf conflict_context; //type: string



}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink : public Entity
{
    public:
        DiscoveredLink();
        ~DiscoveredLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf state; //type: IcpeOperDiscdLinkStateEnum
        YLeaf conflict_reason; //type: IcpeOperConflictEnum
        YLeaf conflict_context; //type: string



}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink


class NvSatellite::SatellitePriorities : public Entity
{
    public:
        SatellitePriorities();
        ~SatellitePriorities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatellitePriority; //type: NvSatellite::SatellitePriorities::SatellitePriority

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatellitePriorities::SatellitePriority> > satellite_priority;


}; // NvSatellite::SatellitePriorities


class NvSatellite::SatellitePriorities::SatellitePriority : public Entity
{
    public:
        SatellitePriority();
        ~SatellitePriority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_id_xr; //type: uint32
        YLeaf rgid; //type: uint32
        YLeaf best_path_hops; //type: uint32
        YLeaf configured_priority; //type: uint8
        YLeaf host_priority; //type: uint64
        YLeaf partner_priority; //type: uint64
        YLeaf multichassis_redundancy; //type: IcpeOperMultichassisRedundancyEnum



}; // NvSatellite::SatellitePriorities::SatellitePriority


class NvSatellite::SatelliteVersions : public Entity
{
    public:
        SatelliteVersions();
        ~SatelliteVersions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatelliteVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion> > satellite_version;


}; // NvSatellite::SatelliteVersions


class NvSatellite::SatelliteVersions::SatelliteVersion : public Entity
{
    public:
        SatelliteVersion();
        ~SatelliteVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_id_xr; //type: uint32
        YLeaf version_check_state; //type: IcpeOperVerCheckStateEnum
        YLeaf remote_version_present; //type: boolean
        YLeafList remote_version; //type: list of  string

        class ActiveVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion
        class TransferredVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion
        class CommittedVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion> active_version;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion> committed_version;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion> transferred_version;


}; // NvSatellite::SatelliteVersions::SatelliteVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion : public Entity
{
    public:
        ActiveVersion();
        ~ActiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version_check_state; //type: IcpeOperVerCheckStateEnum
        YLeaf remote_version_present; //type: boolean
        YLeafList remote_version; //type: list of  string



}; // NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion : public Entity
{
    public:
        TransferredVersion();
        ~TransferredVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version_check_state; //type: IcpeOperVerCheckStateEnum
        YLeaf remote_version_present; //type: boolean
        YLeafList remote_version; //type: list of  string



}; // NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion : public Entity
{
    public:
        CommittedVersion();
        ~CommittedVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version_check_state; //type: IcpeOperVerCheckStateEnum
        YLeaf remote_version_present; //type: boolean
        YLeafList remote_version; //type: list of  string



}; // NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion


class NvSatellite::SatelliteTopologies : public Entity
{
    public:
        SatelliteTopologies();
        ~SatelliteTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatelliteTopology; //type: NvSatellite::SatelliteTopologies::SatelliteTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology> > satellite_topology;


}; // NvSatellite::SatelliteTopologies


class NvSatellite::SatelliteTopologies::SatelliteTopology : public Entity
{
    public:
        SatelliteTopology();
        ~SatelliteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_handle; //type: string
        YLeaf redundancy_iccp_group; //type: uint32
        YLeaf is_physical; //type: boolean
        YLeaf ring_whole; //type: boolean

        class DiscoveredLink; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink
        class Satellite; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink> > discovered_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite> > satellite;


}; // NvSatellite::SatelliteTopologies::SatelliteTopology


class NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink : public Entity
{
    public:
        DiscoveredLink();
        ~DiscoveredLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf discovery_running; //type: boolean



}; // NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite : public Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string
        YLeaf configured; //type: boolean
        YLeaf num_hops; //type: uint16
        YLeaf type; //type: string
        YLeaf satellite_id; //type: uint32
        YLeaf received_serial_number; //type: string
        YLeaf received_serial_number_present; //type: boolean
        YLeaf vlan_id; //type: uint16
        YLeaf display_name; //type: string
        YLeaf conflict_reason; //type: IcpeOperConflictEnum
        YLeaf conflict_context; //type: string

        class FabricLink; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink> > fabric_link;


}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink : public Entity
{
    public:
        FabricLink();
        ~FabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf icl_id; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf display_name; //type: string
        YLeaf redundant; //type: boolean
        YLeaf active; //type: boolean
        YLeaf obsolete; //type: boolean

        class RemoteDevice; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice> > remote_device;


}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice : public Entity
{
    public:
        RemoteDevice();
        ~RemoteDevice();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string
        YLeaf source; //type: IcpeOperTopoRemoteSourceEnum
        YLeaf remote_is_satellite; //type: boolean
        YLeaf remote_is_local_host; //type: boolean
        YLeaf icl_id; //type: uint32
        YLeaf interface_handle; //type: string
        YLeaf interface_name; //type: string



}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice


class NvSatellite::InstallProgresses : public Entity
{
    public:
        InstallProgresses();
        ~InstallProgresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InstallProgress; //type: NvSatellite::InstallProgresses::InstallProgress

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallProgresses::InstallProgress> > install_progress;


}; // NvSatellite::InstallProgresses


class NvSatellite::InstallProgresses::InstallProgress : public Entity
{
    public:
        InstallProgress();
        ~InstallProgress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf progress_percentage; //type: uint32
        YLeaf progress_percentage_xr; //type: uint16
        YLeaf satellite_count; //type: uint32



}; // NvSatellite::InstallProgresses::InstallProgress


class NvSatellite::ReloadStatuses : public Entity
{
    public:
        ReloadStatuses();
        ~ReloadStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ReloadStatus; //type: NvSatellite::ReloadStatuses::ReloadStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadStatuses::ReloadStatus> > reload_status;


}; // NvSatellite::ReloadStatuses


class NvSatellite::ReloadStatuses::ReloadStatus : public Entity
{
    public:
        ReloadStatus();
        ~ReloadStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_range; //type: string
        YLeaf satellite_range_xr; //type: string
        YLeafList sats_not_initiated; //type: list of  uint16
        YLeafList sats_reloading; //type: list of  uint16
        YLeafList sats_reloaded; //type: list of  uint16
        YLeafList sats_reload_failed; //type: list of  uint16



}; // NvSatellite::ReloadStatuses::ReloadStatus


class NvSatellite::Install : public Entity
{
    public:
        Install();
        ~Install();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatelliteSoftwareVersions; //type: NvSatellite::Install::SatelliteSoftwareVersions

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions> satellite_software_versions;


}; // NvSatellite::Install


class NvSatellite::Install::SatelliteSoftwareVersions : public Entity
{
    public:
        SatelliteSoftwareVersions();
        ~SatelliteSoftwareVersions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatelliteSoftwareVersion; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion> > satellite_software_version;


}; // NvSatellite::Install::SatelliteSoftwareVersions


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion : public Entity
{
    public:
        SatelliteSoftwareVersion();
        ~SatelliteSoftwareVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_id_xr; //type: uint32
        YLeaf package_support; //type: IcpeInstallPkgSuppEnum

        class InstallPackageInfo; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo> install_package_info;


}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo : public Entity
{
    public:
        InstallPackageInfo();
        ~InstallPackageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActivePackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages
        class InactivePackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages
        class CommittedPackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages> active_packages;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages> committed_packages;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages> inactive_packages;


}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages : public Entity
{
    public:
        ActivePackages();
        ~ActivePackages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package> > package;


}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf version; //type: string
        YLeaf is_base_image; //type: boolean



}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages : public Entity
{
    public:
        InactivePackages();
        ~InactivePackages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package> > package;


}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf version; //type: string
        YLeaf is_base_image; //type: boolean



}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages : public Entity
{
    public:
        CommittedPackages();
        ~CommittedPackages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package> > package;


}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf version; //type: string
        YLeaf is_base_image; //type: boolean



}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package


class NvSatellite::InstallOpStatuses : public Entity
{
    public:
        InstallOpStatuses();
        ~InstallOpStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InstallOpStatus; //type: NvSatellite::InstallOpStatuses::InstallOpStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpStatuses::InstallOpStatus> > install_op_status;


}; // NvSatellite::InstallOpStatuses


class NvSatellite::InstallOpStatuses::InstallOpStatus : public Entity
{
    public:
        InstallOpStatus();
        ~InstallOpStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operation_id; //type: uint32
        YLeaf operation_id_xr; //type: uint32
        YLeaf satellite_range; //type: string
        YLeafList sats_not_initiated; //type: list of  uint16
        YLeafList sats_transferring; //type: list of  uint16
        YLeafList sats_activating; //type: list of  uint16
        YLeafList sats_updating; //type: list of  uint16
        YLeafList sats_deactivating; //type: list of  uint16
        YLeafList sats_removing; //type: list of  uint16
        YLeafList sats_transfer_failed; //type: list of  uint16
        YLeafList sats_activate_failed; //type: list of  uint16
        YLeafList sats_update_failed; //type: list of  uint16
        YLeafList sats_deactivate_failed; //type: list of  uint16
        YLeafList sats_remove_failed; //type: list of  uint16
        YLeafList sats_transfer_aborted; //type: list of  uint16
        YLeafList sats_activate_aborted; //type: list of  uint16
        YLeafList sats_update_aborted; //type: list of  uint16
        YLeafList sats_deactivate_aborted; //type: list of  uint16
        YLeafList sats_remove_aborted; //type: list of  uint16
        YLeafList sats_no_operation; //type: list of  uint16
        YLeafList sats_completed; //type: list of  uint16



}; // NvSatellite::InstallOpStatuses::InstallOpStatus


class NvSatellite::SatelliteProperties : public Entity
{
    public:
        SatelliteProperties();
        ~SatelliteProperties();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IdRanges; //type: NvSatellite::SatelliteProperties::IdRanges

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties::IdRanges> id_ranges;


}; // NvSatellite::SatelliteProperties


class NvSatellite::SatelliteProperties::IdRanges : public Entity
{
    public:
        IdRanges();
        ~IdRanges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IdRange; //type: NvSatellite::SatelliteProperties::IdRanges::IdRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties::IdRanges::IdRange> > id_range;


}; // NvSatellite::SatelliteProperties::IdRanges


class NvSatellite::SatelliteProperties::IdRanges::IdRange : public Entity
{
    public:
        IdRange();
        ~IdRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sat_id_range; //type: string
        YLeaf min; //type: uint32
        YLeaf max; //type: uint32



}; // NvSatellite::SatelliteProperties::IdRanges::IdRange


class NvSatellite::SdacpDiscovery2S : public Entity
{
    public:
        SdacpDiscovery2S();
        ~SdacpDiscovery2S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SdacpDiscovery2; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2> > sdacp_discovery2;


}; // NvSatellite::SdacpDiscovery2S


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2 : public Entity
{
    public:
        SdacpDiscovery2();
        ~SdacpDiscovery2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string

        class Interface; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface
        class Satellite; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface> > interface;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite> > satellite;


}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface : public Entity
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
        YLeaf interface_status; //type: DpmProtoStateEnum



}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite : public Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_status; //type: DpmProtoStateEnum
        YLeaf conflict_reason; //type: uint32
        YLeaf satellite_ip_address; //type: string
        YLeaf host_ip_address; //type: string

        class Interface; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface> > interface;


}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface : public Entity
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


        YLeaf interface_handle; //type: string
        YLeaf satellite_status; //type: DpmProtoStateEnum
        YLeaf conflict_reason; //type: uint32
        YLeaf satellite_chassis_vendor; //type: string
        YLeaf satellite_interface_id; //type: uint32
        YLeaf satellite_interface_mac; //type: string
        YLeaf satellite_chassis_mac; //type: string
        YLeaf satellite_serial_id; //type: string
        YLeaf satellite_module_vendor; //type: string



}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface


class NvSatellite::IcpeDpms : public Entity
{
    public:
        IcpeDpms();
        ~IcpeDpms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IcpeDpm; //type: NvSatellite::IcpeDpms::IcpeDpm

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms::IcpeDpm> > icpe_dpm;


}; // NvSatellite::IcpeDpms


class NvSatellite::IcpeDpms::IcpeDpm : public Entity
{
    public:
        IcpeDpm();
        ~IcpeDpm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf discovery_interface; //type: string
        YLeaf discovery_interface_xr; //type: string
        YLeaf discovery_interface_handle; //type: string
        YLeaf discovery_interface_status; //type: DpmProtoStateEnum
        YLeaf ident_packets_received; //type: uint64
        YLeaf ready_packets_received; //type: uint64
        YLeaf los_packets_received; //type: uint64
        YLeaf invalid_packets_received; //type: uint64
        YLeaf configuration_packets_sent; //type: uint64
        YLeaf ack_packets_sent; //type: uint64
        YLeaf reject_packets_sent; //type: uint64
        YLeaf probe_packets_sent; //type: uint64
        YLeaf host_ack_packets_received; //type: uint64
        YLeaf host_ack_packets_sent; //type: uint64
        YLeaf secs_since_pkts_cleaned; //type: uint64

        class Satellite; //type: NvSatellite::IcpeDpms::IcpeDpm::Satellite
        class RemoteHost; //type: NvSatellite::IcpeDpms::IcpeDpm::RemoteHost

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms::IcpeDpm::RemoteHost> > remote_host;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms::IcpeDpm::Satellite> > satellite;


}; // NvSatellite::IcpeDpms::IcpeDpm


class NvSatellite::IcpeDpms::IcpeDpm::Satellite : public Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_interface_id; //type: uint32
        YLeaf satellite_interface_mac; //type: string
        YLeaf satellite_ip_address; //type: string
        YLeaf host_ip_address; //type: string
        YLeaf satellite_chassis_type; //type: string
        YLeaf satellite_chassis_vendor; //type: string
        YLeaf satellite_chassis_mac; //type: string
        YLeaf satellite_serial_id; //type: string
        YLeaf satellite_module_type; //type: string
        YLeaf satellite_module_vendor; //type: string
        YLeaf satellite_module_mac; //type: string
        YLeaf conflict_reason; //type: uint32
        YLeaf received_sys_mac; //type: string
        YLeaf host_chassis_type; //type: string
        YLeaf host_chassis_vendor; //type: string
        YLeaf host_chassis_mac; //type: string
        YLeaf discovery_protocol_state; //type: DpmProtoStateEnum
        YLeaf last_imdr_state; //type: uint32
        YLeaf current_timeout; //type: uint32
        YLeaf is_queued_for_efd; //type: boolean
        YLeaf is_queued_for_oc; //type: boolean
        YLeaf ifmgr_state; //type: boolean
        YLeaf legacy; //type: boolean
        YLeaf deleting; //type: boolean
        YLeaf ident_packets_received; //type: uint64
        YLeaf ready_packets_received; //type: uint64
        YLeaf los_packets_received; //type: uint64
        YLeaf invalid_packets_received; //type: uint64
        YLeaf configuration_packets_sent; //type: uint64
        YLeaf ack_packets_sent; //type: uint64
        YLeaf reject_packets_sent; //type: uint64
        YLeaf secs_since_pkts_cleaned; //type: uint64



}; // NvSatellite::IcpeDpms::IcpeDpm::Satellite


class NvSatellite::IcpeDpms::IcpeDpm::RemoteHost : public Entity
{
    public:
        RemoteHost();
        ~RemoteHost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf host_chassis_mac; //type: string
        YLeaf host_interface_mac; //type: string
        YLeaf discovery_protocol_state; //type: DpmProtoHostStateEnum
        YLeaf route_length; //type: uint32
        YLeaf current_timeout; //type: uint32
        YLeaf host_ack_packets_received; //type: uint64
        YLeaf host_ack_packets_sent; //type: uint64
        YLeaf secs_since_pkts_cleaned; //type: uint64



}; // NvSatellite::IcpeDpms::IcpeDpm::RemoteHost


class NvSatellite::SdacpControls : public Entity
{
    public:
        SdacpControls();
        ~SdacpControls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SdacpControl; //type: NvSatellite::SdacpControls::SdacpControl

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl> > sdacp_control;


}; // NvSatellite::SdacpControls


class NvSatellite::SdacpControls::SdacpControl : public Entity
{
    public:
        SdacpControl();
        ~SdacpControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf satellite_id_xr; //type: uint32
        YLeaf satellite_ip_address; //type: string
        YLeaf ip_address_auto; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf control_protocol_state; //type: IcpeCpmControlFsmStateEnum
        YLeaf transport_error; //type: uint32

        class ProtocolStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp
        class TransportErrorTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp
        class Channel; //type: NvSatellite::SdacpControls::SdacpControl::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel> > channel;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp> protocol_state_timestamp;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp> transport_error_timestamp;


}; // NvSatellite::SdacpControls::SdacpControl


class NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp : public Entity
{
    public:
        ProtocolStateTimestamp();
        ~ProtocolStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp


class NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp : public Entity
{
    public:
        TransportErrorTimestamp();
        ~TransportErrorTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp


class NvSatellite::SdacpControls::SdacpControl::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf channel_id; //type: uint16
        YLeaf resync_state; //type: IcpeCpmChannelResyncStateEnum
        YLeaf channel_state; //type: IcpeCpmChanFsmStateEnum
        YLeaf control_messages_sent; //type: uint64
        YLeaf normal_messages_sent; //type: uint64
        YLeaf control_messages_received; //type: uint64
        YLeaf normal_messages_received; //type: uint64
        YLeaf control_messages_dropped; //type: uint64
        YLeaf normal_messages_dropped; //type: uint64
        YLeaf secs_since_last_cleared; //type: uint64
        YLeaf version; //type: uint16

        class Capabilities; //type: NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities
        class ResyncStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp
        class ChannelStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp> channel_state_timestamp;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp> resync_state_timestamp;


}; // NvSatellite::SdacpControls::SdacpControl::Channel


class NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities : public Entity
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



        class TlVs; //type: NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs> > tl_vs;


}; // NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities


class NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint32
        YLeaf debug; //type: string
        YLeafList value_; //type: list of  uint8



}; // NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs


class NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp : public Entity
{
    public:
        ResyncStateTimestamp();
        ~ResyncStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp


class NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp : public Entity
{
    public:
        ChannelStateTimestamp();
        ~ChannelStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp

class IcpeOpmSyncFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_sync_fsm_state_split_brain;
        static const Enum::YLeaf icpe_opm_sync_fsm_state_waiting;
        static const Enum::YLeaf icpe_opm_sync_fsm_state_whole_brain;

};

class IcpeOperSdacpSessStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_not_created;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_created;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_authentication_not_ok;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_authentication_ok;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_version_not_ok;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_up;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_issu;

};

class IcpeOpmTransportStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_transport_state_disconnected;
        static const Enum::YLeaf icpe_opm_transport_state_iccp_unavailable;
        static const Enum::YLeaf icpe_opm_transport_state_no_member_present;
        static const Enum::YLeaf icpe_opm_transport_state_member_down;
        static const Enum::YLeaf icpe_opm_transport_state_member_not_reachable;
        static const Enum::YLeaf icpe_opm_transport_state_waiting_for_app_connect;
        static const Enum::YLeaf icpe_opm_transport_state_waiting_for_app_connect_response;
        static const Enum::YLeaf icpe_opm_transport_state_connected;

};

class IcpeOpmAuthFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_auth_fsm_state_unauth;
        static const Enum::YLeaf icpe_opm_auth_fsm_state_waiting;
        static const Enum::YLeaf icpe_opm_auth_fsm_state_waiting_for_auth;
        static const Enum::YLeaf icpe_opm_auth_fsm_state_waiting_for_reply;
        static const Enum::YLeaf icpe_opm_auth_fsm_state_authed;

};

class IcpeOpmControllerEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_controller_unknown;
        static const Enum::YLeaf icpe_opm_controller_primary;
        static const Enum::YLeaf icpe_opm_controller_secondary;

};

class IcpeOpmResyncFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_resync_fsm_state_not_open;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_stable;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_in_resync;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_queued;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_resync_req;

};

class IcpeOpmChanFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_chan_fsm_state_down;
        static const Enum::YLeaf icpe_opm_chan_fsm_state_closed;
        static const Enum::YLeaf icpe_opm_chan_fsm_state_opening;
        static const Enum::YLeaf icpe_opm_chan_fsm_state_opened;
        static const Enum::YLeaf icpe_opm_chan_fsm_state_open;

};

class IcpeOpmSessStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_sess_state_disconnected;
        static const Enum::YLeaf icpe_opm_sess_state_connecting;
        static const Enum::YLeaf icpe_opm_sess_state_authenticating;
        static const Enum::YLeaf icpe_opm_sess_state_arbitrating;
        static const Enum::YLeaf icpe_opm_sess_state_waiting_for_resyncs;
        static const Enum::YLeaf icpe_opm_sess_state_connected;

};

class IcpeOperInstallStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_install_state_stable;
        static const Enum::YLeaf icpe_oper_install_state_transferring;
        static const Enum::YLeaf icpe_oper_install_state_transferred;
        static const Enum::YLeaf icpe_oper_install_state_installing;
        static const Enum::YLeaf icpe_oper_install_state_in_progress;

};

class IcpeOperPortEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_port_unknown;
        static const Enum::YLeaf icpe_oper_port_gigabit_ethernet;
        static const Enum::YLeaf icpe_oper_port_ten_gig_e;

};

class IcpeOperFabricPortEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_fabric_port_unknown;
        static const Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_gig_e;
        static const Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_ten_gig_e;
        static const Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_hundred_gig_e;

};

class IcpeInstallPkgSuppEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_install_pkg_supp_unknown;
        static const Enum::YLeaf icpe_install_pkg_supp_not_supported;
        static const Enum::YLeaf icpe_install_pkg_supp_supported;

};

class IcpeGcoOperControlReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_gco_oper_control_reason_unknown_error;
        static const Enum::YLeaf icpe_gco_oper_control_reason_wrong_chassis_type;
        static const Enum::YLeaf icpe_gco_oper_control_reason_wrong_chassis_serial;
        static const Enum::YLeaf icpe_gco_oper_control_reason_needs_to_upgrade;
        static const Enum::YLeaf icpe_gco_oper_control_reason_none;

};

class IcpeInstallSatStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_install_sat_state_unknown;
        static const Enum::YLeaf icpe_install_sat_state_not_initiat_ed;
        static const Enum::YLeaf icpe_install_sat_state_transferring;
        static const Enum::YLeaf icpe_install_sat_state_activating;
        static const Enum::YLeaf icpe_install_sat_state_updating;
        static const Enum::YLeaf icpe_install_sat_state_deactivating;
        static const Enum::YLeaf icpe_install_sat_state_removing;
        static const Enum::YLeaf icpe_install_sat_state_success;
        static const Enum::YLeaf icpe_install_sat_state_failure;
        static const Enum::YLeaf icpe_install_sat_state_multiple_ops;
        static const Enum::YLeaf icpe_install_sat_state_aborted;
        static const Enum::YLeaf icpe_install_sat_state_protocol_version;
        static const Enum::YLeaf icpe_install_sat_state_pkg_not_present;
        static const Enum::YLeaf icpe_install_sat_state_no_image;
        static const Enum::YLeaf icpe_install_sat_state_no_such_file;

};

class IcpeOpmArbitrationFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_unarbitrated;
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_waiting;
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrating;
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrated;

};

class IcpeOperConflictEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_conflict_not_calculated;
        static const Enum::YLeaf icpe_oper_conflict_no_conflict;
        static const Enum::YLeaf icpe_oper_conflict_satellite_not_configured;
        static const Enum::YLeaf icpe_oper_conflict_satellite_no_type;
        static const Enum::YLeaf icpe_oper_conflict_satellite_id_invalid;
        static const Enum::YLeaf icpe_oper_conflict_satellite_no_ipv4_addr;
        static const Enum::YLeaf icpe_oper_conflict_satellite_conflicting_ipv4_addr;
        static const Enum::YLeaf icpe_oper_conflict_no_configured_links;
        static const Enum::YLeaf icpe_oper_conflict_no_discovered_links;
        static const Enum::YLeaf icpe_oper_conflict_invalid_ports;
        static const Enum::YLeaf icpe_oper_conflict_ports_overlap;
        static const Enum::YLeaf icpe_oper_conflict_waiting_for_ipv4_addr;
        static const Enum::YLeaf icpe_oper_conflict_waiting_for_vrf;
        static const Enum::YLeaf icpe_oper_conflict_different_ipv4_addr;
        static const Enum::YLeaf icpe_oper_conflict_different_vrf;
        static const Enum::YLeaf icpe_oper_conflict_satellite_link_ipv4_overlap;
        static const Enum::YLeaf icpe_oper_conflict_waiting_for_ident;
        static const Enum::YLeaf icpe_oper_conflict_multiple_ids;
        static const Enum::YLeaf icpe_oper_conflict_multiple_satellites;
        static const Enum::YLeaf icpe_oper_conflict_ident_rejected;
        static const Enum::YLeaf icpe_oper_conflict_interface_down;
        static const Enum::YLeaf icpe_oper_conflict_auto_ip_unavailable;
        static const Enum::YLeaf icpe_oper_conflict_satellite_auto_ip_link_manual_ip;
        static const Enum::YLeaf icpe_oper_conflict_link_auto_ip_satellite_manual_ip;
        static const Enum::YLeaf icpe_oper_conflict_serial_num_mismatch;
        static const Enum::YLeaf icpe_oper_conflict_satellite_not_identified;
        static const Enum::YLeaf icpe_oper_conflict_satellite_unsupported_type;
        static const Enum::YLeaf icpe_oper_conflict_satellite_partition_unsupported;
        static const Enum::YLeaf icpe_oper_conflict_satellite_no_serial_number;
        static const Enum::YLeaf icpe_oper_conflict_satellite_conflicting_serial_number;
        static const Enum::YLeaf icpe_oper_conflict_satellite_link_waiting_for_arp;
        static const Enum::YLeaf icpe_oper_conflict_host_pe_isolated_split_brain;
        static const Enum::YLeaf icpe_oper_conflict_fabric_iccp_group_inconsistent;
        static const Enum::YLeaf icpe_oper_conflict_invalid_iccp_group;
        static const Enum::YLeaf icpe_oper_conflict_port_rejected;
        static const Enum::YLeaf icpe_oper_conflict_satellite_icl_not_supported;
        static const Enum::YLeaf icpe_oper_conflict_multiple_serial_number;
        static const Enum::YLeaf icpe_oper_conflict_multiple_mac_address;

};

class IcpeOperVerCheckStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_ver_check_state_unknown;
        static const Enum::YLeaf icpe_oper_ver_check_state_not_compatible;
        static const Enum::YLeaf icpe_oper_ver_check_state_current_version;
        static const Enum::YLeaf icpe_oper_ver_check_state_compatible_older;
        static const Enum::YLeaf icpe_oper_ver_check_state_compatible_newer;

};

class IcpeOperMultichassisRedundancyEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_multi_chassis_redundancy_not_redundant;
        static const Enum::YLeaf icpe_oper_multi_chassis_redundancy_active;
        static const Enum::YLeaf icpe_oper_multi_chassis_redundancy_standby;

};

class IcpeOperDiscdLinkStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_discd_link_state_stopped;
        static const Enum::YLeaf icpe_oper_discd_link_state_probing;
        static const Enum::YLeaf icpe_oper_discd_link_state_configuring;
        static const Enum::YLeaf icpe_oper_discd_link_state_ready;

};

class IcpeOperTopoRemoteSourceEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_topo_remote_source_unknown;
        static const Enum::YLeaf icpe_oper_topo_remote_source_remote_icl_id;
        static const Enum::YLeaf icpe_oper_topo_remote_source_remote_satellite_mac;
        static const Enum::YLeaf icpe_oper_topo_remote_source_remote_host_mac;
        static const Enum::YLeaf icpe_oper_topo_remote_source_direct_satellite;
        static const Enum::YLeaf icpe_oper_topo_remote_source_direct_host;

};

class IcpeOpticalSyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_optical_sync_state_unknown;
        static const Enum::YLeaf icpe_optical_sync_state_syncing;
        static const Enum::YLeaf icpe_optical_sync_state_synced;
        static const Enum::YLeaf icpe_optical_sync_state_not_connected;

};


}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_OPER_ */

