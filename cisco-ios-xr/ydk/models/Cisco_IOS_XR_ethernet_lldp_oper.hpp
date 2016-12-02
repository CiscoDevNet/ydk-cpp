#ifndef _CISCO_IOS_XR_ETHERNET_LLDP_OPER_
#define _CISCO_IOS_XR_ETHERNET_LLDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_lldp_oper {

class Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class GlobalLldp : public Entity
    {
        public:
            GlobalLldp();
            ~GlobalLldp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LldpInfo : public Entity
        {
            public:
                LldpInfo();
                ~LldpInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value timer; //type: uint32
                Value hold_time; //type: uint32
                Value re_init; //type: uint32




        }; // Lldp::GlobalLldp::LldpInfo


            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::GlobalLldp::LldpInfo> lldp_info;


    }; // Lldp::GlobalLldp


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
                            Value interface_name; //type: string


                        class LldpNeighbor : public Entity
                        {
                            public:
                                LldpNeighbor();
                                ~LldpNeighbor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value receiving_interface_name; //type: string
                                Value receiving_parent_interface_name; //type: string
                                Value device_id; //type: string
                                Value chassis_id; //type: string
                                Value port_id_detail; //type: string
                                Value header_version; //type: uint8
                                Value hold_time; //type: uint16
                                Value enabled_capabilities; //type: string
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
                                    Value port_description; //type: string
                                    Value system_name; //type: string
                                    Value system_description; //type: string
                                    Value time_remaining; //type: uint32
                                    Value system_capabilities; //type: string
                                    Value enabled_capabilities; //type: string
                                    Value auto_negotiation; //type: string
                                    Value physical_media_capabilities; //type: string
                                    Value media_attachment_unit_type; //type: uint32
                                    Value port_vlan_id; //type: uint32


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


                                    class LldpAddrEntry : public Entity
                                    {
                                        public:
                                            LldpAddrEntry();
                                            ~LldpAddrEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ma_subtype; //type: uint8
                                            Value if_num; //type: uint32


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
                                                Value address_type; //type: LldpL3AddrProtocolEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class LldpL3AddrProtocolEnum;


                                        }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address


                                            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address> address;


                                    }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry> > lldp_addr_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail::NetworkAddresses> network_addresses;


                            }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail


                            class Mib : public Entity
                            {
                                public:
                                    Mib();
                                    ~Mib();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rem_time_mark; //type: uint32
                                    Value rem_local_port_num; //type: uint32
                                    Value rem_index; //type: uint32
                                    Value chassis_id_sub_type; //type: uint8
                                    Value chassis_id_len; //type: uint16
                                    Value port_id_sub_type; //type: uint8
                                    Value port_id_len; //type: uint16
                                    Value combined_capabilities; //type: uint32


                                class UnknownTlvList : public Entity
                                {
                                    public:
                                        UnknownTlvList();
                                        ~UnknownTlvList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class LldpUnknownTlvEntry : public Entity
                                    {
                                        public:
                                            LldpUnknownTlvEntry();
                                            ~LldpUnknownTlvEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value tlv_type; //type: uint8
                                            Value tlv_value; //type: string




                                    }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry> > lldp_unknown_tlv_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList


                                class OrgDefTlvList : public Entity
                                {
                                    public:
                                        OrgDefTlvList();
                                        ~OrgDefTlvList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class LldpOrgDefTlvEntry : public Entity
                                    {
                                        public:
                                            LldpOrgDefTlvEntry();
                                            ~LldpOrgDefTlvEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value oui; //type: uint32
                                            Value tlv_subtype; //type: uint8
                                            Value tlv_info_indes; //type: uint32
                                            Value tlv_value; //type: string




                                    }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry> > lldp_org_def_tlv_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::OrgDefTlvList> org_def_tlv_list;
                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib::UnknownTlvList> unknown_tlv_list;


                            }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib


                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Detail> detail;
                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor::Mib> mib;


                        }; // Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device::LldpNeighbor> > lldp_neighbor;


                    }; // Lldp::Nodes::Node::Neighbors::Devices::Device


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices::Device> > device;


                }; // Lldp::Nodes::Node::Neighbors::Devices


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


                        class LldpNeighbor : public Entity
                        {
                            public:
                                LldpNeighbor();
                                ~LldpNeighbor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value receiving_interface_name; //type: string
                                Value receiving_parent_interface_name; //type: string
                                Value device_id; //type: string
                                Value chassis_id; //type: string
                                Value port_id_detail; //type: string
                                Value header_version; //type: uint8
                                Value hold_time; //type: uint16
                                Value enabled_capabilities; //type: string
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
                                    Value port_description; //type: string
                                    Value system_name; //type: string
                                    Value system_description; //type: string
                                    Value time_remaining; //type: uint32
                                    Value system_capabilities; //type: string
                                    Value enabled_capabilities; //type: string
                                    Value auto_negotiation; //type: string
                                    Value physical_media_capabilities; //type: string
                                    Value media_attachment_unit_type; //type: uint32
                                    Value port_vlan_id; //type: uint32


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


                                    class LldpAddrEntry : public Entity
                                    {
                                        public:
                                            LldpAddrEntry();
                                            ~LldpAddrEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ma_subtype; //type: uint8
                                            Value if_num; //type: uint32


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
                                                Value address_type; //type: LldpL3AddrProtocolEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class LldpL3AddrProtocolEnum;


                                        }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address


                                            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry::Address> address;


                                    }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses::LldpAddrEntry> > lldp_addr_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_::NetworkAddresses> network_addresses;


                            }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_


                            class Mib : public Entity
                            {
                                public:
                                    Mib();
                                    ~Mib();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rem_time_mark; //type: uint32
                                    Value rem_local_port_num; //type: uint32
                                    Value rem_index; //type: uint32
                                    Value chassis_id_sub_type; //type: uint8
                                    Value chassis_id_len; //type: uint16
                                    Value port_id_sub_type; //type: uint8
                                    Value port_id_len; //type: uint16
                                    Value combined_capabilities; //type: uint32


                                class UnknownTlvList : public Entity
                                {
                                    public:
                                        UnknownTlvList();
                                        ~UnknownTlvList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class LldpUnknownTlvEntry : public Entity
                                    {
                                        public:
                                            LldpUnknownTlvEntry();
                                            ~LldpUnknownTlvEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value tlv_type; //type: uint8
                                            Value tlv_value; //type: string




                                    }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry> > lldp_unknown_tlv_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList


                                class OrgDefTlvList : public Entity
                                {
                                    public:
                                        OrgDefTlvList();
                                        ~OrgDefTlvList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class LldpOrgDefTlvEntry : public Entity
                                    {
                                        public:
                                            LldpOrgDefTlvEntry();
                                            ~LldpOrgDefTlvEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value oui; //type: uint32
                                            Value tlv_subtype; //type: uint8
                                            Value tlv_info_indes; //type: uint32
                                            Value tlv_value; //type: string




                                    }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry> > lldp_org_def_tlv_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::OrgDefTlvList> org_def_tlv_list;
                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib::UnknownTlvList> unknown_tlv_list;


                            }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib


                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Detail_> detail;
                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor::Mib> mib;


                        }; // Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail::LldpNeighbor> > lldp_neighbor;


                    }; // Lldp::Nodes::Node::Neighbors::Details::Detail


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details::Detail> > detail;


                }; // Lldp::Nodes::Node::Neighbors::Details


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


                        class LldpNeighbor : public Entity
                        {
                            public:
                                LldpNeighbor();
                                ~LldpNeighbor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value receiving_interface_name; //type: string
                                Value receiving_parent_interface_name; //type: string
                                Value device_id; //type: string
                                Value chassis_id; //type: string
                                Value port_id_detail; //type: string
                                Value header_version; //type: uint8
                                Value hold_time; //type: uint16
                                Value enabled_capabilities; //type: string
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
                                    Value port_description; //type: string
                                    Value system_name; //type: string
                                    Value system_description; //type: string
                                    Value time_remaining; //type: uint32
                                    Value system_capabilities; //type: string
                                    Value enabled_capabilities; //type: string
                                    Value auto_negotiation; //type: string
                                    Value physical_media_capabilities; //type: string
                                    Value media_attachment_unit_type; //type: uint32
                                    Value port_vlan_id; //type: uint32


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


                                    class LldpAddrEntry : public Entity
                                    {
                                        public:
                                            LldpAddrEntry();
                                            ~LldpAddrEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ma_subtype; //type: uint8
                                            Value if_num; //type: uint32


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
                                                Value address_type; //type: LldpL3AddrProtocolEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class LldpL3AddrProtocolEnum;


                                        }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address


                                            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry::Address> address;


                                    }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses::LldpAddrEntry> > lldp_addr_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail::NetworkAddresses> network_addresses;


                            }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail


                            class Mib : public Entity
                            {
                                public:
                                    Mib();
                                    ~Mib();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rem_time_mark; //type: uint32
                                    Value rem_local_port_num; //type: uint32
                                    Value rem_index; //type: uint32
                                    Value chassis_id_sub_type; //type: uint8
                                    Value chassis_id_len; //type: uint16
                                    Value port_id_sub_type; //type: uint8
                                    Value port_id_len; //type: uint16
                                    Value combined_capabilities; //type: uint32


                                class UnknownTlvList : public Entity
                                {
                                    public:
                                        UnknownTlvList();
                                        ~UnknownTlvList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class LldpUnknownTlvEntry : public Entity
                                    {
                                        public:
                                            LldpUnknownTlvEntry();
                                            ~LldpUnknownTlvEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value tlv_type; //type: uint8
                                            Value tlv_value; //type: string




                                    }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList::LldpUnknownTlvEntry> > lldp_unknown_tlv_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList


                                class OrgDefTlvList : public Entity
                                {
                                    public:
                                        OrgDefTlvList();
                                        ~OrgDefTlvList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class LldpOrgDefTlvEntry : public Entity
                                    {
                                        public:
                                            LldpOrgDefTlvEntry();
                                            ~LldpOrgDefTlvEntry();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value oui; //type: uint32
                                            Value tlv_subtype; //type: uint8
                                            Value tlv_info_indes; //type: uint32
                                            Value tlv_value; //type: string




                                    }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList::LldpOrgDefTlvEntry> > lldp_org_def_tlv_entry;


                                }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::OrgDefTlvList> org_def_tlv_list;
                                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib::UnknownTlvList> unknown_tlv_list;


                            }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib


                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Detail> detail;
                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor::Mib> mib;


                        }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary::LldpNeighbor> > lldp_neighbor;


                    }; // Lldp::Nodes::Node::Neighbors::Summaries::Summary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries::Summary> > summary;


                }; // Lldp::Nodes::Node::Neighbors::Summaries


                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Details> details;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Devices> devices;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors::Summaries> summaries;


            }; // Lldp::Nodes::Node::Neighbors


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
                        Value tx_enabled; //type: uint8
                        Value rx_enabled; //type: uint8
                        Value tx_state; //type: string
                        Value rx_state; //type: string
                        Value if_index; //type: uint32
                        Value port_id; //type: string
                        Value port_id_sub_type; //type: uint8
                        Value port_description; //type: string


                    class LocalNetworkAddresses : public Entity
                    {
                        public:
                            LocalNetworkAddresses();
                            ~LocalNetworkAddresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LldpAddrEntry : public Entity
                        {
                            public:
                                LldpAddrEntry();
                                ~LldpAddrEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ma_subtype; //type: uint8
                                Value if_num; //type: uint32


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
                                    Value address_type; //type: LldpL3AddrProtocolEnum
                                    Value ipv4_address; //type: string
                                    Value ipv6_address; //type: string


                                    class LldpL3AddrProtocolEnum;


                            }; // Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address


                                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry::Address> address;


                        }; // Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses::LldpAddrEntry> > lldp_addr_entry;


                    }; // Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses


                        std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces::Interface::LocalNetworkAddresses> local_network_addresses;


                }; // Lldp::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces::Interface> > interface;


            }; // Lldp::Nodes::Node::Interfaces


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
                    Value transmitted_packets; //type: uint32
                    Value aged_out_entries; //type: uint32
                    Value discarded_packets; //type: uint32
                    Value bad_packets; //type: uint32
                    Value received_packets; //type: uint32
                    Value discarded_tl_vs; //type: uint32
                    Value unrecognized_tl_vs; //type: uint32
                    Value out_of_memory_errors; //type: uint32
                    Value encapsulation_errors; //type: uint32
                    Value queue_overflow_errors; //type: uint32
                    Value table_overflow_errors; //type: uint32




            }; // Lldp::Nodes::Node::Statistics


                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Neighbors> neighbors;
                std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node::Statistics> statistics;


        }; // Lldp::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes::Node> > node;


    }; // Lldp::Nodes


        std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::GlobalLldp> global_lldp;
        std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_oper::Lldp::Nodes> nodes;


}; // Lldp


class LldpL3AddrProtocolEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LLDP_OPER_ */

