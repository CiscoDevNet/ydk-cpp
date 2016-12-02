#ifndef _CISCO_IOS_XR_CONTROLLER_OPTICS_OPER_
#define _CISCO_IOS_XR_CONTROLLER_OPTICS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_optics_oper {

class OpticsOper : public Entity
{
    public:
        OpticsOper();
        ~OpticsOper();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class OpticsPorts : public Entity
    {
        public:
            OpticsPorts();
            ~OpticsPorts();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class OpticsPort : public Entity
        {
            public:
                OpticsPort();
                ~OpticsPort();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class OpticsDwdmCarrrierChannelMap : public Entity
            {
                public:
                    OpticsDwdmCarrrierChannelMap();
                    ~OpticsDwdmCarrrierChannelMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dwdm_carrier_band; //type: OpticsWaveBandEnum
                    Value dwdm_carrier_min; //type: uint32
                    Value dwdm_carrier_max; //type: uint32


                class DwdmCarrierMapInfo : public Entity
                {
                    public:
                        DwdmCarrierMapInfo();
                        ~DwdmCarrierMapInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value itu_chan_num; //type: uint32
                        Value g694_chan_num; //type: int32
                        Value frequency; //type: string
                        Value wavelength; //type: string




                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo> > dwdm_carrier_map_info;
                    class OpticsWaveBandEnum;


            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap


            class OpticsInfo : public Entity
            {
                public:
                    OpticsInfo();
                    ~OpticsInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value transport_admin_state; //type: OpticsTasEnum
                    Value optics_present; //type: boolean
                    Value optics_type; //type: OpticsEnum
                    Value optics_module; //type: string
                    Value dwdm_carrier_band; //type: OpticsWaveBandEnum
                    Value dwdm_carrier_channel; //type: string
                    Value dwdm_carrier_frequency; //type: string
                    Value dwdm_carrier_wavelength; //type: string
                    Value grey_wavelength; //type: uint32
                    Value rx_low_threshold; //type: int32
                    Value rx_high_threshold; //type: int32
                    Value lbc_high_threshold; //type: int32
                    Value tx_low_threshold; //type: int32
                    Value tx_high_threshold; //type: int32
                    Value lbc_th_high_default; //type: int32
                    Value lbc_th_low_default; //type: int32
                    Value temp_low_threshold; //type: int32
                    Value temp_high_threshold; //type: int32
                    Value volt_low_threshold; //type: int32
                    Value volt_high_threshold; //type: int32
                    Value cd; //type: int32
                    Value cd_min; //type: int32
                    Value cd_max; //type: int32
                    Value cd_low_threshold; //type: int32
                    Value cd_high_threshold; //type: int32
                    Value osnr_low_threshold; //type: string
                    Value dgd_high_threshold; //type: string
                    Value polarization_mode_dispersion; //type: string
                    Value second_order_polarization_mode_dispersion; //type: string
                    Value optical_signal_to_noise_ratio; //type: string
                    Value polarization_dependent_loss; //type: string
                    Value polarization_change_rate; //type: string
                    Value differential_group_delay; //type: string
                    Value phase_noise; //type: string
                    Value pm_enable; //type: uint32
                    Value laser_state; //type: OpticsLaserStateEnum
                    Value led_state; //type: OpticsLedStateEnum
                    Value controller_state; //type: OpticsControllerStateEnum
                    Value form_factor; //type: OpticsFormFactorEnum
                    Value phy_type; //type: OpticsPhyEnum
                    Value rx_power; //type: int32
                    Value tx_power; //type: int32
                    Value cfg_tx_power; //type: int32
                    Value cfg_tx_power_configurable; //type: boolean
                    Value display_volt_temp; //type: boolean
                    Value cd_configurable; //type: boolean
                    Value optics_fec; //type: OpticsFecEnum
                    Value port_type; //type: OpticsPortEnum
                    Value rx_voa_attenuation; //type: int32
                    Value tx_voa_attenuation; //type: int32
                    Value ampli_gain; //type: int32
                    Value ampli_tilt; //type: int32
                    Value rx_voa_attenuation_config_val; //type: int32
                    Value tx_voa_attenuation_config_val; //type: int32
                    Value ampli_control_mode_config_val; //type: OpticsAmplifierControlModeEnum
                    Value ampli_gain_range_config_val; //type: OpticsAmplifierGainRangeEnum
                    Value ampli_gain_config_val; //type: int32
                    Value ampli_tilt_config_val; //type: int32
                    Value ampli_channel_power_config_val; //type: int32
                    Value ampli_gain_thr_deg_low_config_val; //type: int32
                    Value ampli_gain_thr_deg_high_config_val; //type: int32
                    Value osri_config_val; //type: boolean
                    Value safety_control_mode_config_val; //type: OpticsAmplifierSafetyControlModeEnum
                    Value total_rx_power; //type: int32
                    Value total_tx_power; //type: int32
                    Value is_bo_configured; //type: boolean
                    Value is_ext_param_valid; //type: boolean
                    Value alarm_detected; //type: boolean


                class NetworkSrlgInfo : public Entity
                {
                    public:
                        NetworkSrlgInfo();
                        ~NetworkSrlgInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NetworkSrlgArray : public Entity
                    {
                        public:
                            NetworkSrlgArray();
                            ~NetworkSrlgArray();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value set_number; //type: uint32
                            ValueList network_srlg; //type: list of  uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray


                        std::vector<std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray> > network_srlg_array;


                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo


                class OpticsAlarmInfo : public Entity
                {
                    public:
                        OpticsAlarmInfo();
                        ~OpticsAlarmInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class HighRxPower : public Entity
                    {
                        public:
                            HighRxPower();
                            ~HighRxPower();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower


                    class LowRxPower : public Entity
                    {
                        public:
                            LowRxPower();
                            ~LowRxPower();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower


                    class HighTxPower : public Entity
                    {
                        public:
                            HighTxPower();
                            ~HighTxPower();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower


                    class LowTxPower : public Entity
                    {
                        public:
                            LowTxPower();
                            ~LowTxPower();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower


                    class HighLbc : public Entity
                    {
                        public:
                            HighLbc();
                            ~HighLbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc


                    class HighRx1Power : public Entity
                    {
                        public:
                            HighRx1Power();
                            ~HighRx1Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power


                    class HighRx2Power : public Entity
                    {
                        public:
                            HighRx2Power();
                            ~HighRx2Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power


                    class HighRx3Power : public Entity
                    {
                        public:
                            HighRx3Power();
                            ~HighRx3Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power


                    class HighRx4Power : public Entity
                    {
                        public:
                            HighRx4Power();
                            ~HighRx4Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power


                    class LowRx1Power : public Entity
                    {
                        public:
                            LowRx1Power();
                            ~LowRx1Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power


                    class LowRx2Power : public Entity
                    {
                        public:
                            LowRx2Power();
                            ~LowRx2Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power


                    class LowRx3Power : public Entity
                    {
                        public:
                            LowRx3Power();
                            ~LowRx3Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power


                    class LowRx4Power : public Entity
                    {
                        public:
                            LowRx4Power();
                            ~LowRx4Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power


                    class HighTx1Power : public Entity
                    {
                        public:
                            HighTx1Power();
                            ~HighTx1Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power


                    class HighTx2Power : public Entity
                    {
                        public:
                            HighTx2Power();
                            ~HighTx2Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power


                    class HighTx3Power : public Entity
                    {
                        public:
                            HighTx3Power();
                            ~HighTx3Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power


                    class HighTx4Power : public Entity
                    {
                        public:
                            HighTx4Power();
                            ~HighTx4Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power


                    class LowTx1Power : public Entity
                    {
                        public:
                            LowTx1Power();
                            ~LowTx1Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power


                    class LowTx2Power : public Entity
                    {
                        public:
                            LowTx2Power();
                            ~LowTx2Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power


                    class LowTx3Power : public Entity
                    {
                        public:
                            LowTx3Power();
                            ~LowTx3Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power


                    class LowTx4Power : public Entity
                    {
                        public:
                            LowTx4Power();
                            ~LowTx4Power();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power


                    class HighTx1Lbc : public Entity
                    {
                        public:
                            HighTx1Lbc();
                            ~HighTx1Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc


                    class HighTx2Lbc : public Entity
                    {
                        public:
                            HighTx2Lbc();
                            ~HighTx2Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc


                    class HighTx3Lbc : public Entity
                    {
                        public:
                            HighTx3Lbc();
                            ~HighTx3Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc


                    class HighTx4Lbc : public Entity
                    {
                        public:
                            HighTx4Lbc();
                            ~HighTx4Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc


                    class LowTx1Lbc : public Entity
                    {
                        public:
                            LowTx1Lbc();
                            ~LowTx1Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc


                    class LowTx2Lbc : public Entity
                    {
                        public:
                            LowTx2Lbc();
                            ~LowTx2Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc


                    class LowTx3Lbc : public Entity
                    {
                        public:
                            LowTx3Lbc();
                            ~LowTx3Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc


                    class LowTx4Lbc : public Entity
                    {
                        public:
                            LowTx4Lbc();
                            ~LowTx4Lbc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc


                    class RxLos : public Entity
                    {
                        public:
                            RxLos();
                            ~RxLos();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos


                    class TxLos : public Entity
                    {
                        public:
                            TxLos();
                            ~TxLos();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos


                    class RxLol : public Entity
                    {
                        public:
                            RxLol();
                            ~RxLol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol


                    class TxLol : public Entity
                    {
                        public:
                            TxLol();
                            ~TxLol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol


                    class TxFault : public Entity
                    {
                        public:
                            TxFault();
                            ~TxFault();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault


                    class Hidgd : public Entity
                    {
                        public:
                            Hidgd();
                            ~Hidgd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd


                    class Oorcd : public Entity
                    {
                        public:
                            Oorcd();
                            ~Oorcd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd


                    class Osnr : public Entity
                    {
                        public:
                            Osnr();
                            ~Osnr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr


                    class Wvlool : public Entity
                    {
                        public:
                            Wvlool();
                            ~Wvlool();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool


                    class Mea : public Entity
                    {
                        public:
                            Mea();
                            ~Mea();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea


                    class ImpRemoval : public Entity
                    {
                        public:
                            ImpRemoval();
                            ~ImpRemoval();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval


                    class RxLoc : public Entity
                    {
                        public:
                            RxLoc();
                            ~RxLoc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc


                    class AmpGainDegLow : public Entity
                    {
                        public:
                            AmpGainDegLow();
                            ~AmpGainDegLow();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow


                    class AmpGainDegHigh : public Entity
                    {
                        public:
                            AmpGainDegHigh();
                            ~AmpGainDegHigh();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_detected; //type: boolean
                            Value counter; //type: uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh


                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh> amp_gain_deg_high;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow> amp_gain_deg_low;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd> hidgd;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc> high_lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power> high_rx1_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power> high_rx2_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power> high_rx3_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power> high_rx4_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower> high_rx_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power> high_tx1_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc> high_tx1lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power> high_tx2_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc> high_tx2lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power> high_tx3_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc> high_tx3lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power> high_tx4_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc> high_tx4lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower> high_tx_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval> imp_removal;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power> low_rx1_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power> low_rx2_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power> low_rx3_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power> low_rx4_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower> low_rx_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power> low_tx1_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc> low_tx1lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power> low_tx2_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc> low_tx2lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power> low_tx3_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc> low_tx3lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power> low_tx4_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc> low_tx4lbc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower> low_tx_power;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea> mea;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd> oorcd;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr> osnr;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc> rx_loc;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol> rx_lol;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos> rx_los;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault> tx_fault;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol> tx_lol;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos> tx_los;
                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool> wvlool;


                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo


                class TransceiverInfo : public Entity
                {
                    public:
                        TransceiverInfo();
                        ~TransceiverInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vendor_info; //type: string
                        Value date; //type: string
                        Value optics_vendor_rev; //type: string
                        Value optics_serial_no; //type: string
                        Value optics_vendor_part; //type: string
                        Value connector_type; //type: FiberConnectorEnum
                        Value otn_application_code; //type: OtnApplicationCodeEnum
                        Value sonet_application_code; //type: SonetApplicationCodeEnum
                        Value ethernet_compliance_code; //type: EthernetPmdEnum
                        Value internal_temperature; //type: int32


                        class FiberConnectorEnum;
                        class EthernetPmdEnum;
                        class OtnApplicationCodeEnum;
                        class SonetApplicationCodeEnum;


                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo


                class ExtParamVal : public Entity
                {
                    public:
                        ExtParamVal();
                        ~ExtParamVal();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value snr_lane1; //type: int32
                        Value snr_lane2; //type: int32
                        Value isi_correction_lane1; //type: int32
                        Value isi_correction_lane2; //type: int32
                        Value pam_rate_lane1; //type: int32
                        Value pam_rate_lane2; //type: int32
                        Value pre_fec_ber; //type: int32
                        Value uncorrected_ber; //type: int32
                        Value tec_current_lane1; //type: int32
                        Value tec_current_lane2; //type: int32
                        Value laser_diff_frequency_lane1; //type: int32
                        Value laser_diff_frequency_lane2; //type: int32
                        Value laser_diff_temperature_lane1; //type: int32
                        Value laser_diff_temperature_lane2; //type: int32
                        Value pre_fec_ber_latched_min; //type: int32
                        Value pre_fec_ber_latched_max; //type: int32
                        Value pre_fec_ber_accumulated; //type: int32
                        Value pre_fec_ber_instantaneous; //type: int32
                        Value uncorrected_ber_latched_min; //type: int32
                        Value uncorrected_ber_latched_max; //type: int32
                        Value uncorrected_ber_accumulated; //type: int32
                        Value uncorrected_ber_instantaneous; //type: int32




                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal


                class ExtParamThresholdVal : public Entity
                {
                    public:
                        ExtParamThresholdVal();
                        ~ExtParamThresholdVal();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value snr_alarm_high_threshold; //type: int32
                        Value snr_alarm_low_threshold; //type: int32
                        Value snr_warn_high_threshold; //type: int32
                        Value snr_warn_low_threshold; //type: int32
                        Value isi_correction_alarm_high_threshold; //type: int32
                        Value isi_correction_alarm_low_threshold; //type: int32
                        Value isi_correction_warn_high_threshold; //type: int32
                        Value isi_correction_warn_low_threshold; //type: int32
                        Value pam_rate_alarm_high_threshold; //type: int32
                        Value pam_rate_alarm_low_threshold; //type: int32
                        Value pam_rate_warn_high_threshold; //type: int32
                        Value pam_rate_warn_low_threshold; //type: int32
                        Value pre_fec_ber_alarm_high_threshold; //type: int32
                        Value pre_fec_ber_alarm_low_threshold; //type: int32
                        Value pre_fec_ber_warn_high_threshold; //type: int32
                        Value pre_fec_ber_warn_low_threshold; //type: int32
                        Value uncorrected_ber_alarm_high_threshold; //type: int32
                        Value uncorrected_ber_alarm_low_threshold; //type: int32
                        Value uncorrected_ber_warn_high_threshold; //type: int32
                        Value uncorrected_ber_warn_low_threshold; //type: int32
                        Value tec_current_alarm_high_threshold; //type: int32
                        Value tec_current_alarm_low_threshold; //type: int32
                        Value tec_current_warn_high_threshold; //type: int32
                        Value tec_current_warn_low_threshold; //type: int32
                        Value laser_diff_frequency_alarm_high_threshold; //type: int32
                        Value laser_diff_frequency_alarm_low_threshold; //type: int32
                        Value laser_diff_frequency_warn_high_threshold; //type: int32
                        Value laser_diff_frequency_warn_low_threshold; //type: int32
                        Value laser_diff_temperature_alarm_high_threshold; //type: int32
                        Value laser_diff_temperature_alarm_low_threshold; //type: int32
                        Value laser_diff_temperature_warn_high_threshold; //type: int32
                        Value laser_diff_temperature_warn_low_threshold; //type: int32
                        Value pre_fec_ber_latched_min_alarm_high_threshold; //type: int32
                        Value pre_fec_ber_latched_min_alarm_low_threshold; //type: int32
                        Value pre_fec_ber_latched_min_warn_high_threshold; //type: int32
                        Value pre_fec_ber_latched_min_warn_low_threshold; //type: int32
                        Value pre_fec_ber_latched_max_alarm_high_threshold; //type: int32
                        Value pre_fec_ber_latched_max_alarm_low_threshold; //type: int32
                        Value pre_fec_ber_latched_max_warn_high_threshold; //type: int32
                        Value pre_fec_ber_latched_max_warn_low_threshold; //type: int32
                        Value pre_fec_ber_accumulated_alarm_high_threshold; //type: int32
                        Value pre_fec_ber_accumulated_alarm_low_threshold; //type: int32
                        Value pre_fec_ber_accumulated_warn_high_threshold; //type: int32
                        Value pre_fec_ber_accumulated_warn_low_threshold; //type: int32
                        Value pre_fec_ber_instantaneous_alarm_high_threshold; //type: int32
                        Value pre_fec_ber_instantaneous_alarm_low_threshold; //type: int32
                        Value pre_fec_ber_instantaneous_warn_high_threshold; //type: int32
                        Value pre_fec_ber_instantaneous_warn_low_threshold; //type: int32
                        Value uncorrected_ber_latched_min_alarm_high_threshold; //type: int32
                        Value uncorrected_ber_latched_min_alarm_low_threshold; //type: int32
                        Value uncorrected_ber_latched_min_warn_high_threshold; //type: int32
                        Value uncorrected_ber_latched_min_warn_low_threshold; //type: int32
                        Value uncorrected_ber_latched_max_alarm_high_threshold; //type: int32
                        Value uncorrected_ber_latched_max_alarm_low_threshold; //type: int32
                        Value uncorrected_ber_latched_max_warn_high_threshold; //type: int32
                        Value uncorrected_ber_latched_max_warn_low_threshold; //type: int32
                        Value uncorrected_ber_accumulated_alarm_high_threshold; //type: int32
                        Value uncorrected_ber_accumulated_alarm_low_threshold; //type: int32
                        Value uncorrected_ber_accumulated_warn_high_threshold; //type: int32
                        Value uncorrected_ber_accumulated_warn_low_threshold; //type: int32
                        Value uncorrected_ber_instantaneous_alarm_high_threshold; //type: int32
                        Value uncorrected_ber_instantaneous_alarm_low_threshold; //type: int32
                        Value uncorrected_ber_instantaneous_warn_high_threshold; //type: int32
                        Value uncorrected_ber_instantaneous_warn_low_threshold; //type: int32




                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal


                class LaneData : public Entity
                {
                    public:
                        LaneData();
                        ~LaneData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lane_index; //type: uint32
                        Value laser_bias_current_percent; //type: uint32
                        Value laser_bias_current_milli_amps; //type: uint32
                        Value transmit_power; //type: int32
                        Value receive_power; //type: int32
                        Value receive_signal_power; //type: int32
                        Value transmit_signal_power; //type: int32
                        Value output_frequency; //type: int32


                    class LaneAlarmInfo : public Entity
                    {
                        public:
                            LaneAlarmInfo();
                            ~LaneAlarmInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HighRxPower : public Entity
                        {
                            public:
                                HighRxPower();
                                ~HighRxPower();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_detected; //type: boolean
                                Value counter; //type: uint32




                        }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower


                        class LowRxPower : public Entity
                        {
                            public:
                                LowRxPower();
                                ~LowRxPower();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_detected; //type: boolean
                                Value counter; //type: uint32




                        }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower


                        class HighTxPower : public Entity
                        {
                            public:
                                HighTxPower();
                                ~HighTxPower();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_detected; //type: boolean
                                Value counter; //type: uint32




                        }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower


                        class LowTxPower : public Entity
                        {
                            public:
                                LowTxPower();
                                ~LowTxPower();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_detected; //type: boolean
                                Value counter; //type: uint32




                        }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower


                        class HighLbc : public Entity
                        {
                            public:
                                HighLbc();
                                ~HighLbc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_detected; //type: boolean
                                Value counter; //type: uint32




                        }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc


                            std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc> high_lbc;
                            std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower> high_rx_power;
                            std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower> high_tx_power;
                            std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower> low_rx_power;
                            std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower> low_tx_power;


                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo


                        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo> lane_alarm_info;


                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData


                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal> ext_param_threshold_val;
                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal> ext_param_val;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData> > lane_data;
                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo> network_srlg_info;
                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo> optics_alarm_info;
                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo> transceiver_info;
                    class OpticsAmplifierControlModeEnum;
                    class OpticsAmplifierGainRangeEnum;
                    class OpticsControllerStateEnum;
                    class OpticsWaveBandEnum;
                    class OpticsFormFactorEnum;
                    class OpticsLaserStateEnum;
                    class OpticsLedStateEnum;
                    class OpticsFecEnum;
                    class OpticsEnum;
                    class OpticsPhyEnum;
                    class OpticsPortEnum;
                    class OpticsAmplifierSafetyControlModeEnum;
                    class OpticsTasEnum;


            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo


            class OpticsLaneTable : public Entity
            {
                public:
                    OpticsLaneTable();
                    ~OpticsLaneTable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OpticsLane : public Entity
                {
                    public:
                        OpticsLane();
                        ~OpticsLane();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LaneData : public Entity
                    {
                        public:
                            LaneData();
                            ~LaneData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lane_index; //type: uint32
                            Value laser_bias_current_percent; //type: uint32
                            Value laser_bias_current_milli_amps; //type: uint32
                            Value transmit_power; //type: int32
                            Value receive_power; //type: int32
                            Value receive_signal_power; //type: int32
                            Value transmit_signal_power; //type: int32
                            Value output_frequency; //type: int32


                        class LaneAlarmInfo : public Entity
                        {
                            public:
                                LaneAlarmInfo();
                                ~LaneAlarmInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class HighRxPower : public Entity
                            {
                                public:
                                    HighRxPower();
                                    ~HighRxPower();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_detected; //type: boolean
                                    Value counter; //type: uint32




                            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::HighRxPower


                            class LowRxPower : public Entity
                            {
                                public:
                                    LowRxPower();
                                    ~LowRxPower();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_detected; //type: boolean
                                    Value counter; //type: uint32




                            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::LowRxPower


                            class HighTxPower : public Entity
                            {
                                public:
                                    HighTxPower();
                                    ~HighTxPower();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_detected; //type: boolean
                                    Value counter; //type: uint32




                            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::HighTxPower


                            class LowTxPower : public Entity
                            {
                                public:
                                    LowTxPower();
                                    ~LowTxPower();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_detected; //type: boolean
                                    Value counter; //type: uint32




                            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::LowTxPower


                            class HighLbc : public Entity
                            {
                                public:
                                    HighLbc();
                                    ~HighLbc();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_detected; //type: boolean
                                    Value counter; //type: uint32




                            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::HighLbc


                                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::HighLbc> high_lbc;
                                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::HighRxPower> high_rx_power;
                                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::HighTxPower> high_tx_power;
                                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::LowRxPower> low_rx_power;
                                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo::LowTxPower> low_tx_power;


                        }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo


                            std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData::LaneAlarmInfo> lane_alarm_info;


                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane::LaneData> > lane_data;


                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane


                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable::OpticsLane> optics_lane;


            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable


            class OpticsDbInfo : public Entity
            {
                public:
                    OpticsDbInfo();
                    ~OpticsDbInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value transport_admin_state; //type: OpticsTasEnum
                    Value controller_state; //type: OpticsControllerStateEnum


                class NetworkSrlgInfo : public Entity
                {
                    public:
                        NetworkSrlgInfo();
                        ~NetworkSrlgInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NetworkSrlgArray : public Entity
                    {
                        public:
                            NetworkSrlgArray();
                            ~NetworkSrlgArray();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value set_number; //type: uint32
                            ValueList network_srlg; //type: list of  uint32




                    }; // OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray


                        std::vector<std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray> > network_srlg_array;


                }; // OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo


                    std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo> network_srlg_info;
                    class OpticsControllerStateEnum;
                    class OpticsTasEnum;


            }; // OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo


                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo> optics_db_info;
                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap> optics_dwdm_carrrier_channel_map;
                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo> optics_info;
                std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLaneTable> optics_lane_table;


        }; // OpticsOper::OpticsPorts::OpticsPort


            std::vector<std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort> > optics_port;


    }; // OpticsOper::OpticsPorts


        std::unique_ptr<Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts> optics_ports;


}; // OpticsOper


class OpticsAmplifierGainRangeEnum : public Enum
{
    public:
        static const Enum::Value optics_amplifier_gain_range_normal;
        static const Enum::Value optics_amplifier_gain_range_ext_end_ed;

};

class OpticsAmplifierControlModeEnum : public Enum
{
    public:
        static const Enum::Value automatic;
        static const Enum::Value manual;

};

class EthernetPmdEnum : public Enum
{
    public:
        static const Enum::Value optics_eth_not_set;
        static const Enum::Value optics_eth_10gbase_lrm;
        static const Enum::Value optics_eth_10gbase_lr;
        static const Enum::Value optics_eth_10gbase_zr;
        static const Enum::Value optics_eth_10gbase_er;
        static const Enum::Value optics_eth_10gbase_sr;
        static const Enum::Value optics_eth_10gbase;
        static const Enum::Value optics_eth_40gbase_cr4;
        static const Enum::Value optics_eth_40gbase_sr4;
        static const Enum::Value optics_eth_40gbase_lr4;
        static const Enum::Value optics_eth_40gbase_er4;
        static const Enum::Value optics_eth_40gbase_psm4;
        static const Enum::Value optics_eth_40gbase_csr4;
        static const Enum::Value optics_eth_40gbase_sr_bd;
        static const Enum::Value optics_eth_40g_aoc;
        static const Enum::Value optics_eth_4x10gbase_lr;
        static const Enum::Value optics_eth_4x10gbase_sr;
        static const Enum::Value optics_eth_100g_aoc;
        static const Enum::Value optics_eth_100g_acc;
        static const Enum::Value optics_eth_100gbase_sr10;
        static const Enum::Value optics_eth_100gbase_sr4;
        static const Enum::Value optics_eth_100gbase_lr4;
        static const Enum::Value optics_eth_100gbase_er4;
        static const Enum::Value optics_eth_100gbase_cwdm4;
        static const Enum::Value optics_eth_100gbase_clr4;
        static const Enum::Value optics_eth_100gbase_psm4;
        static const Enum::Value optics_eth_100gbase_cr4;
        static const Enum::Value optics_eth_100gbase_al;
        static const Enum::Value optics_eth_100gbase_pl;
        static const Enum::Value optics_eth_undefined;

};

class OpticsWaveBandEnum : public Enum
{
    public:
        static const Enum::Value c_band;
        static const Enum::Value l_band;
        static const Enum::Value c_band_odd;
        static const Enum::Value c_band_even;
        static const Enum::Value invalid_band;

};

class OpticsFormFactorEnum : public Enum
{
    public:
        static const Enum::Value not_set;
        static const Enum::Value invalid;
        static const Enum::Value cpak;
        static const Enum::Value cxp;
        static const Enum::Value sfp_plus;
        static const Enum::Value qsfp;
        static const Enum::Value qsfp_plus;
        static const Enum::Value qsfp28;
        static const Enum::Value sfp;
        static const Enum::Value cfp;
        static const Enum::Value cfp2;
        static const Enum::Value cfp4;
        static const Enum::Value xfp;
        static const Enum::Value x2;
        static const Enum::Value non_pluggable;
        static const Enum::Value other;

};

class SonetApplicationCodeEnum : public Enum
{
    public:
        static const Enum::Value optics_sonet_not_set;
        static const Enum::Value optics_vsr2000_3r2;
        static const Enum::Value optics_vsr2000_3r3;
        static const Enum::Value optics_vsr2000_3r5;
        static const Enum::Value optics_sonet_undefined;

};

class OpticsControllerStateEnum : public Enum
{
    public:
        static const Enum::Value optics_state_up;
        static const Enum::Value optics_state_down;
        static const Enum::Value optics_state_admin_down;

};

class OpticsAmplifierSafetyControlModeEnum : public Enum
{
    public:
        static const Enum::Value optics_amplifier_safety_mode_auto;
        static const Enum::Value optics_amplifier_safety_mode_manual;
        static const Enum::Value optics_amplifier_safety_mode_disabled;

};

class OpticsLaserStateEnum : public Enum
{
    public:
        static const Enum::Value on;
        static const Enum::Value off;
        static const Enum::Value unknown;

};

class OpticsFecEnum : public Enum
{
    public:
        static const Enum::Value fec_none;
        static const Enum::Value fec_hg15;
        static const Enum::Value fec_hg25;
        static const Enum::Value fec_hg15_de;
        static const Enum::Value fec_hg25_de;
        static const Enum::Value fec_enabled;

};

class FiberConnectorEnum : public Enum
{
    public:
        static const Enum::Value optics_connect_or_not_set;
        static const Enum::Value optics_sc_connect_or;
        static const Enum::Value optics_lc_connect_or;
        static const Enum::Value optics_mpo_connect_or;
        static const Enum::Value optics_undefined_connect_or;

};

class OpticsPhyEnum : public Enum
{
    public:
        static const Enum::Value not_set;
        static const Enum::Value invalid;
        static const Enum::Value long_reach_four_lanes;
        static const Enum::Value short_reach_ten_lanes;
        static const Enum::Value short_reach_one_lane;
        static const Enum::Value long_reach_one_lane;
        static const Enum::Value short_reach_four_lanes;
        static const Enum::Value copper_four_lanes;
        static const Enum::Value active_optical_cable;
        static const Enum::Value fourty_gig_e_long_reach_four_lanes;
        static const Enum::Value fourty_gig_e_short_reach_four_lanes;
        static const Enum::Value cwdm_four_lanes;
        static const Enum::Value extended_reach_four_lanes;
        static const Enum::Value psm_four_lanes;
        static const Enum::Value active_copper_cable;
        static const Enum::Value fourty_gig_e_extended_reach_four_lanes;
        static const Enum::Value four_x_ten_gig_e_short_reach_one_lane;
        static const Enum::Value fourty_gig_epsm_four_lanes;
        static const Enum::Value fourty_gig_e_copper_four_lanes;
        static const Enum::Value long_reach_mm_one_lane;
        static const Enum::Value copper_short_reach;
        static const Enum::Value short_reach_srbd;
        static const Enum::Value copper_one_lane;
        static const Enum::Value four_x_ten_gig_e_long_reach_one_lane;
        static const Enum::Value fourty_gig_eaoc_four_lanes;
        static const Enum::Value extended_one_lane;
        static const Enum::Value zr_one_lane;
        static const Enum::Value dwdm_one_lane;
        static const Enum::Value sx_one_lane;
        static const Enum::Value lx_one_lane;
        static const Enum::Value ex_one_lane;
        static const Enum::Value zx_one_lane;
        static const Enum::Value ba_set_one_lane;
        static const Enum::Value aoc_one_lane;
        static const Enum::Value active_copper_one_lane;
        static const Enum::Value fourty_gig_eacu_four_lanes;
        static const Enum::Value four_x_ten_gig_eacu_one_lanes;
        static const Enum::Value four_x_ten_gig_ecu_one_lanes;
        static const Enum::Value four_x_ten_gig_eaoc_one_lanes;
        static const Enum::Value hundred_gig_edwdm_two;
        static const Enum::Value fourty_gig_plr4_four_lanes;
        static const Enum::Value fourty_gig_esr4_four_lanes;

};

class OpticsTasEnum : public Enum
{
    public:
        static const Enum::Value tas_ui_oos;
        static const Enum::Value tas_ui_main;
        static const Enum::Value tas_ui_is;
        static const Enum::Value tas_ui_ains;

};

class OpticsEnum : public Enum
{
    public:
        static const Enum::Value optics_unknown;
        static const Enum::Value optics_grey;
        static const Enum::Value optics_dwdm;
        static const Enum::Value optics_cwdm;

};

class OtnApplicationCodeEnum : public Enum
{
    public:
        static const Enum::Value optics_not_set;
        static const Enum::Value optics_p1l1_2d1;
        static const Enum::Value optics_p1s1_2d2;
        static const Enum::Value optics_p1l1_2d2;
        static const Enum::Value optics_undefined;

};

class OpticsLedStateEnum : public Enum
{
    public:
        static const Enum::Value off;
        static const Enum::Value green_on;
        static const Enum::Value green_flashing;
        static const Enum::Value yellow_on;
        static const Enum::Value yellow_flashing;
        static const Enum::Value red_on;
        static const Enum::Value red_flashing;

};

class OpticsPortEnum : public Enum
{
    public:
        static const Enum::Value com;
        static const Enum::Value line;
        static const Enum::Value osc;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OPTICS_OPER_ */

