#ifndef _CISCO_IOS_XR_ICPE_INFRA_OPER_
#define _CISCO_IOS_XR_ICPE_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_icpe_infra_oper {

class NvSatellite : public ydk::Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class NvSatellite::ReloadOpStatuses : public ydk::Entity
{
    public:
        ReloadOpStatuses();
        ~ReloadOpStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReloadOpStatus; //type: NvSatellite::ReloadOpStatuses::ReloadOpStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadOpStatuses::ReloadOpStatus> > reload_op_status;
        
}; // NvSatellite::ReloadOpStatuses


class NvSatellite::ReloadOpStatuses::ReloadOpStatus : public ydk::Entity
{
    public:
        ReloadOpStatus();
        ~ReloadOpStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf satellite_range; //type: string
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_reloading; //type: list of  uint16
        ydk::YLeafList sats_reloaded; //type: list of  uint16
        ydk::YLeafList sats_reload_failed; //type: list of  uint16

}; // NvSatellite::ReloadOpStatuses::ReloadOpStatus


class NvSatellite::InstallStatuses : public ydk::Entity
{
    public:
        InstallStatuses();
        ~InstallStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstallStatus; //type: NvSatellite::InstallStatuses::InstallStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallStatuses::InstallStatus> > install_status;
        
}; // NvSatellite::InstallStatuses


class NvSatellite::InstallStatuses::InstallStatus : public ydk::Entity
{
    public:
        InstallStatus();
        ~InstallStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_range; //type: string
        ydk::YLeaf satellite_range_xr; //type: string
        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_transferring; //type: list of  uint16
        ydk::YLeafList sats_activating; //type: list of  uint16
        ydk::YLeafList sats_updating; //type: list of  uint16
        ydk::YLeafList sats_deactivating; //type: list of  uint16
        ydk::YLeafList sats_removing; //type: list of  uint16
        ydk::YLeafList sats_transfer_failed; //type: list of  uint16
        ydk::YLeafList sats_activate_failed; //type: list of  uint16
        ydk::YLeafList sats_update_failed; //type: list of  uint16
        ydk::YLeafList sats_deactivate_failed; //type: list of  uint16
        ydk::YLeafList sats_remove_failed; //type: list of  uint16
        ydk::YLeafList sats_transfer_aborted; //type: list of  uint16
        ydk::YLeafList sats_activate_aborted; //type: list of  uint16
        ydk::YLeafList sats_update_aborted; //type: list of  uint16
        ydk::YLeafList sats_deactivate_aborted; //type: list of  uint16
        ydk::YLeafList sats_remove_aborted; //type: list of  uint16
        ydk::YLeafList sats_no_operation; //type: list of  uint16
        ydk::YLeafList sats_completed; //type: list of  uint16

}; // NvSatellite::InstallStatuses::InstallStatus


class NvSatellite::SdacpRedundancies : public ydk::Entity
{
    public:
        SdacpRedundancies();
        ~SdacpRedundancies();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SdacpRedundancy; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy> > sdacp_redundancy;
        
}; // NvSatellite::SdacpRedundancies


class NvSatellite::SdacpRedundancies::SdacpRedundancy : public ydk::Entity
{
    public:
        SdacpRedundancy();
        ~SdacpRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group; //type: uint32
        ydk::YLeaf iccp_group_xr; //type: uint32
        ydk::YLeaf protocol_state; //type: IcpeOpmSessState
        ydk::YLeaf transport_state; //type: IcpeOpmTransportState
        ydk::YLeaf authentication_state; //type: IcpeOpmAuthFsmState
        ydk::YLeaf arbitration_state; //type: IcpeOpmArbitrationFsmState
        ydk::YLeaf synchronization_state; //type: IcpeOpmSyncFsmState
        ydk::YLeaf primacy; //type: IcpeOpmController
        ydk::YLeaf system_mac; //type: string
        ydk::YLeaf isolated; //type: boolean
        class ProtocolStateTimestamp; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp
        class Channel; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel> > channel;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp> protocol_state_timestamp;
        
}; // NvSatellite::SdacpRedundancies::SdacpRedundancy


class NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp : public ydk::Entity
{
    public:
        ProtocolStateTimestamp();
        ~ProtocolStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel : public ydk::Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_id; //type: uint32
        ydk::YLeaf chan_state; //type: IcpeOpmChanFsmState
        ydk::YLeaf resync_state; //type: IcpeOpmResyncFsmState
        ydk::YLeaf control_messages_sent; //type: uint64
        ydk::YLeaf normal_messages_sent; //type: uint64
        ydk::YLeaf control_messages_received; //type: uint64
        ydk::YLeaf normal_messages_received; //type: uint64
        class ChannelStateTimestamp; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp
        class ResyncStateTimestamp; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp> channel_state_timestamp;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp> resync_state_timestamp;
        
}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp : public ydk::Entity
{
    public:
        ChannelStateTimestamp();
        ~ChannelStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp : public ydk::Entity
{
    public:
        ResyncStateTimestamp();
        ~ResyncStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp


class NvSatellite::InstallShows : public ydk::Entity
{
    public:
        InstallShows();
        ~InstallShows();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstallShow; //type: NvSatellite::InstallShows::InstallShow

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallShows::InstallShow> > install_show;
        
}; // NvSatellite::InstallShows


class NvSatellite::InstallShows::InstallShow : public ydk::Entity
{
    public:
        InstallShow();
        ~InstallShow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf satellite_range; //type: string
        ydk::YLeaf operation_type; //type: uint16
        ydk::YLeaf progress_percentage; //type: uint16
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf end_time; //type: uint32
        ydk::YLeaf ref_state; //type: IcpeInstallSatState
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_transferring; //type: list of  uint16
        ydk::YLeafList sats_activating; //type: list of  uint16
        ydk::YLeafList sats_updating; //type: list of  uint16
        ydk::YLeafList sats_deactivating; //type: list of  uint16
        ydk::YLeafList sats_removing; //type: list of  uint16
        ydk::YLeafList sats_transfer_failed; //type: list of  uint16
        ydk::YLeafList sats_activate_failed; //type: list of  uint16
        ydk::YLeafList sats_update_failed; //type: list of  uint16
        ydk::YLeafList sats_deactivate_failed; //type: list of  uint16
        ydk::YLeafList sats_remove_failed; //type: list of  uint16
        ydk::YLeafList sats_transfer_aborted; //type: list of  uint16
        ydk::YLeafList sats_activate_aborted; //type: list of  uint16
        ydk::YLeafList sats_update_aborted; //type: list of  uint16
        ydk::YLeafList sats_deactivate_aborted; //type: list of  uint16
        ydk::YLeafList sats_remove_aborted; //type: list of  uint16
        ydk::YLeafList sats_no_operation; //type: list of  uint16
        ydk::YLeafList sats_completed; //type: list of  uint16
        ydk::YLeafList name_string; //type: list of  string
        class Satellite; //type: NvSatellite::InstallShows::InstallShow::Satellite

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallShows::InstallShow::Satellite> > satellite;
        
}; // NvSatellite::InstallShows::InstallShow


class NvSatellite::InstallShows::InstallShow::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint16
        ydk::YLeaf state; //type: IcpeInstallSatState
        ydk::YLeaf percentage; //type: uint16
        ydk::YLeaf retries; //type: uint16
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf end_time; //type: uint32
        ydk::YLeaf info; //type: string

}; // NvSatellite::InstallShows::InstallShow::Satellite


class NvSatellite::SatelliteStatuses : public ydk::Entity
{
    public:
        SatelliteStatuses();
        ~SatelliteStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatelliteStatus; //type: NvSatellite::SatelliteStatuses::SatelliteStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus> > satellite_status;
        
}; // NvSatellite::SatelliteStatuses


class NvSatellite::SatelliteStatuses::SatelliteStatus : public ydk::Entity
{
    public:
        SatelliteStatus();
        ~SatelliteStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint32
        ydk::YLeaf version_check_state; //type: IcpeOperVerCheckState
        ydk::YLeaf remote_version_present; //type: boolean
        ydk::YLeaf type; //type: string
        ydk::YLeaf ethernet_fabric_supported; //type: boolean
        ydk::YLeaf optical_supported; //type: boolean
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_present; //type: boolean
        ydk::YLeaf ip_address_auto; //type: boolean
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_address_present; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrfid; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf description_present; //type: boolean
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_present; //type: boolean
        ydk::YLeaf configured_serial_number; //type: string
        ydk::YLeaf configured_serial_number_present; //type: boolean
        ydk::YLeaf received_serial_number; //type: string
        ydk::YLeaf received_serial_number_present; //type: boolean
        ydk::YLeaf password; //type: string
        ydk::YLeaf password_error; //type: string
        ydk::YLeaf received_host_name; //type: string
        ydk::YLeaf cfgd_timeout; //type: uint32
        ydk::YLeaf timeout_warning; //type: uint32
        ydk::YLeaf conflict_reason; //type: IcpeOperConflict
        ydk::YLeaf conflict_context; //type: string
        ydk::YLeaf redundancy_iccp_group; //type: uint32
        ydk::YLeaf recovery_delay_time_left; //type: uint16
        ydk::YLeaf host_treating_as_active; //type: boolean
        ydk::YLeaf satellite_treating_as_active; //type: boolean
        ydk::YLeaf sdacp_session_state; //type: IcpeOperSdacpSessState
        ydk::YLeaf sdacp_session_failure_reason; //type: IcpeGcoOperControlReason
        ydk::YLeaf install_state; //type: IcpeOperInstallState
        ydk::YLeafList remote_version; //type: list of  string
        class CandidateFabricPorts; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts
        class OpticalStatus; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus
        class RedundancyOutOfSyncTimestamp; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp
        class ConfiguredLink; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts> candidate_fabric_ports;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink> > configured_link;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus> optical_status;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp> redundancy_out_of_sync_timestamp;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts : public ydk::Entity
{
    public:
        CandidateFabricPorts();
        ~CandidateFabricPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_up; //type: boolean
        ydk::YLeaf out_of_sync; //type: boolean
        ydk::YLeaf error_string; //type: string
        class ConfiguredPort; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort
        class CurrentPort; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort> > configured_port;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort> > current_port;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort : public ydk::Entity
{
    public:
        ConfiguredPort();
        ~ConfiguredPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: IcpeOperFabricPort
        ydk::YLeaf slot; //type: uint16
        ydk::YLeaf subslot; //type: uint16
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf valid; //type: boolean

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort : public ydk::Entity
{
    public:
        CurrentPort();
        ~CurrentPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: IcpeOperFabricPort
        ydk::YLeaf slot; //type: uint16
        ydk::YLeaf subslot; //type: uint16
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf requested; //type: boolean

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort


class NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus : public ydk::Entity
{
    public:
        OpticalStatus();
        ~OpticalStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_sync_state; //type: IcpeOpticalSyncState
        class Application; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application> > application;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus


class NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf sync_state; //type: IcpeOpticalSyncState

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application


class NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp : public ydk::Entity
{
    public:
        RedundancyOutOfSyncTimestamp();
        ~RedundancyOutOfSyncTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink : public ydk::Entity
{
    public:
        ConfiguredLink();
        ~ConfiguredLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_auto; //type: boolean
        ydk::YLeaf vrf_id_present; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf minimum_preferred_links; //type: uint32
        ydk::YLeaf number_active_links; //type: uint32
        ydk::YLeaf min_links_satisfied; //type: boolean
        ydk::YLeaf minimum_required_links; //type: uint32
        ydk::YLeaf required_min_links_satisfied; //type: boolean
        ydk::YLeaf conflict_reason; //type: IcpeOperConflict
        ydk::YLeaf conflict_context; //type: string
        class PortRange; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange
        class DiscoveredLink; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink> > discovered_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange> > port_range;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange : public ydk::Entity
{
    public:
        PortRange();
        ~PortRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf subslot; //type: uint32
        ydk::YLeaf low_port; //type: uint32
        ydk::YLeaf high_port; //type: uint32
        ydk::YLeaf port_type; //type: IcpeOperPort
        ydk::YLeaf conflict_reason; //type: IcpeOperConflict
        ydk::YLeaf conflict_context; //type: string

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink : public ydk::Entity
{
    public:
        DiscoveredLink();
        ~DiscoveredLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf state; //type: IcpeOperDiscdLinkState
        ydk::YLeaf conflict_reason; //type: IcpeOperConflict
        ydk::YLeaf conflict_context; //type: string

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink


class NvSatellite::SatellitePriorities : public ydk::Entity
{
    public:
        SatellitePriorities();
        ~SatellitePriorities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatellitePriority; //type: NvSatellite::SatellitePriorities::SatellitePriority

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatellitePriorities::SatellitePriority> > satellite_priority;
        
}; // NvSatellite::SatellitePriorities


class NvSatellite::SatellitePriorities::SatellitePriority : public ydk::Entity
{
    public:
        SatellitePriority();
        ~SatellitePriority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint32
        ydk::YLeaf rgid; //type: uint32
        ydk::YLeaf best_path_hops; //type: uint32
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf host_priority; //type: uint64
        ydk::YLeaf partner_priority; //type: uint64
        ydk::YLeaf multichassis_redundancy; //type: IcpeOperMultichassisRedundancy

}; // NvSatellite::SatellitePriorities::SatellitePriority


class NvSatellite::SatelliteVersions : public ydk::Entity
{
    public:
        SatelliteVersions();
        ~SatelliteVersions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatelliteVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion> > satellite_version;
        
}; // NvSatellite::SatelliteVersions


class NvSatellite::SatelliteVersions::SatelliteVersion : public ydk::Entity
{
    public:
        SatelliteVersion();
        ~SatelliteVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint32
        ydk::YLeaf version_check_state; //type: IcpeOperVerCheckState
        ydk::YLeaf remote_version_present; //type: boolean
        ydk::YLeafList remote_version; //type: list of  string
        class ActiveVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion
        class TransferredVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion
        class CommittedVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion> active_version;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion> committed_version;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion> transferred_version;
        
}; // NvSatellite::SatelliteVersions::SatelliteVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion : public ydk::Entity
{
    public:
        ActiveVersion();
        ~ActiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version_check_state; //type: IcpeOperVerCheckState
        ydk::YLeaf remote_version_present; //type: boolean
        ydk::YLeafList remote_version; //type: list of  string

}; // NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion : public ydk::Entity
{
    public:
        TransferredVersion();
        ~TransferredVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version_check_state; //type: IcpeOperVerCheckState
        ydk::YLeaf remote_version_present; //type: boolean
        ydk::YLeafList remote_version; //type: list of  string

}; // NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion : public ydk::Entity
{
    public:
        CommittedVersion();
        ~CommittedVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version_check_state; //type: IcpeOperVerCheckState
        ydk::YLeaf remote_version_present; //type: boolean
        ydk::YLeafList remote_version; //type: list of  string

}; // NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion


class NvSatellite::SatelliteTopologies : public ydk::Entity
{
    public:
        SatelliteTopologies();
        ~SatelliteTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatelliteTopology; //type: NvSatellite::SatelliteTopologies::SatelliteTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology> > satellite_topology;
        
}; // NvSatellite::SatelliteTopologies


class NvSatellite::SatelliteTopologies::SatelliteTopology : public ydk::Entity
{
    public:
        SatelliteTopology();
        ~SatelliteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf redundancy_iccp_group; //type: uint32
        ydk::YLeaf is_physical; //type: boolean
        ydk::YLeaf ring_whole; //type: boolean
        class DiscoveredLink; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink
        class Satellite; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink> > discovered_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite> > satellite;
        
}; // NvSatellite::SatelliteTopologies::SatelliteTopology


class NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink : public ydk::Entity
{
    public:
        DiscoveredLink();
        ~DiscoveredLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf discovery_running; //type: boolean

}; // NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf num_hops; //type: uint16
        ydk::YLeaf type; //type: string
        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf received_serial_number; //type: string
        ydk::YLeaf received_serial_number_present; //type: boolean
        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf display_name; //type: string
        ydk::YLeaf conflict_reason; //type: IcpeOperConflict
        ydk::YLeaf conflict_context; //type: string
        class FabricLink; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink> > fabric_link;
        
}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink : public ydk::Entity
{
    public:
        FabricLink();
        ~FabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icl_id; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf display_name; //type: string
        ydk::YLeaf redundant; //type: boolean
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf obsolete; //type: boolean
        class RemoteDevice; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice> > remote_device;
        
}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice : public ydk::Entity
{
    public:
        RemoteDevice();
        ~RemoteDevice();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf source; //type: IcpeOperTopoRemoteSource
        ydk::YLeaf remote_is_satellite; //type: boolean
        ydk::YLeaf remote_is_local_host; //type: boolean
        ydk::YLeaf icl_id; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string

}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice


class NvSatellite::InstallProgresses : public ydk::Entity
{
    public:
        InstallProgresses();
        ~InstallProgresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstallProgress; //type: NvSatellite::InstallProgresses::InstallProgress

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallProgresses::InstallProgress> > install_progress;
        
}; // NvSatellite::InstallProgresses


class NvSatellite::InstallProgresses::InstallProgress : public ydk::Entity
{
    public:
        InstallProgress();
        ~InstallProgress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf progress_percentage; //type: uint32
        ydk::YLeaf progress_percentage_xr; //type: uint16
        ydk::YLeaf satellite_count; //type: uint32

}; // NvSatellite::InstallProgresses::InstallProgress


class NvSatellite::ReloadStatuses : public ydk::Entity
{
    public:
        ReloadStatuses();
        ~ReloadStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReloadStatus; //type: NvSatellite::ReloadStatuses::ReloadStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadStatuses::ReloadStatus> > reload_status;
        
}; // NvSatellite::ReloadStatuses


class NvSatellite::ReloadStatuses::ReloadStatus : public ydk::Entity
{
    public:
        ReloadStatus();
        ~ReloadStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_range; //type: string
        ydk::YLeaf satellite_range_xr; //type: string
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_reloading; //type: list of  uint16
        ydk::YLeafList sats_reloaded; //type: list of  uint16
        ydk::YLeafList sats_reload_failed; //type: list of  uint16

}; // NvSatellite::ReloadStatuses::ReloadStatus


class NvSatellite::Install : public ydk::Entity
{
    public:
        Install();
        ~Install();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatelliteSoftwareVersions; //type: NvSatellite::Install::SatelliteSoftwareVersions

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions> satellite_software_versions;
        
}; // NvSatellite::Install


class NvSatellite::Install::SatelliteSoftwareVersions : public ydk::Entity
{
    public:
        SatelliteSoftwareVersions();
        ~SatelliteSoftwareVersions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatelliteSoftwareVersion; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion> > satellite_software_version;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion : public ydk::Entity
{
    public:
        SatelliteSoftwareVersion();
        ~SatelliteSoftwareVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint32
        ydk::YLeaf package_support; //type: IcpeInstallPkgSupp
        class InstallPackageInfo; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo> install_package_info;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo : public ydk::Entity
{
    public:
        InstallPackageInfo();
        ~InstallPackageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActivePackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages
        class InactivePackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages
        class CommittedPackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages> active_packages;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages> committed_packages;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages> inactive_packages;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages : public ydk::Entity
{
    public:
        ActivePackages();
        ~ActivePackages();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package> > package;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf is_base_image; //type: boolean

}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages : public ydk::Entity
{
    public:
        InactivePackages();
        ~InactivePackages();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package> > package;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf is_base_image; //type: boolean

}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages : public ydk::Entity
{
    public:
        CommittedPackages();
        ~CommittedPackages();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package> > package;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf is_base_image; //type: boolean

}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package


class NvSatellite::InstallOpStatuses : public ydk::Entity
{
    public:
        InstallOpStatuses();
        ~InstallOpStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstallOpStatus; //type: NvSatellite::InstallOpStatuses::InstallOpStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpStatuses::InstallOpStatus> > install_op_status;
        
}; // NvSatellite::InstallOpStatuses


class NvSatellite::InstallOpStatuses::InstallOpStatus : public ydk::Entity
{
    public:
        InstallOpStatus();
        ~InstallOpStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf satellite_range; //type: string
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_transferring; //type: list of  uint16
        ydk::YLeafList sats_activating; //type: list of  uint16
        ydk::YLeafList sats_updating; //type: list of  uint16
        ydk::YLeafList sats_deactivating; //type: list of  uint16
        ydk::YLeafList sats_removing; //type: list of  uint16
        ydk::YLeafList sats_transfer_failed; //type: list of  uint16
        ydk::YLeafList sats_activate_failed; //type: list of  uint16
        ydk::YLeafList sats_update_failed; //type: list of  uint16
        ydk::YLeafList sats_deactivate_failed; //type: list of  uint16
        ydk::YLeafList sats_remove_failed; //type: list of  uint16
        ydk::YLeafList sats_transfer_aborted; //type: list of  uint16
        ydk::YLeafList sats_activate_aborted; //type: list of  uint16
        ydk::YLeafList sats_update_aborted; //type: list of  uint16
        ydk::YLeafList sats_deactivate_aborted; //type: list of  uint16
        ydk::YLeafList sats_remove_aborted; //type: list of  uint16
        ydk::YLeafList sats_no_operation; //type: list of  uint16
        ydk::YLeafList sats_completed; //type: list of  uint16

}; // NvSatellite::InstallOpStatuses::InstallOpStatus


class NvSatellite::SatelliteProperties : public ydk::Entity
{
    public:
        SatelliteProperties();
        ~SatelliteProperties();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IdRanges; //type: NvSatellite::SatelliteProperties::IdRanges

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties::IdRanges> id_ranges;
        
}; // NvSatellite::SatelliteProperties


class NvSatellite::SatelliteProperties::IdRanges : public ydk::Entity
{
    public:
        IdRanges();
        ~IdRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IdRange; //type: NvSatellite::SatelliteProperties::IdRanges::IdRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties::IdRanges::IdRange> > id_range;
        
}; // NvSatellite::SatelliteProperties::IdRanges


class NvSatellite::SatelliteProperties::IdRanges::IdRange : public ydk::Entity
{
    public:
        IdRange();
        ~IdRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sat_id_range; //type: string
        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // NvSatellite::SatelliteProperties::IdRanges::IdRange


class NvSatellite::SdacpDiscovery2S : public ydk::Entity
{
    public:
        SdacpDiscovery2S();
        ~SdacpDiscovery2S();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SdacpDiscovery2; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2> > sdacp_discovery2;
        
}; // NvSatellite::SdacpDiscovery2S


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2 : public ydk::Entity
{
    public:
        SdacpDiscovery2();
        ~SdacpDiscovery2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        class Interface; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface
        class Satellite; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface> > interface;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite> > satellite;
        
}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_status; //type: DpmProtoState

}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_status; //type: DpmProtoState
        ydk::YLeaf conflict_reason; //type: uint32
        ydk::YLeaf satellite_ip_address; //type: string
        ydk::YLeaf host_ip_address; //type: string
        class Interface; //type: NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface> > interface;
        
}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite


class NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf satellite_status; //type: DpmProtoState
        ydk::YLeaf conflict_reason; //type: uint32
        ydk::YLeaf satellite_chassis_vendor; //type: string
        ydk::YLeaf satellite_interface_id; //type: uint32
        ydk::YLeaf satellite_interface_mac; //type: string
        ydk::YLeaf satellite_chassis_mac; //type: string
        ydk::YLeaf satellite_serial_id; //type: string
        ydk::YLeaf satellite_module_vendor; //type: string

}; // NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface


class NvSatellite::IcpeDpms : public ydk::Entity
{
    public:
        IcpeDpms();
        ~IcpeDpms();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IcpeDpm; //type: NvSatellite::IcpeDpms::IcpeDpm

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms::IcpeDpm> > icpe_dpm;
        
}; // NvSatellite::IcpeDpms


class NvSatellite::IcpeDpms::IcpeDpm : public ydk::Entity
{
    public:
        IcpeDpm();
        ~IcpeDpm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discovery_interface; //type: string
        ydk::YLeaf discovery_interface_xr; //type: string
        ydk::YLeaf discovery_interface_handle; //type: string
        ydk::YLeaf discovery_interface_status; //type: DpmProtoState
        ydk::YLeaf ident_packets_received; //type: uint64
        ydk::YLeaf ready_packets_received; //type: uint64
        ydk::YLeaf los_packets_received; //type: uint64
        ydk::YLeaf invalid_packets_received; //type: uint64
        ydk::YLeaf configuration_packets_sent; //type: uint64
        ydk::YLeaf ack_packets_sent; //type: uint64
        ydk::YLeaf reject_packets_sent; //type: uint64
        ydk::YLeaf probe_packets_sent; //type: uint64
        ydk::YLeaf host_ack_packets_received; //type: uint64
        ydk::YLeaf host_ack_packets_sent; //type: uint64
        ydk::YLeaf secs_since_pkts_cleaned; //type: uint64
        class Satellite; //type: NvSatellite::IcpeDpms::IcpeDpm::Satellite
        class RemoteHost; //type: NvSatellite::IcpeDpms::IcpeDpm::RemoteHost

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms::IcpeDpm::RemoteHost> > remote_host;
        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms::IcpeDpm::Satellite> > satellite;
        
}; // NvSatellite::IcpeDpms::IcpeDpm


class NvSatellite::IcpeDpms::IcpeDpm::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_interface_id; //type: uint32
        ydk::YLeaf satellite_interface_mac; //type: string
        ydk::YLeaf satellite_ip_address; //type: string
        ydk::YLeaf host_ip_address; //type: string
        ydk::YLeaf satellite_chassis_type; //type: string
        ydk::YLeaf satellite_chassis_vendor; //type: string
        ydk::YLeaf satellite_chassis_mac; //type: string
        ydk::YLeaf satellite_serial_id; //type: string
        ydk::YLeaf satellite_module_type; //type: string
        ydk::YLeaf satellite_module_vendor; //type: string
        ydk::YLeaf satellite_module_mac; //type: string
        ydk::YLeaf conflict_reason; //type: uint32
        ydk::YLeaf received_sys_mac; //type: string
        ydk::YLeaf host_chassis_type; //type: string
        ydk::YLeaf host_chassis_vendor; //type: string
        ydk::YLeaf host_chassis_mac; //type: string
        ydk::YLeaf discovery_protocol_state; //type: DpmProtoState
        ydk::YLeaf last_imdr_state; //type: uint32
        ydk::YLeaf current_timeout; //type: uint32
        ydk::YLeaf is_queued_for_efd; //type: boolean
        ydk::YLeaf is_queued_for_oc; //type: boolean
        ydk::YLeaf ifmgr_state; //type: boolean
        ydk::YLeaf legacy; //type: boolean
        ydk::YLeaf deleting; //type: boolean
        ydk::YLeaf ident_packets_received; //type: uint64
        ydk::YLeaf ready_packets_received; //type: uint64
        ydk::YLeaf los_packets_received; //type: uint64
        ydk::YLeaf invalid_packets_received; //type: uint64
        ydk::YLeaf configuration_packets_sent; //type: uint64
        ydk::YLeaf ack_packets_sent; //type: uint64
        ydk::YLeaf reject_packets_sent; //type: uint64
        ydk::YLeaf secs_since_pkts_cleaned; //type: uint64

}; // NvSatellite::IcpeDpms::IcpeDpm::Satellite


class NvSatellite::IcpeDpms::IcpeDpm::RemoteHost : public ydk::Entity
{
    public:
        RemoteHost();
        ~RemoteHost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_chassis_mac; //type: string
        ydk::YLeaf host_interface_mac; //type: string
        ydk::YLeaf discovery_protocol_state; //type: DpmProtoHostState
        ydk::YLeaf route_length; //type: uint32
        ydk::YLeaf current_timeout; //type: uint32
        ydk::YLeaf host_ack_packets_received; //type: uint64
        ydk::YLeaf host_ack_packets_sent; //type: uint64
        ydk::YLeaf secs_since_pkts_cleaned; //type: uint64

}; // NvSatellite::IcpeDpms::IcpeDpm::RemoteHost


class NvSatellite::SdacpControls : public ydk::Entity
{
    public:
        SdacpControls();
        ~SdacpControls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SdacpControl; //type: NvSatellite::SdacpControls::SdacpControl

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl> > sdacp_control;
        
}; // NvSatellite::SdacpControls


class NvSatellite::SdacpControls::SdacpControl : public ydk::Entity
{
    public:
        SdacpControl();
        ~SdacpControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint32
        ydk::YLeaf satellite_ip_address; //type: string
        ydk::YLeaf ip_address_auto; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf control_protocol_state; //type: IcpeCpmControlFsmState
        ydk::YLeaf transport_error; //type: uint32
        class ProtocolStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp
        class TransportErrorTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp
        class Channel; //type: NvSatellite::SdacpControls::SdacpControl::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel> > channel;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp> protocol_state_timestamp;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp> transport_error_timestamp;
        
}; // NvSatellite::SdacpControls::SdacpControl


class NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp : public ydk::Entity
{
    public:
        ProtocolStateTimestamp();
        ~ProtocolStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp


class NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp : public ydk::Entity
{
    public:
        TransportErrorTimestamp();
        ~TransportErrorTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp


class NvSatellite::SdacpControls::SdacpControl::Channel : public ydk::Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_id; //type: uint16
        ydk::YLeaf resync_state; //type: IcpeCpmChannelResyncState
        ydk::YLeaf channel_state; //type: IcpeCpmChanFsmState
        ydk::YLeaf control_messages_sent; //type: uint64
        ydk::YLeaf normal_messages_sent; //type: uint64
        ydk::YLeaf control_messages_received; //type: uint64
        ydk::YLeaf normal_messages_received; //type: uint64
        ydk::YLeaf control_messages_dropped; //type: uint64
        ydk::YLeaf normal_messages_dropped; //type: uint64
        ydk::YLeaf secs_since_last_cleared; //type: uint64
        ydk::YLeaf version; //type: uint16
        class Capabilities; //type: NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities
        class ResyncStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp
        class ChannelStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp

        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp> channel_state_timestamp;
        std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp> resync_state_timestamp;
        
}; // NvSatellite::SdacpControls::SdacpControl::Channel


class NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlVs; //type: NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs

        std::vector<std::shared_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs> > tl_vs;
        
}; // NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities


class NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs : public ydk::Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf debug; //type: string
        ydk::YLeafList value_; //type: list of  uint8

}; // NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs


class NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp : public ydk::Entity
{
    public:
        ResyncStateTimestamp();
        ~ResyncStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp


class NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp : public ydk::Entity
{
    public:
        ChannelStateTimestamp();
        ~ChannelStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp

class IcpeOpmChanFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_down;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_closed;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_opening;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_opened;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_open;

};

class IcpeInstallSatState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_install_sat_state_unknown;
        static const ydk::Enum::YLeaf icpe_install_sat_state_not_initiat_ed;
        static const ydk::Enum::YLeaf icpe_install_sat_state_transferring;
        static const ydk::Enum::YLeaf icpe_install_sat_state_activating;
        static const ydk::Enum::YLeaf icpe_install_sat_state_updating;
        static const ydk::Enum::YLeaf icpe_install_sat_state_deactivating;
        static const ydk::Enum::YLeaf icpe_install_sat_state_removing;
        static const ydk::Enum::YLeaf icpe_install_sat_state_success;
        static const ydk::Enum::YLeaf icpe_install_sat_state_failure;
        static const ydk::Enum::YLeaf icpe_install_sat_state_multiple_ops;
        static const ydk::Enum::YLeaf icpe_install_sat_state_aborted;
        static const ydk::Enum::YLeaf icpe_install_sat_state_protocol_version;
        static const ydk::Enum::YLeaf icpe_install_sat_state_pkg_not_present;
        static const ydk::Enum::YLeaf icpe_install_sat_state_no_image;
        static const ydk::Enum::YLeaf icpe_install_sat_state_no_such_file;

};

class IcpeOpmResyncFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_not_open;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_stable;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_in_resync;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_queued;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_resync_req;

};

class IcpeOpmSyncFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_sync_fsm_state_split_brain;
        static const ydk::Enum::YLeaf icpe_opm_sync_fsm_state_waiting;
        static const ydk::Enum::YLeaf icpe_opm_sync_fsm_state_whole_brain;

};

class IcpeInstallPkgSupp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_install_pkg_supp_unknown;
        static const ydk::Enum::YLeaf icpe_install_pkg_supp_not_supported;
        static const ydk::Enum::YLeaf icpe_install_pkg_supp_supported;

};

class IcpeOperDiscdLinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_stopped;
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_probing;
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_configuring;
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_ready;

};

class IcpeOperPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_port_unknown;
        static const ydk::Enum::YLeaf icpe_oper_port_gigabit_ethernet;
        static const ydk::Enum::YLeaf icpe_oper_port_ten_gig_e;

};

class IcpeOpmArbitrationFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_unarbitrated;
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_waiting;
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrating;
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrated;

};

class IcpeOperMultichassisRedundancy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_multi_chassis_redundancy_not_redundant;
        static const ydk::Enum::YLeaf icpe_oper_multi_chassis_redundancy_active;
        static const ydk::Enum::YLeaf icpe_oper_multi_chassis_redundancy_standby;

};

class IcpeOperInstallState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_install_state_stable;
        static const ydk::Enum::YLeaf icpe_oper_install_state_transferring;
        static const ydk::Enum::YLeaf icpe_oper_install_state_transferred;
        static const ydk::Enum::YLeaf icpe_oper_install_state_installing;
        static const ydk::Enum::YLeaf icpe_oper_install_state_in_progress;

};

class IcpeOpmSessState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_sess_state_disconnected;
        static const ydk::Enum::YLeaf icpe_opm_sess_state_connecting;
        static const ydk::Enum::YLeaf icpe_opm_sess_state_authenticating;
        static const ydk::Enum::YLeaf icpe_opm_sess_state_arbitrating;
        static const ydk::Enum::YLeaf icpe_opm_sess_state_waiting_for_resyncs;
        static const ydk::Enum::YLeaf icpe_opm_sess_state_connected;

};

class IcpeOperConflict : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_conflict_not_calculated;
        static const ydk::Enum::YLeaf icpe_oper_conflict_no_conflict;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_not_configured;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_no_type;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_id_invalid;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_no_ipv4_addr;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_conflicting_ipv4_addr;
        static const ydk::Enum::YLeaf icpe_oper_conflict_no_configured_links;
        static const ydk::Enum::YLeaf icpe_oper_conflict_no_discovered_links;
        static const ydk::Enum::YLeaf icpe_oper_conflict_invalid_ports;
        static const ydk::Enum::YLeaf icpe_oper_conflict_ports_overlap;
        static const ydk::Enum::YLeaf icpe_oper_conflict_waiting_for_ipv4_addr;
        static const ydk::Enum::YLeaf icpe_oper_conflict_waiting_for_vrf;
        static const ydk::Enum::YLeaf icpe_oper_conflict_different_ipv4_addr;
        static const ydk::Enum::YLeaf icpe_oper_conflict_different_vrf;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_link_ipv4_overlap;
        static const ydk::Enum::YLeaf icpe_oper_conflict_waiting_for_ident;
        static const ydk::Enum::YLeaf icpe_oper_conflict_multiple_ids;
        static const ydk::Enum::YLeaf icpe_oper_conflict_multiple_satellites;
        static const ydk::Enum::YLeaf icpe_oper_conflict_ident_rejected;
        static const ydk::Enum::YLeaf icpe_oper_conflict_interface_down;
        static const ydk::Enum::YLeaf icpe_oper_conflict_auto_ip_unavailable;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_auto_ip_link_manual_ip;
        static const ydk::Enum::YLeaf icpe_oper_conflict_link_auto_ip_satellite_manual_ip;
        static const ydk::Enum::YLeaf icpe_oper_conflict_serial_num_mismatch;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_not_identified;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_unsupported_type;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_partition_unsupported;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_no_serial_number;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_conflicting_serial_number;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_link_waiting_for_arp;
        static const ydk::Enum::YLeaf icpe_oper_conflict_host_pe_isolated_split_brain;
        static const ydk::Enum::YLeaf icpe_oper_conflict_fabric_iccp_group_inconsistent;
        static const ydk::Enum::YLeaf icpe_oper_conflict_invalid_iccp_group;
        static const ydk::Enum::YLeaf icpe_oper_conflict_port_rejected;
        static const ydk::Enum::YLeaf icpe_oper_conflict_satellite_icl_not_supported;
        static const ydk::Enum::YLeaf icpe_oper_conflict_multiple_serial_number;
        static const ydk::Enum::YLeaf icpe_oper_conflict_multiple_mac_address;

};

class IcpeOpmTransportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_transport_state_disconnected;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_iccp_unavailable;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_no_member_present;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_member_down;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_member_not_reachable;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_waiting_for_app_connect;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_waiting_for_app_connect_response;
        static const ydk::Enum::YLeaf icpe_opm_transport_state_connected;

};

class IcpeOperVerCheckState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_unknown;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_not_compatible;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_current_version;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_compatible_older;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_compatible_newer;

};

class IcpeOperTopoRemoteSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_topo_remote_source_unknown;
        static const ydk::Enum::YLeaf icpe_oper_topo_remote_source_remote_icl_id;
        static const ydk::Enum::YLeaf icpe_oper_topo_remote_source_remote_satellite_mac;
        static const ydk::Enum::YLeaf icpe_oper_topo_remote_source_remote_host_mac;
        static const ydk::Enum::YLeaf icpe_oper_topo_remote_source_direct_satellite;
        static const ydk::Enum::YLeaf icpe_oper_topo_remote_source_direct_host;

};

class IcpeOpticalSyncState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_optical_sync_state_unknown;
        static const ydk::Enum::YLeaf icpe_optical_sync_state_syncing;
        static const ydk::Enum::YLeaf icpe_optical_sync_state_synced;
        static const ydk::Enum::YLeaf icpe_optical_sync_state_not_connected;

};

class IcpeOpmAuthFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_unauth;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_waiting;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_waiting_for_auth;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_waiting_for_reply;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_authed;

};

class IcpeOperSdacpSessState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_not_created;
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_created;
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_authentication_not_ok;
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_authentication_ok;
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_version_not_ok;
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_up;
        static const ydk::Enum::YLeaf icpe_oper_sdacp_sess_state_issu;

};

class IcpeOperFabricPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_unknown;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_gig_e;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_ten_gig_e;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_hundred_gig_e;

};

class IcpeOpmController : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_controller_unknown;
        static const ydk::Enum::YLeaf icpe_opm_controller_primary;
        static const ydk::Enum::YLeaf icpe_opm_controller_secondary;

};

class IcpeGcoOperControlReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_unknown_error;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_wrong_chassis_type;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_wrong_chassis_serial;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_needs_to_upgrade;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_none;

};


}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_OPER_ */

