#ifndef _CISCO_IOS_XE_INTERFACES_OPER_
#define _CISCO_IOS_XE_INTERFACES_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_interfaces_oper {

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
        ydk::YLeaf interface_type; //type: IetfIntfType
        ydk::YLeaf admin_status; //type: IntfState
        ydk::YLeaf oper_status; //type: OperState
        ydk::YLeaf last_change; //type: string
        ydk::YLeaf if_index; //type: int32
        ydk::YLeaf phys_address; //type: string
        ydk::YLeaf speed; //type: uint64
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv4_subnet_mask; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf input_security_acl; //type: string
        ydk::YLeaf output_security_acl; //type: string
        ydk::YLeaf bia_address; //type: string
        ydk::YLeaf ipv4_tcp_adjust_mss; //type: uint16
        ydk::YLeaf ipv6_tcp_adjust_mss; //type: uint16
        ydk::YLeaf intf_class_unspecified; //type: boolean
        ydk::YLeafList higher_layer_if; //type: list of  string
        ydk::YLeafList lower_layer_if; //type: list of  string
        ydk::YLeafList ipv6_addrs; //type: list of  string
        class Statistics; //type: Interfaces::Interface::Statistics
        class DiffservInfo; //type: Interfaces::Interface::DiffservInfo
        class V4ProtocolStats; //type: Interfaces::Interface::V4ProtocolStats
        class V6ProtocolStats; //type: Interfaces::Interface::V6ProtocolStats
        class LagAggregateState; //type: Interfaces::Interface::LagAggregateState
        class EtherState; //type: Interfaces::Interface::EtherState
        class EtherStats; //type: Interfaces::Interface::EtherStats
        class SerialState; //type: Interfaces::Interface::SerialState
        class SerialStats; //type: Interfaces::Interface::SerialStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::Statistics> statistics;
        ydk::YList diffserv_info;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::V4ProtocolStats> v4_protocol_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::V6ProtocolStats> v6_protocol_stats;
        ydk::YList lag_aggregate_state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::EtherState> ether_state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::EtherStats> ether_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::SerialState> serial_state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::SerialStats> serial_stats;
        
}; // Interfaces::Interface


class Interfaces::Interface::Statistics : public ydk::Entity
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
        ydk::YLeaf out_octets; //type: uint32
        ydk::YLeaf out_unicast_pkts; //type: uint64
        ydk::YLeaf out_broadcast_pkts; //type: uint64
        ydk::YLeaf out_multicast_pkts; //type: uint64
        ydk::YLeaf out_discards; //type: uint64
        ydk::YLeaf out_errors; //type: uint64
        ydk::YLeaf rx_pps; //type: uint64
        ydk::YLeaf rx_kbps; //type: uint64
        ydk::YLeaf tx_pps; //type: uint64
        ydk::YLeaf tx_kbps; //type: uint64
        ydk::YLeaf num_flaps; //type: uint64
        ydk::YLeaf in_crc_errors; //type: uint64

}; // Interfaces::Interface::Statistics


class Interfaces::Interface::DiffservInfo : public ydk::Entity
{
    public:
        DiffservInfo();
        ~DiffservInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: QosDirection
        ydk::YLeaf policy_name; //type: string
        class DiffservTargetClassifierStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats
        class PriorityOperList; //type: Interfaces::Interface::DiffservInfo::PriorityOperList

        ydk::YList diffserv_target_classifier_stats;
        ydk::YList priority_oper_list;
        
}; // Interfaces::Interface::DiffservInfo


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats : public ydk::Entity
{
    public:
        DiffservTargetClassifierStats();
        ~DiffservTargetClassifierStats();

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
        class ClassifierEntryStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats
        class MeterStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats
        class QueuingStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats
        class SubclassList; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList
        class MarkingStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats> classifier_entry_stats;
        ydk::YList meter_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats> queuing_stats;
        ydk::YList subclass_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats> marking_stats;
        
}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats : public ydk::Entity
{
    public:
        ClassifierEntryStats();
        ~ClassifierEntryStats();

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

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats : public ydk::Entity
{
    public:
        MeterStats();
        ~MeterStats();

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

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats : public ydk::Entity
{
    public:
        QueuingStats();
        ~QueuingStats();

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
        class WredStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats
        class CacStats; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats> wred_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats> cac_stats;
        
}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats : public ydk::Entity
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
        ydk::YLeaf mean_queue_depth; //type: uint16
        ydk::YLeaf transmitted_pkts; //type: uint64
        ydk::YLeaf transmitted_bytes; //type: uint64
        ydk::YLeaf tail_drop_pkts; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf drop_pkts_flow; //type: uint64
        ydk::YLeaf drop_pkts_no_buffer; //type: uint64
        ydk::YLeaf queue_peak_size_pkts; //type: uint64
        ydk::YLeaf queue_peak_size_bytes; //type: uint64
        ydk::YLeaf bandwidth_exceed_drops; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_admitted_flows; //type: uint32
        ydk::YLeaf num_non_admitted_flows; //type: uint32

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList : public ydk::Entity
{
    public:
        SubclassList();
        ~SubclassList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf match_type; //type: QosMatchType
        class CosCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters
        class CosDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault
        class DscpCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters
        class DscpDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault
        class DiscardClassCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters
        class DiscClassDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault
        class PrecedenceCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters
        class PrecDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault
        class MplsExpCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters
        class MplsExpDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault
        class DeiCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters
        class DeiCountsDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault
        class ClpCounters; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters
        class ClpDefault; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault

        ydk::YList cos_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault> cos_default;
        ydk::YList dscp_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault> dscp_default;
        ydk::YList discard_class_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault> disc_class_default;
        ydk::YList precedence_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault> prec_default;
        ydk::YList mpls_exp_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault> mpls_exp_default;
        ydk::YList dei_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault> dei_counts_default;
        ydk::YList clp_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault> clp_default;
        
}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters : public ydk::Entity
{
    public:
        CosCounters();
        ~CosCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_min; //type: uint32
        ydk::YLeaf cos_max; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault : public ydk::Entity
{
    public:
        CosDefault();
        ~CosDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters : public ydk::Entity
{
    public:
        DscpCounters();
        ~DscpCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_min; //type: uint32
        ydk::YLeaf dscp_max; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault : public ydk::Entity
{
    public:
        DscpDefault();
        ~DscpDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters : public ydk::Entity
{
    public:
        DiscardClassCounters();
        ~DiscardClassCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disc_class_min; //type: uint32
        ydk::YLeaf disc_class_max; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault : public ydk::Entity
{
    public:
        DiscClassDefault();
        ~DiscClassDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters : public ydk::Entity
{
    public:
        PrecedenceCounters();
        ~PrecedenceCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec_min; //type: uint32
        ydk::YLeaf prec_max; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault : public ydk::Entity
{
    public:
        PrecDefault();
        ~PrecDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters : public ydk::Entity
{
    public:
        MplsExpCounters();
        ~MplsExpCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_min; //type: uint32
        ydk::YLeaf exp_max; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault : public ydk::Entity
{
    public:
        MplsExpDefault();
        ~MplsExpDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters : public ydk::Entity
{
    public:
        DeiCounters();
        ~DeiCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dei_min; //type: uint32
        ydk::YLeaf dei_max; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault : public ydk::Entity
{
    public:
        DeiCountsDefault();
        ~DeiCountsDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters : public ydk::Entity
{
    public:
        ClpCounters();
        ~ClpCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clp_val; //type: uint32
        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault : public ydk::Entity
{
    public:
        ClpDefault();
        ~ClpDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_tx_pkts; //type: uint64
        ydk::YLeaf wred_tx_bytes; //type: uint64
        ydk::YLeaf wred_tail_drop_pkts; //type: uint64
        ydk::YLeaf wred_tail_drop_bytes; //type: uint64
        ydk::YLeaf wred_early_drop_pkts; //type: uint64
        ydk::YLeaf wred_early_drop_bytes; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats : public ydk::Entity
{
    public:
        MarkingStats();
        ~MarkingStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MarkingDscpStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal
        class MarkingDscpTunnelStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal
        class MarkingCosStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal
        class MarkingCosInnerStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal
        class MarkingDiscardClassStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal
        class MarkingQosGrpStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal
        class MarkingPrecStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal
        class MarkingPrecTunnelStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal
        class MarkingMplsExpImpStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal
        class MarkingMplsExpTopStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal
        class MarkingFrDeStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal
        class MarkingFrFecnBecnStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal
        class MarkingAtmClpStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal
        class MarkingVlanInnerStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal
        class MarkingDeiStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal
        class MarkingDeiImpStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal
        class MarkingSrpPriorityStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal
        class MarkingWlanUserPriorityStatsVal; //type: Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal> marking_dscp_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal> marking_dscp_tunnel_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal> marking_cos_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal> marking_cos_inner_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal> marking_discard_class_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal> marking_qos_grp_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal> marking_prec_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal> marking_prec_tunnel_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal> marking_mpls_exp_imp_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal> marking_mpls_exp_top_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal> marking_fr_de_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal> marking_fr_fecn_becn_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal> marking_atm_clp_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal> marking_vlan_inner_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal> marking_dei_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal> marking_dei_imp_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal> marking_srp_priority_stats_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal> marking_wlan_user_priority_stats_val;
        
}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal : public ydk::Entity
{
    public:
        MarkingDscpStatsVal();
        ~MarkingDscpStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal : public ydk::Entity
{
    public:
        MarkingDscpTunnelStatsVal();
        ~MarkingDscpTunnelStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal : public ydk::Entity
{
    public:
        MarkingCosStatsVal();
        ~MarkingCosStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal : public ydk::Entity
{
    public:
        MarkingCosInnerStatsVal();
        ~MarkingCosInnerStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_inner_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal : public ydk::Entity
{
    public:
        MarkingDiscardClassStatsVal();
        ~MarkingDiscardClassStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disc_class_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal : public ydk::Entity
{
    public:
        MarkingQosGrpStatsVal();
        ~MarkingQosGrpStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_grp_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal : public ydk::Entity
{
    public:
        MarkingPrecStatsVal();
        ~MarkingPrecStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal : public ydk::Entity
{
    public:
        MarkingPrecTunnelStatsVal();
        ~MarkingPrecTunnelStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal : public ydk::Entity
{
    public:
        MarkingMplsExpImpStatsVal();
        ~MarkingMplsExpImpStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls_exp_imp_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal : public ydk::Entity
{
    public:
        MarkingMplsExpTopStatsVal();
        ~MarkingMplsExpTopStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls_exp_top_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal : public ydk::Entity
{
    public:
        MarkingFrDeStatsVal();
        ~MarkingFrDeStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_de; //type: boolean
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal : public ydk::Entity
{
    public:
        MarkingFrFecnBecnStatsVal();
        ~MarkingFrFecnBecnStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fecn_becn_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal : public ydk::Entity
{
    public:
        MarkingAtmClpStatsVal();
        ~MarkingAtmClpStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_clp_val; //type: uint8
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal : public ydk::Entity
{
    public:
        MarkingVlanInnerStatsVal();
        ~MarkingVlanInnerStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_inner_val; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal : public ydk::Entity
{
    public:
        MarkingDeiStatsVal();
        ~MarkingDeiStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dei_imp_value; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal : public ydk::Entity
{
    public:
        MarkingDeiImpStatsVal();
        ~MarkingDeiImpStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dei_imp_value; //type: uint32
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal : public ydk::Entity
{
    public:
        MarkingSrpPriorityStatsVal();
        ~MarkingSrpPriorityStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srp_priority_value; //type: uint8
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal


class Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal : public ydk::Entity
{
    public:
        MarkingWlanUserPriorityStatsVal();
        ~MarkingWlanUserPriorityStatsVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wlan_user_priority_value; //type: uint8
        ydk::YLeaf marked_pkts; //type: uint64

}; // Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal


class Interfaces::Interface::DiffservInfo::PriorityOperList : public ydk::Entity
{
    public:
        PriorityOperList();
        ~PriorityOperList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_level; //type: uint16
        class AggPriorityStats; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats
        class QlimitDefaultThresh; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh
        class QlimitCosThreshList; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList
        class QlimitDiscClassThreshList; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList
        class QlimitQosGrpThreshList; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList
        class QlimitMplsExpThreshList; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList
        class QlimitDscpThreshList; //type: Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats> agg_priority_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_interfaces_oper::Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh> qlimit_default_thresh;
        ydk::YList qlimit_cos_thresh_list;
        ydk::YList qlimit_disc_class_thresh_list;
        ydk::YList qlimit_qos_grp_thresh_list;
        ydk::YList qlimit_mpls_exp_thresh_list;
        ydk::YList qlimit_dscp_thresh_list;
        
}; // Interfaces::Interface::DiffservInfo::PriorityOperList


class Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats : public ydk::Entity
{
    public:
        AggPriorityStats();
        ~AggPriorityStats();

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
        ydk::YLeaf drop_pkts_flow; //type: uint64
        ydk::YLeaf drop_pkts_no_buffer; //type: uint64

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats


class Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh : public ydk::Entity
{
    public:
        QlimitDefaultThresh();
        ~QlimitDefaultThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf thresh_size_metric; //type: uint32
        ydk::YLeaf unit_val; //type: ThreshUnit
        ydk::YLeaf threshold_interval; //type: uint64
        ydk::YLeaf thresh_interval_metric; //type: uint32
        ydk::YLeaf interval_unit_val; //type: ThreshUnit

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh


class Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList : public ydk::Entity
{
    public:
        QlimitCosThreshList();
        ~QlimitCosThreshList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_min; //type: uint32
        ydk::YLeaf cos_max; //type: uint32
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf thresh_size_metric; //type: uint32
        ydk::YLeaf unit_val; //type: ThreshUnit
        ydk::YLeaf threshold_interval; //type: uint64
        ydk::YLeaf thresh_interval_metric; //type: uint32
        ydk::YLeaf interval_unit_val; //type: ThreshUnit

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList


class Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList : public ydk::Entity
{
    public:
        QlimitDiscClassThreshList();
        ~QlimitDiscClassThreshList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disc_class_min; //type: uint32
        ydk::YLeaf disc_class_max; //type: uint32
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf thresh_size_metric; //type: uint32
        ydk::YLeaf unit_val; //type: ThreshUnit
        ydk::YLeaf threshold_interval; //type: uint64
        ydk::YLeaf thresh_interval_metric; //type: uint32
        ydk::YLeaf interval_unit_val; //type: ThreshUnit

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList


class Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList : public ydk::Entity
{
    public:
        QlimitQosGrpThreshList();
        ~QlimitQosGrpThreshList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_group_min; //type: uint32
        ydk::YLeaf qos_group_max; //type: uint32
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf thresh_size_metric; //type: uint32
        ydk::YLeaf unit_val; //type: ThreshUnit
        ydk::YLeaf threshold_interval; //type: uint64
        ydk::YLeaf thresh_interval_metric; //type: uint32
        ydk::YLeaf interval_unit_val; //type: ThreshUnit

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList


class Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList : public ydk::Entity
{
    public:
        QlimitMplsExpThreshList();
        ~QlimitMplsExpThreshList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_min; //type: uint32
        ydk::YLeaf exp_max; //type: uint32
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf thresh_size_metric; //type: uint32
        ydk::YLeaf unit_val; //type: ThreshUnit
        ydk::YLeaf threshold_interval; //type: uint64
        ydk::YLeaf thresh_interval_metric; //type: uint32
        ydk::YLeaf interval_unit_val; //type: ThreshUnit

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList


class Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList : public ydk::Entity
{
    public:
        QlimitDscpThreshList();
        ~QlimitDscpThreshList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_min; //type: uint32
        ydk::YLeaf dscp_max; //type: uint32
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf thresh_size_metric; //type: uint32
        ydk::YLeaf unit_val; //type: ThreshUnit
        ydk::YLeaf threshold_interval; //type: uint64
        ydk::YLeaf thresh_interval_metric; //type: uint32
        ydk::YLeaf interval_unit_val; //type: ThreshUnit

}; // Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList


class Interfaces::Interface::V4ProtocolStats : public ydk::Entity
{
    public:
        V4ProtocolStats();
        ~V4ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf in_error_pkts; //type: uint64
        ydk::YLeaf in_forwarded_pkts; //type: uint64
        ydk::YLeaf in_forwarded_octets; //type: uint64
        ydk::YLeaf in_discarded_pkts; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64
        ydk::YLeaf out_error_pkts; //type: uint64
        ydk::YLeaf out_forwarded_pkts; //type: uint64
        ydk::YLeaf out_forwarded_octets; //type: uint64
        ydk::YLeaf out_discarded_pkts; //type: uint64

}; // Interfaces::Interface::V4ProtocolStats


class Interfaces::Interface::V6ProtocolStats : public ydk::Entity
{
    public:
        V6ProtocolStats();
        ~V6ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf in_error_pkts; //type: uint64
        ydk::YLeaf in_forwarded_pkts; //type: uint64
        ydk::YLeaf in_forwarded_octets; //type: uint64
        ydk::YLeaf in_discarded_pkts; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64
        ydk::YLeaf out_error_pkts; //type: uint64
        ydk::YLeaf out_forwarded_pkts; //type: uint64
        ydk::YLeaf out_forwarded_octets; //type: uint64
        ydk::YLeaf out_discarded_pkts; //type: uint64

}; // Interfaces::Interface::V6ProtocolStats


class Interfaces::Interface::LagAggregateState : public ydk::Entity
{
    public:
        LagAggregateState();
        ~LagAggregateState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregate_id; //type: string
        ydk::YLeaf lag_type; //type: AggregationType
        ydk::YLeaf min_links; //type: uint16
        ydk::YLeaf lag_speed; //type: uint32
        ydk::YLeafList members; //type: list of  string

}; // Interfaces::Interface::LagAggregateState


class Interfaces::Interface::EtherState : public ydk::Entity
{
    public:
        EtherState();
        ~EtherState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated_duplex_mode; //type: EtherDuplex
        ydk::YLeaf negotiated_port_speed; //type: EtherSpeed
        ydk::YLeaf auto_negotiate; //type: boolean
        ydk::YLeaf enable_flow_control; //type: boolean

}; // Interfaces::Interface::EtherState


class Interfaces::Interface::EtherStats : public ydk::Entity
{
    public:
        EtherStats();
        ~EtherStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_mac_control_frames; //type: uint64
        ydk::YLeaf in_mac_pause_frames; //type: uint64
        ydk::YLeaf in_oversize_frames; //type: uint64
        ydk::YLeaf in_jabber_frames; //type: uint64
        ydk::YLeaf in_fragment_frames; //type: uint64
        ydk::YLeaf in_8021q_frames; //type: uint64
        ydk::YLeaf out_mac_control_frames; //type: uint64
        ydk::YLeaf out_mac_pause_frames; //type: uint64
        ydk::YLeaf out_8021q_frames; //type: uint64

}; // Interfaces::Interface::EtherStats


class Interfaces::Interface::SerialState : public ydk::Entity
{
    public:
        SerialState();
        ~SerialState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crc_type; //type: SerialCrc
        ydk::YLeaf loopback; //type: T1e1LoopbackMode
        ydk::YLeaf keeplive; //type: uint32
        ydk::YLeaf timeslot; //type: uint32
        ydk::YLeaf subrate; //type: SubrateSpeed

}; // Interfaces::Interface::SerialState


class Interfaces::Interface::SerialStats : public ydk::Entity
{
    public:
        SerialStats();
        ~SerialStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_abort_clock_error; //type: uint32

}; // Interfaces::Interface::SerialStats

class QosMatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos_match_dscp;
        static const ydk::Enum::YLeaf qos_match_src_ip;
        static const ydk::Enum::YLeaf qos_match_dst_ip;
        static const ydk::Enum::YLeaf qos_match_src_port;
        static const ydk::Enum::YLeaf qos_match_dst_port;
        static const ydk::Enum::YLeaf qos_match_proto;

};

class ThreshUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_units_default;
        static const ydk::Enum::YLeaf thresh_units_bytes;
        static const ydk::Enum::YLeaf thresh_units_sec;
        static const ydk::Enum::YLeaf thresh_units_packets;
        static const ydk::Enum::YLeaf thresh_units_cells;
        static const ydk::Enum::YLeaf thresh_units_percent;

};

class QosDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos_inbound;
        static const ydk::Enum::YLeaf qos_outbound;

};

class AggregationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lag_off;
        static const ydk::Enum::YLeaf lag_auto;
        static const ydk::Enum::YLeaf lag_active;
        static const ydk::Enum::YLeaf lag_passive;

};

class IntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf if_state_unknown;
        static const ydk::Enum::YLeaf if_state_up;
        static const ydk::Enum::YLeaf if_state_down;
        static const ydk::Enum::YLeaf if_state_test;

};

class EtherDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full_duplex;
        static const ydk::Enum::YLeaf half_duplex;
        static const ydk::Enum::YLeaf auto_duplex;
        static const ydk::Enum::YLeaf unknown_duplex;

};

class EtherSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf speed_10mb;
        static const ydk::Enum::YLeaf speed_100mb;
        static const ydk::Enum::YLeaf speed_1gb;
        static const ydk::Enum::YLeaf speed_10gb;
        static const ydk::Enum::YLeaf speed_25gb;
        static const ydk::Enum::YLeaf speed_40gb;
        static const ydk::Enum::YLeaf speed_50gb;
        static const ydk::Enum::YLeaf speed_100gb;
        static const ydk::Enum::YLeaf speed_unknown;
        static const ydk::Enum::YLeaf speed_auto;

};

class OperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf if_oper_state_invalid;
        static const ydk::Enum::YLeaf if_oper_state_ready;
        static const ydk::Enum::YLeaf if_oper_state_no_pass;
        static const ydk::Enum::YLeaf if_oper_state_test;
        static const ydk::Enum::YLeaf if_oper_state_unknown;
        static const ydk::Enum::YLeaf if_oper_state_dormant;
        static const ydk::Enum::YLeaf if_oper_state_not_present;
        static const ydk::Enum::YLeaf if_oper_state_lower_layer_down;

};

class IetfIntfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iana_iftype_other;
        static const ydk::Enum::YLeaf iana_iftype_regular1822;
        static const ydk::Enum::YLeaf iana_iftype_hdh1822;
        static const ydk::Enum::YLeaf iana_iftype_ddnx25;
        static const ydk::Enum::YLeaf iana_iftype_rfc877x25;
        static const ydk::Enum::YLeaf iana_iftype_ethernet_csmacd;
        static const ydk::Enum::YLeaf iana_iftype_iso88023_csmacd;
        static const ydk::Enum::YLeaf iana_iftype_iso88024_tokenbus;
        static const ydk::Enum::YLeaf iana_iftype_iso88025_tokenring;
        static const ydk::Enum::YLeaf iana_iftype_iso88026_man;
        static const ydk::Enum::YLeaf iana_iftype_starlan;
        static const ydk::Enum::YLeaf iana_iftype_proteon10mbit;
        static const ydk::Enum::YLeaf iana_iftype_proteon80mbit;
        static const ydk::Enum::YLeaf iana_iftype_hyperchannel;
        static const ydk::Enum::YLeaf iana_iftype_fddi;
        static const ydk::Enum::YLeaf iana_iftype_lapb;
        static const ydk::Enum::YLeaf iana_iftype_sdlc;
        static const ydk::Enum::YLeaf iana_iftype_ds1;
        static const ydk::Enum::YLeaf iana_iftype_e1;
        static const ydk::Enum::YLeaf iana_iftype_basicisdn;
        static const ydk::Enum::YLeaf iana_iftype_primaryisdn;
        static const ydk::Enum::YLeaf iana_iftype_prop_p2p_serial;
        static const ydk::Enum::YLeaf iana_iftype_ppp;
        static const ydk::Enum::YLeaf iana_iftype_sw_loopback;
        static const ydk::Enum::YLeaf iana_iftype_eon;
        static const ydk::Enum::YLeaf iana_iftype_ethernet3mbit;
        static const ydk::Enum::YLeaf iana_iftype_nsip;
        static const ydk::Enum::YLeaf iana_iftype_slip;
        static const ydk::Enum::YLeaf iana_iftype_ultra;
        static const ydk::Enum::YLeaf iana_iftype_ds3;
        static const ydk::Enum::YLeaf iana_iftype_sip;
        static const ydk::Enum::YLeaf iana_iftype_framerelay;
        static const ydk::Enum::YLeaf iana_iftype_rs232;
        static const ydk::Enum::YLeaf iana_iftype_para;
        static const ydk::Enum::YLeaf iana_iftype_arcnet;
        static const ydk::Enum::YLeaf iana_iftype_arcnetplus;
        static const ydk::Enum::YLeaf iana_iftype_atm;
        static const ydk::Enum::YLeaf iana_iftype_miox25;
        static const ydk::Enum::YLeaf iana_iftype_sonet;
        static const ydk::Enum::YLeaf iana_iftype_x25ple;
        static const ydk::Enum::YLeaf iana_iftype_iso88022_llc;
        static const ydk::Enum::YLeaf iana_iftype_localtalk;
        static const ydk::Enum::YLeaf iana_iftype_smdsdxi;
        static const ydk::Enum::YLeaf iana_iftype_framerelay_service;
        static const ydk::Enum::YLeaf iana_iftype_v35;
        static const ydk::Enum::YLeaf iana_iftype_hssi;
        static const ydk::Enum::YLeaf iana_iftype_hippi;
        static const ydk::Enum::YLeaf iana_iftype_modem;
        static const ydk::Enum::YLeaf iana_iftype_aal5;
        static const ydk::Enum::YLeaf iana_iftype_sonetpath;
        static const ydk::Enum::YLeaf iana_iftype_sonetvt;
        static const ydk::Enum::YLeaf iana_iftype_smdsicip;
        static const ydk::Enum::YLeaf iana_iftype_propvirtual;
        static const ydk::Enum::YLeaf iana_iftype_propmultiplexor;
        static const ydk::Enum::YLeaf iana_iftype_ieee80212;
        static const ydk::Enum::YLeaf iana_iftype_fiberchannel;
        static const ydk::Enum::YLeaf iana_iftype_hippi_interface;
        static const ydk::Enum::YLeaf iana_iftype_framerelay_interconnect;
        static const ydk::Enum::YLeaf iana_iftype_aflane8023;
        static const ydk::Enum::YLeaf iana_iftype_aflane8025;
        static const ydk::Enum::YLeaf iana_iftype_cctemul;
        static const ydk::Enum::YLeaf iana_iftype_fastether;
        static const ydk::Enum::YLeaf iana_iftype_isdn;
        static const ydk::Enum::YLeaf iana_iftype_v11;
        static const ydk::Enum::YLeaf iana_iftype_v36;
        static const ydk::Enum::YLeaf iana_iftype_g703at64k;
        static const ydk::Enum::YLeaf iana_iftype_g703at2mb;
        static const ydk::Enum::YLeaf iana_iftype_qllc;
        static const ydk::Enum::YLeaf iana_iftype_fastetherfx;
        static const ydk::Enum::YLeaf iana_iftype_channel;
        static const ydk::Enum::YLeaf iana_iftype_ieee80211;
        static const ydk::Enum::YLeaf iana_iftype_ibm370parchan;
        static const ydk::Enum::YLeaf iana_iftype_escon;
        static const ydk::Enum::YLeaf iana_iftype_dlsw;
        static const ydk::Enum::YLeaf iana_iftype_isdns;
        static const ydk::Enum::YLeaf iana_iftype_isdnu;
        static const ydk::Enum::YLeaf iana_iftype_lapd;
        static const ydk::Enum::YLeaf iana_iftype_ipswitch;
        static const ydk::Enum::YLeaf iana_iftype_rsrb;
        static const ydk::Enum::YLeaf iana_iftype_atmlogical;
        static const ydk::Enum::YLeaf iana_iftype_ds0;
        static const ydk::Enum::YLeaf iana_iftype_ds0bundle;
        static const ydk::Enum::YLeaf iana_iftype_bsc;
        static const ydk::Enum::YLeaf iana_iftype_async;
        static const ydk::Enum::YLeaf iana_iftype_cnr;
        static const ydk::Enum::YLeaf iana_iftype_iso88025_dtr;
        static const ydk::Enum::YLeaf iana_iftype_eplrs;
        static const ydk::Enum::YLeaf iana_iftype_arap;
        static const ydk::Enum::YLeaf iana_iftype_propcnls;
        static const ydk::Enum::YLeaf iana_iftype_hostpad;
        static const ydk::Enum::YLeaf iana_iftype_termpad;
        static const ydk::Enum::YLeaf iana_iftype_framerelay_mpi;
        static const ydk::Enum::YLeaf iana_iftype_x213;
        static const ydk::Enum::YLeaf iana_iftype_adsl;
        static const ydk::Enum::YLeaf iana_iftype_radsl;
        static const ydk::Enum::YLeaf iana_iftype_sdsl;
        static const ydk::Enum::YLeaf iana_iftype_vdsl;
        static const ydk::Enum::YLeaf iana_iftype_iso88025_crfpint;
        static const ydk::Enum::YLeaf iana_iftype_myrinet;
        static const ydk::Enum::YLeaf iana_iftype_voiceem;
        static const ydk::Enum::YLeaf iana_iftype_voicefxo;
        static const ydk::Enum::YLeaf iana_iftype_voicefxs;
        static const ydk::Enum::YLeaf iana_iftype_voiceencap;
        static const ydk::Enum::YLeaf iana_iftype_voip;
        static const ydk::Enum::YLeaf iana_iftype_atmdxi;
        static const ydk::Enum::YLeaf iana_iftype_atmfuni;
        static const ydk::Enum::YLeaf iana_iftype_atmima;
        static const ydk::Enum::YLeaf iana_iftype_ppp_multilinkbundle;
        static const ydk::Enum::YLeaf iana_iftype_ipovercdlc;
        static const ydk::Enum::YLeaf iana_iftype_ipoverclaw;
        static const ydk::Enum::YLeaf iana_iftype_stack2stack;
        static const ydk::Enum::YLeaf iana_iftype_virtualipaddress;
        static const ydk::Enum::YLeaf iana_iftype_mpc;
        static const ydk::Enum::YLeaf iana_iftype_ipoveratm;
        static const ydk::Enum::YLeaf iana_iftype_iso88025_fiber;
        static const ydk::Enum::YLeaf iana_iftype_tdlc;
        static const ydk::Enum::YLeaf iana_iftype_gige;
        static const ydk::Enum::YLeaf iana_iftype_hdlc;
        static const ydk::Enum::YLeaf iana_iftype_lapf;
        static const ydk::Enum::YLeaf iana_iftype_v37;
        static const ydk::Enum::YLeaf iana_iftype_x25mlp;
        static const ydk::Enum::YLeaf iana_iftype_x25huntgroup;
        static const ydk::Enum::YLeaf iana_iftype_transphdlc;
        static const ydk::Enum::YLeaf iana_iftype_interleave;
        static const ydk::Enum::YLeaf iana_iftype_fast;
        static const ydk::Enum::YLeaf iana_iftype_ip;
        static const ydk::Enum::YLeaf iana_iftype_docs_cable_maclayer;
        static const ydk::Enum::YLeaf iana_iftype_docs_cable_downstream;
        static const ydk::Enum::YLeaf iana_iftype_docs_cable_upstream;
        static const ydk::Enum::YLeaf iana_iftype_a12mppswitch;
        static const ydk::Enum::YLeaf iana_iftype_tunnel;
        static const ydk::Enum::YLeaf iana_iftype_coffee;
        static const ydk::Enum::YLeaf iana_iftype_ces;
        static const ydk::Enum::YLeaf iana_iftype_atmsubinterface;
        static const ydk::Enum::YLeaf iana_iftype_l2vlan;
        static const ydk::Enum::YLeaf iana_iftype_l3ipvlan;
        static const ydk::Enum::YLeaf iana_iftype_l3ipxvlan;
        static const ydk::Enum::YLeaf iana_iftype_digital_powerline;
        static const ydk::Enum::YLeaf iana_iftype_media_mailoverip;
        static const ydk::Enum::YLeaf iana_iftype_dtm;
        static const ydk::Enum::YLeaf iana_iftype_dcn;
        static const ydk::Enum::YLeaf iana_iftype_ipforward;
        static const ydk::Enum::YLeaf iana_iftype_msdsl;
        static const ydk::Enum::YLeaf iana_iftype_ieee1394;
        static const ydk::Enum::YLeaf iana_iftype_gsn;
        static const ydk::Enum::YLeaf iana_iftype_dvbrcc_maclayer;
        static const ydk::Enum::YLeaf iana_iftype_dvbrcc_downstream;
        static const ydk::Enum::YLeaf iana_iftype_dvbrcc_upstream;
        static const ydk::Enum::YLeaf iana_iftype_atmvirtual;
        static const ydk::Enum::YLeaf iana_iftype_mplstunnel;
        static const ydk::Enum::YLeaf iana_iftype_srp;
        static const ydk::Enum::YLeaf iana_iftype_voiceoveratm;
        static const ydk::Enum::YLeaf iana_iftype_voiceoverframerelay;
        static const ydk::Enum::YLeaf iana_iftype_idsl;
        static const ydk::Enum::YLeaf iana_iftype_compositelink;
        static const ydk::Enum::YLeaf iana_iftype_ss7siglink;
        static const ydk::Enum::YLeaf iana_iftype_propwireless_p2p;
        static const ydk::Enum::YLeaf iana_iftype_frforward;
        static const ydk::Enum::YLeaf iana_iftype_rfc1483;
        static const ydk::Enum::YLeaf iana_iftype_usb;
        static const ydk::Enum::YLeaf iana_iftype_ieee8023_adlag;
        static const ydk::Enum::YLeaf iana_iftype_bgppolicy_accounting;
        static const ydk::Enum::YLeaf iana_iftype_frf16mfrbundle;
        static const ydk::Enum::YLeaf iana_iftype_h323gatekeeper;
        static const ydk::Enum::YLeaf iana_iftype_h323proxy;
        static const ydk::Enum::YLeaf iana_iftype_mpls;
        static const ydk::Enum::YLeaf iana_iftype_mfsiglink;
        static const ydk::Enum::YLeaf iana_iftype_hdsl2;
        static const ydk::Enum::YLeaf iana_iftype_shdsl;
        static const ydk::Enum::YLeaf iana_iftype_ds1fdl;
        static const ydk::Enum::YLeaf iana_iftype_pos;
        static const ydk::Enum::YLeaf iana_iftype_dvbasiin;
        static const ydk::Enum::YLeaf iana_iftype_dvbasiout;
        static const ydk::Enum::YLeaf iana_iftype_plc;
        static const ydk::Enum::YLeaf iana_iftype_nfas;
        static const ydk::Enum::YLeaf iana_iftype_tr008;
        static const ydk::Enum::YLeaf iana_iftype_gr303rdt;
        static const ydk::Enum::YLeaf iana_iftype_gr303idt;
        static const ydk::Enum::YLeaf iana_iftype_isup;
        static const ydk::Enum::YLeaf iana_iftype_prop_docs_wireless_maclayer;
        static const ydk::Enum::YLeaf iana_iftype_prop_docs_wireless_downstream;
        static const ydk::Enum::YLeaf iana_iftype_prop_docs_wireless_upstream;
        static const ydk::Enum::YLeaf iana_iftype_hiperlan2;
        static const ydk::Enum::YLeaf iana_iftype_prop_bwap2mp;
        static const ydk::Enum::YLeaf iana_iftype_sonetoverheadchannel;
        static const ydk::Enum::YLeaf iana_iftype_digital_wrapperoverheadchannel;
        static const ydk::Enum::YLeaf iana_iftype_aal2;
        static const ydk::Enum::YLeaf iana_iftype_radiomac;
        static const ydk::Enum::YLeaf iana_iftype_atmradio;
        static const ydk::Enum::YLeaf iana_iftype_imt;
        static const ydk::Enum::YLeaf iana_iftype_mvl;
        static const ydk::Enum::YLeaf iana_iftype_reachhdsl;
        static const ydk::Enum::YLeaf iana_iftype_frdlciendpt;
        static const ydk::Enum::YLeaf iana_iftype_atmvciendpt;
        static const ydk::Enum::YLeaf iana_iftype_opticalchannel;
        static const ydk::Enum::YLeaf iana_iftype_opticaltransport;
        static const ydk::Enum::YLeaf iana_iftype_propatm;
        static const ydk::Enum::YLeaf iana_iftype_voiceovercable;
        static const ydk::Enum::YLeaf iana_iftype_infiniband;
        static const ydk::Enum::YLeaf iana_iftype_telink;
        static const ydk::Enum::YLeaf iana_iftype_q2931;
        static const ydk::Enum::YLeaf iana_iftype_virtualatg;
        static const ydk::Enum::YLeaf iana_iftype_siptg;
        static const ydk::Enum::YLeaf iana_iftype_sipsig;
        static const ydk::Enum::YLeaf iana_iftype_docs_cable_upstreamchannel;
        static const ydk::Enum::YLeaf iana_iftype_econet;
        static const ydk::Enum::YLeaf iana_iftype_pon155;
        static const ydk::Enum::YLeaf iana_iftype_pon622;
        static const ydk::Enum::YLeaf iana_iftype_bridge_if;
        static const ydk::Enum::YLeaf iana_iftype_linegroup;
        static const ydk::Enum::YLeaf iana_iftype_voiceemfgd;
        static const ydk::Enum::YLeaf iana_iftype_voiceefgdeana;
        static const ydk::Enum::YLeaf iana_iftype_voicedid;
        static const ydk::Enum::YLeaf iana_iftype_mpegtransport;
        static const ydk::Enum::YLeaf iana_iftype_sixtofour;
        static const ydk::Enum::YLeaf iana_iftype_gtp;
        static const ydk::Enum::YLeaf iana_iftype_pdnetherloop1;
        static const ydk::Enum::YLeaf iana_iftype_pdnetherloop2;
        static const ydk::Enum::YLeaf iana_iftype_opticalchannel_group;
        static const ydk::Enum::YLeaf iana_iftype_homepna;
        static const ydk::Enum::YLeaf iana_iftype_gfp;
        static const ydk::Enum::YLeaf iana_iftype_ciscoislvlan;
        static const ydk::Enum::YLeaf iana_iftype_actelismetaloop;
        static const ydk::Enum::YLeaf iana_iftype_fciplink;
        static const ydk::Enum::YLeaf iana_iftype_rpr;
        static const ydk::Enum::YLeaf iana_iftype_qam;
        static const ydk::Enum::YLeaf iana_iftype_lmp;
        static const ydk::Enum::YLeaf iana_iftype_cblvectastar;
        static const ydk::Enum::YLeaf iana_iftype_docs_cable_mcmts_downtream;
        static const ydk::Enum::YLeaf iana_iftype_adsl2;
        static const ydk::Enum::YLeaf iana_iftype_macseccontrolledif;
        static const ydk::Enum::YLeaf iana_iftype_macsecuncontrolledif;
        static const ydk::Enum::YLeaf iana_iftype_aviciopticalether;
        static const ydk::Enum::YLeaf iana_iftype_atmbond;
        static const ydk::Enum::YLeaf iana_iftype_voicefgdos;
        static const ydk::Enum::YLeaf iana_iftype_mocaversion1;
        static const ydk::Enum::YLeaf iana_iftype_ieee80216_wman;
        static const ydk::Enum::YLeaf iana_iftype_adsl2plus;
        static const ydk::Enum::YLeaf iana_iftype_dvbrcsmaclayer;
        static const ydk::Enum::YLeaf iana_iftype_dvbtdm;
        static const ydk::Enum::YLeaf iana_iftype_dvbrcstdma;
        static const ydk::Enum::YLeaf iana_iftype_x86laps;
        static const ydk::Enum::YLeaf iana_iftype_wwanpp;
        static const ydk::Enum::YLeaf iana_iftype_wwanpp2;
        static const ydk::Enum::YLeaf iana_iftype_voiceebs;
        static const ydk::Enum::YLeaf iana_iftype_ifpwtype;
        static const ydk::Enum::YLeaf iana_iftype_ilan;
        static const ydk::Enum::YLeaf iana_iftype_pip;
        static const ydk::Enum::YLeaf iana_iftype_aluelp;
        static const ydk::Enum::YLeaf iana_iftype_gpon;
        static const ydk::Enum::YLeaf iana_iftype_vdsl2;
        static const ydk::Enum::YLeaf iana_iftype_capwapdot11_profile;
        static const ydk::Enum::YLeaf iana_iftype_capwapdot11_bss;
        static const ydk::Enum::YLeaf iana_iftype_capwapwtp_virtualradio;
        static const ydk::Enum::YLeaf iana_iftype_bits;
        static const ydk::Enum::YLeaf iana_iftype_docs_cable_upstreamrfport;
        static const ydk::Enum::YLeaf iana_iftype_cable_downstreamrfport;
        static const ydk::Enum::YLeaf iana_iftype_vmware_virtualnic;
        static const ydk::Enum::YLeaf iana_iftype_ieee802154;
        static const ydk::Enum::YLeaf iana_iftype_otnodu;
        static const ydk::Enum::YLeaf iana_iftype_otnotu;
        static const ydk::Enum::YLeaf iana_iftype_ifvfitype;
        static const ydk::Enum::YLeaf iana_iftype_g9981;
        static const ydk::Enum::YLeaf iana_iftype_g9982;
        static const ydk::Enum::YLeaf iana_iftype_g9983;
        static const ydk::Enum::YLeaf iana_iftype_aluepon;
        static const ydk::Enum::YLeaf iana_iftype_aluepon_onu;
        static const ydk::Enum::YLeaf iana_iftype_aluepon_physicaluni;
        static const ydk::Enum::YLeaf iana_iftype_aluepon_logicalink;
        static const ydk::Enum::YLeaf iana_iftype_alugpon_onu;
        static const ydk::Enum::YLeaf iana_iftype_alugpon_physicaluni;
        static const ydk::Enum::YLeaf iana_iftype_vmwarenicteam;
        static const ydk::Enum::YLeaf iana_iftype_docs_ofdm_downstream;
        static const ydk::Enum::YLeaf iana_iftype_docs_ofdma_upstream;
        static const ydk::Enum::YLeaf iana_iftype_gfast;
        static const ydk::Enum::YLeaf iana_iftype_sdci;
        static const ydk::Enum::YLeaf iana_iftype_xbox_wireless;
        static const ydk::Enum::YLeaf iana_iftype_fastdsl;

};

class SerialCrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf serial_crc32;
        static const ydk::Enum::YLeaf serial_crc16;

};

class SubrateSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1_subrate_56kbps;
        static const ydk::Enum::YLeaf dsx1_subrate_64kbps;

};

class T1e1LoopbackMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t1e1_no_loopback;
        static const ydk::Enum::YLeaf t1e1_cli_local_loopback;
        static const ydk::Enum::YLeaf t1e1_line_cli_local_loopback;
        static const ydk::Enum::YLeaf t1e1_payload_cli_local_loopback;
        static const ydk::Enum::YLeaf t1e1_local_line_loopback;
        static const ydk::Enum::YLeaf t1e1_local_payload_loopback;
        static const ydk::Enum::YLeaf t1e1_local_ansi_fdl_remote_loopback;
        static const ydk::Enum::YLeaf t1e1_line_att_fdl_remote_loopback;
        static const ydk::Enum::YLeaf t1e1_payload_ansi_fdl_remote_loopback;
        static const ydk::Enum::YLeaf t1e1_payload_att_fdl_remote_loopback;
        static const ydk::Enum::YLeaf t1e1_line_iboc_remote_loopback;
        static const ydk::Enum::YLeaf t1e1_line_ansi_fdl_local_loopback;
        static const ydk::Enum::YLeaf t1e1_line_att_fdl_local_loopback;
        static const ydk::Enum::YLeaf t1e1_payload_ansi_fdl_local_loopback;
        static const ydk::Enum::YLeaf t1e1_payload_att_fdl_local_loopback;
        static const ydk::Enum::YLeaf t1e1_line_iboc_local_loopback;

};


}
}

#endif /* _CISCO_IOS_XE_INTERFACES_OPER_ */

