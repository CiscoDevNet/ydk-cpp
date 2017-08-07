#ifndef _IETF_INTERFACES_
#define _IETF_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ietf_interfaces {

class InterfaceType : public virtual ydk::Identity
{
    public:
        InterfaceType();
        ~InterfaceType();


}; // InterfaceType

class Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Interfaces::Interface

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface> > interface;
        
}; // Interfaces


class Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf type; //type: InterfaceType
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf link_up_down_trap_enable; //type: LinkUpDownTrapEnable
        class PwNeighbor; //type: Interfaces::Interface::PwNeighbor
        class Ethernet; //type: Interfaces::Interface::Ethernet
        class DiffservTargetEntry; //type: Interfaces::Interface::DiffservTargetEntry
        class Ipv4; //type: Interfaces::Interface::Ipv4
        class Ipv6; //type: Interfaces::Interface::Ipv6

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::DiffservTargetEntry> > diffserv_target_entry;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ethernet> ethernet;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv4> ipv4; // presence node
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6> ipv6; // presence node
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor> pw_neighbor;
                class LinkUpDownTrapEnable;

}; // Interfaces::Interface


class Interfaces::Interface::PwNeighbor : public ydk::Entity
{
    public:
        PwNeighbor();
        ~PwNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf vc_id; //type: uint32
        //type: string (refers to cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::name)
        ydk::YLeaf source_template;
        ydk::YLeaf encapsulation; //type: PwEncapsulationType
        ydk::YLeaf control_word; //type: boolean
        ydk::YLeaf signaling_protocol; //type: PwSignalingProtocolType
        ydk::YLeaf vc_type; //type: PwVcType
        ydk::YLeaf switching_tlv; //type: boolean
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf tag_rewrite_ingress_vlan; //type: uint16
        ydk::YLeaf mac_withdraw; //type: boolean
        class StaticLabel; //type: Interfaces::Interface::PwNeighbor::StaticLabel
        class LoadBalance; //type: Interfaces::Interface::PwNeighbor::LoadBalance
        class PreferredPath; //type: Interfaces::Interface::PwNeighbor::PreferredPath
        class Sequencing; //type: Interfaces::Interface::PwNeighbor::Sequencing
        class Vccv; //type: Interfaces::Interface::PwNeighbor::Vccv
        class SwitchoverDelay; //type: Interfaces::Interface::PwNeighbor::SwitchoverDelay
        class Status; //type: Interfaces::Interface::PwNeighbor::Status

        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::LoadBalance> load_balance;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::PreferredPath> preferred_path;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::Sequencing> sequencing;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::StaticLabel> static_label;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::Status> status;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::SwitchoverDelay> switchover_delay;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::Vccv> vccv;
        
}; // Interfaces::Interface::PwNeighbor


class Interfaces::Interface::PwNeighbor::StaticLabel : public ydk::Entity
{
    public:
        StaticLabel();
        ~StaticLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32

}; // Interfaces::Interface::PwNeighbor::StaticLabel


class Interfaces::Interface::PwNeighbor::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: PwLbEthernetType
        ydk::YLeaf ip; //type: PwLbIpType
        class FlowLabel; //type: Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel

        std::shared_ptr<ietf_interfaces::Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel> flow_label;
        
}; // Interfaces::Interface::PwNeighbor::LoadBalance


class Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel : public ydk::Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf tlv_code_17; //type: boolean
        ydk::YLeaf static_; //type: boolean
        class Direction;

}; // Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel


class Interfaces::Interface::PwNeighbor::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf address; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf disable_fallback; //type: boolean

}; // Interfaces::Interface::PwNeighbor::PreferredPath


class Interfaces::Interface::PwNeighbor::Sequencing : public ydk::Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: PwSequencingType
        ydk::YLeaf resync; //type: int32

}; // Interfaces::Interface::PwNeighbor::Sequencing


class Interfaces::Interface::PwNeighbor::Vccv : public ydk::Entity
{
    public:
        Vccv();
        ~Vccv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control_word; //type: boolean

}; // Interfaces::Interface::PwNeighbor::Vccv


class Interfaces::Interface::PwNeighbor::SwitchoverDelay : public ydk::Entity
{
    public:
        SwitchoverDelay();
        ~SwitchoverDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchover_timer; //type: uint8
        ydk::YLeaf timer; //type: uint8
        ydk::YLeaf never; //type: boolean

}; // Interfaces::Interface::PwNeighbor::SwitchoverDelay


class Interfaces::Interface::PwNeighbor::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf decoupled; //type: boolean
        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf peer_topo_dual_homed; //type: boolean
        ydk::YLeaf route_watch_disable; //type: boolean
        ydk::YLeaf redundancy_master; //type: boolean

}; // Interfaces::Interface::PwNeighbor::Status


class Interfaces::Interface::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu_size; //type: uint16
        class TransmissionParams; //type: Interfaces::Interface::Ethernet::TransmissionParams

        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ethernet::TransmissionParams> transmission_params;
        
}; // Interfaces::Interface::Ethernet


class Interfaces::Interface::Ethernet::TransmissionParams : public ydk::Entity
{
    public:
        TransmissionParams();
        ~TransmissionParams();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_negotiate; //type: empty
        ydk::YLeaf duplex; //type: Duplex
        ydk::YLeaf speed; //type: EthIfSpeed
        class Duplex;

}; // Interfaces::Interface::Ethernet::TransmissionParams


class Interfaces::Interface::DiffservTargetEntry : public ydk::Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf service_policy_type; //type: PolicyType

}; // Interfaces::Interface::DiffservTargetEntry


class Interfaces::Interface::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: boolean
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        class Neighbor; //type: Interfaces::Interface::Ipv4::Neighbor
        class Address; //type: Interfaces::Interface::Ipv4::Address

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv4::Address> > address;
        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv4::Neighbor> > neighbor;
        
}; // Interfaces::Interface::Ipv4


class Interfaces::Interface::Ipv4::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Ipv4::Neighbor


class Interfaces::Interface::Ipv4::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf netmask; //type: string

}; // Interfaces::Interface::Ipv4::Address


class Interfaces::Interface::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf forwarding; //type: boolean
        ydk::YLeaf dup_addr_detect_transmits; //type: uint32
        class Autoconf; //type: Interfaces::Interface::Ipv6::Autoconf
        class Neighbor; //type: Interfaces::Interface::Ipv6::Neighbor
        class Address; //type: Interfaces::Interface::Ipv6::Address
        class Ipv6RouterAdvertisements; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Address> > address;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Autoconf> autoconf;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements> ipv6_router_advertisements;
        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Neighbor> > neighbor;
        
}; // Interfaces::Interface::Ipv6


class Interfaces::Interface::Ipv6::Autoconf : public ydk::Entity
{
    public:
        Autoconf();
        ~Autoconf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create_global_addresses; //type: boolean
        ydk::YLeaf create_temporary_addresses; //type: boolean
        ydk::YLeaf temporary_valid_lifetime; //type: uint32
        ydk::YLeaf temporary_preferred_lifetime; //type: uint32

}; // Interfaces::Interface::Ipv6::Autoconf


class Interfaces::Interface::Ipv6::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Ipv6::Neighbor


class Interfaces::Interface::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::Ipv6::Address


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements : public ydk::Entity
{
    public:
        Ipv6RouterAdvertisements();
        ~Ipv6RouterAdvertisements();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_advertisements; //type: boolean
        ydk::YLeaf max_rtr_adv_interval; //type: uint16
        ydk::YLeaf min_rtr_adv_interval; //type: uint16
        ydk::YLeaf managed_flag; //type: boolean
        ydk::YLeaf other_config_flag; //type: boolean
        ydk::YLeaf link_mtu; //type: uint32
        ydk::YLeaf reachable_time; //type: uint32
        ydk::YLeaf retrans_timer; //type: uint32
        ydk::YLeaf cur_hop_limit; //type: uint8
        ydk::YLeaf default_lifetime; //type: uint16
        class PrefixList; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList

        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList> prefix_list;
        
}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix> > prefix;
        
}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_spec; //type: string
        ydk::YLeaf no_advertise; //type: empty
        ydk::YLeaf valid_lifetime; //type: uint32
        ydk::YLeaf on_link_flag; //type: boolean
        ydk::YLeaf preferred_lifetime; //type: uint32
        ydk::YLeaf autonomous_flag; //type: boolean

}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix

class InterfacesState : public ydk::Entity
{
    public:
        InterfacesState();
        ~InterfacesState();

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

        class Interface; //type: InterfacesState::Interface

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface> > interface;
        
}; // InterfacesState


class InterfacesState::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf oper_status; //type: OperStatus
        ydk::YLeaf admin_status; //type: AdminStatus
        ydk::YLeaf last_change; //type: string
        ydk::YLeaf type; //type: InterfaceType
        ydk::YLeaf if_index; //type: int32
        ydk::YLeaf phys_address; //type: string
        ydk::YLeaf speed; //type: uint64
        ydk::YLeaf routing_instance; //type: string
        //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeafList lower_layer_if;
        //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeafList higher_layer_if;
        class Ipv4; //type: InterfacesState::Interface::Ipv4
        class Statistics; //type: InterfacesState::Interface::Statistics
        class Pseudowire; //type: InterfacesState::Interface::Pseudowire
        class DiffservTargetEntry; //type: InterfacesState::Interface::DiffservTargetEntry
        class Ipv6; //type: InterfacesState::Interface::Ipv6
        class Ethernet; //type: InterfacesState::Interface::Ethernet

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry> > diffserv_target_entry;
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ethernet> ethernet;
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv4> ipv4; // presence node
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv6> ipv6; // presence node
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Pseudowire> pseudowire;
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Statistics> statistics;
                class OperStatus;
        class AdminStatus;

}; // InterfacesState::Interface


class InterfacesState::Interface::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        class Address; //type: InterfacesState::Interface::Ipv4::Address
        class Neighbor; //type: InterfacesState::Interface::Ipv4::Neighbor

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv4::Address> > address;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv4::Neighbor> > neighbor;
        
}; // InterfacesState::Interface::Ipv4


class InterfacesState::Interface::Ipv4::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf origin; //type: IpAddressOrigin

}; // InterfacesState::Interface::Ipv4::Address


class InterfacesState::Interface::Ipv4::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf origin; //type: NeighborOrigin

}; // InterfacesState::Interface::Ipv4::Neighbor


class InterfacesState::Interface::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discontinuity_time; //type: string
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf in_unicast_pkts; //type: uint64
        ydk::YLeaf in_broadcast_pkts; //type: uint64
        ydk::YLeaf in_multicast_pkts; //type: uint64
        ydk::YLeaf in_discards; //type: uint32
        ydk::YLeaf in_errors; //type: uint32
        ydk::YLeaf in_unknown_protos; //type: uint32
        ydk::YLeaf out_octets; //type: uint64
        ydk::YLeaf out_unicast_pkts; //type: uint64
        ydk::YLeaf out_broadcast_pkts; //type: uint64
        ydk::YLeaf out_multicast_pkts; //type: uint64
        ydk::YLeaf out_discards; //type: uint32
        ydk::YLeaf out_errors; //type: uint32
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64

}; // InterfacesState::Interface::Statistics


class InterfacesState::Interface::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf vc_id; //type: uint32

}; // InterfacesState::Interface::Pseudowire


class InterfacesState::Interface::DiffservTargetEntry : public ydk::Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf policy_name; //type: string
        class DiffservTargetClassifierStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics> > diffserv_target_classifier_statistics;
        
}; // InterfacesState::Interface::DiffservTargetEntry


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics : public ydk::Entity
{
    public:
        DiffservTargetClassifierStatistics();
        ~DiffservTargetClassifierStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classifier_entry_name; //type: string
        ydk::YLeaf parent_path; //type: string
        class ClassifierEntryStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics
        class MeterStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics
        class QueuingStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics

        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics> classifier_entry_statistics;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics> > meter_statistics;
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics> queuing_statistics;
        
}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics : public ydk::Entity
{
    public:
        ClassifierEntryStatistics();
        ~ClassifierEntryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classified_pkts; //type: uint64
        ydk::YLeaf classified_bytes; //type: uint64
        ydk::YLeaf classified_rate; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics : public ydk::Entity
{
    public:
        MeterStatistics();
        ~MeterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf meter_id; //type: uint16
        ydk::YLeaf meter_succeed_pkts; //type: uint64
        ydk::YLeaf meter_succeed_bytes; //type: uint64
        ydk::YLeaf meter_failed_pkts; //type: uint64
        ydk::YLeaf meter_failed_bytes; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics : public ydk::Entity
{
    public:
        QueuingStatistics();
        ~QueuingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf output_pkts; //type: uint64
        ydk::YLeaf output_bytes; //type: uint64
        ydk::YLeaf queue_size_pkts; //type: uint64
        ydk::YLeaf queue_size_bytes; //type: uint64
        ydk::YLeaf drop_pkts; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        class WredStats; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats

        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats> wred_stats;
        
}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats : public ydk::Entity
{
    public:
        WredStats();
        ~WredStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf early_drop_pkts; //type: uint64
        ydk::YLeaf early_drop_bytes; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats


class InterfacesState::Interface::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        class Address; //type: InterfacesState::Interface::Ipv6::Address
        class Neighbor; //type: InterfacesState::Interface::Ipv6::Neighbor

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv6::Address> > address;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv6::Neighbor> > neighbor;
        
}; // InterfacesState::Interface::Ipv6


class InterfacesState::Interface::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf origin; //type: IpAddressOrigin
        ydk::YLeaf status; //type: Status
        class Status;

}; // InterfacesState::Interface::Ipv6::Address


class InterfacesState::Interface::Ipv6::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf origin; //type: NeighborOrigin
        ydk::YLeaf is_router; //type: empty
        ydk::YLeaf state; //type: State
        class State;

}; // InterfacesState::Interface::Ipv6::Neighbor


class InterfacesState::Interface::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duplex; //type: Duplex
        class SupportedMtuRange; //type: InterfacesState::Interface::Ethernet::SupportedMtuRange

        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ethernet::SupportedMtuRange> supported_mtu_range;
                class Duplex;

}; // InterfacesState::Interface::Ethernet


class InterfacesState::Interface::Ethernet::SupportedMtuRange : public ydk::Entity
{
    public:
        SupportedMtuRange();
        ~SupportedMtuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_mtu_size; //type: uint16
        ydk::YLeaf max_mtu_size; //type: uint16

}; // InterfacesState::Interface::Ethernet::SupportedMtuRange

class Interfaces::Interface::LinkUpDownTrapEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf both;

};

class Interfaces::Interface::Ethernet::TransmissionParams::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf half;
        static const ydk::Enum::YLeaf full;

};

class InterfacesState::Interface::OperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf not_present;
        static const ydk::Enum::YLeaf lower_layer_down;

};

class InterfacesState::Interface::AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class InterfacesState::Interface::Ipv6::Address::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preferred;
        static const ydk::Enum::YLeaf deprecated;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf inaccessible;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf tentative;
        static const ydk::Enum::YLeaf duplicate;
        static const ydk::Enum::YLeaf optimistic;

};

class InterfacesState::Interface::Ipv6::Neighbor::State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf reachable;
        static const ydk::Enum::YLeaf stale;
        static const ydk::Enum::YLeaf delay;
        static const ydk::Enum::YLeaf probe;

};

class InterfacesState::Interface::Ethernet::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf half;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf disagree;

};


}
}

#endif /* _IETF_INTERFACES_ */

