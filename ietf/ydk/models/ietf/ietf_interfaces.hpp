#ifndef _IETF_INTERFACES_
#define _IETF_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ietf {
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList interface;
        
}; // Interfaces


class Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf type; //type: InterfaceType
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf link_up_down_trap_enable; //type: LinkUpDownTrapEnable
        class DiffservTargetEntry; //type: Interfaces::Interface::DiffservTargetEntry
        class Ipv4; //type: Interfaces::Interface::Ipv4
        class Ipv6; //type: Interfaces::Interface::Ipv6

        ydk::YList diffserv_target_entry;
        std::shared_ptr<ietf::ietf_interfaces::Interfaces::Interface::Ipv4> ipv4; // presence node
        std::shared_ptr<ietf::ietf_interfaces::Interfaces::Interface::Ipv6> ipv6; // presence node
                class LinkUpDownTrapEnable;

}; // Interfaces::Interface


class Interfaces::Interface::DiffservTargetEntry : public ydk::Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf policy_name; //type: string

}; // Interfaces::Interface::DiffservTargetEntry


class Interfaces::Interface::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf forwarding; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        class Address; //type: Interfaces::Interface::Ipv4::Address
        class Neighbor; //type: Interfaces::Interface::Ipv4::Neighbor

        ydk::YList address;
        ydk::YList neighbor;
        
}; // Interfaces::Interface::Ipv4


class Interfaces::Interface::Ipv4::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Interfaces::Interface::Ipv4::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Ipv4::Neighbor


class Interfaces::Interface::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf forwarding; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf dup_addr_detect_transmits; //type: uint32
        class Address; //type: Interfaces::Interface::Ipv6::Address
        class Neighbor; //type: Interfaces::Interface::Ipv6::Neighbor
        class Autoconf; //type: Interfaces::Interface::Ipv6::Autoconf
        class Ipv6RouterAdvertisements; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements

        ydk::YList address;
        ydk::YList neighbor;
        std::shared_ptr<ietf::ietf_interfaces::Interfaces::Interface::Ipv6::Autoconf> autoconf;
        std::shared_ptr<ietf::ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements> ipv6_router_advertisements;
        
}; // Interfaces::Interface::Ipv6


class Interfaces::Interface::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::Ipv6::Address


class Interfaces::Interface::Ipv6::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Ipv6::Neighbor


class Interfaces::Interface::Ipv6::Autoconf : public ydk::Entity
{
    public:
        Autoconf();
        ~Autoconf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements : public ydk::Entity
{
    public:
        Ipv6RouterAdvertisements();
        ~Ipv6RouterAdvertisements();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<ietf::ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList> prefix_list;
        
}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix

        ydk::YList prefix;
        
}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList interface;
        
}; // InterfacesState


class InterfacesState::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: InterfaceType
        ydk::YLeaf admin_status; //type: AdminStatus
        ydk::YLeaf oper_status; //type: OperStatus
        ydk::YLeaf last_change; //type: string
        ydk::YLeaf if_index; //type: int32
        ydk::YLeaf phys_address; //type: string
        ydk::YLeaf speed; //type: uint64
        ydk::YLeaf routing_instance; //type: string
        //type: list of  string (refers to ietf::ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeafList higher_layer_if;
        //type: list of  string (refers to ietf::ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeafList lower_layer_if;
        class Statistics; //type: InterfacesState::Interface::Statistics
        class DiffservTargetEntry; //type: InterfacesState::Interface::DiffservTargetEntry
        class Ipv4; //type: InterfacesState::Interface::Ipv4
        class Ipv6; //type: InterfacesState::Interface::Ipv6

        std::shared_ptr<ietf::ietf_interfaces::InterfacesState::Interface::Statistics> statistics;
        ydk::YList diffserv_target_entry;
        std::shared_ptr<ietf::ietf_interfaces::InterfacesState::Interface::Ipv4> ipv4; // presence node
        std::shared_ptr<ietf::ietf_interfaces::InterfacesState::Interface::Ipv6> ipv6; // presence node
                class AdminStatus;
        class OperStatus;

}; // InterfacesState::Interface


class InterfacesState::Interface::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class InterfacesState::Interface::DiffservTargetEntry : public ydk::Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf policy_name; //type: string
        class DiffservTargetClassifierStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics

        ydk::YList diffserv_target_classifier_statistics;
        
}; // InterfacesState::Interface::DiffservTargetEntry


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics : public ydk::Entity
{
    public:
        DiffservTargetClassifierStatistics();
        ~DiffservTargetClassifierStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<ietf::ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics> classifier_entry_statistics;
        ydk::YList meter_statistics;
        std::shared_ptr<ietf::ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics> queuing_statistics;
        
}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics : public ydk::Entity
{
    public:
        ClassifierEntryStatistics();
        ~ClassifierEntryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<ietf::ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats> wred_stats;
        
}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats : public ydk::Entity
{
    public:
        WredStats();
        ~WredStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf early_drop_pkts; //type: uint64
        ydk::YLeaf early_drop_bytes; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats


class InterfacesState::Interface::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList address;
        ydk::YList neighbor;
        
}; // InterfacesState::Interface::Ipv4


class InterfacesState::Interface::Ipv4::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class InterfacesState::Interface::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        ydk::YList address;
        ydk::YList neighbor;
        
}; // InterfacesState::Interface::Ipv6


class InterfacesState::Interface::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

class Interfaces::Interface::LinkUpDownTrapEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class InterfacesState::Interface::AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

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


}
}

#endif /* _IETF_INTERFACES_ */

