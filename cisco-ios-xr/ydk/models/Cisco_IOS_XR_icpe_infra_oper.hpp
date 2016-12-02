#ifndef _CISCO_IOS_XR_ICPE_INFRA_OPER_
#define _CISCO_IOS_XR_ICPE_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class ReloadOpStatuses : public Entity
    {
        public:
            ReloadOpStatuses();
            ~ReloadOpStatuses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ReloadOpStatus : public Entity
        {
            public:
                ReloadOpStatus();
                ~ReloadOpStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value operation_id; //type: uint32
                Value operation_id_xr; //type: uint32
                Value satellite_range; //type: string
                ValueList sats_not_initiated; //type: list of  uint16
                ValueList sats_reloading; //type: list of  uint16
                ValueList sats_reloaded; //type: list of  uint16
                ValueList sats_reload_failed; //type: list of  uint16




        }; // NvSatellite::ReloadOpStatuses::ReloadOpStatus


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadOpStatuses::ReloadOpStatus> > reload_op_status;


    }; // NvSatellite::ReloadOpStatuses


    class InstallStatuses : public Entity
    {
        public:
            InstallStatuses();
            ~InstallStatuses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InstallStatus : public Entity
        {
            public:
                InstallStatus();
                ~InstallStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value satellite_range; //type: string
                Value satellite_range_xr; //type: string
                Value operation_id; //type: uint32
                ValueList sats_not_initiated; //type: list of  uint16
                ValueList sats_transferring; //type: list of  uint16
                ValueList sats_activating; //type: list of  uint16
                ValueList sats_deactivating; //type: list of  uint16
                ValueList sats_removing; //type: list of  uint16
                ValueList sats_transfer_failed; //type: list of  uint16
                ValueList sats_activate_failed; //type: list of  uint16
                ValueList sats_deactivate_failed; //type: list of  uint16
                ValueList sats_remove_failed; //type: list of  uint16
                ValueList sats_transfer_aborted; //type: list of  uint16
                ValueList sats_activate_aborted; //type: list of  uint16
                ValueList sats_deactivate_aborted; //type: list of  uint16
                ValueList sats_remove_aborted; //type: list of  uint16
                ValueList sats_no_operation; //type: list of  uint16
                ValueList sats_completed; //type: list of  uint16




        }; // NvSatellite::InstallStatuses::InstallStatus


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallStatuses::InstallStatus> > install_status;


    }; // NvSatellite::InstallStatuses


    class SdacpRedundancies : public Entity
    {
        public:
            SdacpRedundancies();
            ~SdacpRedundancies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SdacpRedundancy : public Entity
        {
            public:
                SdacpRedundancy();
                ~SdacpRedundancy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value iccp_group; //type: uint32
                Value iccp_group_xr; //type: uint32
                Value protocol_state; //type: IcpeOpmSessStateEnum
                Value transport_state; //type: IcpeOpmTransportStateEnum
                Value authentication_state; //type: IcpeOpmAuthFsmStateEnum
                Value arbitration_state; //type: IcpeOpmArbitrationFsmStateEnum
                Value synchronization_state; //type: IcpeOpmSyncFsmStateEnum
                Value primacy; //type: IcpeOpmControllerEnum
                Value system_mac; //type: string
                Value isolated; //type: boolean


            class ProtocolStateTimestamp : public Entity
            {
                public:
                    ProtocolStateTimestamp();
                    ~ProtocolStateTimestamp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: uint32
                    Value nanoseconds; //type: uint32




            }; // NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp


            class Channel : public Entity
            {
                public:
                    Channel();
                    ~Channel();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value channel_id; //type: uint32
                    Value chan_state; //type: IcpeOpmChanFsmStateEnum
                    Value resync_state; //type: IcpeOpmResyncFsmStateEnum
                    Value control_messages_sent; //type: uint64
                    Value normal_messages_sent; //type: uint64
                    Value control_messages_received; //type: uint64
                    Value normal_messages_received; //type: uint64


                class ChannelStateTimestamp : public Entity
                {
                    public:
                        ChannelStateTimestamp();
                        ~ChannelStateTimestamp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: uint32
                        Value nanoseconds; //type: uint32




                }; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp


                class ResyncStateTimestamp : public Entity
                {
                    public:
                        ResyncStateTimestamp();
                        ~ResyncStateTimestamp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: uint32
                        Value nanoseconds; //type: uint32




                }; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp


                    std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp> channel_state_timestamp;
                    std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp> resync_state_timestamp;
                    class IcpeOpmChanFsmStateEnum;
                    class IcpeOpmResyncFsmStateEnum;


            }; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel


                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel> > channel;
                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp> protocol_state_timestamp;
                class IcpeOpmArbitrationFsmStateEnum;
                class IcpeOpmAuthFsmStateEnum;
                class IcpeOpmControllerEnum;
                class IcpeOpmSessStateEnum;
                class IcpeOpmSyncFsmStateEnum;
                class IcpeOpmTransportStateEnum;


        }; // NvSatellite::SdacpRedundancies::SdacpRedundancy


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy> > sdacp_redundancy;


    }; // NvSatellite::SdacpRedundancies


    class SatelliteStatuses : public Entity
    {
        public:
            SatelliteStatuses();
            ~SatelliteStatuses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SatelliteStatus : public Entity
        {
            public:
                SatelliteStatus();
                ~SatelliteStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value satellite_id; //type: uint32
                Value satellite_id_xr; //type: uint32
                Value version_check_state; //type: IcpeOperVerCheckStateEnum
                Value remote_version_present; //type: boolean
                Value type; //type: string
                Value ethernet_fabric_supported; //type: boolean
                Value optical_supported; //type: boolean
                Value ip_address; //type: string
                Value ip_address_present; //type: boolean
                Value ip_address_auto; //type: boolean
                Value ipv6_address; //type: string
                Value ipv6_address_present; //type: boolean
                Value vrf_name; //type: string
                Value vrfid; //type: uint32
                Value description; //type: string
                Value description_present; //type: boolean
                Value mac_address; //type: string
                Value mac_address_present; //type: boolean
                Value configured_serial_number; //type: string
                Value configured_serial_number_present; //type: boolean
                Value received_serial_number; //type: string
                Value received_serial_number_present; //type: boolean
                Value password; //type: string
                Value password_error; //type: string
                Value received_host_name; //type: string
                Value cfgd_timeout; //type: uint32
                Value timeout_warning; //type: uint32
                Value conflict_reason; //type: IcpeOperConflictEnum
                Value conflict_context; //type: string
                Value redundancy_iccp_group; //type: uint32
                Value recovery_delay_time_left; //type: uint16
                Value host_treating_as_active; //type: boolean
                Value satellite_treating_as_active; //type: boolean
                Value sdacp_session_state; //type: IcpeOperSdacpSessStateEnum
                Value sdacp_session_failure_reason; //type: IcpeGcoOperControlReasonEnum
                Value install_state; //type: IcpeOperInstallStateEnum
                ValueList remote_version; //type: list of  string


            class CandidateFabricPorts : public Entity
            {
                public:
                    CandidateFabricPorts();
                    ~CandidateFabricPorts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value channel_up; //type: boolean
                    Value out_of_sync; //type: boolean
                    Value error_string; //type: string


                class ConfiguredPort : public Entity
                {
                    public:
                        ConfiguredPort();
                        ~ConfiguredPort();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value port_type; //type: IcpeOperFabricPortEnum
                        Value slot; //type: uint16
                        Value subslot; //type: uint16
                        Value port; //type: uint16
                        Value valid; //type: boolean


                        class IcpeOperFabricPortEnum;


                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort


                class CurrentPort : public Entity
                {
                    public:
                        CurrentPort();
                        ~CurrentPort();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value port_type; //type: IcpeOperFabricPortEnum
                        Value slot; //type: uint16
                        Value subslot; //type: uint16
                        Value port; //type: uint16
                        Value permanent; //type: boolean
                        Value requested; //type: boolean


                        class IcpeOperFabricPortEnum;


                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort> > configured_port;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort> > current_port;


            }; // NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts


            class OpticalStatus : public Entity
            {
                public:
                    OpticalStatus();
                    ~OpticalStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value chassis_sync_state; //type: IcpeOpticalSyncStateEnum


                class Application : public Entity
                {
                    public:
                        Application();
                        ~Application();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value sync_state; //type: IcpeOpticalSyncStateEnum


                        class IcpeOpticalSyncStateEnum;


                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application> > application;
                    class IcpeOpticalSyncStateEnum;


            }; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus


            class RedundancyOutOfSyncTimestamp : public Entity
            {
                public:
                    RedundancyOutOfSyncTimestamp();
                    ~RedundancyOutOfSyncTimestamp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: uint32
                    Value nanoseconds; //type: uint32




            }; // NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp


            class ConfiguredLink : public Entity
            {
                public:
                    ConfiguredLink();
                    ~ConfiguredLink();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_handle; //type: string
                    Value ip_address; //type: string
                    Value ip_address_auto; //type: boolean
                    Value vrf_id_present; //type: boolean
                    Value vrf_id; //type: uint32
                    Value minimum_preferred_links; //type: uint32
                    Value number_active_links; //type: uint32
                    Value min_links_satisfied; //type: boolean
                    Value conflict_reason; //type: IcpeOperConflictEnum
                    Value conflict_context; //type: string


                class PortRange : public Entity
                {
                    public:
                        PortRange();
                        ~PortRange();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value slot; //type: uint32
                        Value subslot; //type: uint32
                        Value low_port; //type: uint32
                        Value high_port; //type: uint32
                        Value port_type; //type: IcpeOperPortEnum
                        Value conflict_reason; //type: IcpeOperConflictEnum
                        Value conflict_context; //type: string


                        class IcpeOperConflictEnum;
                        class IcpeOperPortEnum;


                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange


                class DiscoveredLink : public Entity
                {
                    public:
                        DiscoveredLink();
                        ~DiscoveredLink();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_handle; //type: string
                        Value state; //type: IcpeOperDiscdLinkStateEnum
                        Value conflict_reason; //type: IcpeOperConflictEnum
                        Value conflict_context; //type: string


                        class IcpeOperConflictEnum;
                        class IcpeOperDiscdLinkStateEnum;


                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink> > discovered_link;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange> > port_range;
                    class IcpeOperConflictEnum;


            }; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink


                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts> candidate_fabric_ports;
                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink> > configured_link;
                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus> optical_status;
                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp> redundancy_out_of_sync_timestamp;
                class IcpeOperConflictEnum;
                class IcpeOperInstallStateEnum;
                class IcpeGcoOperControlReasonEnum;
                class IcpeOperSdacpSessStateEnum;
                class IcpeOperVerCheckStateEnum;


        }; // NvSatellite::SatelliteStatuses::SatelliteStatus


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus> > satellite_status;


    }; // NvSatellite::SatelliteStatuses


    class SatelliteTopologies : public Entity
    {
        public:
            SatelliteTopologies();
            ~SatelliteTopologies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SatelliteTopology : public Entity
        {
            public:
                SatelliteTopology();
                ~SatelliteTopology();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string
                Value interface_handle; //type: string
                Value redundancy_iccp_group; //type: uint32
                Value is_physical; //type: boolean
                Value ring_whole; //type: boolean


            class DiscoveredLink : public Entity
            {
                public:
                    DiscoveredLink();
                    ~DiscoveredLink();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value interface_handle; //type: string
                    Value discovery_running; //type: boolean




            }; // NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink


            class Satellite : public Entity
            {
                public:
                    Satellite();
                    ~Satellite();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value mac_address; //type: string
                    Value configured; //type: boolean
                    Value num_hops; //type: uint16
                    Value type; //type: string
                    Value satellite_id; //type: uint32
                    Value received_serial_number; //type: string
                    Value received_serial_number_present; //type: boolean
                    Value vlan_id; //type: uint16
                    Value display_name; //type: string
                    Value conflict_reason; //type: IcpeOperConflictEnum
                    Value conflict_context; //type: string


                class FabricLink : public Entity
                {
                    public:
                        FabricLink();
                        ~FabricLink();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value icl_id; //type: uint32
                        Value interface_name; //type: string
                        Value display_name; //type: string
                        Value redundant; //type: boolean
                        Value active; //type: boolean
                        Value obsolete; //type: boolean


                    class RemoteDevice : public Entity
                    {
                        public:
                            RemoteDevice();
                            ~RemoteDevice();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mac_address; //type: string
                            Value source; //type: IcpeOperTopoRemoteSourceEnum
                            Value remote_is_satellite; //type: boolean
                            Value remote_is_local_host; //type: boolean
                            Value icl_id; //type: uint32
                            Value interface_handle; //type: string
                            Value interface_name; //type: string


                            class IcpeOperTopoRemoteSourceEnum;


                    }; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice


                        std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice> > remote_device;


                }; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink> > fabric_link;
                    class IcpeOperConflictEnum;


            }; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite


                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink> > discovered_link;
                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite> > satellite;


        }; // NvSatellite::SatelliteTopologies::SatelliteTopology


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology> > satellite_topology;


    }; // NvSatellite::SatelliteTopologies


    class InstallProgresses : public Entity
    {
        public:
            InstallProgresses();
            ~InstallProgresses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InstallProgress : public Entity
        {
            public:
                InstallProgress();
                ~InstallProgress();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value progress_percentage; //type: uint32
                Value progress_percentage_xr; //type: uint16
                Value satellite_count; //type: uint32




        }; // NvSatellite::InstallProgresses::InstallProgress


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallProgresses::InstallProgress> > install_progress;


    }; // NvSatellite::InstallProgresses


    class ReloadStatuses : public Entity
    {
        public:
            ReloadStatuses();
            ~ReloadStatuses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ReloadStatus : public Entity
        {
            public:
                ReloadStatus();
                ~ReloadStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value satellite_range; //type: string
                Value satellite_range_xr; //type: string
                ValueList sats_not_initiated; //type: list of  uint16
                ValueList sats_reloading; //type: list of  uint16
                ValueList sats_reloaded; //type: list of  uint16
                ValueList sats_reload_failed; //type: list of  uint16




        }; // NvSatellite::ReloadStatuses::ReloadStatus


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadStatuses::ReloadStatus> > reload_status;


    }; // NvSatellite::ReloadStatuses


    class InstallOpStatuses : public Entity
    {
        public:
            InstallOpStatuses();
            ~InstallOpStatuses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InstallOpStatus : public Entity
        {
            public:
                InstallOpStatus();
                ~InstallOpStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value operation_id; //type: uint32
                Value operation_id_xr; //type: uint32
                Value satellite_range; //type: string
                ValueList sats_not_initiated; //type: list of  uint16
                ValueList sats_transferring; //type: list of  uint16
                ValueList sats_activating; //type: list of  uint16
                ValueList sats_deactivating; //type: list of  uint16
                ValueList sats_removing; //type: list of  uint16
                ValueList sats_transfer_failed; //type: list of  uint16
                ValueList sats_activate_failed; //type: list of  uint16
                ValueList sats_deactivate_failed; //type: list of  uint16
                ValueList sats_remove_failed; //type: list of  uint16
                ValueList sats_transfer_aborted; //type: list of  uint16
                ValueList sats_activate_aborted; //type: list of  uint16
                ValueList sats_deactivate_aborted; //type: list of  uint16
                ValueList sats_remove_aborted; //type: list of  uint16
                ValueList sats_no_operation; //type: list of  uint16
                ValueList sats_completed; //type: list of  uint16




        }; // NvSatellite::InstallOpStatuses::InstallOpStatus


            std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpStatuses::InstallOpStatus> > install_op_status;


    }; // NvSatellite::InstallOpStatuses


        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallOpStatuses> install_op_statuses;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallProgresses> install_progresses;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::InstallStatuses> install_statuses;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadOpStatuses> reload_op_statuses;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::ReloadStatuses> reload_statuses;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses> satellite_statuses;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies> satellite_topologies;
        std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies> sdacp_redundancies;


}; // NvSatellite


class IcpeOperSdacpSessStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_sdacp_sess_state_not_created;
        static const Enum::Value icpe_oper_sdacp_sess_state_created;
        static const Enum::Value icpe_oper_sdacp_sess_state_authentication_not_ok;
        static const Enum::Value icpe_oper_sdacp_sess_state_authentication_ok;
        static const Enum::Value icpe_oper_sdacp_sess_state_version_not_ok;
        static const Enum::Value icpe_oper_sdacp_sess_state_up;
        static const Enum::Value icpe_oper_sdacp_sess_state_issu;

};

class IcpeGcoOperControlReasonEnum : public Enum
{
    public:
        static const Enum::Value icpe_gco_oper_control_reason_unknown_error;
        static const Enum::Value icpe_gco_oper_control_reason_wrong_chassis_type;
        static const Enum::Value icpe_gco_oper_control_reason_wrong_chassis_serial;
        static const Enum::Value icpe_gco_oper_control_reason_needs_to_upgrade;
        static const Enum::Value icpe_gco_oper_control_reason_none;

};

class IcpeOpmSyncFsmStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_sync_fsm_state_split_brain;
        static const Enum::Value icpe_opm_sync_fsm_state_waiting;
        static const Enum::Value icpe_opm_sync_fsm_state_whole_brain;

};

class IcpeOpmArbitrationFsmStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_arbitration_fsm_state_unarbitrated;
        static const Enum::Value icpe_opm_arbitration_fsm_state_waiting;
        static const Enum::Value icpe_opm_arbitration_fsm_state_arbitrating;
        static const Enum::Value icpe_opm_arbitration_fsm_state_arbitrated;

};

class IcpeOperInstallStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_install_state_stable;
        static const Enum::Value icpe_oper_install_state_transferring;
        static const Enum::Value icpe_oper_install_state_transferred;
        static const Enum::Value icpe_oper_install_state_installing;
        static const Enum::Value icpe_oper_install_state_in_progress;

};

class IcpeOpmTransportStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_transport_state_disconnected;
        static const Enum::Value icpe_opm_transport_state_iccp_unavailable;
        static const Enum::Value icpe_opm_transport_state_no_member_present;
        static const Enum::Value icpe_opm_transport_state_member_down;
        static const Enum::Value icpe_opm_transport_state_member_not_reachable;
        static const Enum::Value icpe_opm_transport_state_waiting_for_app_connect;
        static const Enum::Value icpe_opm_transport_state_waiting_for_app_connect_response;
        static const Enum::Value icpe_opm_transport_state_connected;

};

class IcpeOperDiscdLinkStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_discd_link_state_stopped;
        static const Enum::Value icpe_oper_discd_link_state_probing;
        static const Enum::Value icpe_oper_discd_link_state_configuring;
        static const Enum::Value icpe_oper_discd_link_state_ready;

};

class IcpeOperTopoRemoteSourceEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_topo_remote_source_unknown;
        static const Enum::Value icpe_oper_topo_remote_source_remote_icl_id;
        static const Enum::Value icpe_oper_topo_remote_source_remote_satellite_mac;
        static const Enum::Value icpe_oper_topo_remote_source_remote_host_mac;
        static const Enum::Value icpe_oper_topo_remote_source_direct_satellite;
        static const Enum::Value icpe_oper_topo_remote_source_direct_host;

};

class IcpeOperConflictEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_conflict_not_calculated;
        static const Enum::Value icpe_oper_conflict_no_conflict;
        static const Enum::Value icpe_oper_conflict_satellite_not_configured;
        static const Enum::Value icpe_oper_conflict_satellite_no_type;
        static const Enum::Value icpe_oper_conflict_satellite_id_invalid;
        static const Enum::Value icpe_oper_conflict_satellite_no_ipv4_addr;
        static const Enum::Value icpe_oper_conflict_satellite_conflicting_ipv4_addr;
        static const Enum::Value icpe_oper_conflict_no_configured_links;
        static const Enum::Value icpe_oper_conflict_no_discovered_links;
        static const Enum::Value icpe_oper_conflict_invalid_ports;
        static const Enum::Value icpe_oper_conflict_ports_overlap;
        static const Enum::Value icpe_oper_conflict_waiting_for_ipv4_addr;
        static const Enum::Value icpe_oper_conflict_waiting_for_vrf;
        static const Enum::Value icpe_oper_conflict_different_ipv4_addr;
        static const Enum::Value icpe_oper_conflict_different_vrf;
        static const Enum::Value icpe_oper_conflict_satellite_link_ipv4_overlap;
        static const Enum::Value icpe_oper_conflict_waiting_for_ident;
        static const Enum::Value icpe_oper_conflict_multiple_ids;
        static const Enum::Value icpe_oper_conflict_multiple_satellites;
        static const Enum::Value icpe_oper_conflict_ident_rejected;
        static const Enum::Value icpe_oper_conflict_interface_down;
        static const Enum::Value icpe_oper_conflict_auto_ip_unavailable;
        static const Enum::Value icpe_oper_conflict_satellite_auto_ip_link_manual_ip;
        static const Enum::Value icpe_oper_conflict_link_auto_ip_satellite_manual_ip;
        static const Enum::Value icpe_oper_conflict_serial_num_mismatch;
        static const Enum::Value icpe_oper_conflict_satellite_not_identified;
        static const Enum::Value icpe_oper_conflict_satellite_unsupported_type;
        static const Enum::Value icpe_oper_conflict_satellite_partition_unsupported;
        static const Enum::Value icpe_oper_conflict_satellite_no_serial_number;
        static const Enum::Value icpe_oper_conflict_satellite_conflicting_serial_number;
        static const Enum::Value icpe_oper_conflict_satellite_link_waiting_for_arp;
        static const Enum::Value icpe_oper_conflict_host_pe_isolated_split_brain;
        static const Enum::Value icpe_oper_conflict_fabric_iccp_group_inconsistent;
        static const Enum::Value icpe_oper_conflict_invalid_iccp_group;
        static const Enum::Value icpe_oper_conflict_port_rejected;
        static const Enum::Value icpe_oper_conflict_satellite_icl_not_supported;
        static const Enum::Value icpe_oper_conflict_multiple_serial_number;
        static const Enum::Value icpe_oper_conflict_multiple_mac_address;

};

class IcpeOpmResyncFsmStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_resync_fsm_state_not_open;
        static const Enum::Value icpe_opm_resync_fsm_state_stable;
        static const Enum::Value icpe_opm_resync_fsm_state_in_resync;
        static const Enum::Value icpe_opm_resync_fsm_state_queued;
        static const Enum::Value icpe_opm_resync_fsm_state_resync_req;

};

class IcpeOperPortEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_port_unknown;
        static const Enum::Value icpe_oper_port_gigabit_ethernet;
        static const Enum::Value icpe_oper_port_ten_gig_e;

};

class IcpeOpmAuthFsmStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_auth_fsm_state_unauth;
        static const Enum::Value icpe_opm_auth_fsm_state_waiting;
        static const Enum::Value icpe_opm_auth_fsm_state_waiting_for_auth;
        static const Enum::Value icpe_opm_auth_fsm_state_waiting_for_reply;
        static const Enum::Value icpe_opm_auth_fsm_state_authed;

};

class IcpeOpmControllerEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_controller_unknown;
        static const Enum::Value icpe_opm_controller_primary;
        static const Enum::Value icpe_opm_controller_secondary;

};

class IcpeOperFabricPortEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_fabric_port_unknown;
        static const Enum::Value icpe_oper_fabric_port_n_v_fabric_gig_e;
        static const Enum::Value icpe_oper_fabric_port_n_v_fabric_ten_gig_e;
        static const Enum::Value icpe_oper_fabric_port_n_v_fabric_hundred_gig_e;

};

class IcpeOperVerCheckStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_oper_ver_check_state_unknown;
        static const Enum::Value icpe_oper_ver_check_state_not_compatible;
        static const Enum::Value icpe_oper_ver_check_state_current_version;
        static const Enum::Value icpe_oper_ver_check_state_compatible_older;
        static const Enum::Value icpe_oper_ver_check_state_compatible_newer;

};

class IcpeOpticalSyncStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_optical_sync_state_unknown;
        static const Enum::Value icpe_optical_sync_state_syncing;
        static const Enum::Value icpe_optical_sync_state_synced;
        static const Enum::Value icpe_optical_sync_state_not_connected;

};

class IcpeOpmChanFsmStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_chan_fsm_state_down;
        static const Enum::Value icpe_opm_chan_fsm_state_closed;
        static const Enum::Value icpe_opm_chan_fsm_state_opening;
        static const Enum::Value icpe_opm_chan_fsm_state_opened;
        static const Enum::Value icpe_opm_chan_fsm_state_open;

};

class IcpeOpmSessStateEnum : public Enum
{
    public:
        static const Enum::Value icpe_opm_sess_state_disconnected;
        static const Enum::Value icpe_opm_sess_state_connecting;
        static const Enum::Value icpe_opm_sess_state_authenticating;
        static const Enum::Value icpe_opm_sess_state_arbitrating;
        static const Enum::Value icpe_opm_sess_state_waiting_for_resyncs;
        static const Enum::Value icpe_opm_sess_state_connected;

};


}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_OPER_ */

