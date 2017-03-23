#ifndef _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_OPER_
#define _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_oper {

class Mlan : public Entity
{
    public:
        Mlan();
        ~Mlan();

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



        class Nodes; //type: Mlan::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes> nodes;


}; // Mlan


class Mlan::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Mlan::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node> > node;


}; // Mlan::Nodes


class Mlan::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node; //type: string

        class PortStatusNumbers; //type: Mlan::Nodes::Node::PortStatusNumbers
        class SwitchStatusTable; //type: Mlan::Nodes::Node::SwitchStatusTable
        class PortCountersNumbers; //type: Mlan::Nodes::Node::PortCountersNumbers
        class AtuEntryNumbers; //type: Mlan::Nodes::Node::AtuEntryNumbers

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers> atu_entry_numbers;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers> port_counters_numbers;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers> port_status_numbers;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable> switch_status_table;


}; // Mlan::Nodes::Node


class Mlan::Nodes::Node::PortStatusNumbers : public Entity
{
    public:
        PortStatusNumbers();
        ~PortStatusNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortStatusNumber; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber> > port_status_number;


}; // Mlan::Nodes::Node::PortStatusNumbers


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber : public Entity
{
    public:
        PortStatusNumber();
        ~PortStatusNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class PortStatus; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus> port_status;


}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus : public Entity
{
    public:
        PortStatus();
        ~PortStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_num; //type: uint32
        YLeaf phy_valid; //type: uint32
        YLeaf serdes_valid; //type: uint32
        YLeaf mac_valid; //type: uint32

        class Config; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config
        class Phy; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy
        class Serdes; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes
        class Mac; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config> config;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac> mac;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy> phy;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes> serdes;


}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf speed; //type: uint32
        YLeaf duplex; //type: uint32
        YLeaf pause; //type: uint16
        YLeaf my_pause; //type: uint16
        YLeaf loopback; //type: uint32



}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy : public Entity
{
    public:
        Phy();
        ~Phy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList reg; //type: list of  uint16



}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes : public Entity
{
    public:
        Serdes();
        ~Serdes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList reg; //type: list of  uint16



}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList reg; //type: list of  uint16



}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac


class Mlan::Nodes::Node::SwitchStatusTable : public Entity
{
    public:
        SwitchStatusTable();
        ~SwitchStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SwitchStatus; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus> switch_status;


}; // Mlan::Nodes::Node::SwitchStatusTable


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus : public Entity
{
    public:
        SwitchStatus();
        ~SwitchStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rate_limit; //type: int32

        class SwReg1; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1
        class SwReg2; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2
        class SwStatus; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1> sw_reg_1;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2> sw_reg_2;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus> sw_status;


}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1 : public Entity
{
    public:
        SwReg1();
        ~SwReg1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList reg; //type: list of  uint16



}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2 : public Entity
{
    public:
        SwReg2();
        ~SwReg2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList reg; //type: list of  uint16



}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus : public Entity
{
    public:
        SwStatus();
        ~SwStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ppu; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf mac; //type: string
        YLeaf cpu_port; //type: uint16
        YLeaf cpu_mac; //type: uint16
        YLeaf initialized; //type: uint16
        YLeaf restarted; //type: uint16



}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus


class Mlan::Nodes::Node::PortCountersNumbers : public Entity
{
    public:
        PortCountersNumbers();
        ~PortCountersNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortCountersNumber; //type: Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber> > port_counters_number;


}; // Mlan::Nodes::Node::PortCountersNumbers


class Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber : public Entity
{
    public:
        PortCountersNumber();
        ~PortCountersNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class PortCounters; //type: Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters> port_counters;


}; // Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber


class Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters : public Entity
{
    public:
        PortCounters();
        ~PortCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_num; //type: uint32

        class MlanStats; //type: Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats> mlan_stats;


}; // Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters


class Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats : public Entity
{
    public:
        MlanStats();
        ~MlanStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_good_octets_hi; //type: uint32
        YLeaf in_good_octets; //type: uint32
        YLeaf in_bad_octets; //type: uint32
        YLeaf in_unicast_pkt; //type: uint32
        YLeaf in_bcast_pkt; //type: uint32
        YLeaf in_mcast_pkt; //type: uint32
        YLeaf in_pause_pkt; //type: uint32
        YLeaf in_undersize_pkt; //type: uint32
        YLeaf in_fragments; //type: uint32
        YLeaf in_oversize; //type: uint32
        YLeaf in_jabber; //type: uint32
        YLeaf in_rx_err; //type: uint32
        YLeaf in_fcs_err; //type: uint32
        YLeaf out_octets_hi; //type: uint32
        YLeaf out_octets; //type: uint32
        YLeaf out_unicast_pkt; //type: uint32
        YLeaf out_bcast_pkt; //type: uint32
        YLeaf out_mcast_pkt; //type: uint32
        YLeaf out_pause_pkt; //type: uint32
        YLeaf excessive; //type: uint32
        YLeaf collisions; //type: uint32
        YLeaf deferred; //type: uint32
        YLeaf single; //type: uint32
        YLeaf multiple; //type: uint32
        YLeaf out_fcs_err; //type: uint32
        YLeaf late; //type: uint32
        YLeaf rx_tx_64_octets; //type: uint32
        YLeaf rx_tx_65_127_octets; //type: uint32
        YLeaf rx_tx_128_255_octets; //type: uint32
        YLeaf rx_tx_256_511_octets; //type: uint32
        YLeaf rx_tx_512_1023_octets; //type: uint32
        YLeaf rx_tx_1024_max_octets; //type: uint32
        YLeaf in_discards; //type: uint32
        YLeaf in_filtered; //type: uint32
        YLeaf out_filtered; //type: uint32



}; // Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats


class Mlan::Nodes::Node::AtuEntryNumbers : public Entity
{
    public:
        AtuEntryNumbers();
        ~AtuEntryNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AtuEntryNumber; //type: Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber> > atu_entry_number;


}; // Mlan::Nodes::Node::AtuEntryNumbers


class Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber : public Entity
{
    public:
        AtuEntryNumber();
        ~AtuEntryNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: int32

        class SwitchCounters; //type: Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters> switch_counters;


}; // Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber


class Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters : public Entity
{
    public:
        SwitchCounters();
        ~SwitchCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry_num; //type: uint32

        class Atu; //type: Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu> atu;


}; // Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters


class Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu : public Entity
{
    public:
        Atu();
        ~Atu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf db_num; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf trunk; //type: boolean
        YLeaf dpv; //type: uint8
        YLeaf es; //type: uint8
        YLeafList macaddr; //type: list of  uint16



}; // Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_OPER_ */

