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


                YLeaf timer; //type: uint32
                YLeaf hold_time; //type: uint32
                YLeaf re_init; //type: uint32



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


                YLeaf node_name; //type: string

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


                            YLeaf device_id; //type: string
                            YLeaf interface_name; //type: string

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


                                YLeaf receiving_interface_name; //type: string
                                YLeaf receiving_parent_interface_name; //type: string
                                YLeaf device_id; //type: string
                                YLeaf chassis_id; //type: string
                                YLeaf port_id_detail; //type: string
                                YLeaf header_version; //type: uint8
                                YLeaf hold_time; //type: uint16
                                YLeaf enabled_capabilities; //type: string
                                YLeaf platform; //type: string

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


                                    YLeaf port_description; //type: string
                                    YLeaf system_name; //type: string
                                    YLeaf system_description; //type: string
                                    YLeaf time_remaining; //type: uint32
                                    YLeaf system_capabilities; //type: string
                                    YLeaf enabled_capabilities; //type: string
                                    YLeaf auto_negotiation; //type: string
                                    YLeaf physical_media_capabilities; //type: string
                                    YLeaf media_attachment_unit_type; //type: uint32
                                    YLeaf port_vlan_id; //type: uint32

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


                                            YLeaf ma_subtype; //type: uint8
                                            YLeaf if_num; //type: uint32

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


                                                YLeaf address_type; //type: LldpL3AddrProtocolEnum
                                                YLeaf ipv4_address; //type: string
                                                YLeaf ipv6_address; //type: string



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


                                    YLeaf rem_time_mark; //type: uint32
                                    YLeaf rem_local_port_num; //type: uint32
                                    YLeaf rem_index; //type: uint32
                                    YLeaf chassis_id_sub_type; //type: uint8
                                    YLeaf chassis_id_len; //type: uint16
                                    YLeaf port_id_sub_type; //type: uint8
                                    YLeaf port_id_len; //type: uint16
                                    YLeaf combined_capabilities; //type: uint32

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


                                            YLeaf tlv_type; //type: uint8
                                            YLeaf tlv_value; //type: string



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


                                            YLeaf oui; //type: uint32
                                            YLeaf tlv_subtype; //type: uint8
                                            YLeaf tlv_info_indes; //type: uint32
                                            YLeaf tlv_value; //type: string



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


                            YLeaf interface_name; //type: string
                            YLeaf device_id; //type: string

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


                                YLeaf receiving_interface_name; //type: string
                                YLeaf receiving_parent_interface_name; //type: string
                                YLeaf device_id; //type: string
                                YLeaf chassis_id; //type: string
                                YLeaf port_id_detail; //type: string
                                YLeaf header_version; //type: uint8
                                YLeaf hold_time; //type: uint16
                                YLeaf enabled_capabilities; //type: string
                                YLeaf platform; //type: string

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


                                    YLeaf port_description; //type: string
                                    YLeaf system_name; //type: string
                                    YLeaf system_description; //type: string
                                    YLeaf time_remaining; //type: uint32
                                    YLeaf system_capabilities; //type: string
                                    YLeaf enabled_capabilities; //type: string
                                    YLeaf auto_negotiation; //type: string
                                    YLeaf physical_media_capabilities; //type: string
                                    YLeaf media_attachment_unit_type; //type: uint32
                                    YLeaf port_vlan_id; //type: uint32

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


                                            YLeaf ma_subtype; //type: uint8
                                            YLeaf if_num; //type: uint32

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


                                                YLeaf address_type; //type: LldpL3AddrProtocolEnum
                                                YLeaf ipv4_address; //type: string
                                                YLeaf ipv6_address; //type: string



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


                                    YLeaf rem_time_mark; //type: uint32
                                    YLeaf rem_local_port_num; //type: uint32
                                    YLeaf rem_index; //type: uint32
                                    YLeaf chassis_id_sub_type; //type: uint8
                                    YLeaf chassis_id_len; //type: uint16
                                    YLeaf port_id_sub_type; //type: uint8
                                    YLeaf port_id_len; //type: uint16
                                    YLeaf combined_capabilities; //type: uint32

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


                                            YLeaf tlv_type; //type: uint8
                                            YLeaf tlv_value; //type: string



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


                                            YLeaf oui; //type: uint32
                                            YLeaf tlv_subtype; //type: uint8
                                            YLeaf tlv_info_indes; //type: uint32
                                            YLeaf tlv_value; //type: string



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


                            YLeaf interface_name; //type: string
                            YLeaf device_id; //type: string

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


                                YLeaf receiving_interface_name; //type: string
                                YLeaf receiving_parent_interface_name; //type: string
                                YLeaf device_id; //type: string
                                YLeaf chassis_id; //type: string
                                YLeaf port_id_detail; //type: string
                                YLeaf header_version; //type: uint8
                                YLeaf hold_time; //type: uint16
                                YLeaf enabled_capabilities; //type: string
                                YLeaf platform; //type: string

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


                                    YLeaf port_description; //type: string
                                    YLeaf system_name; //type: string
                                    YLeaf system_description; //type: string
                                    YLeaf time_remaining; //type: uint32
                                    YLeaf system_capabilities; //type: string
                                    YLeaf enabled_capabilities; //type: string
                                    YLeaf auto_negotiation; //type: string
                                    YLeaf physical_media_capabilities; //type: string
                                    YLeaf media_attachment_unit_type; //type: uint32
                                    YLeaf port_vlan_id; //type: uint32

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


                                            YLeaf ma_subtype; //type: uint8
                                            YLeaf if_num; //type: uint32

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


                                                YLeaf address_type; //type: LldpL3AddrProtocolEnum
                                                YLeaf ipv4_address; //type: string
                                                YLeaf ipv6_address; //type: string



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


                                    YLeaf rem_time_mark; //type: uint32
                                    YLeaf rem_local_port_num; //type: uint32
                                    YLeaf rem_index; //type: uint32
                                    YLeaf chassis_id_sub_type; //type: uint8
                                    YLeaf chassis_id_len; //type: uint16
                                    YLeaf port_id_sub_type; //type: uint8
                                    YLeaf port_id_len; //type: uint16
                                    YLeaf combined_capabilities; //type: uint32

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


                                            YLeaf tlv_type; //type: uint8
                                            YLeaf tlv_value; //type: string



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


                                            YLeaf oui; //type: uint32
                                            YLeaf tlv_subtype; //type: uint8
                                            YLeaf tlv_info_indes; //type: uint32
                                            YLeaf tlv_value; //type: string



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


                        YLeaf interface_name; //type: string
                        YLeaf interface_name_xr; //type: string
                        YLeaf tx_enabled; //type: uint8
                        YLeaf rx_enabled; //type: uint8
                        YLeaf tx_state; //type: string
                        YLeaf rx_state; //type: string
                        YLeaf if_index; //type: uint32
                        YLeaf port_id; //type: string
                        YLeaf port_id_sub_type; //type: uint8
                        YLeaf port_description; //type: string

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


                                YLeaf ma_subtype; //type: uint8
                                YLeaf if_num; //type: uint32

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


                                    YLeaf address_type; //type: LldpL3AddrProtocolEnum
                                    YLeaf ipv4_address; //type: string
                                    YLeaf ipv6_address; //type: string



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


                    YLeaf transmitted_packets; //type: uint32
                    YLeaf aged_out_entries; //type: uint32
                    YLeaf discarded_packets; //type: uint32
                    YLeaf bad_packets; //type: uint32
                    YLeaf received_packets; //type: uint32
                    YLeaf discarded_tl_vs; //type: uint32
                    YLeaf unrecognized_tl_vs; //type: uint32
                    YLeaf out_of_memory_errors; //type: uint32
                    YLeaf encapsulation_errors; //type: uint32
                    YLeaf queue_overflow_errors; //type: uint32
                    YLeaf table_overflow_errors; //type: uint32



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
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LLDP_OPER_ */

