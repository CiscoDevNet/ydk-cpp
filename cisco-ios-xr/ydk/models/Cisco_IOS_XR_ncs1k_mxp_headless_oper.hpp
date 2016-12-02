#ifndef _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_headless_oper {

class HeadlessFuncData : public Entity
{
    public:
        HeadlessFuncData();
        ~HeadlessFuncData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class OtnPortNames : public Entity
    {
        public:
            OtnPortNames();
            ~OtnPortNames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class OtnPortName : public Entity
        {
            public:
                OtnPortName();
                ~OtnPortName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value started_stateful; //type: boolean
                Value headless_start_time; //type: string
                Value headless_end_time; //type: string


            class OtnStatistics : public Entity
            {
                public:
                    OtnStatistics();
                    ~OtnStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sm_bip; //type: uint64
                    Value sm_bei; //type: uint64
                    Value fec_ec; //type: uint64
                    Value fec_uc; //type: uint64




            }; // HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics


                std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics> otn_statistics;


        }; // HeadlessFuncData::OtnPortNames::OtnPortName


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName> > otn_port_name;


    }; // HeadlessFuncData::OtnPortNames


    class EthernetPortNames : public Entity
    {
        public:
            EthernetPortNames();
            ~EthernetPortNames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EthernetPortName : public Entity
        {
            public:
                EthernetPortName();
                ~EthernetPortName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value started_stateful; //type: boolean
                Value headless_start_time; //type: string
                Value headless_end_time; //type: string


            class EtherStatistics : public Entity
            {
                public:
                    EtherStatistics();
                    ~EtherStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rx_pkts_over_sized; //type: uint64
                    Value rx_pkts_bad_fcs; //type: uint64
                    Value rx_error_jabbers; //type: uint64
                    Value rx_pkts_multicast; //type: uint64
                    Value rx_pkts_broadcast; //type: uint64
                    Value rx_pkts_under_sized; //type: uint64
                    Value rx_packets; //type: uint64
                    Value rx_total_bytes; //type: uint64
                    Value rx_bytes_good; //type: uint64
                    Value rx_pkts_good; //type: uint64
                    Value tx_bytes_good; //type: uint64
                    Value tx_pkts_good; //type: uint64
                    Value rx_recv_fragments; //type: uint64
                    Value rx_pkts64_bytes; //type: uint64
                    Value rx_pkts65_to127_bytes; //type: uint64
                    Value rx_pkts128to255_bytes; //type: uint64
                    Value rx_pkts256_to511_bytes; //type: uint64
                    Value rx_pkts512_to1023_bytes; //type: uint64
                    Value rx_pkts1024_to1518_bytes; //type: uint64
                    Value rx_pkts_unicast; //type: uint64
                    Value tx_packets; //type: uint64
                    Value tx_total_bytes; //type: uint64
                    Value tx_pkts_under_sized; //type: uint64
                    Value tx_pkts_over_sized; //type: uint64
                    Value tx_fragments; //type: uint64
                    Value tx_jabber; //type: uint64
                    Value tx_bad_fcs; //type: uint64
                    Value rx_pkt_drop; //type: uint64
                    Value rx_pause; //type: uint64
                    Value tx_pause; //type: uint64
                    Value rx_lldp_pkt; //type: uint64




            }; // HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics


                std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics> ether_statistics;


        }; // HeadlessFuncData::EthernetPortNames::EthernetPortName


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames::EthernetPortName> > ethernet_port_name;


    }; // HeadlessFuncData::EthernetPortNames


        std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames> ethernet_port_names;
        std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames> otn_port_names;


}; // HeadlessFuncData



}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_ */

