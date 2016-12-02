#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_OPER_
#define _CISCO_IOS_XR_ETHERNET_SPAN_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_Ethernet_SPAN_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_oper {

class SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Global : public Entity
    {
        public:
            Global();
            ~Global();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Statistics : public Entity
        {
            public:
                Statistics();
                ~Statistics();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Statistic : public Entity
            {
                public:
                    Statistic();
                    ~Statistic();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value session; //type: string
                    Value interface; //type: string
                    Value rx_packets_mirrored; //type: uint64
                    Value rx_octets_mirrored; //type: uint64
                    Value tx_packets_mirrored; //type: uint64
                    Value tx_octets_mirrored; //type: uint64
                    Value packets_not_mirrored; //type: uint64
                    Value octets_not_mirrored; //type: uint64




            }; // SpanMonitorSession::Global::Statistics::Statistic


                std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::Statistics::Statistic> > statistic;


        }; // SpanMonitorSession::Global::Statistics


        class GlobalSessions : public Entity
        {
            public:
                GlobalSessions();
                ~GlobalSessions();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class GlobalSession : public Entity
            {
                public:
                    GlobalSession();
                    ~GlobalSession();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value session; //type: string
                    Value name; //type: string
                    Value session_class; //type: SessionClassEnum
                    Value id; //type: uint32
                    Value destination_error; //type: uint32
                    Value destination_interface_name; //type: string
                    Value destination_interface_handle; //type: string
                    Value interface_error; //type: uint32


                class DestinationData : public Entity
                {
                    public:
                        DestinationData();
                        ~DestinationData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value destination_class; //type: DestinationClassEnum
                        Value invalid_value; //type: uint32


                    class InterfaceData : public Entity
                    {
                        public:
                            InterfaceData();
                            ~InterfaceData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value interface_state; //type: ImStateEnumEnum


                            class ImStateEnumEnum;


                    }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData


                    class PseudowireData : public Entity
                    {
                        public:
                            PseudowireData();
                            ~PseudowireData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value pseudowire_name; //type: string
                            Value pseudowire_is_up; //type: boolean




                    }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData


                    class NextHopIpv4Data : public Entity
                    {
                        public:
                            NextHopIpv4Data();
                            ~NextHopIpv4Data();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv4_address; //type: string
                            Value vrf_name; //type: string
                            Value address_is_reachable; //type: boolean




                    }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data


                    class NextHopIpv6Data : public Entity
                    {
                        public:
                            NextHopIpv6Data();
                            ~NextHopIpv6Data();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_address; //type: string
                            Value vrf_name; //type: string
                            Value address_is_reachable; //type: boolean




                    }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data


                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData> interface_data;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data> next_hop_ipv4_data;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data> next_hop_ipv6_data;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData> pseudowire_data;
                        class DestinationClassEnum;


                }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData


                class DestinationId : public Entity
                {
                    public:
                        DestinationId();
                        ~DestinationId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value destination_class; //type: DestinationClassEnum
                        Value interface; //type: string
                        Value pseudowire_id; //type: uint32
                        Value invalid_value; //type: uint32


                    class Ipv4AddressAndVrf : public Entity
                    {
                        public:
                            Ipv4AddressAndVrf();
                            ~Ipv4AddressAndVrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv4_address; //type: string
                            Value vrf_name; //type: string




                    }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf


                    class Ipv6AddressAndVrf : public Entity
                    {
                        public:
                            Ipv6AddressAndVrf();
                            ~Ipv6AddressAndVrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_address; //type: string
                            Value vrf_name; //type: string




                    }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf


                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
                        class DestinationClassEnum;


                }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId


                    std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData> destination_data;
                    std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId> destination_id;
                    class SessionClassEnum;


            }; // SpanMonitorSession::Global::GlobalSessions::GlobalSession


                std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions::GlobalSession> > global_session;


        }; // SpanMonitorSession::Global::GlobalSessions


            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::GlobalSessions> global_sessions;
            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global::Statistics> statistics;


    }; // SpanMonitorSession::Global


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node; //type: string


            class Attachments : public Entity
            {
                public:
                    Attachments();
                    ~Attachments();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Attachment : public Entity
                {
                    public:
                        Attachment();
                        ~Attachment();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session; //type: string
                        Value interface; //type: string
                        Value name; //type: string
                        Value local_class; //type: SessionClassEnum
                        Value id; //type: uint32
                        Value global_class; //type: SessionClassEnum
                        Value session_is_configured; //type: boolean
                        Value source_interface; //type: string
                        Value source_interface_state; //type: ImStateEnumEnum
                        Value pfi_error; //type: uint32
                        Value dest_pw_type_not_supported; //type: boolean
                        Value destination_interface; //type: string
                        Value traffic_direction; //type: TrafficDirectionEnum


                    class TrafficParameters : public Entity
                    {
                        public:
                            TrafficParameters();
                            ~TrafficParameters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value traffic_direction; //type: TrafficDirectionEnum
                            Value port_level; //type: boolean
                            Value is_acl_enabled; //type: boolean
                            Value mirror_bytes; //type: uint32
                            Value mirror_interval; //type: MirrorIntervalEnum


                            class MirrorIntervalEnum;
                            class TrafficDirectionEnum;


                    }; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters


                    class DestinationId : public Entity
                    {
                        public:
                            DestinationId();
                            ~DestinationId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_class; //type: DestinationClassEnum
                            Value interface; //type: string
                            Value pseudowire_id; //type: uint32
                            Value invalid_value; //type: uint32


                        class Ipv4AddressAndVrf : public Entity
                        {
                            public:
                                Ipv4AddressAndVrf();
                                ~Ipv4AddressAndVrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv4_address; //type: string
                                Value vrf_name; //type: string




                        }; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf


                        class Ipv6AddressAndVrf : public Entity
                        {
                            public:
                                Ipv6AddressAndVrf();
                                ~Ipv6AddressAndVrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv6_address; //type: string
                                Value vrf_name; //type: string




                        }; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf


                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
                            class DestinationClassEnum;


                    }; // SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId


                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId> destination_id;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters> traffic_parameters;
                        class SessionClassEnum;
                        class SessionClassEnum;
                        class ImStateEnumEnum;
                        class TrafficDirectionEnum;


                }; // SpanMonitorSession::Nodes::Node::Attachments::Attachment


                    std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments::Attachment> > attachment;


            }; // SpanMonitorSession::Nodes::Node::Attachments


            class HardwareSessions : public Entity
            {
                public:
                    HardwareSessions();
                    ~HardwareSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class HardwareSession : public Entity
                {
                    public:
                        HardwareSession();
                        ~HardwareSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_class; //type: SpanSessionClassEnum
                        Value session_id; //type: int32
                        Value id; //type: uint32
                        Value name; //type: string
                        Value session_class_xr; //type: SessionClassEnum
                        Value destination_interface; //type: string
                        Value platform_error; //type: uint32


                    class DestinationId : public Entity
                    {
                        public:
                            DestinationId();
                            ~DestinationId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_class; //type: DestinationClassEnum
                            Value interface; //type: string
                            Value pseudowire_id; //type: uint32
                            Value invalid_value; //type: uint32


                        class Ipv4AddressAndVrf : public Entity
                        {
                            public:
                                Ipv4AddressAndVrf();
                                ~Ipv4AddressAndVrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv4_address; //type: string
                                Value vrf_name; //type: string




                        }; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf


                        class Ipv6AddressAndVrf : public Entity
                        {
                            public:
                                Ipv6AddressAndVrf();
                                ~Ipv6AddressAndVrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv6_address; //type: string
                                Value vrf_name; //type: string




                        }; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf


                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
                            class DestinationClassEnum;


                    }; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId


                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId> destination_id;
                        class SpanSessionClassEnum;
                        class SessionClassEnum;


                }; // SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession


                    std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession> > hardware_session;


            }; // SpanMonitorSession::Nodes::Node::HardwareSessions


            class Interfaces : public Entity
            {
                public:
                    Interfaces();
                    ~Interfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Interface : public Entity
                {
                    public:
                        Interface();
                        ~Interface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface; //type: string
                        Value source_interface; //type: string
                        Value platform_error; //type: uint32
                        Value destination_interface; //type: string
                        Value traffic_direction; //type: TrafficDirectionEnum


                    class DestinationId : public Entity
                    {
                        public:
                            DestinationId();
                            ~DestinationId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_class; //type: DestinationClassEnum
                            Value interface; //type: string
                            Value pseudowire_id; //type: uint32
                            Value invalid_value; //type: uint32


                        class Ipv4AddressAndVrf : public Entity
                        {
                            public:
                                Ipv4AddressAndVrf();
                                ~Ipv4AddressAndVrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv4_address; //type: string
                                Value vrf_name; //type: string




                        }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf


                        class Ipv6AddressAndVrf : public Entity
                        {
                            public:
                                Ipv6AddressAndVrf();
                                ~Ipv6AddressAndVrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv6_address; //type: string
                                Value vrf_name; //type: string




                        }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf


                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
                            class DestinationClassEnum;


                    }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId


                    class TrafficMirroringParameters : public Entity
                    {
                        public:
                            TrafficMirroringParameters();
                            ~TrafficMirroringParameters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value traffic_direction; //type: TrafficDirectionEnum
                            Value port_level; //type: boolean
                            Value is_acl_enabled; //type: boolean
                            Value mirror_bytes; //type: uint32
                            Value mirror_interval; //type: MirrorIntervalEnum


                            class MirrorIntervalEnum;
                            class TrafficDirectionEnum;


                    }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters


                    class Attachment : public Entity
                    {
                        public:
                            Attachment();
                            ~Attachment();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value class_; //type: SessionClassEnum


                        class DestinationId : public Entity
                        {
                            public:
                                DestinationId();
                                ~DestinationId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value destination_class; //type: DestinationClassEnum
                                Value interface; //type: string
                                Value pseudowire_id; //type: uint32
                                Value invalid_value; //type: uint32


                            class Ipv4AddressAndVrf : public Entity
                            {
                                public:
                                    Ipv4AddressAndVrf();
                                    ~Ipv4AddressAndVrf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ipv4_address; //type: string
                                    Value vrf_name; //type: string




                            }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf


                            class Ipv6AddressAndVrf : public Entity
                            {
                                public:
                                    Ipv6AddressAndVrf();
                                    ~Ipv6AddressAndVrf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ipv6_address; //type: string
                                    Value vrf_name; //type: string




                            }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf


                                std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf> ipv4_address_and_vrf;
                                std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf> ipv6_address_and_vrf;
                                class DestinationClassEnum;


                        }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId


                        class TrafficMirroringParameters : public Entity
                        {
                            public:
                                TrafficMirroringParameters();
                                ~TrafficMirroringParameters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value traffic_direction; //type: TrafficDirectionEnum
                                Value port_level; //type: boolean
                                Value is_acl_enabled; //type: boolean
                                Value mirror_bytes; //type: uint32
                                Value mirror_interval; //type: MirrorIntervalEnum


                                class MirrorIntervalEnum;
                                class TrafficDirectionEnum;


                        }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters


                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId> destination_id;
                            std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters> traffic_mirroring_parameters;
                            class SessionClassEnum;


                    }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment


                        std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment> > attachment;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId> destination_id;
                        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters> traffic_mirroring_parameters;
                        class TrafficDirectionEnum;


                }; // SpanMonitorSession::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces::Interface> > interface;


            }; // SpanMonitorSession::Nodes::Node::Interfaces


                std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Attachments> attachments;
                std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::HardwareSessions> hardware_sessions;
                std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node::Interfaces> interfaces;


        }; // SpanMonitorSession::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes::Node> > node;


    }; // SpanMonitorSession::Nodes


        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Global> global;
        std::unique_ptr<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession::Nodes> nodes;


}; // SpanMonitorSession


class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::Value im_state_not_ready;
        static const Enum::Value im_state_admin_down;
        static const Enum::Value im_state_down;
        static const Enum::Value im_state_up;
        static const Enum::Value im_state_shutdown;
        static const Enum::Value im_state_err_disable;
        static const Enum::Value im_state_down_immediate;
        static const Enum::Value im_state_down_immediate_admin;
        static const Enum::Value im_state_down_graceful;
        static const Enum::Value im_state_begin_shutdown;
        static const Enum::Value im_state_end_shutdown;
        static const Enum::Value im_state_begin_error_disable;
        static const Enum::Value im_state_end_error_disable;
        static const Enum::Value im_state_begin_down_graceful;
        static const Enum::Value im_state_reset;
        static const Enum::Value im_state_operational;
        static const Enum::Value im_state_not_operational;
        static const Enum::Value im_state_unknown;
        static const Enum::Value im_state_last;

};

class DestinationClassEnum : public Enum
{
    public:
        static const Enum::Value interface_class;
        static const Enum::Value pseudowire_class;
        static const Enum::Value next_hop_ipv4_class;
        static const Enum::Value next_hop_ipv6_class;
        static const Enum::Value invalid_class;

};

class TrafficDirectionEnum : public Enum
{
    public:
        static const Enum::Value invalid;
        static const Enum::Value rx_only;
        static const Enum::Value tx_only;
        static const Enum::Value both;

};

class SessionClassEnum : public Enum
{
    public:
        static const Enum::Value ethernet_class;
        static const Enum::Value ipv4_class;
        static const Enum::Value ipv6_class;
        static const Enum::Value invalid_class;

};

class MirrorIntervalEnum : public Enum
{
    public:
        static const Enum::Value mirror_interval_all;
        static const Enum::Value mirror_interval512;
        static const Enum::Value mirror_interval1k;
        static const Enum::Value mirror_interval2k;
        static const Enum::Value mirror_interval4k;
        static const Enum::Value mirror_interval8k;
        static const Enum::Value mirror_interval16k;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_OPER_ */

