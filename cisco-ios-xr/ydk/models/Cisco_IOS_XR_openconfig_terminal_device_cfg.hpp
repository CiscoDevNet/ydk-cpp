#ifndef _CISCO_IOS_XR_OPENCONFIG_TERMINAL_DEVICE_CFG_
#define _CISCO_IOS_XR_OPENCONFIG_TERMINAL_DEVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_openconfig_terminal_device_cfg {

class LogicalChannels : public Entity
{
    public:
        LogicalChannels();
        ~LogicalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
            Value channel_index; //type: int32
            Value trib_protocol; //type: LogicalTribProtocolEnum
            Value description; //type: string
            Value ingress_client_port; //type: string
            Value ingress_physical_channel; //type: int32
            Value admin_state; //type: LogicalAdminStateEnum
            Value loopback_mode; //type: LogicalLoopbackModeEnum
            Value logical_channel_type; //type: LogicalProtocolEnum
            Value rate_class; //type: LogicalTribRateEnum


        class LogicalChannelAssignments : public Entity
        {
            public:
                LogicalChannelAssignments();
                ~LogicalChannelAssignments();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LogicalChannelAssignment : public Entity
            {
                public:
                    LogicalChannelAssignment();
                    ~LogicalChannelAssignment();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value assignment_index; //type: int32
                    Value description; //type: string
                    Value logical_channel_id; //type: int32
                    Value assignment_type; //type: LogicalChannelAssignmentEnum
                    Value allocation; //type: int32
                    Value optical_channel_id; //type: string


                    class LogicalChannelAssignmentEnum;


            }; // LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment


                std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_cfg::LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment> > logical_channel_assignment;


        }; // LogicalChannels::Channel::LogicalChannelAssignments


        class Otn : public Entity
        {
            public:
                Otn();
                ~Otn();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value tti_msg_auto; //type: LogicalChannelOtnTtiAutoEnum
                Value tti_msg_expected; //type: string
                Value tti_msg_transmit; //type: string


                class LogicalChannelOtnTtiAutoEnum;


        }; // LogicalChannels::Channel::Otn


            std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_cfg::LogicalChannels::Channel::LogicalChannelAssignments> logical_channel_assignments;
            std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_cfg::LogicalChannels::Channel::Otn> otn;
            class LogicalAdminStateEnum;
            class LogicalProtocolEnum;
            class LogicalLoopbackModeEnum;
            class LogicalTribRateEnum;
            class LogicalTribProtocolEnum;


    }; // LogicalChannels::Channel


        std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_cfg::LogicalChannels::Channel> > channel;


}; // LogicalChannels

class OpticalChannels : public Entity
{
    public:
        OpticalChannels();
        ~OpticalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class OpticalChannel : public Entity
    {
        public:
            OpticalChannel();
            ~OpticalChannel();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value ifname; //type: string
            Value operational_mode; //type: uint32
            Value line_port; //type: string




    }; // OpticalChannels::OpticalChannel


        std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_cfg::OpticalChannels::OpticalChannel> > optical_channel;


}; // OpticalChannels


class LogicalTribRateEnum : public Enum
{
    public:
        static const Enum::Value trib_rate1g;
        static const Enum::Value trib_rate2_5g;
        static const Enum::Value trib_rate10g;
        static const Enum::Value trib_rate40g;
        static const Enum::Value trib_rate100g;

};

class LogicalLoopbackModeEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value facility;
        static const Enum::Value terminal;

};

class LogicalChannelOtnTtiAutoEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class LogicalAdminStateEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;
        static const Enum::Value maintenance;

};

class LogicalChannelAssignmentEnum : public Enum
{
    public:
        static const Enum::Value type_logical_channel;
        static const Enum::Value type_optical_channel;

};

class LogicalTribProtocolEnum : public Enum
{
    public:
        static const Enum::Value trib_proto_type1ge;
        static const Enum::Value trib_proto_type_oc48;
        static const Enum::Value trib_proto_type_stm16;
        static const Enum::Value trib_proto_type10gelan;
        static const Enum::Value trib_proto_type10gewan;
        static const Enum::Value trib_proto_type_oc192;
        static const Enum::Value trib_proto_type_stm64;
        static const Enum::Value trib_proto_type_otu2;
        static const Enum::Value trib_proto_type_otu2e;
        static const Enum::Value trib_proto_type_otu1e;
        static const Enum::Value trib_proto_type_odu2;
        static const Enum::Value trib_proto_type_odu2e;
        static const Enum::Value trib_proto_type40ge;
        static const Enum::Value trib_proto_type_oc768;
        static const Enum::Value trib_proto_type_stm256;
        static const Enum::Value trib_proto_type_otu3;
        static const Enum::Value trib_proto_type_odu3;
        static const Enum::Value trib_proto_type100ge;
        static const Enum::Value trib_proto_type100g_mlg;
        static const Enum::Value trib_proto_type_otu4;
        static const Enum::Value trib_proto_type_otu_cn;
        static const Enum::Value trib_proto_type_odu4;

};

class LogicalProtocolEnum : public Enum
{
    public:
        static const Enum::Value type_ethernet;
        static const Enum::Value type_otn;

};


}
}

#endif /* _CISCO_IOS_XR_OPENCONFIG_TERMINAL_DEVICE_CFG_ */

