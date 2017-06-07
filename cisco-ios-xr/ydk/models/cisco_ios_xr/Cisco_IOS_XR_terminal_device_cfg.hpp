#ifndef _CISCO_IOS_XR_TERMINAL_DEVICE_CFG_
#define _CISCO_IOS_XR_TERMINAL_DEVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_terminal_device_cfg {

class LogicalChannels : public Entity
{
    public:
        LogicalChannels();
        ~LogicalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Channel; //type: LogicalChannels::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel> > channel;
        
}; // LogicalChannels


class LogicalChannels::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf channel_index; //type: int32
        YLeaf trib_protocol; //type: LogicalTribProtocolEnum
        YLeaf description; //type: string
        YLeaf ingress_client_port; //type: string
        YLeaf ingress_physical_channel; //type: uint32
        YLeaf admin_state; //type: LogicalAdminStateEnum
        YLeaf loopback_mode; //type: LogicalLoopbackModeEnum
        YLeaf logical_channel_type; //type: LogicalProtocolEnum
        YLeaf rate_class; //type: LogicalTribRateEnum
        class LogicalChannelAssignments; //type: LogicalChannels::Channel::LogicalChannelAssignments
        class Otn; //type: LogicalChannels::Channel::Otn

        std::shared_ptr<Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel::LogicalChannelAssignments> logical_channel_assignments;
        std::shared_ptr<Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel::Otn> otn;
        
}; // LogicalChannels::Channel


class LogicalChannels::Channel::LogicalChannelAssignments : public Entity
{
    public:
        LogicalChannelAssignments();
        ~LogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogicalChannelAssignment; //type: LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_cfg::LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment> > logical_channel_assignment;
        
}; // LogicalChannels::Channel::LogicalChannelAssignments


class LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment : public Entity
{
    public:
        LogicalChannelAssignment();
        ~LogicalChannelAssignment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf assignment_index; //type: int32
        YLeaf description; //type: string
        YLeaf logical_channel_id; //type: int32
        YLeaf assignment_type; //type: LogicalChannelAssignmentEnum
        YLeaf allocation; //type: int32
        YLeaf optical_channel_id; //type: string

}; // LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment


class LogicalChannels::Channel::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tti_msg_auto; //type: LogicalChannelOtnTtiAutoEnum
        YLeaf tti_msg_expected; //type: string
        YLeaf tti_msg_transmit; //type: string

}; // LogicalChannels::Channel::Otn

class OpticalChannels : public Entity
{
    public:
        OpticalChannels();
        ~OpticalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class OpticalChannel; //type: OpticalChannels::OpticalChannel

        std::vector<std::shared_ptr<Cisco_IOS_XR_terminal_device_cfg::OpticalChannels::OpticalChannel> > optical_channel;
        
}; // OpticalChannels


class OpticalChannels::OpticalChannel : public Entity
{
    public:
        OpticalChannel();
        ~OpticalChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ifname; //type: string
        YLeaf operational_mode; //type: uint32
        YLeaf line_port; //type: string

}; // OpticalChannels::OpticalChannel

class LogicalTribRateEnum : public Enum
{
    public:
        static const Enum::YLeaf trib_rate1g;
        static const Enum::YLeaf trib_rate2_5g;
        static const Enum::YLeaf trib_rate10g;
        static const Enum::YLeaf trib_rate40g;
        static const Enum::YLeaf trib_rate100g;

};

class LogicalLoopbackModeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf facility;
        static const Enum::YLeaf terminal;

};

class LogicalChannelOtnTtiAutoEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class LogicalAdminStateEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf maintenance;

};

class LogicalChannelAssignmentEnum : public Enum
{
    public:
        static const Enum::YLeaf type_logical_channel;
        static const Enum::YLeaf type_optical_channel;

};

class LogicalTribProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf trib_proto_type1ge;
        static const Enum::YLeaf trib_proto_type_oc48;
        static const Enum::YLeaf trib_proto_type_stm16;
        static const Enum::YLeaf trib_proto_type10gelan;
        static const Enum::YLeaf trib_proto_type10gewan;
        static const Enum::YLeaf trib_proto_type_oc192;
        static const Enum::YLeaf trib_proto_type_stm64;
        static const Enum::YLeaf trib_proto_type_otu2;
        static const Enum::YLeaf trib_proto_type_otu2e;
        static const Enum::YLeaf trib_proto_type_otu1e;
        static const Enum::YLeaf trib_proto_type_odu2;
        static const Enum::YLeaf trib_proto_type_odu2e;
        static const Enum::YLeaf trib_proto_type40ge;
        static const Enum::YLeaf trib_proto_type_oc768;
        static const Enum::YLeaf trib_proto_type_stm256;
        static const Enum::YLeaf trib_proto_type_otu3;
        static const Enum::YLeaf trib_proto_type_odu3;
        static const Enum::YLeaf trib_proto_type100ge;
        static const Enum::YLeaf trib_proto_type100g_mlg;
        static const Enum::YLeaf trib_proto_type_otu4;
        static const Enum::YLeaf trib_proto_type_otu_cn;
        static const Enum::YLeaf trib_proto_type_odu4;

};

class LogicalProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf type_ethernet;
        static const Enum::YLeaf type_otn;

};


}
}

#endif /* _CISCO_IOS_XR_TERMINAL_DEVICE_CFG_ */

