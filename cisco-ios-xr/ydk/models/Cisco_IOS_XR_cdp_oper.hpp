#ifndef _CISCO_IOS_XR_CDP_OPER_
#define _CISCO_IOS_XR_CDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cdp_oper {

class Cdp : public Entity
{
    public:
        Cdp();
        ~Cdp();

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


            class Neighbors : public Entity
            {
                public:
                    Neighbors();
                    ~Neighbors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Details : public Entity
                {
                    public:
                        Details();
                        ~Details();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Detail : public Entity
                    {
                        public:
                            Detail();
                            ~Detail();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value device_id; //type: string


                        class CdpNeighbor : public Entity
                        {
                            public:
                                CdpNeighbor();
                                ~CdpNeighbor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value receiving_interface_name; //type: string
                                Value device_id; //type: string
                                Value port_id; //type: string
                                Value header_version; //type: uint8
                                Value hold_time; //type: uint16
                                Value capabilities; //type: string
                                Value platform; //type: string


                            class Detail_ : public Entity
                            {
                                public:
                                    Detail_();
                                    ~Detail_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value version; //type: string
                                    Value vtp_domain; //type: string
                                    Value native_vlan; //type: uint32
                                    Value duplex; //type: CdpDuplexEnum
                                    Value system_name; //type: string


                                class NetworkAddresses : public Entity
                                {
                                    public:
                                        NetworkAddresses();
                                        ~NetworkAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CdpAddrEntry : public Entity
                                    {
                                        public:
                                            CdpAddrEntry();
                                            ~CdpAddrEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Address : public Entity
                                        {
                                            public:
                                                Address();
                                                ~Address();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address_type; //type: CdpL3AddrProtocolEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class CdpL3AddrProtocolEnum;


                                        }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address


                                            std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address> address;


                                    }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry> > cdp_addr_entry;


                                }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses


                                class ProtocolHelloList : public Entity
                                {
                                    public:
                                        ProtocolHelloList();
                                        ~ProtocolHelloList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CdpProtHelloEntry : public Entity
                                    {
                                        public:
                                            CdpProtHelloEntry();
                                            ~CdpProtHelloEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value hello_message; //type: string




                                    }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry> > cdp_prot_hello_entry;


                                }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList


                                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses> network_addresses;
                                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList> protocol_hello_list;
                                    class CdpDuplexEnum;


                            }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_


                                std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_> detail;


                        }; // Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor


                            std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor> > cdp_neighbor;


                    }; // Cdp::Nodes::Node::Neighbors::Details::Detail


                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details::Detail> > detail;


                }; // Cdp::Nodes::Node::Neighbors::Details


                class Devices : public Entity
                {
                    public:
                        Devices();
                        ~Devices();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Device : public Entity
                    {
                        public:
                            Device();
                            ~Device();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value device_id; //type: string


                        class CdpNeighbor : public Entity
                        {
                            public:
                                CdpNeighbor();
                                ~CdpNeighbor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value receiving_interface_name; //type: string
                                Value device_id; //type: string
                                Value port_id; //type: string
                                Value header_version; //type: uint8
                                Value hold_time; //type: uint16
                                Value capabilities; //type: string
                                Value platform; //type: string


                            class Detail : public Entity
                            {
                                public:
                                    Detail();
                                    ~Detail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value version; //type: string
                                    Value vtp_domain; //type: string
                                    Value native_vlan; //type: uint32
                                    Value duplex; //type: CdpDuplexEnum
                                    Value system_name; //type: string


                                class NetworkAddresses : public Entity
                                {
                                    public:
                                        NetworkAddresses();
                                        ~NetworkAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CdpAddrEntry : public Entity
                                    {
                                        public:
                                            CdpAddrEntry();
                                            ~CdpAddrEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Address : public Entity
                                        {
                                            public:
                                                Address();
                                                ~Address();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address_type; //type: CdpL3AddrProtocolEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class CdpL3AddrProtocolEnum;


                                        }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address


                                            std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address> address;


                                    }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry> > cdp_addr_entry;


                                }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses


                                class ProtocolHelloList : public Entity
                                {
                                    public:
                                        ProtocolHelloList();
                                        ~ProtocolHelloList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CdpProtHelloEntry : public Entity
                                    {
                                        public:
                                            CdpProtHelloEntry();
                                            ~CdpProtHelloEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value hello_message; //type: string




                                    }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry> > cdp_prot_hello_entry;


                                }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList


                                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses> network_addresses;
                                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList> protocol_hello_list;
                                    class CdpDuplexEnum;


                            }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail


                                std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail> detail;


                        }; // Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor


                            std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor> > cdp_neighbor;


                    }; // Cdp::Nodes::Node::Neighbors::Devices::Device


                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices::Device> > device;


                }; // Cdp::Nodes::Node::Neighbors::Devices


                class Summaries : public Entity
                {
                    public:
                        Summaries();
                        ~Summaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Summary : public Entity
                    {
                        public:
                            Summary();
                            ~Summary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value device_id; //type: string


                        class CdpNeighbor : public Entity
                        {
                            public:
                                CdpNeighbor();
                                ~CdpNeighbor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value receiving_interface_name; //type: string
                                Value device_id; //type: string
                                Value port_id; //type: string
                                Value header_version; //type: uint8
                                Value hold_time; //type: uint16
                                Value capabilities; //type: string
                                Value platform; //type: string


                            class Detail : public Entity
                            {
                                public:
                                    Detail();
                                    ~Detail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value version; //type: string
                                    Value vtp_domain; //type: string
                                    Value native_vlan; //type: uint32
                                    Value duplex; //type: CdpDuplexEnum
                                    Value system_name; //type: string


                                class NetworkAddresses : public Entity
                                {
                                    public:
                                        NetworkAddresses();
                                        ~NetworkAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CdpAddrEntry : public Entity
                                    {
                                        public:
                                            CdpAddrEntry();
                                            ~CdpAddrEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Address : public Entity
                                        {
                                            public:
                                                Address();
                                                ~Address();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address_type; //type: CdpL3AddrProtocolEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class CdpL3AddrProtocolEnum;


                                        }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address


                                            std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address> address;


                                    }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry> > cdp_addr_entry;


                                }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses


                                class ProtocolHelloList : public Entity
                                {
                                    public:
                                        ProtocolHelloList();
                                        ~ProtocolHelloList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CdpProtHelloEntry : public Entity
                                    {
                                        public:
                                            CdpProtHelloEntry();
                                            ~CdpProtHelloEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value hello_message; //type: string




                                    }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry> > cdp_prot_hello_entry;


                                }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList


                                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses> network_addresses;
                                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList> protocol_hello_list;
                                    class CdpDuplexEnum;


                            }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail


                                std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail> detail;


                        }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor


                            std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor> > cdp_neighbor;


                    }; // Cdp::Nodes::Node::Neighbors::Summaries::Summary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries::Summary> > summary;


                }; // Cdp::Nodes::Node::Neighbors::Summaries


                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Details> details;
                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Devices> devices;
                    std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors::Summaries> summaries;


            }; // Cdp::Nodes::Node::Neighbors


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
                    Value received_packets; //type: uint32
                    Value received_packets_v1; //type: uint32
                    Value received_packets_v2; //type: uint32
                    Value transmitted_packets; //type: uint32
                    Value transmitted_packets_v1; //type: uint32
                    Value transmitted_packets_v2; //type: uint32
                    Value header_errors; //type: uint32
                    Value checksum_errors; //type: uint32
                    Value encapsulation_errors; //type: uint32
                    Value bad_packet_errors; //type: uint32
                    Value out_of_memory_errors; //type: uint32
                    Value truncated_packet_errors; //type: uint32
                    Value header_version_errors; //type: uint32
                    Value open_file_errors; //type: uint32




            }; // Cdp::Nodes::Node::Statistics


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
                        Value interface_name; //type: string
                        Value interface_name_xr; //type: string
                        Value basecaps_state; //type: uint32
                        Value cdp_protocol_state; //type: uint32
                        Value interface_encaps; //type: string




                }; // Cdp::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Interfaces::Interface> > interface;


            }; // Cdp::Nodes::Node::Interfaces


                std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Neighbors> neighbors;
                std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node::Statistics> statistics;


        }; // Cdp::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes::Node> > node;


    }; // Cdp::Nodes


        std::unique_ptr<Cisco_IOS_XR_cdp_oper::Cdp::Nodes> nodes;


}; // Cdp


class CdpDuplexEnum : public Enum
{
    public:
        static const Enum::Value cdp_dplx_none;
        static const Enum::Value cdp_dplx_half;
        static const Enum::Value cdp_dplx_full;

};

class CdpL3AddrProtocolEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_CDP_OPER_ */

