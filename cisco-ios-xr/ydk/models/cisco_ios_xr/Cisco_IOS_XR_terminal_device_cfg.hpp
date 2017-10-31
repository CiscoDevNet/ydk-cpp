#ifndef _CISCO_IOS_XR_TERMINAL_DEVICE_CFG_
#define _CISCO_IOS_XR_TERMINAL_DEVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_terminal_device_cfg {

class LogicalChannels : public ydk::Entity
{
    public:
        LogicalChannels();
        ~LogicalChannels();

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

        class Channel; //type: LogicalChannels::Channel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel> > channel;
        
}; // LogicalChannels


class LogicalChannels::Channel : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf channel_index; //type: int32
        ydk::YLeaf trib_protocol; //type: LogicalTribProtocol
        ydk::YLeaf description; //type: string
        ydk::YLeaf ingress_client_port; //type: string
        ydk::YLeaf ingress_physical_channel; //type: uint32
        ydk::YLeaf admin_state; //type: LogicalAdminState
        ydk::YLeaf loopback_mode; //type: LogicalLoopbackMode
        ydk::YLeaf logical_channel_type; //type: LogicalProtocol
        ydk::YLeaf rate_class; //type: LogicalTribRate
        class LogicalChannelAssignments; //type: LogicalChannels::Channel::LogicalChannelAssignments
        class Otn; //type: LogicalChannels::Channel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel::LogicalChannelAssignments> logical_channel_assignments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel::Otn> otn;
        
}; // LogicalChannels::Channel


class LogicalChannels::Channel::LogicalChannelAssignments : public ydk::Entity
{
    public:
        LogicalChannelAssignments();
        ~LogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogicalChannelAssignment; //type: LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment> > logical_channel_assignment;
        
}; // LogicalChannels::Channel::LogicalChannelAssignments


class LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment : public ydk::Entity
{
    public:
        LogicalChannelAssignment();
        ~LogicalChannelAssignment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf assignment_index; //type: int32
        ydk::YLeaf description; //type: string
        ydk::YLeaf logical_channel_id; //type: int32
        ydk::YLeaf assignment_type; //type: LogicalChannelAssignment
        ydk::YLeaf allocation; //type: int32
        ydk::YLeaf optical_channel_id; //type: string

}; // LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment


class LogicalChannels::Channel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tti_msg_auto; //type: LogicalChannelOtnTtiAuto
        ydk::YLeaf tti_msg_expected; //type: string
        ydk::YLeaf tti_msg_transmit; //type: string

}; // LogicalChannels::Channel::Otn

class OpticalChannels : public ydk::Entity
{
    public:
        OpticalChannels();
        ~OpticalChannels();

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

        class OpticalChannel; //type: OpticalChannels::OpticalChannel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_terminal_device_cfg::OpticalChannels::OpticalChannel> > optical_channel;
        
}; // OpticalChannels


class OpticalChannels::OpticalChannel : public ydk::Entity
{
    public:
        OpticalChannel();
        ~OpticalChannel();

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

        ydk::YLeaf ifname; //type: string
        ydk::YLeaf operational_mode; //type: uint32
        ydk::YLeaf line_port; //type: string

}; // OpticalChannels::OpticalChannel

class LogicalChannelOtnTtiAuto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class LogicalAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf maintenance;

};

class LogicalLoopbackMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf facility;
        static const ydk::Enum::YLeaf terminal;

};

class LogicalTribRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trib_rate1g;
        static const ydk::Enum::YLeaf trib_rate2_5g;
        static const ydk::Enum::YLeaf trib_rate10g;
        static const ydk::Enum::YLeaf trib_rate40g;
        static const ydk::Enum::YLeaf trib_rate100g;

};

class LogicalTribProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trib_proto_type1ge;
        static const ydk::Enum::YLeaf trib_proto_type_oc48;
        static const ydk::Enum::YLeaf trib_proto_type_stm16;
        static const ydk::Enum::YLeaf trib_proto_type10gelan;
        static const ydk::Enum::YLeaf trib_proto_type10gewan;
        static const ydk::Enum::YLeaf trib_proto_type_oc192;
        static const ydk::Enum::YLeaf trib_proto_type_stm64;
        static const ydk::Enum::YLeaf trib_proto_type_otu2;
        static const ydk::Enum::YLeaf trib_proto_type_otu2e;
        static const ydk::Enum::YLeaf trib_proto_type_otu1e;
        static const ydk::Enum::YLeaf trib_proto_type_odu2;
        static const ydk::Enum::YLeaf trib_proto_type_odu2e;
        static const ydk::Enum::YLeaf trib_proto_type40ge;
        static const ydk::Enum::YLeaf trib_proto_type_oc768;
        static const ydk::Enum::YLeaf trib_proto_type_stm256;
        static const ydk::Enum::YLeaf trib_proto_type_otu3;
        static const ydk::Enum::YLeaf trib_proto_type_odu3;
        static const ydk::Enum::YLeaf trib_proto_type100ge;
        static const ydk::Enum::YLeaf trib_proto_type100g_mlg;
        static const ydk::Enum::YLeaf trib_proto_type_otu4;
        static const ydk::Enum::YLeaf trib_proto_type_otu_cn;
        static const ydk::Enum::YLeaf trib_proto_type_odu4;

};

class LogicalChannelAssignment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type_logical_channel;
        static const ydk::Enum::YLeaf type_optical_channel;

};

class LogicalProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type_ethernet;
        static const ydk::Enum::YLeaf type_otn;

};


}
}

#endif /* _CISCO_IOS_XR_TERMINAL_DEVICE_CFG_ */

