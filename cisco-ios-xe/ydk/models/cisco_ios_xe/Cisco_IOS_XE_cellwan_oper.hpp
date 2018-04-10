#ifndef _CISCO_IOS_XE_CELLWAN_OPER_
#define _CISCO_IOS_XE_CELLWAN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_cellwan_oper {

class CellwanOperData : public ydk::Entity
{
    public:
        CellwanOperData();
        ~CellwanOperData();

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

        class CellwanHardware; //type: CellwanOperData::CellwanHardware
        class CellwanRadio; //type: CellwanOperData::CellwanRadio
        class CellwanNetwork; //type: CellwanOperData::CellwanNetwork
        class CellwanConnection; //type: CellwanOperData::CellwanConnection

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cellwan_oper::CellwanOperData::CellwanHardware> > cellwan_hardware;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cellwan_oper::CellwanOperData::CellwanRadio> > cellwan_radio;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cellwan_oper::CellwanOperData::CellwanNetwork> > cellwan_network;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cellwan_oper::CellwanOperData::CellwanConnection> > cellwan_connection;
        
}; // CellwanOperData


class CellwanOperData::CellwanHardware : public ydk::Entity
{
    public:
        CellwanHardware();
        ~CellwanHardware();

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

        ydk::YLeaf cellular_interface; //type: string
        ydk::YLeaf cellular_firmware_version; //type: string
        ydk::YLeaf cellular_firmware_build_time; //type: string
        ydk::YLeaf cellular_hardware_version; //type: string
        ydk::YLeaf cellular_device_model; //type: string
        ydk::YLeaf cellular_imsi; //type: string
        ydk::YLeaf cellular_imei; //type: string
        ydk::YLeaf cellular_iccid; //type: string
        ydk::YLeaf cellular_msisdn; //type: string
        ydk::YLeaf cellular_fsn; //type: string
        ydk::YLeaf cellular_modem_status; //type: ModemStatus
        ydk::YLeaf cellular_modem_temperature; //type: int16
        ydk::YLeaf cellular_pri_skuid; //type: string
        ydk::YLeaf cellular_pri_version; //type: string
        ydk::YLeaf cellular_carrier; //type: string
        ydk::YLeaf cellular_oem_pri_version; //type: string

}; // CellwanOperData::CellwanHardware


class CellwanOperData::CellwanRadio : public ydk::Entity
{
    public:
        CellwanRadio();
        ~CellwanRadio();

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

        ydk::YLeaf cellular_interface; //type: string
        ydk::YLeaf technology; //type: ModemTechnology
        ydk::YLeaf radio_power_mode; //type: CwRadioPowerStatus
        ydk::YLeaf radio_rx_channel; //type: uint32
        ydk::YLeaf radio_tx_channel; //type: uint32
        ydk::YLeaf radio_band; //type: uint32
        ydk::YLeaf bandwidth; //type: RadioBandwidth
        ydk::YLeaf radio_rssi; //type: int16
        ydk::YLeaf radio_rsrp; //type: int16
        ydk::YLeaf radio_rsrq; //type: int8
        ydk::YLeaf radio_snr; //type: decimal64
        ydk::YLeaf radio_rat_preference; //type: RatPreference
        ydk::YLeaf radio_rat_selected; //type: RatTechnology

}; // CellwanOperData::CellwanRadio


class CellwanOperData::CellwanNetwork : public ydk::Entity
{
    public:
        CellwanNetwork();
        ~CellwanNetwork();

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

        ydk::YLeaf cellular_interface; //type: string
        ydk::YLeaf cellular_modem_time; //type: string
        ydk::YLeaf radio_access_technology_selected; //type: RatTechnology
        ydk::YLeaf current_service_status; //type: ServiceStatus
        ydk::YLeaf current_system_identifier; //type: uint16
        ydk::YLeaf current_network_identifier; //type: uint16
        ydk::YLeaf current_service_type; //type: ModemService
        ydk::YLeaf current_roaming_status; //type: string
        ydk::YLeaf network_selection_mode; //type: string
        ydk::YLeaf network_name; //type: string
        ydk::YLeaf mobile_country_code; //type: uint16
        ydk::YLeaf mobile_network_code; //type: uint16
        ydk::YLeaf packet_switch_domain_state; //type: string
        ydk::YLeaf lte_carrier_aggregation; //type: LteCa
        ydk::YLeaf registration_state; //type: RegState
        ydk::YLeaf emm_state; //type: string
        ydk::YLeaf emm_substate; //type: string
        ydk::YLeaf location_area_code; //type: uint16
        ydk::YLeaf tracking_area_code; //type: uint16
        ydk::YLeaf cell_id; //type: uint64
        ydk::YLeaf negotiated_network_mtu; //type: uint16

}; // CellwanOperData::CellwanNetwork


class CellwanOperData::CellwanConnection : public ydk::Entity
{
    public:
        CellwanConnection();
        ~CellwanConnection();

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

        ydk::YLeaf cellular_interface; //type: string
        ydk::YLeaf active_profile; //type: uint64
        ydk::YLeaf cellular_packet_status; //type: PacketSessStatus
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf rx_packets; //type: uint64
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf rx_bytes; //type: uint64
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv4_dns_pri; //type: string
        ydk::YLeaf ipv4_dns_sec; //type: string
        ydk::YLeaf ipv6_dns_pri; //type: string
        ydk::YLeaf ipv6_dns_sec; //type: string
        ydk::YLeaf scope; //type: ProfileScope

}; // CellwanOperData::CellwanConnection

class ModemStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf modem_status_offline;
        static const ydk::Enum::YLeaf modem_status_online;
        static const ydk::Enum::YLeaf modem_status_low_power;
        static const ydk::Enum::YLeaf modem_status_power_off;
        static const ydk::Enum::YLeaf modem_status_boot_ready;
        static const ydk::Enum::YLeaf modem_status_unknown;

};

class CwRadioPowerStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf radio_power_mode_online;
        static const ydk::Enum::YLeaf radio_power_mode_low_power;
        static const ydk::Enum::YLeaf radio_power_mode_factory_test;
        static const ydk::Enum::YLeaf radio_power_mode_offline;
        static const ydk::Enum::YLeaf radio_power_mode_reset;
        static const ydk::Enum::YLeaf radio_power_mode_off;
        static const ydk::Enum::YLeaf radio_power_mode_persistent_low_power;

};

class RadioBandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth_1_dot_4_mhz;
        static const ydk::Enum::YLeaf bandwidth_3_mhz;
        static const ydk::Enum::YLeaf bandwidth_5_mhz;
        static const ydk::Enum::YLeaf bandwidth_10_mhz;
        static const ydk::Enum::YLeaf bandwidth_15_mhz;
        static const ydk::Enum::YLeaf bandwidth_20_mhz;
        static const ydk::Enum::YLeaf bandwidth_invalid;
        static const ydk::Enum::YLeaf bandwidth_unknown;

};

class ModemTechnology : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdma_evdo_1x_rtt;
        static const ydk::Enum::YLeaf gsm_umts_gprs;
        static const ydk::Enum::YLeaf tech_unknown;

};

class RatPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lte_radio_tech_no_svc;
        static const ydk::Enum::YLeaf lte_radio_tech_cdma_1_xrtt;
        static const ydk::Enum::YLeaf lte_radio_tech_cdma_evdo;
        static const ydk::Enum::YLeaf lte_radio_tech_amps;
        static const ydk::Enum::YLeaf lte_radio_tech_gsm;
        static const ydk::Enum::YLeaf lte_radio_tech_umts;
        static const ydk::Enum::YLeaf lte_radio_tech_wlan;
        static const ydk::Enum::YLeaf lte_radio_tech_gprs;
        static const ydk::Enum::YLeaf lte_radio_tech_lte;
        static const ydk::Enum::YLeaf lte_radio_tech_auto;
        static const ydk::Enum::YLeaf lte_radio_tech_hybrid_cdma;
        static const ydk::Enum::YLeaf lte_radio_tech_wcdma;
        static const ydk::Enum::YLeaf lte_radio_tech_gwl;
        static const ydk::Enum::YLeaf lte_radio_tech_edge;
        static const ydk::Enum::YLeaf lte_radio_tech_hsdpa_n_wcdma;
        static const ydk::Enum::YLeaf lte_radio_tech_wcdma_n_hsupa;
        static const ydk::Enum::YLeaf lte_radio_tech_hsdpa_n_hsupa;
        static const ydk::Enum::YLeaf lte_radio_tech_hsdpa_plus_n_wcdma;
        static const ydk::Enum::YLeaf lte_radio_tech_hsdpa_plus_n_hsupa;
        static const ydk::Enum::YLeaf lte_radio_tech_dc_hsdpa_plus_n_wcdma;
        static const ydk::Enum::YLeaf lte_radio_tech_dc_hsdpa_plus_n_hsupa;
        static const ydk::Enum::YLeaf lte_radio_tech_null_bearer;
        static const ydk::Enum::YLeaf lte_radio_tech_unknown;
        static const ydk::Enum::YLeaf lte_radio_tech_no_change;

};

class RatTechnology : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system_mode_none;
        static const ydk::Enum::YLeaf system_mode_gprs;
        static const ydk::Enum::YLeaf system_mode_edge;
        static const ydk::Enum::YLeaf system_mode_umts;
        static const ydk::Enum::YLeaf system_mode_hsdpa;
        static const ydk::Enum::YLeaf system_mode_hsupa;
        static const ydk::Enum::YLeaf system_mode_hspa;
        static const ydk::Enum::YLeaf system_mode_hspa_plus;
        static const ydk::Enum::YLeaf system_mode_lte_fdd;
        static const ydk::Enum::YLeaf system_mode_lte_tdd;
        static const ydk::Enum::YLeaf system_mode_lte_e_hrpd_1x_rtt;
        static const ydk::Enum::YLeaf system_mode_lte_e_hrpd_evdo;
        static const ydk::Enum::YLeaf system_mode_evdo;
        static const ydk::Enum::YLeaf system_mode_evdo_reva;
        static const ydk::Enum::YLeaf system_mode_hsdpa_n_wcdma;
        static const ydk::Enum::YLeaf system_mode_wcdma_n_hsupa;
        static const ydk::Enum::YLeaf system_mode_hsdpa_n_hsupa;
        static const ydk::Enum::YLeaf system_mode_hsdpa_plus_n_wcdma;
        static const ydk::Enum::YLeaf system_mode_hsdpa_plus_n_hsupa;
        static const ydk::Enum::YLeaf system_mode_dc_hsdpa_plus_n_wcdma;
        static const ydk::Enum::YLeaf system_mode_dc_hsdpa_plus_n_hsupa;
        static const ydk::Enum::YLeaf sysyem_mode_null_bearer;
        static const ydk::Enum::YLeaf system_mode_unknown;

};

class ServiceStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf service_status_normal;
        static const ydk::Enum::YLeaf service_status_emergency;
        static const ydk::Enum::YLeaf service_status_no_service;
        static const ydk::Enum::YLeaf service_status_unknown;

};

class ModemService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf service_type_circuit_switched;
        static const ydk::Enum::YLeaf service_type_packet_switched;
        static const ydk::Enum::YLeaf service_type_combined;
        static const ydk::Enum::YLeaf service_type_invalid;
        static const ydk::Enum::YLeaf service_type_unknown;

};

class LteCa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lte_ca_deconfigured;
        static const ydk::Enum::YLeaf lte_ca_deactivated;
        static const ydk::Enum::YLeaf lte_ca_activated;
        static const ydk::Enum::YLeaf lte_ca_unsupported;

};

class RegState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reg_status_not_registered;
        static const ydk::Enum::YLeaf reg_status_registered;
        static const ydk::Enum::YLeaf reg_status_searching;
        static const ydk::Enum::YLeaf reg_status_registration_denied;
        static const ydk::Enum::YLeaf reg_status_unsupported;

};

class PacketSessStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packet_session_status_inactive;
        static const ydk::Enum::YLeaf packet_session_status_active;

};

class ProfileScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf scope_global;
        static const ydk::Enum::YLeaf scope_link;

};


}
}

#endif /* _CISCO_IOS_XE_CELLWAN_OPER_ */

