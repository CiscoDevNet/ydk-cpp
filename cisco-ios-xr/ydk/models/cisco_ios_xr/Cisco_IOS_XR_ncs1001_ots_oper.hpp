#ifndef _CISCO_IOS_XR_NCS1001_OTS_OPER_
#define _CISCO_IOS_XR_NCS1001_OTS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_ots_oper {

class HwModule : public ydk::Entity
{
    public:
        HwModule();
        ~HwModule();

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

        class AmplifierTrails; //type: HwModule::AmplifierTrails
        class ChannelsTrails; //type: HwModule::ChannelsTrails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_ots_oper::HwModule::AmplifierTrails> amplifier_trails;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_ots_oper::HwModule::ChannelsTrails> channels_trails;
        
}; // HwModule


class HwModule::AmplifierTrails : public ydk::Entity
{
    public:
        AmplifierTrails();
        ~AmplifierTrails();

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

        class AmplifierTrail; //type: HwModule::AmplifierTrails::AmplifierTrail

        ydk::YList amplifier_trail;
        
}; // HwModule::AmplifierTrails


class HwModule::AmplifierTrails::AmplifierTrail : public ydk::Entity
{
    public:
        AmplifierTrail();
        ~AmplifierTrail();

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

        ydk::YLeaf slot_id; //type: uint32
        class AmplifierTrailData; //type: HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData

        ydk::YList amplifier_trail_data;
        
}; // HwModule::AmplifierTrails::AmplifierTrail


class HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData : public ydk::Entity
{
    public:
        AmplifierTrailData();
        ~AmplifierTrailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf amplifier_trail_data_type; //type: OtsAmpliTrailData
        class AmpliTrailInfo; //type: HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo
        class ChannelTrailInfo; //type: HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo

        ydk::YList ampli_trail_info;
        ydk::YList channel_trail_info;
        
}; // HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData


class HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo : public ydk::Entity
{
    public:
        AmpliTrailInfo();
        ~AmpliTrailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eqpt_fail; //type: uint8
        ydk::YLeaf view; //type: Trailview
        ydk::YLeaf com_port_number; //type: uint8
        ydk::YLeaf com_port_name; //type: string
        ydk::YLeaf line_port_number; //type: uint8
        ydk::YLeaf line_port_name; //type: string
        ydk::YLeaf bst_in_rx_power; //type: int16
        ydk::YLeaf bst_in_rx_total_power; //type: int16
        ydk::YLeaf bst_in_rx_power_th_low; //type: int16
        ydk::YLeaf bst_out_tx_power; //type: int16
        ydk::YLeaf bst_out_tx_total_power; //type: int16
        ydk::YLeaf bst_out_tx_power_th_low; //type: int16
        ydk::YLeaf bst_working_mode; //type: uint16
        ydk::YLeaf bst_safety_mode; //type: uint16
        ydk::YLeaf bst_gain_range; //type: uint16
        ydk::YLeaf bst_osri; //type: uint16
        ydk::YLeaf bst_channel_power; //type: int16
        ydk::YLeaf bst_gain; //type: int16
        ydk::YLeaf bst_tilt; //type: int16
        ydk::YLeaf pre_in_rx_power; //type: int16
        ydk::YLeaf pre_in_rx_total_power; //type: int16
        ydk::YLeaf pre_in_rx_power_th_low; //type: int16
        ydk::YLeaf pre_out_tx_power; //type: int16
        ydk::YLeaf pre_out_tx_total_power; //type: int16
        ydk::YLeaf pre_out_tx_power_th_low; //type: int16
        ydk::YLeaf pre_working_mode; //type: uint16
        ydk::YLeaf pre_safety_mode; //type: uint16
        ydk::YLeaf pre_gain_range; //type: uint16
        ydk::YLeaf pre_osri; //type: uint16
        ydk::YLeaf pre_channel_power; //type: int16
        ydk::YLeaf pre_gain; //type: int16
        ydk::YLeaf pre_tilt; //type: int16

}; // HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo


class HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo : public ydk::Entity
{
    public:
        ChannelTrailInfo();
        ~ChannelTrailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eqpt_fail; //type: uint8
        ydk::YLeaf filter; //type: Chfilter
        ydk::YLeaf och_name; //type: string
        ydk::YLeaf wavelength; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf com_port_number; //type: uint8
        ydk::YLeaf com_port_name; //type: string
        ydk::YLeaf com_rx_power_th_low; //type: int16
        ydk::YLeaf line_port_number; //type: uint8
        ydk::YLeaf line_port_name; //type: string
        ydk::YLeaf line_rx_power_th_low; //type: int16
        ydk::YLeaf bst_in_rx_power; //type: int16
        ydk::YLeaf bst_out_tx_power; //type: int16
        ydk::YLeaf pre_in_rx_power; //type: int16
        ydk::YLeaf pre_out_tx_power; //type: int16

}; // HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo


class HwModule::ChannelsTrails : public ydk::Entity
{
    public:
        ChannelsTrails();
        ~ChannelsTrails();

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

        class ChannelsTrail; //type: HwModule::ChannelsTrails::ChannelsTrail

        ydk::YList channels_trail;
        
}; // HwModule::ChannelsTrails


class HwModule::ChannelsTrails::ChannelsTrail : public ydk::Entity
{
    public:
        ChannelsTrail();
        ~ChannelsTrail();

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

        ydk::YLeaf slot_id; //type: uint32
        class ChannelsTrailData; //type: HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData

        ydk::YList channels_trail_data;
        
}; // HwModule::ChannelsTrails::ChannelsTrail


class HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData : public ydk::Entity
{
    public:
        ChannelsTrailData();
        ~ChannelsTrailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channels_trail_data_type; //type: OtsChannelsTrailData
        class AmpliTrailInfo; //type: HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo
        class ChannelTrailInfo; //type: HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo

        ydk::YList ampli_trail_info;
        ydk::YList channel_trail_info;
        
}; // HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData


class HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo : public ydk::Entity
{
    public:
        AmpliTrailInfo();
        ~AmpliTrailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eqpt_fail; //type: uint8
        ydk::YLeaf view; //type: Trailview
        ydk::YLeaf com_port_number; //type: uint8
        ydk::YLeaf com_port_name; //type: string
        ydk::YLeaf line_port_number; //type: uint8
        ydk::YLeaf line_port_name; //type: string
        ydk::YLeaf bst_in_rx_power; //type: int16
        ydk::YLeaf bst_in_rx_total_power; //type: int16
        ydk::YLeaf bst_in_rx_power_th_low; //type: int16
        ydk::YLeaf bst_out_tx_power; //type: int16
        ydk::YLeaf bst_out_tx_total_power; //type: int16
        ydk::YLeaf bst_out_tx_power_th_low; //type: int16
        ydk::YLeaf bst_working_mode; //type: uint16
        ydk::YLeaf bst_safety_mode; //type: uint16
        ydk::YLeaf bst_gain_range; //type: uint16
        ydk::YLeaf bst_osri; //type: uint16
        ydk::YLeaf bst_channel_power; //type: int16
        ydk::YLeaf bst_gain; //type: int16
        ydk::YLeaf bst_tilt; //type: int16
        ydk::YLeaf pre_in_rx_power; //type: int16
        ydk::YLeaf pre_in_rx_total_power; //type: int16
        ydk::YLeaf pre_in_rx_power_th_low; //type: int16
        ydk::YLeaf pre_out_tx_power; //type: int16
        ydk::YLeaf pre_out_tx_total_power; //type: int16
        ydk::YLeaf pre_out_tx_power_th_low; //type: int16
        ydk::YLeaf pre_working_mode; //type: uint16
        ydk::YLeaf pre_safety_mode; //type: uint16
        ydk::YLeaf pre_gain_range; //type: uint16
        ydk::YLeaf pre_osri; //type: uint16
        ydk::YLeaf pre_channel_power; //type: int16
        ydk::YLeaf pre_gain; //type: int16
        ydk::YLeaf pre_tilt; //type: int16

}; // HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo


class HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo : public ydk::Entity
{
    public:
        ChannelTrailInfo();
        ~ChannelTrailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eqpt_fail; //type: uint8
        ydk::YLeaf filter; //type: Chfilter
        ydk::YLeaf och_name; //type: string
        ydk::YLeaf wavelength; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf com_port_number; //type: uint8
        ydk::YLeaf com_port_name; //type: string
        ydk::YLeaf com_rx_power_th_low; //type: int16
        ydk::YLeaf line_port_number; //type: uint8
        ydk::YLeaf line_port_name; //type: string
        ydk::YLeaf line_rx_power_th_low; //type: int16
        ydk::YLeaf bst_in_rx_power; //type: int16
        ydk::YLeaf bst_out_tx_power; //type: int16
        ydk::YLeaf pre_in_rx_power; //type: int16
        ydk::YLeaf pre_out_tx_power; //type: int16

}; // HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo

class OtsChannelsTrailData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf active;

};

class OtsAmpliTrailData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf bst;
        static const ydk::Enum::YLeaf pre;

};

class Trailview : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trail_view_all;
        static const ydk::Enum::YLeaf trail_view_bst;
        static const ydk::Enum::YLeaf trail_view_pre;

};

class Chfilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ch_filter_active;
        static const ydk::Enum::YLeaf ch_filter_all;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1001_OTS_OPER_ */

