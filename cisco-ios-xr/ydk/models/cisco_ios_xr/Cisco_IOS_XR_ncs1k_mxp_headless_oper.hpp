#ifndef _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class OtnPortNames; //type: HeadlessFuncData::OtnPortNames
        class EthernetPortNames; //type: HeadlessFuncData::EthernetPortNames

        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames> ethernet_port_names;
        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames> otn_port_names;


}; // HeadlessFuncData


class HeadlessFuncData::OtnPortNames : public Entity
{
    public:
        OtnPortNames();
        ~OtnPortNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtnPortName; //type: HeadlessFuncData::OtnPortNames::OtnPortName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName> > otn_port_name;


}; // HeadlessFuncData::OtnPortNames


class HeadlessFuncData::OtnPortNames::OtnPortName : public Entity
{
    public:
        OtnPortName();
        ~OtnPortName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf started_stateful; //type: boolean
        YLeaf headless_start_time; //type: string
        YLeaf headless_end_time; //type: string

        class OtnStatistics; //type: HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics

        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics> otn_statistics;


}; // HeadlessFuncData::OtnPortNames::OtnPortName


class HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics : public Entity
{
    public:
        OtnStatistics();
        ~OtnStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sm_bip; //type: uint64
        YLeaf sm_bei; //type: uint64
        YLeaf fec_ec; //type: uint64
        YLeaf fec_uc; //type: uint64



}; // HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics


class HeadlessFuncData::EthernetPortNames : public Entity
{
    public:
        EthernetPortNames();
        ~EthernetPortNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetPortName; //type: HeadlessFuncData::EthernetPortNames::EthernetPortName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames::EthernetPortName> > ethernet_port_name;


}; // HeadlessFuncData::EthernetPortNames


class HeadlessFuncData::EthernetPortNames::EthernetPortName : public Entity
{
    public:
        EthernetPortName();
        ~EthernetPortName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf started_stateful; //type: boolean
        YLeaf headless_start_time; //type: string
        YLeaf headless_end_time; //type: string

        class EtherStatistics; //type: HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics

        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics> ether_statistics;


}; // HeadlessFuncData::EthernetPortNames::EthernetPortName


class HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics : public Entity
{
    public:
        EtherStatistics();
        ~EtherStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rx_pkts_over_sized; //type: uint64
        YLeaf rx_pkts_bad_fcs; //type: uint64
        YLeaf rx_error_jabbers; //type: uint64
        YLeaf rx_pkts_multicast; //type: uint64
        YLeaf rx_pkts_broadcast; //type: uint64
        YLeaf rx_pkts_under_sized; //type: uint64
        YLeaf rx_packets; //type: uint64
        YLeaf rx_total_bytes; //type: uint64
        YLeaf rx_bytes_good; //type: uint64
        YLeaf rx_pkts_good; //type: uint64
        YLeaf tx_bytes_good; //type: uint64
        YLeaf tx_pkts_good; //type: uint64
        YLeaf rx_recv_fragments; //type: uint64
        YLeaf rx_pkts64_bytes; //type: uint64
        YLeaf rx_pkts65_to127_bytes; //type: uint64
        YLeaf rx_pkts128to255_bytes; //type: uint64
        YLeaf rx_pkts256_to511_bytes; //type: uint64
        YLeaf rx_pkts512_to1023_bytes; //type: uint64
        YLeaf rx_pkts1024_to1518_bytes; //type: uint64
        YLeaf rx_pkts_unicast; //type: uint64
        YLeaf tx_packets; //type: uint64
        YLeaf tx_total_bytes; //type: uint64
        YLeaf tx_pkts_under_sized; //type: uint64
        YLeaf tx_pkts_over_sized; //type: uint64
        YLeaf tx_fragments; //type: uint64
        YLeaf tx_jabber; //type: uint64
        YLeaf tx_bad_fcs; //type: uint64
        YLeaf rx_pkt_drop; //type: uint64
        YLeaf rx_pause; //type: uint64
        YLeaf tx_pause; //type: uint64
        YLeaf rx_lldp_pkt; //type: uint64
        YLeaf rx8021q_pkt; //type: uint64



}; // HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_ */

