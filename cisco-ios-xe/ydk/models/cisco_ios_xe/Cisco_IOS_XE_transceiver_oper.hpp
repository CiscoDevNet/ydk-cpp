#ifndef _CISCO_IOS_XE_TRANSCEIVER_OPER_
#define _CISCO_IOS_XE_TRANSCEIVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_transceiver_oper {

class TransceiverOperData : public ydk::Entity
{
    public:
        TransceiverOperData();
        ~TransceiverOperData();

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

        class Transceiver; //type: TransceiverOperData::Transceiver

        ydk::YList transceiver;
        
}; // TransceiverOperData


class TransceiverOperData::Transceiver : public ydk::Entity
{
    public:
        Transceiver();
        ~Transceiver();

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
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf present; //type: boolean
        ydk::YLeaf identifier; //type: string
        ydk::YLeaf connector; //type: string
        ydk::YLeaf ethernet_pmd; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf vendor_part; //type: string
        ydk::YLeaf vendor_rev; //type: string
        ydk::YLeaf serial_no; //type: string
        ydk::YLeaf fault_condition; //type: boolean
        ydk::YLeaf date; //type: string
        ydk::YLeaf sonet; //type: XcvrSonetCode
        ydk::YLeaf otn; //type: XcvrOtnCode
        ydk::YLeaf internal_temp; //type: decimal64
        class OutputPower; //type: TransceiverOperData::Transceiver::OutputPower
        class InputPower; //type: TransceiverOperData::Transceiver::InputPower
        class LaserBiasCurrent; //type: TransceiverOperData::Transceiver::LaserBiasCurrent
        class XcvrPhysicalChannel; //type: TransceiverOperData::Transceiver::XcvrPhysicalChannel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_transceiver_oper::TransceiverOperData::Transceiver::OutputPower> output_power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_transceiver_oper::TransceiverOperData::Transceiver::InputPower> input_power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_transceiver_oper::TransceiverOperData::Transceiver::LaserBiasCurrent> laser_bias_current;
        ydk::YList xcvr_physical_channel;
        
}; // TransceiverOperData::Transceiver


class TransceiverOperData::Transceiver::OutputPower : public ydk::Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64

}; // TransceiverOperData::Transceiver::OutputPower


class TransceiverOperData::Transceiver::InputPower : public ydk::Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64

}; // TransceiverOperData::Transceiver::InputPower


class TransceiverOperData::Transceiver::LaserBiasCurrent : public ydk::Entity
{
    public:
        LaserBiasCurrent();
        ~LaserBiasCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64

}; // TransceiverOperData::Transceiver::LaserBiasCurrent


class TransceiverOperData::Transceiver::XcvrPhysicalChannel : public ydk::Entity
{
    public:
        XcvrPhysicalChannel();
        ~XcvrPhysicalChannel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf tx_laser; //type: boolean
        ydk::YLeaf target_output_power; //type: decimal64
        ydk::YLeaf output_frequency; //type: uint64
        class OutputPower; //type: TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower
        class InputPower; //type: TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower
        class LaserBiasCurrent; //type: TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_transceiver_oper::TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower> output_power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_transceiver_oper::TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower> input_power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_transceiver_oper::TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent> laser_bias_current;
        
}; // TransceiverOperData::Transceiver::XcvrPhysicalChannel


class TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower : public ydk::Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64

}; // TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower


class TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower : public ydk::Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64

}; // TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower


class TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent : public ydk::Entity
{
    public:
        LaserBiasCurrent();
        ~LaserBiasCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64

}; // TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent

class XcvrSonetCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oc_48_short_reach;
        static const ydk::Enum::YLeaf oc_48_intermediate_reach;
        static const ydk::Enum::YLeaf oc_48_long_reach;
        static const ydk::Enum::YLeaf sonet_sr_compliant;
        static const ydk::Enum::YLeaf sonet_lr_compliant;
        static const ydk::Enum::YLeaf oc_192_short_reach;
        static const ydk::Enum::YLeaf escon_smf_1310_laser;
        static const ydk::Enum::YLeaf escon_mmf_1310_led;
        static const ydk::Enum::YLeaf unknown;

};

class XcvrOtnCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p1l1_2d1;
        static const ydk::Enum::YLeaf p1s1_2d2;
        static const ydk::Enum::YLeaf p1l1_2d2;
        static const ydk::Enum::YLeaf otn_undefined;

};


}
}

#endif /* _CISCO_IOS_XE_TRANSCEIVER_OPER_ */

