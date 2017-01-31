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


                YLeaf operation_id; //type: uint32
                YLeaf operation_id_xr; //type: uint32
                YLeaf satellite_range; //type: string
                YLeafList sats_not_initiated; //type: list of  uint16
                YLeafList sats_reloading; //type: list of  uint16
                YLeafList sats_reloaded; //type: list of  uint16
                YLeafList sats_reload_failed; //type: list of  uint16



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


                YLeaf satellite_range; //type: string
                YLeaf satellite_range_xr; //type: string
                YLeaf operation_id; //type: uint32
                YLeafList sats_not_initiated; //type: list of  uint16
                YLeafList sats_transferring; //type: list of  uint16
                YLeafList sats_activating; //type: list of  uint16
                YLeafList sats_deactivating; //type: list of  uint16
                YLeafList sats_removing; //type: list of  uint16
                YLeafList sats_transfer_failed; //type: list of  uint16
                YLeafList sats_activate_failed; //type: list of  uint16
                YLeafList sats_deactivate_failed; //type: list of  uint16
                YLeafList sats_remove_failed; //type: list of  uint16
                YLeafList sats_transfer_aborted; //type: list of  uint16
                YLeafList sats_activate_aborted; //type: list of  uint16
                YLeafList sats_deactivate_aborted; //type: list of  uint16
                YLeafList sats_remove_aborted; //type: list of  uint16
                YLeafList sats_no_operation; //type: list of  uint16
                YLeafList sats_completed; //type: list of  uint16



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


                    YLeaf seconds; //type: uint32
                    YLeaf nanoseconds; //type: uint32



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


                    YLeaf channel_id; //type: uint32
                    YLeaf chan_state; //type: IcpeOpmChanFsmStateEnum
                    YLeaf resync_state; //type: IcpeOpmResyncFsmStateEnum
                    YLeaf control_messages_sent; //type: uint64
                    YLeaf normal_messages_sent; //type: uint64
                    YLeaf control_messages_received; //type: uint64
                    YLeaf normal_messages_received; //type: uint64

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


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



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


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp


                    std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp> channel_state_timestamp;
                    std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp> resync_state_timestamp;


            }; // NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel


                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel> > channel;
                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp> protocol_state_timestamp;


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


                    YLeaf channel_up; //type: boolean
                    YLeaf out_of_sync; //type: boolean
                    YLeaf error_string; //type: string

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


                        YLeaf port_type; //type: IcpeOperFabricPortEnum
                        YLeaf slot; //type: uint16
                        YLeaf subslot; //type: uint16
                        YLeaf port; //type: uint16
                        YLeaf valid; //type: boolean



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


                        YLeaf port_type; //type: IcpeOperFabricPortEnum
                        YLeaf slot; //type: uint16
                        YLeaf subslot; //type: uint16
                        YLeaf port; //type: uint16
                        YLeaf permanent; //type: boolean
                        YLeaf requested; //type: boolean



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


                    YLeaf chassis_sync_state; //type: IcpeOpticalSyncStateEnum

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


                        YLeaf name; //type: string
                        YLeaf sync_state; //type: IcpeOpticalSyncStateEnum



                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application> > application;


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


                    YLeaf seconds; //type: uint32
                    YLeaf nanoseconds; //type: uint32



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


                    YLeaf interface_handle; //type: string
                    YLeaf ip_address; //type: string
                    YLeaf ip_address_auto; //type: boolean
                    YLeaf vrf_id_present; //type: boolean
                    YLeaf vrf_id; //type: uint32
                    YLeaf minimum_preferred_links; //type: uint32
                    YLeaf number_active_links; //type: uint32
                    YLeaf min_links_satisfied; //type: boolean
                    YLeaf conflict_reason; //type: IcpeOperConflictEnum
                    YLeaf conflict_context; //type: string

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


                        YLeaf slot; //type: uint32
                        YLeaf subslot; //type: uint32
                        YLeaf low_port; //type: uint32
                        YLeaf high_port; //type: uint32
                        YLeaf port_type; //type: IcpeOperPortEnum
                        YLeaf conflict_reason; //type: IcpeOperConflictEnum
                        YLeaf conflict_context; //type: string



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


                        YLeaf interface_handle; //type: string
                        YLeaf state; //type: IcpeOperDiscdLinkStateEnum
                        YLeaf conflict_reason; //type: IcpeOperConflictEnum
                        YLeaf conflict_context; //type: string



                }; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink> > discovered_link;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange> > port_range;


            }; // NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink


                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts> candidate_fabric_ports;
                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink> > configured_link;
                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus> optical_status;
                std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp> redundancy_out_of_sync_timestamp;


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


                YLeaf interface_name; //type: string
                YLeaf interface_name_xr; //type: string
                YLeaf interface_handle; //type: string
                YLeaf redundancy_iccp_group; //type: uint32
                YLeaf is_physical; //type: boolean
                YLeaf ring_whole; //type: boolean

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


                    YLeaf interface_name; //type: string
                    YLeaf interface_handle; //type: string
                    YLeaf discovery_running; //type: boolean



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


                        YLeaf icl_id; //type: uint32
                        YLeaf interface_name; //type: string
                        YLeaf display_name; //type: string
                        YLeaf redundant; //type: boolean
                        YLeaf active; //type: boolean
                        YLeaf obsolete; //type: boolean

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


                            YLeaf mac_address; //type: string
                            YLeaf source; //type: IcpeOperTopoRemoteSourceEnum
                            YLeaf remote_is_satellite; //type: boolean
                            YLeaf remote_is_local_host; //type: boolean
                            YLeaf icl_id; //type: uint32
                            YLeaf interface_handle; //type: string
                            YLeaf interface_name; //type: string



                    }; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice


                        std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice> > remote_device;


                }; // NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink


                    std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_oper::NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink> > fabric_link;


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


                YLeaf progress_percentage; //type: uint32
                YLeaf progress_percentage_xr; //type: uint16
                YLeaf satellite_count; //type: uint32



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


                YLeaf satellite_range; //type: string
                YLeaf satellite_range_xr; //type: string
                YLeafList sats_not_initiated; //type: list of  uint16
                YLeafList sats_reloading; //type: list of  uint16
                YLeafList sats_reloaded; //type: list of  uint16
                YLeafList sats_reload_failed; //type: list of  uint16



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


                YLeaf operation_id; //type: uint32
                YLeaf operation_id_xr; //type: uint32
                YLeaf satellite_range; //type: string
                YLeafList sats_not_initiated; //type: list of  uint16
                YLeafList sats_transferring; //type: list of  uint16
                YLeafList sats_activating; //type: list of  uint16
                YLeafList sats_deactivating; //type: list of  uint16
                YLeafList sats_removing; //type: list of  uint16
                YLeafList sats_transfer_failed; //type: list of  uint16
                YLeafList sats_activate_failed; //type: list of  uint16
                YLeafList sats_deactivate_failed; //type: list of  uint16
                YLeafList sats_remove_failed; //type: list of  uint16
                YLeafList sats_transfer_aborted; //type: list of  uint16
                YLeafList sats_activate_aborted; //type: list of  uint16
                YLeafList sats_deactivate_aborted; //type: list of  uint16
                YLeafList sats_remove_aborted; //type: list of  uint16
                YLeafList sats_no_operation; //type: list of  uint16
                YLeafList sats_completed; //type: list of  uint16



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
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_not_created;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_created;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_authentication_not_ok;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_authentication_ok;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_version_not_ok;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_up;
        static const Enum::YLeaf icpe_oper_sdacp_sess_state_issu;

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

class IcpeOpmSyncFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_sync_fsm_state_split_brain;
        static const Enum::YLeaf icpe_opm_sync_fsm_state_waiting;
        static const Enum::YLeaf icpe_opm_sync_fsm_state_whole_brain;

};

class IcpeOpmArbitrationFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_unarbitrated;
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_waiting;
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrating;
        static const Enum::YLeaf icpe_opm_arbitration_fsm_state_arbitrated;

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

class IcpeOpmResyncFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_opm_resync_fsm_state_not_open;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_stable;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_in_resync;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_queued;
        static const Enum::YLeaf icpe_opm_resync_fsm_state_resync_req;

};

class IcpeOperPortEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_port_unknown;
        static const Enum::YLeaf icpe_oper_port_gigabit_ethernet;
        static const Enum::YLeaf icpe_oper_port_ten_gig_e;

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

class IcpeOperFabricPortEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_oper_fabric_port_unknown;
        static const Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_gig_e;
        static const Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_ten_gig_e;
        static const Enum::YLeaf icpe_oper_fabric_port_n_v_fabric_hundred_gig_e;

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

class IcpeOpticalSyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_optical_sync_state_unknown;
        static const Enum::YLeaf icpe_optical_sync_state_syncing;
        static const Enum::YLeaf icpe_optical_sync_state_synced;
        static const Enum::YLeaf icpe_optical_sync_state_not_connected;

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


}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_OPER_ */

