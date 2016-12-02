#ifndef _CISCO_IOS_XR_IPV4_ARP_OPER_
#define _CISCO_IOS_XR_IPV4_ARP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_arp_oper {

class ArpGmp : public Entity
{
    public:
        ArpGmp();
        ~ArpGmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class VrfInfos : public Entity
    {
        public:
            VrfInfos();
            ~VrfInfos();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class VrfInfo : public Entity
        {
            public:
                VrfInfo();
                ~VrfInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string
                Value vrf_name_xr; //type: string
                Value vrf_id_number; //type: uint32
                Value table_id; //type: uint32
                Value rsi_handle; //type: uint32
                Value rsi_handle_high; //type: uint32




        }; // ArpGmp::VrfInfos::VrfInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::VrfInfos::VrfInfo> > vrf_info;


    }; // ArpGmp::VrfInfos


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string


            class ConfiguredIpAddresses : public Entity
            {
                public:
                    ConfiguredIpAddresses();
                    ~ConfiguredIpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ConfiguredIpAddress : public Entity
                {
                    public:
                        ConfiguredIpAddress();
                        ~ConfiguredIpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value ip_address; //type: string
                        Value hardware_address; //type: string
                        Value encapsulation_type; //type: ArpGmpBagEncapEnum
                        Value entry_type; //type: ArpGmpBagEntryEnum


                        class ArpGmpBagEncapEnum;
                        class ArpGmpBagEntryEnum;


                }; // ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress> > configured_ip_address;


            }; // ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses


            class Routes : public Entity
            {
                public:
                    Routes();
                    ~Routes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Route : public Entity
                {
                    public:
                        Route();
                        ~Route();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: uint32
                        Value ip_address; //type: string
                        Value prefix_length_xr; //type: uint8
                        Value interface_name_xr; //type: string
                        ValueList interface_name; //type: list of  string




                }; // ArpGmp::Vrfs::Vrf::Routes::Route


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::Routes::Route> > route;


            }; // ArpGmp::Vrfs::Vrf::Routes


            class InterfaceConfiguredIps : public Entity
            {
                public:
                    InterfaceConfiguredIps();
                    ~InterfaceConfiguredIps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InterfaceConfiguredIp : public Entity
                {
                    public:
                        InterfaceConfiguredIp();
                        ~InterfaceConfiguredIp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value address; //type: string
                        Value interface_name_xr; //type: string
                        Value reference_count; //type: uint32


                    class AssociatedConfigurationEntry : public Entity
                    {
                        public:
                            AssociatedConfigurationEntry();
                            ~AssociatedConfigurationEntry();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip_address; //type: string
                            Value hardware_address; //type: string
                            Value encapsulation_type; //type: ArpGmpBagEncapEnum
                            Value entry_type; //type: ArpGmpBagEntryEnum


                            class ArpGmpBagEncapEnum;
                            class ArpGmpBagEntryEnum;


                    }; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry


                        std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry> associated_configuration_entry;


                }; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp> > interface_configured_ip;


            }; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps


                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses> configured_ip_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps> interface_configured_ips;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::Routes> routes;


        }; // ArpGmp::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf> > vrf;


    }; // ArpGmp::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::VrfInfos> vrf_infos;
        std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs> vrfs;


}; // ArpGmp

class Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
                Value node_name; //type: string


            class ResolutionHistoryDynamic : public Entity
            {
                public:
                    ResolutionHistoryDynamic();
                    ~ResolutionHistoryDynamic();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ArpEntry : public Entity
                {
                    public:
                        ArpEntry();
                        ~ArpEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value nsec_timestamp; //type: uint64
                        Value idb_interface_name; //type: string
                        Value ipv4_address; //type: string
                        Value mac_address; //type: string
                        Value status; //type: ArpResolutionHistoryStatusEnum
                        Value client_id; //type: int32
                        Value entry_state; //type: int32
                        Value resolution_request_count; //type: uint32


                        class ArpResolutionHistoryStatusEnum;


                }; // Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry> > arp_entry;


            }; // Arp::Nodes::Node::ResolutionHistoryDynamic


            class TrafficVrfs : public Entity
            {
                public:
                    TrafficVrfs();
                    ~TrafficVrfs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TrafficVrf : public Entity
                {
                    public:
                        TrafficVrf();
                        ~TrafficVrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vrf_name; //type: string
                        Value requests_received; //type: uint32
                        Value replies_received; //type: uint32
                        Value requests_sent; //type: uint32
                        Value replies_sent; //type: uint32
                        Value proxy_replies_sent; //type: uint32
                        Value subscr_requests_received; //type: uint32
                        Value subscr_replies_sent; //type: uint32
                        Value subscr_replies_gratg_sent; //type: uint32
                        Value local_proxy_replies_sent; //type: uint32
                        Value gratuitous_replies_sent; //type: uint32
                        Value resolution_requests_received; //type: uint32
                        Value resolution_replies_received; //type: uint32
                        Value resolution_requests_dropped; //type: uint32
                        Value out_of_memory_errors; //type: uint32
                        Value no_buffer_errors; //type: uint32
                        Value total_entries; //type: uint32
                        Value dynamic_entries; //type: uint32
                        Value static_entries; //type: uint32
                        Value alias_entries; //type: uint32
                        Value interface_entries; //type: uint32
                        Value standby_entries; //type: uint32
                        Value dhcp_entries; //type: uint32
                        Value vxlan_entries; //type: uint32
                        Value ip_packets_dropped_node; //type: uint32
                        Value arp_packet_node_out_of_subnet; //type: uint32
                        Value ip_packets_dropped_interface; //type: uint32
                        Value arp_packet_interface_out_of_subnet; //type: uint32
                        Value idb_structures; //type: uint32




                }; // Arp::Nodes::Node::TrafficVrfs::TrafficVrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficVrfs::TrafficVrf> > traffic_vrf;


            }; // Arp::Nodes::Node::TrafficVrfs


            class TrafficNode : public Entity
            {
                public:
                    TrafficNode();
                    ~TrafficNode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value requests_received; //type: uint32
                    Value replies_received; //type: uint32
                    Value requests_sent; //type: uint32
                    Value replies_sent; //type: uint32
                    Value proxy_replies_sent; //type: uint32
                    Value subscr_requests_received; //type: uint32
                    Value subscr_replies_sent; //type: uint32
                    Value subscr_replies_gratg_sent; //type: uint32
                    Value local_proxy_replies_sent; //type: uint32
                    Value gratuitous_replies_sent; //type: uint32
                    Value resolution_requests_received; //type: uint32
                    Value resolution_replies_received; //type: uint32
                    Value resolution_requests_dropped; //type: uint32
                    Value out_of_memory_errors; //type: uint32
                    Value no_buffer_errors; //type: uint32
                    Value total_entries; //type: uint32
                    Value dynamic_entries; //type: uint32
                    Value static_entries; //type: uint32
                    Value alias_entries; //type: uint32
                    Value interface_entries; //type: uint32
                    Value standby_entries; //type: uint32
                    Value dhcp_entries; //type: uint32
                    Value vxlan_entries; //type: uint32
                    Value ip_packets_dropped_node; //type: uint32
                    Value arp_packet_node_out_of_subnet; //type: uint32
                    Value ip_packets_dropped_interface; //type: uint32
                    Value arp_packet_interface_out_of_subnet; //type: uint32
                    Value idb_structures; //type: uint32




            }; // Arp::Nodes::Node::TrafficNode


            class ResolutionHistoryClient : public Entity
            {
                public:
                    ResolutionHistoryClient();
                    ~ResolutionHistoryClient();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ArpEntry : public Entity
                {
                    public:
                        ArpEntry();
                        ~ArpEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value nsec_timestamp; //type: uint64
                        Value idb_interface_name; //type: string
                        Value ipv4_address; //type: string
                        Value mac_address; //type: string
                        Value status; //type: ArpResolutionHistoryStatusEnum
                        Value client_id; //type: int32
                        Value entry_state; //type: int32
                        Value resolution_request_count; //type: uint32


                        class ArpResolutionHistoryStatusEnum;


                }; // Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry> > arp_entry;


            }; // Arp::Nodes::Node::ResolutionHistoryClient


            class Entries : public Entity
            {
                public:
                    Entries();
                    ~Entries();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Entry : public Entity
                {
                    public:
                        Entry();
                        ~Entry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value interface_name; //type: string
                        Value media_type; //type: IpArpBagMediaEnum
                        Value state; //type: IpArpBagStateEnum
                        Value age; //type: uint64
                        Value encapsulation_type; //type: IpArpBagEncapEnum
                        Value hardware_length; //type: uint8
                        Value hardware_address; //type: string


                        class IpArpBagEncapEnum;
                        class IpArpBagMediaEnum;
                        class IpArpBagStateEnum;


                }; // Arp::Nodes::Node::Entries::Entry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::Entries::Entry> > entry;


            }; // Arp::Nodes::Node::Entries


            class TrafficInterfaces : public Entity
            {
                public:
                    TrafficInterfaces();
                    ~TrafficInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TrafficInterface : public Entity
                {
                    public:
                        TrafficInterface();
                        ~TrafficInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value requests_received; //type: uint32
                        Value replies_received; //type: uint32
                        Value requests_sent; //type: uint32
                        Value replies_sent; //type: uint32
                        Value proxy_replies_sent; //type: uint32
                        Value subscr_requests_received; //type: uint32
                        Value subscr_replies_sent; //type: uint32
                        Value subscr_replies_gratg_sent; //type: uint32
                        Value local_proxy_replies_sent; //type: uint32
                        Value gratuitous_replies_sent; //type: uint32
                        Value resolution_requests_received; //type: uint32
                        Value resolution_replies_received; //type: uint32
                        Value resolution_requests_dropped; //type: uint32
                        Value out_of_memory_errors; //type: uint32
                        Value no_buffer_errors; //type: uint32
                        Value total_entries; //type: uint32
                        Value dynamic_entries; //type: uint32
                        Value static_entries; //type: uint32
                        Value alias_entries; //type: uint32
                        Value interface_entries; //type: uint32
                        Value standby_entries; //type: uint32
                        Value dhcp_entries; //type: uint32
                        Value vxlan_entries; //type: uint32
                        Value ip_packets_dropped_node; //type: uint32
                        Value arp_packet_node_out_of_subnet; //type: uint32
                        Value ip_packets_dropped_interface; //type: uint32
                        Value arp_packet_interface_out_of_subnet; //type: uint32
                        Value idb_structures; //type: uint32




                }; // Arp::Nodes::Node::TrafficInterfaces::TrafficInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficInterfaces::TrafficInterface> > traffic_interface;


            }; // Arp::Nodes::Node::TrafficInterfaces


                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::Entries> entries;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryClient> resolution_history_client;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryDynamic> resolution_history_dynamic;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficInterfaces> traffic_interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficNode> traffic_node;
                std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficVrfs> traffic_vrfs;


        }; // Arp::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node> > node;


    }; // Arp::Nodes


        std::unique_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes> nodes;


}; // Arp


class ArpResolutionHistoryStatusEnum : public Enum
{
    public:
        static const Enum::Value status_none;
        static const Enum::Value status_resolution_request;
        static const Enum::Value status_resolved_reply;
        static const Enum::Value status_resolved_grat_arp;
        static const Enum::Value status_resolved_request;
        static const Enum::Value status_resolved_lc_sync;
        static const Enum::Value status_resolved_lc_sync_purge_delay;
        static const Enum::Value status_resolved_client;
        static const Enum::Value status_removed_client;
        static const Enum::Value status_already_resolved;
        static const Enum::Value status_failed;
        static const Enum::Value status_dropped_interface_down;
        static const Enum::Value status_dropped_broadcast_disabled;
        static const Enum::Value status_dropped_interface_unavailable;
        static const Enum::Value status_dropped_bad_subnet;
        static const Enum::Value status_dropped_dynamic_learning_disabled;
        static const Enum::Value status_dropped_out_of_subnet_disabled;
        static const Enum::Value status_removed_client_sweep;
        static const Enum::Value status_added_client;
        static const Enum::Value status_added_v1;
        static const Enum::Value status_removed_v1;
        static const Enum::Value status_resolved_peer_sync;

};

class IpArpBagEncapEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value arpa;
        static const Enum::Value snap;
        static const Enum::Value ieee802_1q;
        static const Enum::Value srp;
        static const Enum::Value srpa;
        static const Enum::Value srpb;

};

class ArpGmpBagEncapEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value arpa;
        static const Enum::Value snap;
        static const Enum::Value ieee802_1q;
        static const Enum::Value srp;
        static const Enum::Value srpa;
        static const Enum::Value srpb;

};

class IpArpBagMediaEnum : public Enum
{
    public:
        static const Enum::Value media_arpa;
        static const Enum::Value media_srp;
        static const Enum::Value media_unknown;

};

class ArpGmpBagEntryEnum : public Enum
{
    public:
        static const Enum::Value null;
        static const Enum::Value static_;
        static const Enum::Value alias;

};

class IpArpBagStateEnum : public Enum
{
    public:
        static const Enum::Value state_none;
        static const Enum::Value state_interface;
        static const Enum::Value state_standby;
        static const Enum::Value state_static;
        static const Enum::Value state_alias;
        static const Enum::Value state_mobile;
        static const Enum::Value state_incomplete;
        static const Enum::Value state_deleted;
        static const Enum::Value state_dynamic;
        static const Enum::Value state_probe;
        static const Enum::Value state_purge_delayed;
        static const Enum::Value state_dhcp;
        static const Enum::Value state_vxlan;
        static const Enum::Value state_sat;
        static const Enum::Value state_r_sync;
        static const Enum::Value state_max;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ARP_OPER_ */

