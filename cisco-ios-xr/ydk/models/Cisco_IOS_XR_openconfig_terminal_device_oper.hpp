#ifndef _CISCO_IOS_XR_OPENCONFIG_TERMINAL_DEVICE_OPER_
#define _CISCO_IOS_XR_OPENCONFIG_TERMINAL_DEVICE_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_openconfig_terminal_device_oper {

class OpticalInterface : public Entity
{
    public:
        OpticalInterface();
        ~OpticalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class OpticalClientInterfaces : public Entity
    {
        public:
            OpticalClientInterfaces();
            ~OpticalClientInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class OpticalClientInterface : public Entity
        {
            public:
                OpticalClientInterface();
                ~OpticalClientInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class OpticalClientLogicalChannelAssignments : public Entity
            {
                public:
                    OpticalClientLogicalChannelAssignments();
                    ~OpticalClientLogicalChannelAssignments();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OpticalClientLogicalChannelAssignment : public Entity
                {
                    public:
                        OpticalClientLogicalChannelAssignment();
                        ~OpticalClientLogicalChannelAssignment();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value index_; //type: int32
                        Value is_logical_link; //type: boolean
                        Value logical_channel; //type: uint32
                        Value optical_channel; //type: string
                        Value allocation; //type: uint32




                }; // OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment


                    std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments::OpticalClientLogicalChannelAssignment> > optical_client_logical_channel_assignment;


            }; // OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments


                std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalClientInterfaces::OpticalClientInterface::OpticalClientLogicalChannelAssignments> optical_client_logical_channel_assignments;


        }; // OpticalInterface::OpticalClientInterfaces::OpticalClientInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalClientInterfaces::OpticalClientInterface> > optical_client_interface;


    }; // OpticalInterface::OpticalClientInterfaces


    class OperationalModes : public Entity
    {
        public:
            OperationalModes();
            ~OperationalModes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class OperationalMode : public Entity
        {
            public:
                OperationalMode();
                ~OperationalMode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value mode_id; //type: int32


            class OperationalModeAttributes : public Entity
            {
                public:
                    OperationalModeAttributes();
                    ~OperationalModeAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value description; //type: string
                    Value vendor_id; //type: string




            }; // OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes


                std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes> operational_mode_attributes;


        }; // OpticalInterface::OperationalModes::OperationalMode


            std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OperationalModes::OperationalMode> > operational_mode;


    }; // OpticalInterface::OperationalModes


    class OpticalLogicalInterfaces : public Entity
    {
        public:
            OpticalLogicalInterfaces();
            ~OpticalLogicalInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class OpticalLogicalInterface : public Entity
        {
            public:
                OpticalLogicalInterface();
                ~OpticalLogicalInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value index_; //type: int32


            class OpticalLogicalInterfaceAttr : public Entity
            {
                public:
                    OpticalLogicalInterfaceAttr();
                    ~OpticalLogicalInterfaceAttr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value trib_rate_class; //type: TribRateClassEnum
                    Value trib_protocol; //type: TribProtocolEnum
                    Value protocol_type; //type: LogicalProtocolEnum


                    class LogicalProtocolEnum;
                    class TribProtocolEnum;
                    class TribRateClassEnum;


            }; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr


            class OpticalLogicalInterfaceLogicalChannelAssignments : public Entity
            {
                public:
                    OpticalLogicalInterfaceLogicalChannelAssignments();
                    ~OpticalLogicalInterfaceLogicalChannelAssignments();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OpticalLogicalInterfaceLogicalChannelAssignment : public Entity
                {
                    public:
                        OpticalLogicalInterfaceLogicalChannelAssignment();
                        ~OpticalLogicalInterfaceLogicalChannelAssignment();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value index_; //type: int32
                        Value is_logical_link; //type: boolean
                        Value logical_channel; //type: uint32
                        Value optical_channel; //type: string
                        Value allocation; //type: uint32




                }; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment


                    std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment> > optical_logical_interface_logical_channel_assignment;


            }; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments


                std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr> optical_logical_interface_attr;
                std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments> optical_logical_interface_logical_channel_assignments;


        }; // OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface> > optical_logical_interface;


    }; // OpticalInterface::OpticalLogicalInterfaces


        std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OperationalModes> operational_modes;
        std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalClientInterfaces> optical_client_interfaces;
        std::unique_ptr<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface::OpticalLogicalInterfaces> optical_logical_interfaces;


}; // OpticalInterface


class LogicalProtocolEnum : public Enum
{
    public:
        static const Enum::Value proto_type_unknown;
        static const Enum::Value proto_type_ethernet;
        static const Enum::Value proto_type_otn;

};

class TribProtocolEnum : public Enum
{
    public:
        static const Enum::Value trib_proto_type_unknown;
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

class TribRateClassEnum : public Enum
{
    public:
        static const Enum::Value trib_rate1g;
        static const Enum::Value trib_rate25g;
        static const Enum::Value trib_rate10g;
        static const Enum::Value trib_rate40g;
        static const Enum::Value trib_rate100g;
        static const Enum::Value trib_rate_unknown;

};


}
}

#endif /* _CISCO_IOS_XR_OPENCONFIG_TERMINAL_DEVICE_OPER_ */

