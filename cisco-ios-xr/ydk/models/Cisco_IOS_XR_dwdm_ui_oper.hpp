#ifndef _CISCO_IOS_XR_DWDM_UI_OPER_
#define _CISCO_IOS_XR_DWDM_UI_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dwdm_ui_oper {

class Dwdm : public Entity
{
    public:
        Dwdm();
        ~Dwdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Ports : public Entity
    {
        public:
            Ports();
            ~Ports();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Port : public Entity
        {
            public:
                Port();
                ~Port();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class Prbs : public Entity
            {
                public:
                    Prbs();
                    ~Prbs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TwentyFourHoursBucket : public Entity
                {
                    public:
                        TwentyFourHoursBucket();
                        ~TwentyFourHoursBucket();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class TwentyFourHoursStatistics : public Entity
                    {
                        public:
                            TwentyFourHoursStatistics();
                            ~TwentyFourHoursStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_prbs_enabled; //type: boolean
                            Value prbs_config_mode; //type: G709PrbsModeEnum


                        class PrbsEntry : public Entity
                        {
                            public:
                                PrbsEntry();
                                ~PrbsEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interval_index; //type: G709PrbsIntervalEnum
                                Value configured_pattern; //type: G709PrbsPatternEnum
                                Value start_at; //type: string
                                Value stop_at; //type: string
                                Value received_pattern; //type: G709PrbsPatternEnum
                                Value bit_error_count; //type: uint64
                                Value found_count; //type: uint64
                                Value lost_count; //type: uint64
                                Value found_at; //type: string
                                Value lost_at; //type: string


                                class G709PrbsPatternEnum;
                                class G709PrbsIntervalEnum;
                                class G709PrbsPatternEnum;


                        }; // Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry> > prbs_entry;
                            class G709PrbsModeEnum;


                    }; // Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics


                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics> twenty_four_hours_statistics;


                }; // Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket


                class FifteenMinutesBucket : public Entity
                {
                    public:
                        FifteenMinutesBucket();
                        ~FifteenMinutesBucket();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FifteenMinutesStatistics : public Entity
                    {
                        public:
                            FifteenMinutesStatistics();
                            ~FifteenMinutesStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_prbs_enabled; //type: boolean
                            Value prbs_config_mode; //type: G709PrbsModeEnum


                        class PrbsEntry : public Entity
                        {
                            public:
                                PrbsEntry();
                                ~PrbsEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interval_index; //type: G709PrbsIntervalEnum
                                Value configured_pattern; //type: G709PrbsPatternEnum
                                Value start_at; //type: string
                                Value stop_at; //type: string
                                Value received_pattern; //type: G709PrbsPatternEnum
                                Value bit_error_count; //type: uint64
                                Value found_count; //type: uint64
                                Value lost_count; //type: uint64
                                Value found_at; //type: string
                                Value lost_at; //type: string


                                class G709PrbsPatternEnum;
                                class G709PrbsIntervalEnum;
                                class G709PrbsPatternEnum;


                        }; // Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry> > prbs_entry;
                            class G709PrbsModeEnum;


                    }; // Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics


                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics> fifteen_minutes_statistics;


                }; // Dwdm::Ports::Port::Prbs::FifteenMinutesBucket


                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::FifteenMinutesBucket> fifteen_minutes_bucket;
                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket> twenty_four_hours_bucket;


            }; // Dwdm::Ports::Port::Prbs


            class Optics : public Entity
            {
                public:
                    Optics();
                    ~Optics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class WaveInfo : public Entity
                {
                    public:
                        WaveInfo();
                        ~WaveInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value wave_band; //type: uint32
                        Value wave_channel_min; //type: uint32
                        Value wave_channel_max; //type: uint32




                }; // Dwdm::Ports::Port::Optics::WaveInfo


                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Optics::WaveInfo> wave_info;


            }; // Dwdm::Ports::Port::Optics


            class Info : public Entity
            {
                public:
                    Info();
                    ~Info();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value controller_state; //type: DwdmControllerStateEnum
                    Value transport_admin_state; //type: DwdmtasStateEnum
                    Value slice_state; //type: boolean


                class G709Info : public Entity
                {
                    public:
                        G709Info();
                        ~G709Info();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_g709_enabled; //type: boolean
                        Value is_fec_mode_default; //type: boolean
                        Value fec_mode; //type: int32
                        Value remote_fec_mode; //type: int32
                        Value efec_mode; //type: G709EfecModeEnum
                        Value loopback_mode; //type: int32
                        Value ec; //type: uint64
                        Value ec_accum; //type: uint64
                        Value uc; //type: uint64
                        Value fec_ber; //type: uint64
                        Value fec_ber_man; //type: int32
                        Value q; //type: uint64
                        Value q_margin; //type: uint64
                        Value fe_cstr; //type: string
                        Value qstr; //type: string
                        Value qmargin_str; //type: string
                        Value network_port_id; //type: string
                        Value network_conn_id; //type: string
                        Value is_prbs_enabled; //type: boolean
                        Value g709_prbs_mode; //type: G709PrbsModeEnum
                        Value g709_prbs_pattern; //type: G709PrbsPatternEnum
                        Value prbs_time_stamp; //type: uint64


                    class FecMismatch : public Entity
                    {
                        public:
                            FecMismatch();
                            ~FecMismatch();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value counter; //type: uint64




                    }; // Dwdm::Ports::Port::Info::G709Info::FecMismatch


                    class EcTca : public Entity
                    {
                        public:
                            EcTca();
                            ~EcTca();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value threshold; //type: int32
                            Value counter; //type: uint64




                    }; // Dwdm::Ports::Port::Info::G709Info::EcTca


                    class UcTca : public Entity
                    {
                        public:
                            UcTca();
                            ~UcTca();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reporting_enabled; //type: boolean
                            Value is_detected; //type: boolean
                            Value is_asserted; //type: boolean
                            Value threshold; //type: int32
                            Value counter; //type: uint64




                    }; // Dwdm::Ports::Port::Info::G709Info::UcTca


                    class OtuInfo : public Entity
                    {
                        public:
                            OtuInfo();
                            ~OtuInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bei; //type: uint64
                            Value bip; //type: uint64


                        class Los : public Entity
                        {
                            public:
                                Los();
                                ~Los();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los


                        class Lof : public Entity
                        {
                            public:
                                Lof();
                                ~Lof();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof


                        class Lom : public Entity
                        {
                            public:
                                Lom();
                                ~Lom();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom


                        class Oof : public Entity
                        {
                            public:
                                Oof();
                                ~Oof();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof


                        class Oom : public Entity
                        {
                            public:
                                Oom();
                                ~Oom();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom


                        class Ais : public Entity
                        {
                            public:
                                Ais();
                                ~Ais();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais


                        class Iae : public Entity
                        {
                            public:
                                Iae();
                                ~Iae();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae


                        class Bdi : public Entity
                        {
                            public:
                                Bdi();
                                ~Bdi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi


                        class Tim : public Entity
                        {
                            public:
                                Tim();
                                ~Tim();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim


                        class Eoc : public Entity
                        {
                            public:
                                Eoc();
                                ~Eoc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc


                        class SfBer : public Entity
                        {
                            public:
                                SfBer();
                                ~SfBer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer


                        class SdBer : public Entity
                        {
                            public:
                                SdBer();
                                ~SdBer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer


                        class PrefecSfBer : public Entity
                        {
                            public:
                                PrefecSfBer();
                                ~PrefecSfBer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer


                        class PrefecSdBer : public Entity
                        {
                            public:
                                PrefecSdBer();
                                ~PrefecSdBer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer


                        class BbeTca : public Entity
                        {
                            public:
                                BbeTca();
                                ~BbeTca();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca


                        class EsTca : public Entity
                        {
                            public:
                                EsTca();
                                ~EsTca();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca


                        class Bbe : public Entity
                        {
                            public:
                                Bbe();
                                ~Bbe();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe


                        class Es : public Entity
                        {
                            public:
                                Es();
                                ~Es();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es


                        class Ses : public Entity
                        {
                            public:
                                Ses();
                                ~Ses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses


                        class Uas : public Entity
                        {
                            public:
                                Uas();
                                ~Uas();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas


                        class Fc : public Entity
                        {
                            public:
                                Fc();
                                ~Fc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc


                        class Bber : public Entity
                        {
                            public:
                                Bber();
                                ~Bber();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber


                        class Esr : public Entity
                        {
                            public:
                                Esr();
                                ~Esr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr


                        class Sesr : public Entity
                        {
                            public:
                                Sesr();
                                ~Sesr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr


                        class Tti : public Entity
                        {
                            public:
                                Tti();
                                ~Tti();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_string_type; //type: uint32
                                Value expected_string_type; //type: uint32
                                Value rx_string_type; //type: uint32
                                Value tx_tti; //type: string
                                Value tx_sapi0; //type: string
                                Value tx_sapi; //type: string
                                Value tx_sapi_range; //type: string
                                Value tx_dapi0; //type: string
                                Value tx_dapi; //type: string
                                Value tx_dapi_range; //type: string
                                Value tx_oper_spec; //type: string
                                Value tx_oper_spec_range; //type: string
                                Value rx_tti; //type: string
                                Value rx_sapi0; //type: string
                                Value rx_sapi; //type: string
                                Value rx_sapi_range; //type: string
                                Value rx_dapi0; //type: string
                                Value rx_dapi; //type: string
                                Value rx_dapi_range; //type: string
                                Value rx_oper_spec_range; //type: string
                                Value rx_oper_spec; //type: string
                                Value expected_tti; //type: string
                                Value expected_sapi0; //type: string
                                Value expected_sapi; //type: string
                                Value exp_sapi_range; //type: string
                                Value expected_dapi0; //type: string
                                Value expected_dapi; //type: string
                                Value exp_dapi_range; //type: string
                                Value expected_oper_spec; //type: string
                                Value exp_oper_spec_range; //type: string




                        }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti


                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais> ais;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe> bbe;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca> bbe_tca;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber> bber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi> bdi;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc> eoc;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es> es;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca> es_tca;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr> esr;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc> fc;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae> iae;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof> lof;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom> lom;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los> los;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof> oof;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom> oom;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer> prefec_sd_ber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer> prefec_sf_ber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer> sd_ber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses> ses;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr> sesr;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer> sf_ber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim> tim;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti> tti;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas> uas;


                    }; // Dwdm::Ports::Port::Info::G709Info::OtuInfo


                    class OduInfo : public Entity
                    {
                        public:
                            OduInfo();
                            ~OduInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bip; //type: uint64
                            Value bei; //type: uint64


                        class Oci : public Entity
                        {
                            public:
                                Oci();
                                ~Oci();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci


                        class Ais : public Entity
                        {
                            public:
                                Ais();
                                ~Ais();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais


                        class Lck : public Entity
                        {
                            public:
                                Lck();
                                ~Lck();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck


                        class Bdi : public Entity
                        {
                            public:
                                Bdi();
                                ~Bdi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi


                        class Eoc : public Entity
                        {
                            public:
                                Eoc();
                                ~Eoc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc


                        class Ptim : public Entity
                        {
                            public:
                                Ptim();
                                ~Ptim();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim


                        class Tim : public Entity
                        {
                            public:
                                Tim();
                                ~Tim();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim


                        class SfBer : public Entity
                        {
                            public:
                                SfBer();
                                ~SfBer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer


                        class SdBer : public Entity
                        {
                            public:
                                SdBer();
                                ~SdBer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer


                        class BbeTca : public Entity
                        {
                            public:
                                BbeTca();
                                ~BbeTca();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca


                        class EsTca : public Entity
                        {
                            public:
                                EsTca();
                                ~EsTca();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reporting_enabled; //type: boolean
                                Value is_detected; //type: boolean
                                Value is_asserted; //type: boolean
                                Value threshold; //type: int32
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca


                        class Bbe : public Entity
                        {
                            public:
                                Bbe();
                                ~Bbe();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe


                        class Es : public Entity
                        {
                            public:
                                Es();
                                ~Es();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Es


                        class Ses : public Entity
                        {
                            public:
                                Ses();
                                ~Ses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses


                        class Uas : public Entity
                        {
                            public:
                                Uas();
                                ~Uas();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas


                        class Fc : public Entity
                        {
                            public:
                                Fc();
                                ~Fc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc


                        class Bber : public Entity
                        {
                            public:
                                Bber();
                                ~Bber();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber


                        class Esr : public Entity
                        {
                            public:
                                Esr();
                                ~Esr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr


                        class Sesr : public Entity
                        {
                            public:
                                Sesr();
                                ~Sesr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value counter; //type: uint64




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr


                        class Tti : public Entity
                        {
                            public:
                                Tti();
                                ~Tti();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_string_type; //type: uint32
                                Value expected_string_type; //type: uint32
                                Value rx_string_type; //type: uint32
                                Value tx_tti; //type: string
                                Value tx_sapi0; //type: string
                                Value tx_sapi; //type: string
                                Value tx_sapi_range; //type: string
                                Value tx_dapi0; //type: string
                                Value tx_dapi; //type: string
                                Value tx_dapi_range; //type: string
                                Value tx_oper_spec; //type: string
                                Value tx_oper_spec_range; //type: string
                                Value rx_tti; //type: string
                                Value rx_sapi0; //type: string
                                Value rx_sapi; //type: string
                                Value rx_sapi_range; //type: string
                                Value rx_dapi0; //type: string
                                Value rx_dapi; //type: string
                                Value rx_dapi_range; //type: string
                                Value rx_oper_spec_range; //type: string
                                Value rx_oper_spec; //type: string
                                Value expected_tti; //type: string
                                Value expected_sapi0; //type: string
                                Value expected_sapi; //type: string
                                Value exp_sapi_range; //type: string
                                Value expected_dapi0; //type: string
                                Value expected_dapi; //type: string
                                Value exp_dapi_range; //type: string
                                Value expected_oper_spec; //type: string
                                Value exp_oper_spec_range; //type: string




                        }; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti


                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais> ais;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe> bbe;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca> bbe_tca;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber> bber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi> bdi;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc> eoc;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Es> es;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca> es_tca;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr> esr;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc> fc;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck> lck;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci> oci;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim> ptim;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer> sd_ber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses> ses;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr> sesr;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer> sf_ber;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim> tim;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti> tti;
                            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas> uas;


                    }; // Dwdm::Ports::Port::Info::G709Info::OduInfo


                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::EcTca> ec_tca;
                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::FecMismatch> fec_mismatch;
                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo> odu_info;
                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo> otu_info;
                        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::UcTca> uc_tca;
                        class G709EfecModeEnum;
                        class G709PrbsModeEnum;
                        class G709PrbsPatternEnum;


                }; // Dwdm::Ports::Port::Info::G709Info


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
                        Value optics_type; //type: string
                        Value clock_source; //type: uint8
                        Value wave_frequency_progressive_string; //type: string
                        Value wavelength_progressive_string; //type: string
                        Value is_wave_frequency_progressive_valid; //type: boolean
                        Value wavelength_progressive; //type: uint32
                        Value wave_band; //type: uint32
                        Value wave_channel; //type: uint32
                        Value wave_frequency; //type: uint32
                        Value is_wave_frequency_valid; //type: boolean
                        Value wave_channel_owner; //type: DwdmWaveChannelOwnerEnum
                        Value gmpls_set_wave_channel; //type: uint16
                        Value configured_wave_channel; //type: uint16
                        Value default_wave_channel; //type: uint16
                        Value transmit_power; //type: int32
                        Value transmit_power_threshold; //type: int32
                        Value laser_current_bias; //type: int32
                        Value laser_current_bias_threshold; //type: int32
                        Value receive_power; //type: int32
                        Value is_rx_los_threshold_supported; //type: boolean
                        Value rx_los_threshold; //type: int32
                        Value transmit_power_min; //type: int32
                        Value transmit_power_max; //type: int32
                        Value transmit_power_avg; //type: int32
                        Value receive_power_min; //type: int32
                        Value receive_power_max; //type: int32
                        Value receive_power_avg; //type: int32
                        Value laser_bias_current_min; //type: int32
                        Value laser_bias_current_max; //type: int32
                        Value laser_bias_current_avg; //type: int32
                        Value chromatic_dispersion; //type: int32
                        Value differential_group_delay; //type: int32
                        Value polarization_mode_dispersion; //type: int32
                        Value signal_to_noise_ratio; //type: int32
                        Value polarization_dependent_loss; //type: int32
                        Value polarization_change_rate; //type: uint32
                        Value phase_noise; //type: uint32
                        Value output_power_fail; //type: uint32
                        Value input_power_fail; //type: uint32


                        class DwdmWaveChannelOwnerEnum;


                }; // Dwdm::Ports::Port::Info::OpticsInfo


                class TdcInfo : public Entity
                {
                    public:
                        TdcInfo();
                        ~TdcInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value tdc_valid; //type: boolean
                        Value major_alarm; //type: boolean
                        Value operation_mode; //type: boolean
                        Value tdc_status; //type: boolean
                        Value dispersion_offset; //type: int32
                        Value reroute_ber; //type: int32
                        Value is_reroute_control_enabled; //type: boolean




                }; // Dwdm::Ports::Port::Info::TdcInfo


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
                        ValueList network_srlg; //type: list of  uint32




                }; // Dwdm::Ports::Port::Info::NetworkSrlgInfo


                class Proactive : public Entity
                {
                    public:
                        Proactive();
                        ~Proactive();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value proactive_feature; //type: boolean
                        Value proactive_mode; //type: G709PpfsmModeEnum
                        Value proactive_fsm_state; //type: G709PpfsmStateEnum
                        Value proactive_fsm_if_state; //type: G709PpintfStateEnum
                        Value tas_state; //type: DwdmtasStateEnum
                        Value trig_thresh_coeff; //type: uint8
                        Value trig_thresh_power; //type: uint8
                        Value rvrt_thresh_coeff; //type: uint8
                        Value rvrt_thresh_power; //type: uint8
                        Value default_trig_thresh_coeff; //type: uint8
                        Value default_trig_thresh_power; //type: uint8
                        Value default_rvrt_thresh_coeff; //type: uint8
                        Value default_rvrt_thresh_power; //type: uint8
                        Value trig_samples; //type: uint8
                        Value rvrt_samples; //type: uint8
                        Value trigger_window; //type: uint32
                        Value revert_window; //type: uint32
                        Value protection_trigger; //type: boolean
                        Value interface_trigger; //type: boolean
                        Value tx_aps; //type: uint8
                        Value tx_aps_descr; //type: G709ApsByteEnum
                        Value rx_aps; //type: uint8
                        Value rx_aps_descr; //type: G709ApsByteEnum
                        Value alarm_state; //type: boolean
                        Value trig_ec_cnt; //type: uint32
                        Value rvrt_ec_cnt; //type: uint32
                        Value prefec_thresh_crossed; //type: boolean


                        class G709PpintfStateEnum;
                        class G709PpfsmStateEnum;
                        class G709PpfsmModeEnum;
                        class G709ApsByteEnum;
                        class DwdmtasStateEnum;
                        class G709ApsByteEnum;


                }; // Dwdm::Ports::Port::Info::Proactive


                class SignalLog : public Entity
                {
                    public:
                        SignalLog();
                        ~SignalLog();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_log_enabled; //type: boolean
                        Value log_filename; //type: string




                }; // Dwdm::Ports::Port::Info::SignalLog


                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info> g709_info;
                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::NetworkSrlgInfo> network_srlg_info;
                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::OpticsInfo> optics_info;
                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::Proactive> proactive;
                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::SignalLog> signal_log;
                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::TdcInfo> tdc_info;
                    class DwdmControllerStateEnum;
                    class DwdmtasStateEnum;


            }; // Dwdm::Ports::Port::Info


                std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info> info;
                std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Optics> optics;
                std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs> prbs;


        }; // Dwdm::Ports::Port


            std::vector<std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port> > port;


    }; // Dwdm::Ports


        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports> ports;


}; // Dwdm

class Vtxp : public Entity
{
    public:
        Vtxp();
        ~Vtxp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class DwdmVtxp : public Entity
    {
        public:
            DwdmVtxp();
            ~DwdmVtxp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PortVtxps : public Entity
        {
            public:
                PortVtxps();
                ~PortVtxps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class PortVtxp : public Entity
            {
                public:
                    PortVtxp();
                    ~PortVtxp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class Info : public Entity
                {
                    public:
                        Info();
                        ~Info();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vtxp_enable; //type: boolean




                }; // Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info


                    std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info> info;


            }; // Vtxp::DwdmVtxp::PortVtxps::PortVtxp


                std::vector<std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp::PortVtxps::PortVtxp> > port_vtxp;


        }; // Vtxp::DwdmVtxp::PortVtxps


            std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp::PortVtxps> port_vtxps;


    }; // Vtxp::DwdmVtxp


        std::unique_ptr<Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp> dwdm_vtxp;


}; // Vtxp


class G709PpintfStateEnum : public Enum
{
    public:
        static const Enum::Value pp_intf_up;
        static const Enum::Value pp_intf_failing;
        static const Enum::Value pp_intf_down;

};

class G709PpfsmModeEnum : public Enum
{
    public:
        static const Enum::Value pp_disable;
        static const Enum::Value pp_default_mode;
        static const Enum::Value pp_graceful_mode;

};

class DwdmControllerStateEnum : public Enum
{
    public:
        static const Enum::Value dwdm_ui_state_up;
        static const Enum::Value dwdm_ui_state_down;
        static const Enum::Value dwdm_ui_state_admin_down;

};

class DwdmtasStateEnum : public Enum
{
    public:
        static const Enum::Value tas_oos;
        static const Enum::Value tas_is;
        static const Enum::Value tas_oos_mt;
        static const Enum::Value tas_is_cfg;

};

class G709PrbsModeEnum : public Enum
{
    public:
        static const Enum::Value mode_source;
        static const Enum::Value mode_sink;
        static const Enum::Value mode_source_sink;
        static const Enum::Value mode_invalid;

};

class G709PpfsmStateEnum : public Enum
{
    public:
        static const Enum::Value in_active;
        static const Enum::Value disabled;
        static const Enum::Value normal_state;
        static const Enum::Value local_failing;
        static const Enum::Value remote_failing;
        static const Enum::Value main_t_failing;
        static const Enum::Value regen_failing;
        static const Enum::Value local_failed;
        static const Enum::Value remote_failed;
        static const Enum::Value main_t_failed;
        static const Enum::Value regen_failed;

};

class G709PrbsIntervalEnum : public Enum
{
    public:
        static const Enum::Value current_interval;
        static const Enum::Value previous_interval;
        static const Enum::Value previous_interval2;
        static const Enum::Value previous_interval3;
        static const Enum::Value previous_interval4;
        static const Enum::Value previous_interval5;
        static const Enum::Value previous_interval6;
        static const Enum::Value previous_interval7;
        static const Enum::Value previous_interval8;
        static const Enum::Value previous_interval9;
        static const Enum::Value previous_interval10;
        static const Enum::Value previous_interval11;
        static const Enum::Value previous_interval12;
        static const Enum::Value previous_interval13;
        static const Enum::Value previous_interval14;
        static const Enum::Value previous_interval15;
        static const Enum::Value previous_interval16;
        static const Enum::Value previous_interval17;
        static const Enum::Value previous_interval18;
        static const Enum::Value previous_interval19;
        static const Enum::Value previous_interval20;
        static const Enum::Value previous_interval21;
        static const Enum::Value previous_interval22;
        static const Enum::Value previous_interval23;
        static const Enum::Value previous_interval24;
        static const Enum::Value previous_interval25;
        static const Enum::Value previous_interval26;
        static const Enum::Value previous_interval27;
        static const Enum::Value previous_interval28;
        static const Enum::Value previous_interval29;
        static const Enum::Value previous_interval30;
        static const Enum::Value previous_interval31;
        static const Enum::Value previous_interval32;

};

class DwdmWaveChannelOwnerEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value configuration;
        static const Enum::Value gmpls;

};

class G709EfecModeEnum : public Enum
{
    public:
        static const Enum::Value g975_none;
        static const Enum::Value g975_1_i4;
        static const Enum::Value g975_1_i7;

};

class G709PrbsPatternEnum : public Enum
{
    public:
        static const Enum::Value pattern_none;
        static const Enum::Value pattern_null;
        static const Enum::Value pattern_pn11;
        static const Enum::Value pattern_pn23;
        static const Enum::Value pattern_pn31;

};

class G709ApsByteEnum : public Enum
{
    public:
        static const Enum::Value pp_no_protect;
        static const Enum::Value pp_no_request;
        static const Enum::Value pp_regen_degrade;
        static const Enum::Value pp_sig_degrade;
        static const Enum::Value pp_remote_main;
        static const Enum::Value pp_aps_unknown;

};


}
}

#endif /* _CISCO_IOS_XR_DWDM_UI_OPER_ */

