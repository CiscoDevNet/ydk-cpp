#ifndef _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_OPER_
#define _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_oper {

class Mlan : public ydk::Entity
{
    public:
        Mlan();
        ~Mlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: Mlan::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes> nodes;
        
}; // Mlan


class Mlan::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Mlan::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node> > node;
        
}; // Mlan::Nodes


class Mlan::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        class PortStatusNumbers; //type: Mlan::Nodes::Node::PortStatusNumbers
        class SwitchStatusTable; //type: Mlan::Nodes::Node::SwitchStatusTable
        class PortCountersNumbers; //type: Mlan::Nodes::Node::PortCountersNumbers
        class AtuEntryNumbers; //type: Mlan::Nodes::Node::AtuEntryNumbers

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers> atu_entry_numbers;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers> port_counters_numbers;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers> port_status_numbers;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable> switch_status_table;
        
}; // Mlan::Nodes::Node


class Mlan::Nodes::Node::PortStatusNumbers : public ydk::Entity
{
    public:
        PortStatusNumbers();
        ~PortStatusNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortStatusNumber; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber> > port_status_number;
        
}; // Mlan::Nodes::Node::PortStatusNumbers


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber : public ydk::Entity
{
    public:
        PortStatusNumber();
        ~PortStatusNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class PortStatus; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus> port_status;
        
}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus : public ydk::Entity
{
    public:
        PortStatus();
        ~PortStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_num; //type: uint32
        ydk::YLeaf phy_valid; //type: uint32
        ydk::YLeaf serdes_valid; //type: uint32
        ydk::YLeaf mac_valid; //type: uint32
        class Config; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config
        class Phy; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy
        class Serdes; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes
        class Mac; //type: Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config> config;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac> mac;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy> phy;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes> serdes;
        
}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf duplex; //type: uint32
        ydk::YLeaf pause; //type: uint16
        ydk::YLeaf my_pause; //type: uint16
        ydk::YLeaf loopback; //type: uint32

}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy : public ydk::Entity
{
    public:
        Phy();
        ~Phy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList reg; //type: list of  uint16

}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes : public ydk::Entity
{
    public:
        Serdes();
        ~Serdes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList reg; //type: list of  uint16

}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes


class Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList reg; //type: list of  uint16

}; // Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac


class Mlan::Nodes::Node::SwitchStatusTable : public ydk::Entity
{
    public:
        SwitchStatusTable();
        ~SwitchStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SwitchStatus; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus> switch_status;
        
}; // Mlan::Nodes::Node::SwitchStatusTable


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus : public ydk::Entity
{
    public:
        SwitchStatus();
        ~SwitchStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate_limit; //type: int32
        class SwReg1; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1
        class SwReg2; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2
        class SwStatus; //type: Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1> sw_reg_1;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2> sw_reg_2;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus> sw_status;
        
}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1 : public ydk::Entity
{
    public:
        SwReg1();
        ~SwReg1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList reg; //type: list of  uint16

}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2 : public ydk::Entity
{
    public:
        SwReg2();
        ~SwReg2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList reg; //type: list of  uint16

}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2


class Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus : public ydk::Entity
{
    public:
        SwStatus();
        ~SwStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ppu; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac; //type: string
        ydk::YLeaf cpu_port; //type: uint16
        ydk::YLeaf cpu_mac; //type: uint16
        ydk::YLeaf initialized; //type: uint16
        ydk::YLeaf restarted; //type: uint16

}; // Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus


class Mlan::Nodes::Node::PortCountersNumbers : public ydk::Entity
{
    public:
        PortCountersNumbers();
        ~PortCountersNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortCountersNumber; //type: Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber> > port_counters_number;
        
}; // Mlan::Nodes::Node::PortCountersNumbers


class Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber : public ydk::Entity
{
    public:
        PortCountersNumber();
        ~PortCountersNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class PortCounters; //type: Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters> port_counters;
        
}; // Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber


class Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters : public ydk::Entity
{
    public:
        PortCounters();
        ~PortCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_num; //type: uint32
        class MlanStats; //type: Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats> mlan_stats;
        
}; // Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters


class Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats : public ydk::Entity
{
    public:
        MlanStats();
        ~MlanStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_good_octets_hi; //type: uint32
        ydk::YLeaf in_good_octets; //type: uint32
        ydk::YLeaf in_bad_octets; //type: uint32
        ydk::YLeaf in_unicast_pkt; //type: uint32
        ydk::YLeaf in_bcast_pkt; //type: uint32
        ydk::YLeaf in_mcast_pkt; //type: uint32
        ydk::YLeaf in_pause_pkt; //type: uint32
        ydk::YLeaf in_undersize_pkt; //type: uint32
        ydk::YLeaf in_fragments; //type: uint32
        ydk::YLeaf in_oversize; //type: uint32
        ydk::YLeaf in_jabber; //type: uint32
        ydk::YLeaf in_rx_err; //type: uint32
        ydk::YLeaf in_fcs_err; //type: uint32
        ydk::YLeaf out_octets_hi; //type: uint32
        ydk::YLeaf out_octets; //type: uint32
        ydk::YLeaf out_unicast_pkt; //type: uint32
        ydk::YLeaf out_bcast_pkt; //type: uint32
        ydk::YLeaf out_mcast_pkt; //type: uint32
        ydk::YLeaf out_pause_pkt; //type: uint32
        ydk::YLeaf excessive; //type: uint32
        ydk::YLeaf collisions; //type: uint32
        ydk::YLeaf deferred; //type: uint32
        ydk::YLeaf single; //type: uint32
        ydk::YLeaf multiple; //type: uint32
        ydk::YLeaf out_fcs_err; //type: uint32
        ydk::YLeaf late; //type: uint32
        ydk::YLeaf rx_tx_64_octets; //type: uint32
        ydk::YLeaf rx_tx_65_127_octets; //type: uint32
        ydk::YLeaf rx_tx_128_255_octets; //type: uint32
        ydk::YLeaf rx_tx_256_511_octets; //type: uint32
        ydk::YLeaf rx_tx_512_1023_octets; //type: uint32
        ydk::YLeaf rx_tx_1024_max_octets; //type: uint32
        ydk::YLeaf in_discards; //type: uint32
        ydk::YLeaf in_filtered; //type: uint32
        ydk::YLeaf out_filtered; //type: uint32

}; // Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats


class Mlan::Nodes::Node::AtuEntryNumbers : public ydk::Entity
{
    public:
        AtuEntryNumbers();
        ~AtuEntryNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AtuEntryNumber; //type: Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber> > atu_entry_number;
        
}; // Mlan::Nodes::Node::AtuEntryNumbers


class Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber : public ydk::Entity
{
    public:
        AtuEntryNumber();
        ~AtuEntryNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int32
        class SwitchCounters; //type: Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters> switch_counters;
        
}; // Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber


class Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters : public ydk::Entity
{
    public:
        SwitchCounters();
        ~SwitchCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_num; //type: uint32
        class Atu; //type: Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_ethctrl_oper::Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu> atu;
        
}; // Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters


class Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu : public ydk::Entity
{
    public:
        Atu();
        ~Atu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf db_num; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf trunk; //type: boolean
        ydk::YLeaf dpv; //type: uint8
        ydk::YLeaf es; //type: uint8
        ydk::YLeafList macaddr; //type: list of  uint16

}; // Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_OPER_ */

