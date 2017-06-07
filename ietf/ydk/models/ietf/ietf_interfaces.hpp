#ifndef _IETF_INTERFACES_
#define _IETF_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace ietf_interfaces {

class InterfaceTypeIdentity : public virtual Identity
{
    public:
        InterfaceTypeIdentity();
        ~InterfaceTypeIdentity();


}; // InterfaceTypeIdentity

class Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Interface; //type: Interfaces::Interface

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface> > interface;
        
}; // Interfaces


class Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf type; //type: InterfaceTypeIdentity
        YLeaf enabled; //type: boolean
        YLeaf link_up_down_trap_enable; //type: LinkUpDownTrapEnableEnum
        class DiffservTargetEntry; //type: Interfaces::Interface::DiffservTargetEntry
        class Ipv4; //type: Interfaces::Interface::Ipv4
        class Ipv6; //type: Interfaces::Interface::Ipv6

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::DiffservTargetEntry> > diffserv_target_entry;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv4> ipv4; // presence node
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6> ipv6; // presence node
                class LinkUpDownTrapEnableEnum;

}; // Interfaces::Interface


class Interfaces::Interface::DiffservTargetEntry : public Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionIdentity
        YLeaf policy_name; //type: string

}; // Interfaces::Interface::DiffservTargetEntry


class Interfaces::Interface::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf forwarding; //type: boolean
        YLeaf mtu; //type: uint16
        class Address; //type: Interfaces::Interface::Ipv4::Address
        class Neighbor; //type: Interfaces::Interface::Ipv4::Neighbor

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv4::Address> > address;
        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv4::Neighbor> > neighbor;
        
}; // Interfaces::Interface::Ipv4


class Interfaces::Interface::Ipv4::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf netmask; //type: string

}; // Interfaces::Interface::Ipv4::Address


class Interfaces::Interface::Ipv4::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Ipv4::Neighbor


class Interfaces::Interface::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf forwarding; //type: boolean
        YLeaf mtu; //type: uint32
        YLeaf dup_addr_detect_transmits; //type: uint32
        class Address; //type: Interfaces::Interface::Ipv6::Address
        class Neighbor; //type: Interfaces::Interface::Ipv6::Neighbor
        class Autoconf; //type: Interfaces::Interface::Ipv6::Autoconf
        class Ipv6RouterAdvertisements; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Address> > address;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Autoconf> autoconf;
        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements> ipv6_router_advertisements;
        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Neighbor> > neighbor;
        
}; // Interfaces::Interface::Ipv6


class Interfaces::Interface::Ipv6::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf prefix_length; //type: uint8

}; // Interfaces::Interface::Ipv6::Address


class Interfaces::Interface::Ipv6::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf link_layer_address; //type: string

}; // Interfaces::Interface::Ipv6::Neighbor


class Interfaces::Interface::Ipv6::Autoconf : public Entity
{
    public:
        Autoconf();
        ~Autoconf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf create_global_addresses; //type: boolean
        YLeaf create_temporary_addresses; //type: boolean
        YLeaf temporary_valid_lifetime; //type: uint32
        YLeaf temporary_preferred_lifetime; //type: uint32

}; // Interfaces::Interface::Ipv6::Autoconf


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements : public Entity
{
    public:
        Ipv6RouterAdvertisements();
        ~Ipv6RouterAdvertisements();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_advertisements; //type: boolean
        YLeaf max_rtr_adv_interval; //type: uint16
        YLeaf min_rtr_adv_interval; //type: uint16
        YLeaf managed_flag; //type: boolean
        YLeaf other_config_flag; //type: boolean
        YLeaf link_mtu; //type: uint32
        YLeaf reachable_time; //type: uint32
        YLeaf retrans_timer; //type: uint32
        YLeaf cur_hop_limit; //type: uint8
        YLeaf default_lifetime; //type: uint16
        class PrefixList; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList

        std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList> prefix_list;
        
}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefix; //type: Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix

        std::vector<std::shared_ptr<ietf_interfaces::Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix> > prefix;
        
}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList


class Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_spec; //type: string
        YLeaf no_advertise; //type: empty
        YLeaf valid_lifetime; //type: uint32
        YLeaf on_link_flag; //type: boolean
        YLeaf preferred_lifetime; //type: uint32
        YLeaf autonomous_flag; //type: boolean

}; // Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix

class InterfacesState : public Entity
{
    public:
        InterfacesState();
        ~InterfacesState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Interface; //type: InterfacesState::Interface

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface> > interface;
        
}; // InterfacesState


class InterfacesState::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: InterfaceTypeIdentity
        YLeaf admin_status; //type: AdminStatusEnum
        YLeaf oper_status; //type: OperStatusEnum
        YLeaf last_change; //type: string
        YLeaf if_index; //type: int32
        YLeaf phys_address; //type: string
        YLeaf speed; //type: uint64
        YLeaf routing_instance; //type: string
        //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
        YLeafList higher_layer_if;
        //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
        YLeafList lower_layer_if;
        class Statistics; //type: InterfacesState::Interface::Statistics
        class DiffservTargetEntry; //type: InterfacesState::Interface::DiffservTargetEntry
        class Bandwidth; //type: InterfacesState::Interface::Bandwidth
        class Ipv4; //type: InterfacesState::Interface::Ipv4
        class Ipv6; //type: InterfacesState::Interface::Ipv6

        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Bandwidth> bandwidth;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry> > diffserv_target_entry;
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv4> ipv4; // presence node
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv6> ipv6; // presence node
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Statistics> statistics;
                class AdminStatusEnum;
        class OperStatusEnum;

}; // InterfacesState::Interface


class InterfacesState::Interface::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discontinuity_time; //type: string
        YLeaf in_octets; //type: uint64
        YLeaf in_unicast_pkts; //type: uint64
        YLeaf in_broadcast_pkts; //type: uint64
        YLeaf in_multicast_pkts; //type: uint64
        YLeaf in_discards; //type: uint32
        YLeaf in_errors; //type: uint32
        YLeaf in_unknown_protos; //type: uint32
        YLeaf out_octets; //type: uint64
        YLeaf out_unicast_pkts; //type: uint64
        YLeaf out_broadcast_pkts; //type: uint64
        YLeaf out_multicast_pkts; //type: uint64
        YLeaf out_discards; //type: uint32
        YLeaf out_errors; //type: uint32
        YLeaf in_pkts; //type: uint64
        YLeaf out_pkts; //type: uint64

}; // InterfacesState::Interface::Statistics


class InterfacesState::Interface::DiffservTargetEntry : public Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionIdentity
        YLeaf policy_name; //type: string
        class DiffservTargetClassifierStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics> > diffserv_target_classifier_statistics;
        
}; // InterfacesState::Interface::DiffservTargetEntry


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics : public Entity
{
    public:
        DiffservTargetClassifierStatistics();
        ~DiffservTargetClassifierStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classifier_entry_name; //type: string
        YLeaf parent_path; //type: string
        class ClassifierEntryStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics
        class MeterStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics
        class QueuingStatistics; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics

        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics> classifier_entry_statistics;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics> > meter_statistics;
        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics> queuing_statistics;
        
}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics : public Entity
{
    public:
        ClassifierEntryStatistics();
        ~ClassifierEntryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classified_pkts; //type: uint64
        YLeaf classified_bytes; //type: uint64
        YLeaf classified_rate; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics : public Entity
{
    public:
        MeterStatistics();
        ~MeterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf meter_id; //type: uint16
        YLeaf meter_succeed_pkts; //type: uint64
        YLeaf meter_succeed_bytes; //type: uint64
        YLeaf meter_failed_pkts; //type: uint64
        YLeaf meter_failed_bytes; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics : public Entity
{
    public:
        QueuingStatistics();
        ~QueuingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf output_pkts; //type: uint64
        YLeaf output_bytes; //type: uint64
        YLeaf queue_size_pkts; //type: uint64
        YLeaf queue_size_bytes; //type: uint64
        YLeaf drop_pkts; //type: uint64
        YLeaf drop_bytes; //type: uint64
        class WredStats; //type: InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats

        std::shared_ptr<ietf_interfaces::InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats> wred_stats;
        
}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics


class InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats : public Entity
{
    public:
        WredStats();
        ~WredStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf early_drop_pkts; //type: uint64
        YLeaf early_drop_bytes; //type: uint64

}; // InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats


class InterfacesState::Interface::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint64
        YLeaf units; //type: string

}; // InterfacesState::Interface::Bandwidth


class InterfacesState::Interface::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: boolean
        YLeaf mtu; //type: uint16
        class Address; //type: InterfacesState::Interface::Ipv4::Address
        class Neighbor; //type: InterfacesState::Interface::Ipv4::Neighbor

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv4::Address> > address;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv4::Neighbor> > neighbor;
        
}; // InterfacesState::Interface::Ipv4


class InterfacesState::Interface::Ipv4::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf netmask; //type: string
        YLeaf origin; //type: IpAddressOriginEnum

}; // InterfacesState::Interface::Ipv4::Address


class InterfacesState::Interface::Ipv4::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf link_layer_address; //type: string
        YLeaf origin; //type: NeighborOriginEnum

}; // InterfacesState::Interface::Ipv4::Neighbor


class InterfacesState::Interface::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: boolean
        YLeaf mtu; //type: uint32
        class Address; //type: InterfacesState::Interface::Ipv6::Address
        class Neighbor; //type: InterfacesState::Interface::Ipv6::Neighbor

        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv6::Address> > address;
        std::vector<std::shared_ptr<ietf_interfaces::InterfacesState::Interface::Ipv6::Neighbor> > neighbor;
        
}; // InterfacesState::Interface::Ipv6


class InterfacesState::Interface::Ipv6::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf origin; //type: IpAddressOriginEnum
        YLeaf status; //type: StatusEnum
        class StatusEnum;

}; // InterfacesState::Interface::Ipv6::Address


class InterfacesState::Interface::Ipv6::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf link_layer_address; //type: string
        YLeaf origin; //type: NeighborOriginEnum
        YLeaf is_router; //type: empty
        YLeaf state; //type: StateEnum
        class StateEnum;

}; // InterfacesState::Interface::Ipv6::Neighbor

class Interfaces::Interface::LinkUpDownTrapEnableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class InterfacesState::Interface::AdminStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};

class InterfacesState::Interface::OperStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf lower_layer_down;

};

class InterfacesState::Interface::Ipv6::Address::StatusEnum : public Enum
{
    public:
        static const Enum::YLeaf preferred;
        static const Enum::YLeaf deprecated;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf inaccessible;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf tentative;
        static const Enum::YLeaf duplicate;
        static const Enum::YLeaf optimistic;

};

class InterfacesState::Interface::Ipv6::Neighbor::StateEnum : public Enum
{
    public:
        static const Enum::YLeaf incomplete;
        static const Enum::YLeaf reachable;
        static const Enum::YLeaf stale;
        static const Enum::YLeaf delay;
        static const Enum::YLeaf probe;

};


}
}

#endif /* _IETF_INTERFACES_ */

