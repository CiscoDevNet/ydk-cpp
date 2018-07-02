#ifndef _CISCO_IOS_XR_DWDM_UI_OPER_
#define _CISCO_IOS_XR_DWDM_UI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dwdm_ui_oper {

class Dwdm : public ydk::Entity
{
    public:
        Dwdm();
        ~Dwdm();

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

        class Ports; //type: Dwdm::Ports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports> ports;
        
}; // Dwdm


class Dwdm::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

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

        class Port; //type: Dwdm::Ports::Port

        ydk::YList port;
        
}; // Dwdm::Ports


class Dwdm::Ports::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        ydk::YLeaf name; //type: string
        class Prbs; //type: Dwdm::Ports::Port::Prbs
        class Optics; //type: Dwdm::Ports::Port::Optics
        class Info; //type: Dwdm::Ports::Port::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs> prbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Optics> optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info> info;
        
}; // Dwdm::Ports::Port


class Dwdm::Ports::Port::Prbs : public ydk::Entity
{
    public:
        Prbs();
        ~Prbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TwentyFourHoursBucket; //type: Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket
        class FifteenMinutesBucket; //type: Dwdm::Ports::Port::Prbs::FifteenMinutesBucket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket> twenty_four_hours_bucket;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::FifteenMinutesBucket> fifteen_minutes_bucket;
        
}; // Dwdm::Ports::Port::Prbs


class Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket : public ydk::Entity
{
    public:
        TwentyFourHoursBucket();
        ~TwentyFourHoursBucket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TwentyFourHoursStatistics; //type: Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics> twenty_four_hours_statistics;
        
}; // Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket


class Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics : public ydk::Entity
{
    public:
        TwentyFourHoursStatistics();
        ~TwentyFourHoursStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_prbs_enabled; //type: boolean
        ydk::YLeaf prbs_config_mode; //type: G709prbsMode
        class PrbsEntry; //type: Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry

        ydk::YList prbs_entry;
        
}; // Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics


class Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry : public ydk::Entity
{
    public:
        PrbsEntry();
        ~PrbsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval_index; //type: G709prbsInterval
        ydk::YLeaf configured_pattern; //type: G709prbsPattern
        ydk::YLeaf start_at; //type: string
        ydk::YLeaf stop_at; //type: string
        ydk::YLeaf received_pattern; //type: G709prbsPattern
        ydk::YLeaf bit_error_count; //type: uint64
        ydk::YLeaf found_count; //type: uint64
        ydk::YLeaf lost_count; //type: uint64
        ydk::YLeaf found_at; //type: string
        ydk::YLeaf lost_at; //type: string

}; // Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry


class Dwdm::Ports::Port::Prbs::FifteenMinutesBucket : public ydk::Entity
{
    public:
        FifteenMinutesBucket();
        ~FifteenMinutesBucket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FifteenMinutesStatistics; //type: Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics> fifteen_minutes_statistics;
        
}; // Dwdm::Ports::Port::Prbs::FifteenMinutesBucket


class Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics : public ydk::Entity
{
    public:
        FifteenMinutesStatistics();
        ~FifteenMinutesStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_prbs_enabled; //type: boolean
        ydk::YLeaf prbs_config_mode; //type: G709prbsMode
        class PrbsEntry; //type: Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry

        ydk::YList prbs_entry;
        
}; // Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics


class Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry : public ydk::Entity
{
    public:
        PrbsEntry();
        ~PrbsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval_index; //type: G709prbsInterval
        ydk::YLeaf configured_pattern; //type: G709prbsPattern
        ydk::YLeaf start_at; //type: string
        ydk::YLeaf stop_at; //type: string
        ydk::YLeaf received_pattern; //type: G709prbsPattern
        ydk::YLeaf bit_error_count; //type: uint64
        ydk::YLeaf found_count; //type: uint64
        ydk::YLeaf lost_count; //type: uint64
        ydk::YLeaf found_at; //type: string
        ydk::YLeaf lost_at; //type: string

}; // Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry


class Dwdm::Ports::Port::Optics : public ydk::Entity
{
    public:
        Optics();
        ~Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WaveInfo; //type: Dwdm::Ports::Port::Optics::WaveInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Optics::WaveInfo> wave_info;
        
}; // Dwdm::Ports::Port::Optics


class Dwdm::Ports::Port::Optics::WaveInfo : public ydk::Entity
{
    public:
        WaveInfo();
        ~WaveInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wave_band; //type: uint32
        ydk::YLeaf wave_channel_min; //type: uint32
        ydk::YLeaf wave_channel_max; //type: uint32

}; // Dwdm::Ports::Port::Optics::WaveInfo


class Dwdm::Ports::Port::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf controller_state; //type: DwdmControllerState
        ydk::YLeaf transport_admin_state; //type: DwdmtasState
        ydk::YLeaf slice_state; //type: boolean
        class G709Info; //type: Dwdm::Ports::Port::Info::G709Info
        class OpticsInfo; //type: Dwdm::Ports::Port::Info::OpticsInfo
        class TdcInfo; //type: Dwdm::Ports::Port::Info::TdcInfo
        class NetworkSrlgInfo; //type: Dwdm::Ports::Port::Info::NetworkSrlgInfo
        class Proactive; //type: Dwdm::Ports::Port::Info::Proactive
        class SignalLog; //type: Dwdm::Ports::Port::Info::SignalLog

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info> g709_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::OpticsInfo> optics_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::TdcInfo> tdc_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::NetworkSrlgInfo> network_srlg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::Proactive> proactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::SignalLog> signal_log;
        
}; // Dwdm::Ports::Port::Info


class Dwdm::Ports::Port::Info::G709Info : public ydk::Entity
{
    public:
        G709Info();
        ~G709Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_g709_enabled; //type: boolean
        ydk::YLeaf is_fec_mode_default; //type: boolean
        ydk::YLeaf fec_mode; //type: int32
        ydk::YLeaf remote_fec_mode; //type: int32
        ydk::YLeaf efec_mode; //type: G709efecMode
        ydk::YLeaf loopback_mode; //type: int32
        ydk::YLeaf ec; //type: uint64
        ydk::YLeaf ec_accum; //type: uint64
        ydk::YLeaf uc; //type: uint64
        ydk::YLeaf fec_ber; //type: uint64
        ydk::YLeaf fec_ber_man; //type: int32
        ydk::YLeaf q; //type: uint64
        ydk::YLeaf q_margin; //type: uint64
        ydk::YLeaf fe_cstr; //type: string
        ydk::YLeaf qstr; //type: string
        ydk::YLeaf qmargin_str; //type: string
        ydk::YLeaf network_port_id; //type: string
        ydk::YLeaf network_conn_id; //type: string
        ydk::YLeaf is_prbs_enabled; //type: boolean
        ydk::YLeaf g709_prbs_mode; //type: G709prbsMode
        ydk::YLeaf g709_prbs_pattern; //type: G709prbsPattern
        ydk::YLeaf prbs_time_stamp; //type: uint64
        class FecMismatch; //type: Dwdm::Ports::Port::Info::G709Info::FecMismatch
        class EcTca; //type: Dwdm::Ports::Port::Info::G709Info::EcTca
        class UcTca; //type: Dwdm::Ports::Port::Info::G709Info::UcTca
        class OtuInfo; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo
        class OduInfo; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::FecMismatch> fec_mismatch;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::EcTca> ec_tca;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::UcTca> uc_tca;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo> otu_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo> odu_info;
        
}; // Dwdm::Ports::Port::Info::G709Info


class Dwdm::Ports::Port::Info::G709Info::FecMismatch : public ydk::Entity
{
    public:
        FecMismatch();
        ~FecMismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::FecMismatch


class Dwdm::Ports::Port::Info::G709Info::EcTca : public ydk::Entity
{
    public:
        EcTca();
        ~EcTca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::EcTca


class Dwdm::Ports::Port::Info::G709Info::UcTca : public ydk::Entity
{
    public:
        UcTca();
        ~UcTca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::UcTca


class Dwdm::Ports::Port::Info::G709Info::OtuInfo : public ydk::Entity
{
    public:
        OtuInfo();
        ~OtuInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bei; //type: uint64
        ydk::YLeaf bip; //type: uint64
        class Los; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los
        class Lof; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof
        class Lom; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom
        class Oof; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof
        class Oom; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom
        class Ais; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais
        class Iae; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae
        class Bdi; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi
        class Tim; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim
        class Eoc; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc
        class SfBer; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer
        class SdBer; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer
        class PrefecSfBer; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer
        class PrefecSdBer; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer
        class BbeTca; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca
        class EsTca; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca
        class Bbe; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe
        class Es; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es
        class Ses; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses
        class Uas; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas
        class Fc; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc
        class Bber; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber
        class Esr; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr
        class Sesr; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr
        class Tti; //type: Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los> los;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof> lof;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom> lom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof> oof;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom> oom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais> ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae> iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi> bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim> tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc> eoc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer> sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer> sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer> prefec_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer> prefec_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca> bbe_tca;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca> es_tca;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe> bbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es> es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses> ses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas> uas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc> fc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber> bber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr> esr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr> sesr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti> tti;
        
}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los : public ydk::Entity
{
    public:
        Los();
        ~Los();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof : public ydk::Entity
{
    public:
        Lof();
        ~Lof();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom : public ydk::Entity
{
    public:
        Lom();
        ~Lom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof : public ydk::Entity
{
    public:
        Oof();
        ~Oof();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom : public ydk::Entity
{
    public:
        Oom();
        ~Oom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae : public ydk::Entity
{
    public:
        Iae();
        ~Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi : public ydk::Entity
{
    public:
        Bdi();
        ~Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim : public ydk::Entity
{
    public:
        Tim();
        ~Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc : public ydk::Entity
{
    public:
        Eoc();
        ~Eoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer : public ydk::Entity
{
    public:
        SfBer();
        ~SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer : public ydk::Entity
{
    public:
        SdBer();
        ~SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer : public ydk::Entity
{
    public:
        PrefecSfBer();
        ~PrefecSfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer : public ydk::Entity
{
    public:
        PrefecSdBer();
        ~PrefecSdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca : public ydk::Entity
{
    public:
        BbeTca();
        ~BbeTca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca : public ydk::Entity
{
    public:
        EsTca();
        ~EsTca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe : public ydk::Entity
{
    public:
        Bbe();
        ~Bbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es : public ydk::Entity
{
    public:
        Es();
        ~Es();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses : public ydk::Entity
{
    public:
        Ses();
        ~Ses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas : public ydk::Entity
{
    public:
        Uas();
        ~Uas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc : public ydk::Entity
{
    public:
        Fc();
        ~Fc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber : public ydk::Entity
{
    public:
        Bber();
        ~Bber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr : public ydk::Entity
{
    public:
        Esr();
        ~Esr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr : public ydk::Entity
{
    public:
        Sesr();
        ~Sesr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr


class Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti : public ydk::Entity
{
    public:
        Tti();
        ~Tti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_string_type; //type: uint32
        ydk::YLeaf expected_string_type; //type: uint32
        ydk::YLeaf rx_string_type; //type: uint32
        ydk::YLeaf tx_tti; //type: string
        ydk::YLeaf tx_sapi0; //type: string
        ydk::YLeaf tx_sapi; //type: string
        ydk::YLeaf tx_sapi_range; //type: string
        ydk::YLeaf tx_dapi0; //type: string
        ydk::YLeaf tx_dapi; //type: string
        ydk::YLeaf tx_dapi_range; //type: string
        ydk::YLeaf tx_oper_spec; //type: string
        ydk::YLeaf tx_oper_spec_range; //type: string
        ydk::YLeaf rx_tti; //type: string
        ydk::YLeaf rx_sapi0; //type: string
        ydk::YLeaf rx_sapi; //type: string
        ydk::YLeaf rx_sapi_range; //type: string
        ydk::YLeaf rx_dapi0; //type: string
        ydk::YLeaf rx_dapi; //type: string
        ydk::YLeaf rx_dapi_range; //type: string
        ydk::YLeaf rx_oper_spec_range; //type: string
        ydk::YLeaf rx_oper_spec; //type: string
        ydk::YLeaf expected_tti; //type: string
        ydk::YLeaf expected_sapi0; //type: string
        ydk::YLeaf expected_sapi; //type: string
        ydk::YLeaf exp_sapi_range; //type: string
        ydk::YLeaf expected_dapi0; //type: string
        ydk::YLeaf expected_dapi; //type: string
        ydk::YLeaf exp_dapi_range; //type: string
        ydk::YLeaf expected_oper_spec; //type: string
        ydk::YLeaf exp_oper_spec_range; //type: string

}; // Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti


class Dwdm::Ports::Port::Info::G709Info::OduInfo : public ydk::Entity
{
    public:
        OduInfo();
        ~OduInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bip; //type: uint64
        ydk::YLeaf bei; //type: uint64
        class Oci; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci
        class Ais; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais
        class Lck; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck
        class Bdi; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi
        class Eoc; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc
        class Ptim; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim
        class Tim; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim
        class SfBer; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer
        class SdBer; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer
        class BbeTca; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca
        class EsTca; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca
        class Bbe; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe
        class Es; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Es
        class Ses; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses
        class Uas; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas
        class Fc; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc
        class Bber; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber
        class Esr; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr
        class Sesr; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr
        class Tti; //type: Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci> oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais> ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck> lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi> bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc> eoc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim> ptim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim> tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer> sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer> sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca> bbe_tca;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca> es_tca;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe> bbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Es> es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses> ses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas> uas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc> fc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber> bber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr> esr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr> sesr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti> tti;
        
}; // Dwdm::Ports::Port::Info::G709Info::OduInfo


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci : public ydk::Entity
{
    public:
        Oci();
        ~Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck : public ydk::Entity
{
    public:
        Lck();
        ~Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi : public ydk::Entity
{
    public:
        Bdi();
        ~Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc : public ydk::Entity
{
    public:
        Eoc();
        ~Eoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim : public ydk::Entity
{
    public:
        Ptim();
        ~Ptim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim : public ydk::Entity
{
    public:
        Tim();
        ~Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim


class Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer : public ydk::Entity
{
    public:
        SfBer();
        ~SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer


class Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer : public ydk::Entity
{
    public:
        SdBer();
        ~SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer


class Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca : public ydk::Entity
{
    public:
        BbeTca();
        ~BbeTca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca


class Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca : public ydk::Entity
{
    public:
        EsTca();
        ~EsTca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf threshold; //type: int32
        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe : public ydk::Entity
{
    public:
        Bbe();
        ~Bbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Es : public ydk::Entity
{
    public:
        Es();
        ~Es();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Es


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses : public ydk::Entity
{
    public:
        Ses();
        ~Ses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas : public ydk::Entity
{
    public:
        Uas();
        ~Uas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc : public ydk::Entity
{
    public:
        Fc();
        ~Fc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber : public ydk::Entity
{
    public:
        Bber();
        ~Bber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr : public ydk::Entity
{
    public:
        Esr();
        ~Esr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr : public ydk::Entity
{
    public:
        Sesr();
        ~Sesr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: uint64

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr


class Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti : public ydk::Entity
{
    public:
        Tti();
        ~Tti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_string_type; //type: uint32
        ydk::YLeaf expected_string_type; //type: uint32
        ydk::YLeaf rx_string_type; //type: uint32
        ydk::YLeaf tx_tti; //type: string
        ydk::YLeaf tx_sapi0; //type: string
        ydk::YLeaf tx_sapi; //type: string
        ydk::YLeaf tx_sapi_range; //type: string
        ydk::YLeaf tx_dapi0; //type: string
        ydk::YLeaf tx_dapi; //type: string
        ydk::YLeaf tx_dapi_range; //type: string
        ydk::YLeaf tx_oper_spec; //type: string
        ydk::YLeaf tx_oper_spec_range; //type: string
        ydk::YLeaf rx_tti; //type: string
        ydk::YLeaf rx_sapi0; //type: string
        ydk::YLeaf rx_sapi; //type: string
        ydk::YLeaf rx_sapi_range; //type: string
        ydk::YLeaf rx_dapi0; //type: string
        ydk::YLeaf rx_dapi; //type: string
        ydk::YLeaf rx_dapi_range; //type: string
        ydk::YLeaf rx_oper_spec_range; //type: string
        ydk::YLeaf rx_oper_spec; //type: string
        ydk::YLeaf expected_tti; //type: string
        ydk::YLeaf expected_sapi0; //type: string
        ydk::YLeaf expected_sapi; //type: string
        ydk::YLeaf exp_sapi_range; //type: string
        ydk::YLeaf expected_dapi0; //type: string
        ydk::YLeaf expected_dapi; //type: string
        ydk::YLeaf exp_dapi_range; //type: string
        ydk::YLeaf expected_oper_spec; //type: string
        ydk::YLeaf exp_oper_spec_range; //type: string

}; // Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti


class Dwdm::Ports::Port::Info::OpticsInfo : public ydk::Entity
{
    public:
        OpticsInfo();
        ~OpticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_type; //type: string
        ydk::YLeaf clock_source; //type: uint8
        ydk::YLeaf wave_frequency_progressive_string; //type: string
        ydk::YLeaf wavelength_progressive_string; //type: string
        ydk::YLeaf is_wave_frequency_progressive_valid; //type: boolean
        ydk::YLeaf wavelength_progressive; //type: uint32
        ydk::YLeaf wave_band; //type: uint32
        ydk::YLeaf wave_channel; //type: uint32
        ydk::YLeaf wave_frequency; //type: uint32
        ydk::YLeaf is_wave_frequency_valid; //type: boolean
        ydk::YLeaf wave_channel_owner; //type: DwdmWaveChannelOwner
        ydk::YLeaf gmpls_set_wave_channel; //type: uint16
        ydk::YLeaf configured_wave_channel; //type: uint16
        ydk::YLeaf default_wave_channel; //type: uint16
        ydk::YLeaf transmit_power; //type: int32
        ydk::YLeaf transmit_power_threshold; //type: int32
        ydk::YLeaf laser_current_bias; //type: int32
        ydk::YLeaf laser_current_bias_threshold; //type: int32
        ydk::YLeaf receive_power; //type: int32
        ydk::YLeaf is_rx_los_threshold_supported; //type: boolean
        ydk::YLeaf rx_los_threshold; //type: int32
        ydk::YLeaf transmit_power_min; //type: int32
        ydk::YLeaf transmit_power_max; //type: int32
        ydk::YLeaf transmit_power_avg; //type: int32
        ydk::YLeaf receive_power_min; //type: int32
        ydk::YLeaf receive_power_max; //type: int32
        ydk::YLeaf receive_power_avg; //type: int32
        ydk::YLeaf laser_bias_current_min; //type: int32
        ydk::YLeaf laser_bias_current_max; //type: int32
        ydk::YLeaf laser_bias_current_avg; //type: int32
        ydk::YLeaf chromatic_dispersion; //type: int32
        ydk::YLeaf differential_group_delay; //type: int32
        ydk::YLeaf polarization_mode_dispersion; //type: int32
        ydk::YLeaf signal_to_noise_ratio; //type: int32
        ydk::YLeaf polarization_dependent_loss; //type: int32
        ydk::YLeaf polarization_change_rate; //type: uint32
        ydk::YLeaf phase_noise; //type: uint32
        ydk::YLeaf output_power_fail; //type: uint32
        ydk::YLeaf input_power_fail; //type: uint32

}; // Dwdm::Ports::Port::Info::OpticsInfo


class Dwdm::Ports::Port::Info::TdcInfo : public ydk::Entity
{
    public:
        TdcInfo();
        ~TdcInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdc_valid; //type: boolean
        ydk::YLeaf major_alarm; //type: boolean
        ydk::YLeaf operation_mode; //type: boolean
        ydk::YLeaf tdc_status; //type: boolean
        ydk::YLeaf dispersion_offset; //type: int32
        ydk::YLeaf reroute_ber; //type: int32
        ydk::YLeaf is_reroute_control_enabled; //type: boolean

}; // Dwdm::Ports::Port::Info::TdcInfo


class Dwdm::Ports::Port::Info::NetworkSrlgInfo : public ydk::Entity
{
    public:
        NetworkSrlgInfo();
        ~NetworkSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList network_srlg; //type: list of  uint32

}; // Dwdm::Ports::Port::Info::NetworkSrlgInfo


class Dwdm::Ports::Port::Info::Proactive : public ydk::Entity
{
    public:
        Proactive();
        ~Proactive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proactive_feature; //type: boolean
        ydk::YLeaf proactive_mode; //type: G709ppfsmMode
        ydk::YLeaf proactive_fsm_state; //type: G709ppfsmState
        ydk::YLeaf proactive_fsm_if_state; //type: G709ppintfState
        ydk::YLeaf tas_state; //type: DwdmtasState
        ydk::YLeaf trig_thresh_coeff; //type: uint8
        ydk::YLeaf trig_thresh_power; //type: uint8
        ydk::YLeaf rvrt_thresh_coeff; //type: uint8
        ydk::YLeaf rvrt_thresh_power; //type: uint8
        ydk::YLeaf default_trig_thresh_coeff; //type: uint8
        ydk::YLeaf default_trig_thresh_power; //type: uint8
        ydk::YLeaf default_rvrt_thresh_coeff; //type: uint8
        ydk::YLeaf default_rvrt_thresh_power; //type: uint8
        ydk::YLeaf trig_samples; //type: uint8
        ydk::YLeaf rvrt_samples; //type: uint8
        ydk::YLeaf trigger_window; //type: uint32
        ydk::YLeaf revert_window; //type: uint32
        ydk::YLeaf protection_trigger; //type: boolean
        ydk::YLeaf interface_trigger; //type: boolean
        ydk::YLeaf tx_aps; //type: uint8
        ydk::YLeaf tx_aps_descr; //type: G709apsByte
        ydk::YLeaf rx_aps; //type: uint8
        ydk::YLeaf rx_aps_descr; //type: G709apsByte
        ydk::YLeaf alarm_state; //type: boolean
        ydk::YLeaf trig_ec_cnt; //type: uint32
        ydk::YLeaf rvrt_ec_cnt; //type: uint32
        ydk::YLeaf prefec_thresh_crossed; //type: boolean

}; // Dwdm::Ports::Port::Info::Proactive


class Dwdm::Ports::Port::Info::SignalLog : public ydk::Entity
{
    public:
        SignalLog();
        ~SignalLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_log_enabled; //type: boolean
        ydk::YLeaf log_filename; //type: string

}; // Dwdm::Ports::Port::Info::SignalLog

class Vtxp : public ydk::Entity
{
    public:
        Vtxp();
        ~Vtxp();

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

        class DwdmVtxp; //type: Vtxp::DwdmVtxp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp> dwdm_vtxp;
        
}; // Vtxp


class Vtxp::DwdmVtxp : public ydk::Entity
{
    public:
        DwdmVtxp();
        ~DwdmVtxp();

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

        class PortVtxps; //type: Vtxp::DwdmVtxp::PortVtxps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp::PortVtxps> port_vtxps;
        
}; // Vtxp::DwdmVtxp


class Vtxp::DwdmVtxp::PortVtxps : public ydk::Entity
{
    public:
        PortVtxps();
        ~PortVtxps();

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

        class PortVtxp; //type: Vtxp::DwdmVtxp::PortVtxps::PortVtxp

        ydk::YList port_vtxp;
        
}; // Vtxp::DwdmVtxp::PortVtxps


class Vtxp::DwdmVtxp::PortVtxps::PortVtxp : public ydk::Entity
{
    public:
        PortVtxp();
        ~PortVtxp();

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

        ydk::YLeaf name; //type: string
        class Info; //type: Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dwdm_ui_oper::Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info> info;
        
}; // Vtxp::DwdmVtxp::PortVtxps::PortVtxp


class Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vtxp_enable; //type: boolean

}; // Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info

class G709ppintfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pp_intf_up;
        static const ydk::Enum::YLeaf pp_intf_failing;
        static const ydk::Enum::YLeaf pp_intf_down;

};

class G709ppfsmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pp_disable;
        static const ydk::Enum::YLeaf pp_default_mode;
        static const ydk::Enum::YLeaf pp_graceful_mode;

};

class DwdmControllerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dwdm_ui_state_up;
        static const ydk::Enum::YLeaf dwdm_ui_state_down;
        static const ydk::Enum::YLeaf dwdm_ui_state_admin_down;

};

class DwdmtasState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tas_oos;
        static const ydk::Enum::YLeaf tas_is;
        static const ydk::Enum::YLeaf tas_oos_mt;
        static const ydk::Enum::YLeaf tas_is_cfg;

};

class G709prbsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mode_source;
        static const ydk::Enum::YLeaf mode_sink;
        static const ydk::Enum::YLeaf mode_source_sink;
        static const ydk::Enum::YLeaf mode_invalid;

};

class G709ppfsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in_active;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf normal_state;
        static const ydk::Enum::YLeaf local_failing;
        static const ydk::Enum::YLeaf remote_failing;
        static const ydk::Enum::YLeaf main_t_failing;
        static const ydk::Enum::YLeaf regen_failing;
        static const ydk::Enum::YLeaf local_failed;
        static const ydk::Enum::YLeaf remote_failed;
        static const ydk::Enum::YLeaf main_t_failed;
        static const ydk::Enum::YLeaf regen_failed;

};

class G709prbsInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf current_interval;
        static const ydk::Enum::YLeaf previous_interval;
        static const ydk::Enum::YLeaf previous_interval2;
        static const ydk::Enum::YLeaf previous_interval3;
        static const ydk::Enum::YLeaf previous_interval4;
        static const ydk::Enum::YLeaf previous_interval5;
        static const ydk::Enum::YLeaf previous_interval6;
        static const ydk::Enum::YLeaf previous_interval7;
        static const ydk::Enum::YLeaf previous_interval8;
        static const ydk::Enum::YLeaf previous_interval9;
        static const ydk::Enum::YLeaf previous_interval10;
        static const ydk::Enum::YLeaf previous_interval11;
        static const ydk::Enum::YLeaf previous_interval12;
        static const ydk::Enum::YLeaf previous_interval13;
        static const ydk::Enum::YLeaf previous_interval14;
        static const ydk::Enum::YLeaf previous_interval15;
        static const ydk::Enum::YLeaf previous_interval16;
        static const ydk::Enum::YLeaf previous_interval17;
        static const ydk::Enum::YLeaf previous_interval18;
        static const ydk::Enum::YLeaf previous_interval19;
        static const ydk::Enum::YLeaf previous_interval20;
        static const ydk::Enum::YLeaf previous_interval21;
        static const ydk::Enum::YLeaf previous_interval22;
        static const ydk::Enum::YLeaf previous_interval23;
        static const ydk::Enum::YLeaf previous_interval24;
        static const ydk::Enum::YLeaf previous_interval25;
        static const ydk::Enum::YLeaf previous_interval26;
        static const ydk::Enum::YLeaf previous_interval27;
        static const ydk::Enum::YLeaf previous_interval28;
        static const ydk::Enum::YLeaf previous_interval29;
        static const ydk::Enum::YLeaf previous_interval30;
        static const ydk::Enum::YLeaf previous_interval31;
        static const ydk::Enum::YLeaf previous_interval32;

};

class DwdmWaveChannelOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf configuration;
        static const ydk::Enum::YLeaf gmpls;

};

class G709efecMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g975_none;
        static const ydk::Enum::YLeaf g975_1_i4;
        static const ydk::Enum::YLeaf g975_1_i7;

};

class G709prbsPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pattern_none;
        static const ydk::Enum::YLeaf pattern_null;
        static const ydk::Enum::YLeaf pattern_pn11;
        static const ydk::Enum::YLeaf pattern_pn23;
        static const ydk::Enum::YLeaf pattern_pn31;

};

class G709apsByte : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pp_no_protect;
        static const ydk::Enum::YLeaf pp_no_request;
        static const ydk::Enum::YLeaf pp_regen_degrade;
        static const ydk::Enum::YLeaf pp_sig_degrade;
        static const ydk::Enum::YLeaf pp_remote_main;
        static const ydk::Enum::YLeaf pp_aps_unknown;

};


}
}

#endif /* _CISCO_IOS_XR_DWDM_UI_OPER_ */

