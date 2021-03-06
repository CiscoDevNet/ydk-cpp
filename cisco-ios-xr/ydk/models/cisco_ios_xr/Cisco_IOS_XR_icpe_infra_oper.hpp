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

        class ReloadOpStatuses; //type: NvSatellite::ReloadOpStatuses
        class SdacpRedundancies; //type: NvSatellite::SdacpRedundancies
        class InstallShows; //type: NvSatellite::InstallShows
        class SatelliteStatuses; //type: NvSatellite::SatelliteStatuses
        class SatellitePriorities; //type: NvSatellite::SatellitePriorities
        class SatelliteVersions; //type: NvSatellite::SatelliteVersions
        class SatelliteTopologies; //type: NvSatellite::SatelliteTopologies
        class InstallReferenceInfo; //type: NvSatellite::InstallReferenceInfo
        class InstallOpProgresses; //type: NvSatellite::InstallOpProgresses
        class Install; //type: NvSatellite::Install
        class InstallOpStatuses; //type: NvSatellite::InstallOpStatuses
        class InstallImageReferenceInfo; //type: NvSatellite::InstallImageReferenceInfo
        class SatelliteProperties; //type: NvSatellite::SatelliteProperties
        class SdacpDiscovery2s; //type: NvSatellite::SdacpDiscovery2s
        class IcpeDpms; //type: NvSatellite::IcpeDpms
        class SdacpControls; //type: NvSatellite::SdacpControls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadOpStatuses> reload_op_statuses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies> sdacp_redundancies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallShows> install_shows;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses> satellite_statuses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatellitePriorities> satellite_priorities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions> satellite_versions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies> satellite_topologies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallReferenceInfo> install_reference_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpProgresses> install_op_progresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install> install;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpStatuses> install_op_statuses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallImageReferenceInfo> install_image_reference_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties> satellite_properties;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpDiscovery2s> sdacp_discovery2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::IcpeDpms> icpe_dpms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls> sdacp_controls;
        
}; // NvSatellite


class NvSatellite::ReloadOpStatuses : public ydk::Entity
{
    public:
        ReloadOpStatuses();
        ~ReloadOpStatuses();

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

        class ReloadOpStatus; //type: NvSatellite::ReloadOpStatuses::ReloadOpStatus

        ydk::YList reload_op_status;
        
}; // NvSatellite::ReloadOpStatuses


class NvSatellite::ReloadOpStatuses::ReloadOpStatus : public ydk::Entity
{
    public:
        ReloadOpStatus();
        ~ReloadOpStatus();

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

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf satellite_range; //type: string
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_reloading; //type: list of  uint16
        ydk::YLeafList sats_reloaded; //type: list of  uint16
        ydk::YLeafList sats_reload_failed; //type: list of  uint16

}; // NvSatellite::ReloadOpStatuses::ReloadOpStatus


class NvSatellite::SdacpRedundancies : public ydk::Entity
{
    public:
        SdacpRedundancies();
        ~SdacpRedundancies();

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

        class SdacpRedundancy; //type: NvSatellite::SdacpRedundancies::SdacpRedundancy

        ydk::YList sdacp_redundancy;
        
}; // NvSatellite::SdacpRedundancies


class NvSatellite::SdacpRedundancies::SdacpRedundancy : public ydk::Entity
{
    public:
        SdacpRedundancy();
        ~SdacpRedundancy();

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp> protocol_state_timestamp;
        ydk::YList channel;
        
}; // NvSatellite::SdacpRedundancies::SdacpRedundancy


class NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp : public ydk::Entity
{
    public:
        ProtocolStateTimestamp();
        ~ProtocolStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp> channel_state_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp> resync_state_timestamp;
        
}; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel


class NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp : public ydk::Entity
{
    public:
        ChannelStateTimestamp();
        ~ChannelStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstallShow; //type: NvSatellite::InstallShows::InstallShow

        ydk::YList install_show;
        
}; // NvSatellite::InstallShows


class NvSatellite::InstallShows::InstallShow : public ydk::Entity
{
    public:
        InstallShow();
        ~InstallShow();

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

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf satellite_range; //type: string
        ydk::YLeaf operation_type; //type: uint16
        ydk::YLeaf progress_percentage; //type: uint16
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf end_time; //type: uint32
        ydk::YLeaf reference_op; //type: boolean
        ydk::YLeaf ref_type; //type: IcpeOperRefType
        ydk::YLeaf ref_name; //type: string
        ydk::YLeaf ref_state; //type: IcpeInstallSatState
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_transferring; //type: list of  uint16
        ydk::YLeafList sats_activating; //type: list of  uint16
        ydk::YLeafList sats_updating; //type: list of  uint16
        ydk::YLeafList sats_replacing; //type: list of  uint16
        ydk::YLeafList sats_deactivating; //type: list of  uint16
        ydk::YLeafList sats_removing; //type: list of  uint16
        ydk::YLeafList sats_transfer_failed; //type: list of  uint16
        ydk::YLeafList sats_activate_failed; //type: list of  uint16
        ydk::YLeafList sats_update_failed; //type: list of  uint16
        ydk::YLeafList sats_replace_failed; //type: list of  uint16
        ydk::YLeafList sats_deactivate_failed; //type: list of  uint16
        ydk::YLeafList sats_remove_failed; //type: list of  uint16
        ydk::YLeafList sats_transfer_aborted; //type: list of  uint16
        ydk::YLeafList sats_activate_aborted; //type: list of  uint16
        ydk::YLeafList sats_update_aborted; //type: list of  uint16
        ydk::YLeafList sats_replace_aborted; //type: list of  uint16
        ydk::YLeafList sats_deactivate_aborted; //type: list of  uint16
        ydk::YLeafList sats_remove_aborted; //type: list of  uint16
        ydk::YLeafList sats_no_operation; //type: list of  uint16
        ydk::YLeafList sats_completed; //type: list of  uint16
        ydk::YLeafList name_string; //type: list of  string
        class Satellite; //type: NvSatellite::InstallShows::InstallShow::Satellite

        ydk::YList satellite;
        
}; // NvSatellite::InstallShows::InstallShow


class NvSatellite::InstallShows::InstallShow::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SatelliteStatus; //type: NvSatellite::SatelliteStatuses::SatelliteStatus

        ydk::YList satellite_status;
        
}; // NvSatellite::SatelliteStatuses


class NvSatellite::SatelliteStatuses::SatelliteStatus : public ydk::Entity
{
    public:
        SatelliteStatus();
        ~SatelliteStatus();

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

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint16
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
        class ReloadData; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ReloadData
        class ConfiguredLink; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts> candidate_fabric_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus> optical_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp> redundancy_out_of_sync_timestamp;
        ydk::YList reload_data;
        ydk::YList configured_link;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts : public ydk::Entity
{
    public:
        CandidateFabricPorts();
        ~CandidateFabricPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList configured_port;
        ydk::YList current_port;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts


class NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort : public ydk::Entity
{
    public:
        ConfiguredPort();
        ~ConfiguredPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_sync_state; //type: IcpeOpticalSyncState
        class Application; //type: NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application

        ydk::YList application;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus


class NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp


class NvSatellite::SatelliteStatuses::SatelliteStatus::ReloadData : public ydk::Entity
{
    public:
        ReloadData();
        ~ReloadData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IcpeOperReloadLevel
        ydk::YLeaf time; //type: uint64
        ydk::YLeaf info; //type: string

}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ReloadData


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink : public ydk::Entity
{
    public:
        ConfiguredLink();
        ~ConfiguredLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList port_range;
        ydk::YList discovered_link;
        
}; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink


class NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange : public ydk::Entity
{
    public:
        PortRange();
        ~PortRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SatellitePriority; //type: NvSatellite::SatellitePriorities::SatellitePriority

        ydk::YList satellite_priority;
        
}; // NvSatellite::SatellitePriorities


class NvSatellite::SatellitePriorities::SatellitePriority : public ydk::Entity
{
    public:
        SatellitePriority();
        ~SatellitePriority();

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

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint16
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SatelliteVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion

        ydk::YList satellite_version;
        
}; // NvSatellite::SatelliteVersions


class NvSatellite::SatelliteVersions::SatelliteVersion : public ydk::Entity
{
    public:
        SatelliteVersion();
        ~SatelliteVersion();

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

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint16
        ydk::YLeaf version_check_state; //type: IcpeOperVerCheckState
        ydk::YLeaf remote_version_present; //type: boolean
        ydk::YLeafList remote_version; //type: list of  string
        class ActiveVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion
        class TransferredVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion
        class CommittedVersion; //type: NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion> active_version;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion> transferred_version;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion> committed_version;
        
}; // NvSatellite::SatelliteVersions::SatelliteVersion


class NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion : public ydk::Entity
{
    public:
        ActiveVersion();
        ~ActiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SatelliteTopology; //type: NvSatellite::SatelliteTopologies::SatelliteTopology

        ydk::YList satellite_topology;
        
}; // NvSatellite::SatelliteTopologies


class NvSatellite::SatelliteTopologies::SatelliteTopology : public ydk::Entity
{
    public:
        SatelliteTopology();
        ~SatelliteTopology();

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
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf redundancy_iccp_group; //type: uint32
        ydk::YLeaf is_physical; //type: boolean
        ydk::YLeaf ring_whole; //type: boolean
        class DiscoveredLink; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink
        class Satellite; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite

        ydk::YList discovered_link;
        ydk::YList satellite;
        
}; // NvSatellite::SatelliteTopologies::SatelliteTopology


class NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink : public ydk::Entity
{
    public:
        DiscoveredLink();
        ~DiscoveredLink();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        ydk::YLeaf satellite_id; //type: uint16
        ydk::YLeaf received_serial_number; //type: string
        ydk::YLeaf received_serial_number_present; //type: boolean
        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf display_name; //type: string
        ydk::YLeaf conflict_reason; //type: IcpeOperConflict
        ydk::YLeaf conflict_context; //type: string
        class FabricLink; //type: NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink

        ydk::YList fabric_link;
        
}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink : public ydk::Entity
{
    public:
        FabricLink();
        ~FabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList remote_device;
        
}; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink


class NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice : public ydk::Entity
{
    public:
        RemoteDevice();
        ~RemoteDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class NvSatellite::InstallReferenceInfo : public ydk::Entity
{
    public:
        InstallReferenceInfo();
        ~InstallReferenceInfo();

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

        class References; //type: NvSatellite::InstallReferenceInfo::References

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallReferenceInfo::References> references;
        
}; // NvSatellite::InstallReferenceInfo


class NvSatellite::InstallReferenceInfo::References : public ydk::Entity
{
    public:
        References();
        ~References();

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

        class Reference; //type: NvSatellite::InstallReferenceInfo::References::Reference

        ydk::YList reference;
        
}; // NvSatellite::InstallReferenceInfo::References


class NvSatellite::InstallReferenceInfo::References::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

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

        ydk::YLeaf reference_name; //type: string
        ydk::YLeaf reference_name_xr; //type: string
        ydk::YLeafList reference_file; //type: list of  string

}; // NvSatellite::InstallReferenceInfo::References::Reference


class NvSatellite::InstallOpProgresses : public ydk::Entity
{
    public:
        InstallOpProgresses();
        ~InstallOpProgresses();

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

        class InstallOpProgress; //type: NvSatellite::InstallOpProgresses::InstallOpProgress

        ydk::YList install_op_progress;
        
}; // NvSatellite::InstallOpProgresses


class NvSatellite::InstallOpProgresses::InstallOpProgress : public ydk::Entity
{
    public:
        InstallOpProgress();
        ~InstallOpProgress();

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

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf progress_percentage; //type: uint16
        ydk::YLeaf satellite_count; //type: uint32

}; // NvSatellite::InstallOpProgresses::InstallOpProgress


class NvSatellite::Install : public ydk::Entity
{
    public:
        Install();
        ~Install();

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

        class SatelliteSoftwareVersions; //type: NvSatellite::Install::SatelliteSoftwareVersions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions> satellite_software_versions;
        
}; // NvSatellite::Install


class NvSatellite::Install::SatelliteSoftwareVersions : public ydk::Entity
{
    public:
        SatelliteSoftwareVersions();
        ~SatelliteSoftwareVersions();

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

        class SatelliteSoftwareVersion; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion

        ydk::YList satellite_software_version;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion : public ydk::Entity
{
    public:
        SatelliteSoftwareVersion();
        ~SatelliteSoftwareVersion();

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

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint16
        ydk::YLeaf package_support; //type: IcpeInstallPkgSupp
        class InstallPackageInfo; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo> install_package_info;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo : public ydk::Entity
{
    public:
        InstallPackageInfo();
        ~InstallPackageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActivePackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages
        class InactivePackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages
        class CommittedPackages; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages> active_packages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages> inactive_packages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages> committed_packages;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages : public ydk::Entity
{
    public:
        ActivePackages();
        ~ActivePackages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package

        ydk::YList package;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package

        ydk::YList package;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Package; //type: NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package

        ydk::YList package;
        
}; // NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages


class NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstallOpStatus; //type: NvSatellite::InstallOpStatuses::InstallOpStatus

        ydk::YList install_op_status;
        
}; // NvSatellite::InstallOpStatuses


class NvSatellite::InstallOpStatuses::InstallOpStatus : public ydk::Entity
{
    public:
        InstallOpStatus();
        ~InstallOpStatus();

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

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf operation_id_xr; //type: uint32
        ydk::YLeaf satellite_range; //type: string
        ydk::YLeaf arg_is_reference; //type: boolean
        ydk::YLeaf reference_op; //type: boolean
        ydk::YLeafList sats_not_initiated; //type: list of  uint16
        ydk::YLeafList sats_transferring; //type: list of  uint16
        ydk::YLeafList sats_activating; //type: list of  uint16
        ydk::YLeafList sats_updating; //type: list of  uint16
        ydk::YLeafList sats_replacing; //type: list of  uint16
        ydk::YLeafList sats_deactivating; //type: list of  uint16
        ydk::YLeafList sats_removing; //type: list of  uint16
        ydk::YLeafList sats_transfer_failed; //type: list of  uint16
        ydk::YLeafList sats_activate_failed; //type: list of  uint16
        ydk::YLeafList sats_update_failed; //type: list of  uint16
        ydk::YLeafList sats_replace_failed; //type: list of  uint16
        ydk::YLeafList sats_deactivate_failed; //type: list of  uint16
        ydk::YLeafList sats_remove_failed; //type: list of  uint16
        ydk::YLeafList sats_transfer_aborted; //type: list of  uint16
        ydk::YLeafList sats_activate_aborted; //type: list of  uint16
        ydk::YLeafList sats_update_aborted; //type: list of  uint16
        ydk::YLeafList sats_replace_aborted; //type: list of  uint16
        ydk::YLeafList sats_deactivate_aborted; //type: list of  uint16
        ydk::YLeafList sats_remove_aborted; //type: list of  uint16
        ydk::YLeafList sats_no_operation; //type: list of  uint16
        ydk::YLeafList sats_completed; //type: list of  uint16

}; // NvSatellite::InstallOpStatuses::InstallOpStatus


class NvSatellite::InstallImageReferenceInfo : public ydk::Entity
{
    public:
        InstallImageReferenceInfo();
        ~InstallImageReferenceInfo();

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

        class References; //type: NvSatellite::InstallImageReferenceInfo::References

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallImageReferenceInfo::References> references;
        
}; // NvSatellite::InstallImageReferenceInfo


class NvSatellite::InstallImageReferenceInfo::References : public ydk::Entity
{
    public:
        References();
        ~References();

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

        class Reference; //type: NvSatellite::InstallImageReferenceInfo::References::Reference

        ydk::YList reference;
        
}; // NvSatellite::InstallImageReferenceInfo::References


class NvSatellite::InstallImageReferenceInfo::References::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

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

        ydk::YLeaf reference_name; //type: string
        ydk::YLeaf reference_name_xr; //type: string
        ydk::YLeafList reference_file; //type: list of  string

}; // NvSatellite::InstallImageReferenceInfo::References::Reference


class NvSatellite::SatelliteProperties : public ydk::Entity
{
    public:
        SatelliteProperties();
        ~SatelliteProperties();

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

        class IdRanges; //type: NvSatellite::SatelliteProperties::IdRanges

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteProperties::IdRanges> id_ranges;
        
}; // NvSatellite::SatelliteProperties


class NvSatellite::SatelliteProperties::IdRanges : public ydk::Entity
{
    public:
        IdRanges();
        ~IdRanges();

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

        class IdRange; //type: NvSatellite::SatelliteProperties::IdRanges::IdRange

        ydk::YList id_range;
        
}; // NvSatellite::SatelliteProperties::IdRanges


class NvSatellite::SatelliteProperties::IdRanges::IdRange : public ydk::Entity
{
    public:
        IdRange();
        ~IdRange();

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

        ydk::YLeaf sat_id_range; //type: string
        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // NvSatellite::SatelliteProperties::IdRanges::IdRange


class NvSatellite::SdacpDiscovery2s : public ydk::Entity
{
    public:
        SdacpDiscovery2s();
        ~SdacpDiscovery2s();

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

        class SdacpDiscovery2; //type: NvSatellite::SdacpDiscovery2s::SdacpDiscovery2

        ydk::YList sdacp_discovery2;
        
}; // NvSatellite::SdacpDiscovery2s


class NvSatellite::SdacpDiscovery2s::SdacpDiscovery2 : public ydk::Entity
{
    public:
        SdacpDiscovery2();
        ~SdacpDiscovery2();

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
        class Interface; //type: NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Interface
        class Satellite; //type: NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Satellite

        ydk::YList interface;
        ydk::YList satellite;
        
}; // NvSatellite::SdacpDiscovery2s::SdacpDiscovery2


class NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Interface : public ydk::Entity
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
        ydk::YLeaf interface_status; //type: DpmProtoState

}; // NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Interface


class NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint16
        ydk::YLeaf satellite_status; //type: DpmProtoState
        ydk::YLeaf conflict_reason; //type: uint32
        ydk::YLeaf satellite_ip_address; //type: string
        ydk::YLeaf host_ip_address; //type: string
        class Interface; //type: NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Satellite::Interface

        ydk::YList interface;
        
}; // NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Satellite


class NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Satellite::Interface : public ydk::Entity
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

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf satellite_status; //type: DpmProtoState
        ydk::YLeaf conflict_reason; //type: uint32
        ydk::YLeaf satellite_chassis_vendor; //type: string
        ydk::YLeaf satellite_interface_id; //type: uint32
        ydk::YLeaf satellite_interface_mac; //type: string
        ydk::YLeaf satellite_chassis_mac; //type: string
        ydk::YLeaf satellite_serial_id; //type: string
        ydk::YLeaf satellite_module_vendor; //type: string

}; // NvSatellite::SdacpDiscovery2s::SdacpDiscovery2::Satellite::Interface


class NvSatellite::IcpeDpms : public ydk::Entity
{
    public:
        IcpeDpms();
        ~IcpeDpms();

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

        class IcpeDpm; //type: NvSatellite::IcpeDpms::IcpeDpm

        ydk::YList icpe_dpm;
        
}; // NvSatellite::IcpeDpms


class NvSatellite::IcpeDpms::IcpeDpm : public ydk::Entity
{
    public:
        IcpeDpm();
        ~IcpeDpm();

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

        ydk::YList satellite;
        ydk::YList remote_host;
        
}; // NvSatellite::IcpeDpms::IcpeDpm


class NvSatellite::IcpeDpms::IcpeDpm::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint16
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SdacpControl; //type: NvSatellite::SdacpControls::SdacpControl

        ydk::YList sdacp_control;
        
}; // NvSatellite::SdacpControls


class NvSatellite::SdacpControls::SdacpControl : public ydk::Entity
{
    public:
        SdacpControl();
        ~SdacpControl();

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

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf satellite_id_xr; //type: uint16
        ydk::YLeaf satellite_ip_address; //type: string
        ydk::YLeaf ip_address_auto; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf control_protocol_state; //type: IcpeCpmControlFsmState
        ydk::YLeaf transport_error; //type: uint32
        class ProtocolStateTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp
        class TransportErrorTimestamp; //type: NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp
        class Channel; //type: NvSatellite::SdacpControls::SdacpControl::Channel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp> protocol_state_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp> transport_error_timestamp;
        ydk::YList channel;
        
}; // NvSatellite::SdacpControls::SdacpControl


class NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp : public ydk::Entity
{
    public:
        ProtocolStateTimestamp();
        ~ProtocolStateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities> capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp> resync_state_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp> channel_state_timestamp;
        
}; // NvSatellite::SdacpControls::SdacpControl::Channel


class NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlVs; //type: NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs

        ydk::YList tl_vs;
        
}; // NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities


class NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs : public ydk::Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp

class IcpeOpmSyncFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_sync_fsm_state_split_brain;
        static const ydk::Enum::YLeaf icpe_opm_sync_fsm_state_waiting;
        static const ydk::Enum::YLeaf icpe_opm_sync_fsm_state_whole_brain;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-sync-fsm-state-split-brain") return 0;
            if (name == "icpe-opm-sync-fsm-state-waiting") return 1;
            if (name == "icpe-opm-sync-fsm-state-whole-brain") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-sdacp-sess-state-not-created") return 0;
            if (name == "icpe-oper-sdacp-sess-state-created") return 1;
            if (name == "icpe-oper-sdacp-sess-state-authentication-not-ok") return 2;
            if (name == "icpe-oper-sdacp-sess-state-authentication-ok") return 3;
            if (name == "icpe-oper-sdacp-sess-state-version-not-ok") return 4;
            if (name == "icpe-oper-sdacp-sess-state-up") return 5;
            if (name == "icpe-oper-sdacp-sess-state-issu") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-transport-state-disconnected") return 0;
            if (name == "icpe-opm-transport-state-iccp-unavailable") return 1;
            if (name == "icpe-opm-transport-state-no-member-present") return 2;
            if (name == "icpe-opm-transport-state-member-down") return 3;
            if (name == "icpe-opm-transport-state-member-not-reachable") return 4;
            if (name == "icpe-opm-transport-state-waiting-for-app-connect") return 5;
            if (name == "icpe-opm-transport-state-waiting-for-app-connect-response") return 6;
            if (name == "icpe-opm-transport-state-connected") return 7;
            return -1;
        }
};

class IcpeOperRefType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_ref_type_invalid;
        static const ydk::Enum::YLeaf icpe_oper_ref_type_smu;
        static const ydk::Enum::YLeaf icpe_oper_ref_type_base_image;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-ref-type-invalid") return 0;
            if (name == "icpe-oper-ref-type-smu") return 1;
            if (name == "icpe-oper-ref-type-base-image") return 2;
            return -1;
        }
};

class IcpeOpmAuthFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_unauth;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_waiting;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_waiting_for_auth;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_waiting_for_reply;
        static const ydk::Enum::YLeaf icpe_opm_auth_fsm_state_authed;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-auth-fsm-state-unauth") return 0;
            if (name == "icpe-opm-auth-fsm-state-waiting") return 1;
            if (name == "icpe-opm-auth-fsm-state-waiting-for-auth") return 2;
            if (name == "icpe-opm-auth-fsm-state-waiting-for-reply") return 3;
            if (name == "icpe-opm-auth-fsm-state-authed") return 4;
            return -1;
        }
};

class IcpeOpmController : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_controller_unknown;
        static const ydk::Enum::YLeaf icpe_opm_controller_primary;
        static const ydk::Enum::YLeaf icpe_opm_controller_secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-controller-unknown") return 0;
            if (name == "icpe-opm-controller-primary") return 1;
            if (name == "icpe-opm-controller-secondary") return 2;
            return -1;
        }
};

class IcpeOpmResyncFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_not_open;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_stable;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_in_resync;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_queued;
        static const ydk::Enum::YLeaf icpe_opm_resync_fsm_state_resync_req;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-resync-fsm-state-not-open") return 0;
            if (name == "icpe-opm-resync-fsm-state-stable") return 1;
            if (name == "icpe-opm-resync-fsm-state-in-resync") return 2;
            if (name == "icpe-opm-resync-fsm-state-queued") return 3;
            if (name == "icpe-opm-resync-fsm-state-resync-req") return 4;
            return -1;
        }
};

class IcpeOpmChanFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_down;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_closed;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_opening;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_opened;
        static const ydk::Enum::YLeaf icpe_opm_chan_fsm_state_open;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-chan-fsm-state-down") return 0;
            if (name == "icpe-opm-chan-fsm-state-closed") return 1;
            if (name == "icpe-opm-chan-fsm-state-opening") return 2;
            if (name == "icpe-opm-chan-fsm-state-opened") return 3;
            if (name == "icpe-opm-chan-fsm-state-open") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-sess-state-disconnected") return 0;
            if (name == "icpe-opm-sess-state-connecting") return 1;
            if (name == "icpe-opm-sess-state-authenticating") return 2;
            if (name == "icpe-opm-sess-state-arbitrating") return 3;
            if (name == "icpe-opm-sess-state-waiting-for-resyncs") return 4;
            if (name == "icpe-opm-sess-state-connected") return 5;
            return -1;
        }
};

class IcpeOperInstallState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_install_state_stable;
        static const ydk::Enum::YLeaf icpe_oper_install_state_transferring;
        static const ydk::Enum::YLeaf icpe_oper_install_state_transferred;
        static const ydk::Enum::YLeaf icpe_oper_install_state_installing;
        static const ydk::Enum::YLeaf icpe_oper_install_state_in_progress;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-install-state-stable") return 0;
            if (name == "icpe-oper-install-state-transferring") return 1;
            if (name == "icpe-oper-install-state-transferred") return 2;
            if (name == "icpe-oper-install-state-installing") return 3;
            if (name == "icpe-oper-install-state-in-progress") return 4;
            return -1;
        }
};

class IcpeOperPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_port_unknown;
        static const ydk::Enum::YLeaf icpe_oper_port_gigabit_ethernet;
        static const ydk::Enum::YLeaf icpe_oper_port_ten_gig_e;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-port-unknown") return 0;
            if (name == "icpe-oper-port-gigabit-ethernet") return 1;
            if (name == "icpe-oper-port-ten-gig-e") return 2;
            return -1;
        }
};

class IcpeOperFabricPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_unknown;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_gig_e;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_ten_gig_e;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_forty_gig_e;
        static const ydk::Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_hundred_gig_e;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-fabric-port-unknown") return 0;
            if (name == "icpe-oper-fabric-port-n-v-fabric-gig-e") return 1;
            if (name == "icpe-oper-fabric-port-n-v-fabric-ten-gig-e") return 2;
            if (name == "icpe-oper-fabric-port-n-v-fabric-forty-gig-e") return 3;
            if (name == "icpe-oper-fabric-port-n-v-fabric-hundred-gig-e") return 4;
            return -1;
        }
};

class IcpeInstallPkgSupp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_install_pkg_supp_unknown;
        static const ydk::Enum::YLeaf icpe_install_pkg_supp_not_supported;
        static const ydk::Enum::YLeaf icpe_install_pkg_supp_supported;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-install-pkg-supp-unknown") return 0;
            if (name == "icpe-install-pkg-supp-not-supported") return 1;
            if (name == "icpe-install-pkg-supp-supported") return 2;
            return -1;
        }
};

class IcpeGcoOperControlReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_unknown_error;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_wrong_chassis_type;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_wrong_chassis_serial;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_needs_to_upgrade;
        static const ydk::Enum::YLeaf icpe_gco_oper_control_reason_none;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-gco-oper-control-reason-unknown-error") return 0;
            if (name == "icpe-gco-oper-control-reason-wrong-chassis-type") return 1;
            if (name == "icpe-gco-oper-control-reason-wrong-chassis-serial") return 2;
            if (name == "icpe-gco-oper-control-reason-needs-to-upgrade") return 3;
            if (name == "icpe-gco-oper-control-reason-none") return 4;
            return -1;
        }
};

class IcpeInstallSatState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_install_sat_state_unknown;
        static const ydk::Enum::YLeaf icpe_install_sat_state_not_initiat_ed;
        static const ydk::Enum::YLeaf icpe_install_sat_state_transferring;
        static const ydk::Enum::YLeaf icpe_install_sat_state_activating;
        static const ydk::Enum::YLeaf icpe_install_sat_state_updating;
        static const ydk::Enum::YLeaf icpe_install_sat_state_replacing;
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
        static const ydk::Enum::YLeaf icpe_install_sat_state_sat_uncfgd;
        static const ydk::Enum::YLeaf icpe_install_sat_state_processing;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-install-sat-state-unknown") return 0;
            if (name == "icpe-install-sat-state-not-initiat-ed") return 1;
            if (name == "icpe-install-sat-state-transferring") return 2;
            if (name == "icpe-install-sat-state-activating") return 3;
            if (name == "icpe-install-sat-state-updating") return 4;
            if (name == "icpe-install-sat-state-replacing") return 5;
            if (name == "icpe-install-sat-state-deactivating") return 6;
            if (name == "icpe-install-sat-state-removing") return 7;
            if (name == "icpe-install-sat-state-success") return 8;
            if (name == "icpe-install-sat-state-failure") return 9;
            if (name == "icpe-install-sat-state-multiple-ops") return 10;
            if (name == "icpe-install-sat-state-aborted") return 11;
            if (name == "icpe-install-sat-state-protocol-version") return 12;
            if (name == "icpe-install-sat-state-pkg-not-present") return 13;
            if (name == "icpe-install-sat-state-no-image") return 14;
            if (name == "icpe-install-sat-state-no-such-file") return 15;
            if (name == "icpe-install-sat-state-sat-uncfgd") return 16;
            if (name == "icpe-install-sat-state-processing") return 17;
            return -1;
        }
};

class IcpeOpmArbitrationFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_unarbitrated;
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_waiting;
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrating;
        static const ydk::Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrated;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-opm-arbitration-fsm-state-unarbitrated") return 0;
            if (name == "icpe-opm-arbitration-fsm-state-waiting") return 1;
            if (name == "icpe-opm-arbitration-fsm-state-arbitrating") return 2;
            if (name == "icpe-opm-arbitration-fsm-state-arbitrated") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-conflict-not-calculated") return 0;
            if (name == "icpe-oper-conflict-no-conflict") return 1;
            if (name == "icpe-oper-conflict-satellite-not-configured") return 2;
            if (name == "icpe-oper-conflict-satellite-no-type") return 3;
            if (name == "icpe-oper-conflict-satellite-id-invalid") return 4;
            if (name == "icpe-oper-conflict-satellite-no-ipv4-addr") return 5;
            if (name == "icpe-oper-conflict-satellite-conflicting-ipv4-addr") return 6;
            if (name == "icpe-oper-conflict-no-configured-links") return 7;
            if (name == "icpe-oper-conflict-no-discovered-links") return 8;
            if (name == "icpe-oper-conflict-invalid-ports") return 9;
            if (name == "icpe-oper-conflict-ports-overlap") return 10;
            if (name == "icpe-oper-conflict-waiting-for-ipv4-addr") return 11;
            if (name == "icpe-oper-conflict-waiting-for-vrf") return 12;
            if (name == "icpe-oper-conflict-different-ipv4-addr") return 13;
            if (name == "icpe-oper-conflict-different-vrf") return 14;
            if (name == "icpe-oper-conflict-satellite-link-ipv4-overlap") return 15;
            if (name == "icpe-oper-conflict-waiting-for-ident") return 16;
            if (name == "icpe-oper-conflict-multiple-ids") return 17;
            if (name == "icpe-oper-conflict-multiple-satellites") return 18;
            if (name == "icpe-oper-conflict-ident-rejected") return 19;
            if (name == "icpe-oper-conflict-interface-down") return 20;
            if (name == "icpe-oper-conflict-auto-ip-unavailable") return 21;
            if (name == "icpe-oper-conflict-satellite-auto-ip-link-manual-ip") return 22;
            if (name == "icpe-oper-conflict-link-auto-ip-satellite-manual-ip") return 23;
            if (name == "icpe-oper-conflict-serial-num-mismatch") return 24;
            if (name == "icpe-oper-conflict-satellite-not-identified") return 25;
            if (name == "icpe-oper-conflict-satellite-unsupported-type") return 26;
            if (name == "icpe-oper-conflict-satellite-partition-unsupported") return 27;
            if (name == "icpe-oper-conflict-satellite-no-serial-number") return 28;
            if (name == "icpe-oper-conflict-satellite-conflicting-serial-number") return 29;
            if (name == "icpe-oper-conflict-satellite-link-waiting-for-arp") return 30;
            if (name == "icpe-oper-conflict-host-pe-isolated-split-brain") return 31;
            if (name == "icpe-oper-conflict-fabric-iccp-group-inconsistent") return 32;
            if (name == "icpe-oper-conflict-invalid-iccp-group") return 33;
            if (name == "icpe-oper-conflict-port-rejected") return 34;
            if (name == "icpe-oper-conflict-satellite-icl-not-supported") return 35;
            if (name == "icpe-oper-conflict-multiple-serial-number") return 36;
            if (name == "icpe-oper-conflict-multiple-mac-address") return 37;
            return -1;
        }
};

class IcpeOperVerCheckState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_unknown;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_not_compatible;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_current_version;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_compatible_older;
        static const ydk::Enum::YLeaf icpe_oper_ver_check_state_compatible_newer;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-ver-check-state-unknown") return 0;
            if (name == "icpe-oper-ver-check-state-not-compatible") return 1;
            if (name == "icpe-oper-ver-check-state-current-version") return 2;
            if (name == "icpe-oper-ver-check-state-compatible-older") return 3;
            if (name == "icpe-oper-ver-check-state-compatible-newer") return 4;
            return -1;
        }
};

class IcpeOperReloadLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_reload_level_unknown;
        static const ydk::Enum::YLeaf icpe_oper_reload_level_system;
        static const ydk::Enum::YLeaf icpe_oper_reload_level_container;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-reload-level-unknown") return 0;
            if (name == "icpe-oper-reload-level-system") return 1;
            if (name == "icpe-oper-reload-level-container") return 2;
            return -1;
        }
};

class IcpeOperMultichassisRedundancy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_multi_chassis_redundancy_not_redundant;
        static const ydk::Enum::YLeaf icpe_oper_multi_chassis_redundancy_active;
        static const ydk::Enum::YLeaf icpe_oper_multi_chassis_redundancy_standby;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-multi-chassis-redundancy-not-redundant") return 0;
            if (name == "icpe-oper-multi-chassis-redundancy-active") return 1;
            if (name == "icpe-oper-multi-chassis-redundancy-standby") return 2;
            return -1;
        }
};

class IcpeOperDiscdLinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_stopped;
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_probing;
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_configuring;
        static const ydk::Enum::YLeaf icpe_oper_discd_link_state_ready;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-discd-link-state-stopped") return 0;
            if (name == "icpe-oper-discd-link-state-probing") return 1;
            if (name == "icpe-oper-discd-link-state-configuring") return 2;
            if (name == "icpe-oper-discd-link-state-ready") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-oper-topo-remote-source-unknown") return 0;
            if (name == "icpe-oper-topo-remote-source-remote-icl-id") return 1;
            if (name == "icpe-oper-topo-remote-source-remote-satellite-mac") return 2;
            if (name == "icpe-oper-topo-remote-source-remote-host-mac") return 3;
            if (name == "icpe-oper-topo-remote-source-direct-satellite") return 4;
            if (name == "icpe-oper-topo-remote-source-direct-host") return 5;
            return -1;
        }
};

class IcpeOpticalSyncState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_optical_sync_state_unknown;
        static const ydk::Enum::YLeaf icpe_optical_sync_state_syncing;
        static const ydk::Enum::YLeaf icpe_optical_sync_state_synced;
        static const ydk::Enum::YLeaf icpe_optical_sync_state_not_connected;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-optical-sync-state-unknown") return 0;
            if (name == "icpe-optical-sync-state-syncing") return 1;
            if (name == "icpe-optical-sync-state-synced") return 2;
            if (name == "icpe-optical-sync-state-not-connected") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_OPER_ */

