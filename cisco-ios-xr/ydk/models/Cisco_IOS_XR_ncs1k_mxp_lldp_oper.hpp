#ifndef _CISCO_IOS_XR_NCS1K_MXP_LLDP_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_LLDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_lldp_oper {

class LldpSnoopData : public Entity
{
    public:
        LldpSnoopData();
        ~LldpSnoopData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class LldpNeighborBrief : public Entity
    {
        public:
            LldpNeighborBrief();
            ~LldpNeighborBrief();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value number_of_entries; //type: uint16


        class Neighbours : public Entity
        {
            public:
                Neighbours();
                ~Neighbours();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LldpNeighborBriefEntry : public Entity
            {
                public:
                    LldpNeighborBriefEntry();
                    ~LldpNeighborBriefEntry();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value chassis_id; //type: string
                    Value port_id_detail; //type: string
                    Value system_name; //type: string
                    Value enabled_capabilities; //type: string
                    Value recv_intf; //type: string
                    Value hold_time; //type: uint16




            }; // LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry


                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry> > lldp_neighbor_brief_entry;


        }; // LldpSnoopData::LldpNeighborBrief::Neighbours


            std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::LldpNeighborBrief::Neighbours> neighbours;


    }; // LldpSnoopData::LldpNeighborBrief


    class EthernetControllerNames : public Entity
    {
        public:
            EthernetControllerNames();
            ~EthernetControllerNames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EthernetControllerName : public Entity
        {
            public:
                EthernetControllerName();
                ~EthernetControllerName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value source_mac; //type: string
                Value chassis_id; //type: string
                Value port_id_detail; //type: string
                Value port_id_ckt; //type: uint32
                Value hold_time; //type: uint16
                Value port_description; //type: string
                Value system_name; //type: string
                Value system_description; //type: string
                Value system_capabilities; //type: string
                Value enabled_capabilities; //type: string
                Value lldp_neighbor; //type: string
                Value drop_enabled; //type: boolean
                Value rx_lldp_pkts; //type: uint64


            class NetworkAddress : public Entity
            {
                public:
                    NetworkAddress();
                    ~NetworkAddress();

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


                }; // LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address


                    std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address> address;


            }; // LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress


                std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress> network_address;


        }; // LldpSnoopData::EthernetControllerNames::EthernetControllerName


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames::EthernetControllerName> > ethernet_controller_name;


    }; // LldpSnoopData::EthernetControllerNames


        std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::EthernetControllerNames> ethernet_controller_names;
        std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData::LldpNeighborBrief> lldp_neighbor_brief;


}; // LldpSnoopData


class LldpL3AddrProtocolEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_LLDP_OPER_ */

