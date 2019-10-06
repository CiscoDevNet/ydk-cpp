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

        static int get_enum_value(const std::string & name) {
            if (name == "qos-match-dscp") return 0;
            if (name == "qos-match-src-ip") return 1;
            if (name == "qos-match-dst-ip") return 2;
            if (name == "qos-match-src-port") return 3;
            if (name == "qos-match-dst-port") return 4;
            if (name == "qos-match-proto") return 5;
            return -1;
        }
};

class EtherDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full_duplex;
        static const ydk::Enum::YLeaf half_duplex;
        static const ydk::Enum::YLeaf auto_duplex;
        static const ydk::Enum::YLeaf unknown_duplex;

        static int get_enum_value(const std::string & name) {
            if (name == "full-duplex") return 0;
            if (name == "half-duplex") return 1;
            if (name == "auto-duplex") return 2;
            if (name == "unknown-duplex") return 3;
            return -1;
        }
};

class SerialCrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf serial_crc32;
        static const ydk::Enum::YLeaf serial_crc16;

        static int get_enum_value(const std::string & name) {
            if (name == "serial-crc32") return 0;
            if (name == "serial-crc16") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-units-default") return 0;
            if (name == "thresh-units-bytes") return 1;
            if (name == "thresh-units-sec") return 2;
            if (name == "thresh-units-packets") return 3;
            if (name == "thresh-units-cells") return 4;
            if (name == "thresh-units-percent") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "t1e1-no-loopback") return 0;
            if (name == "t1e1-cli-local-loopback") return 1;
            if (name == "t1e1-line-cli-local-loopback") return 2;
            if (name == "t1e1-payload-cli-local-loopback") return 3;
            if (name == "t1e1-local-line-loopback") return 4;
            if (name == "t1e1-local-payload-loopback") return 5;
            if (name == "t1e1-local-ansi-fdl-remote-loopback") return 6;
            if (name == "t1e1-line-att-fdl-remote-loopback") return 7;
            if (name == "t1e1-payload-ansi-fdl-remote-loopback") return 8;
            if (name == "t1e1-payload-att-fdl-remote-loopback") return 9;
            if (name == "t1e1-line-iboc-remote-loopback") return 10;
            if (name == "t1e1-line-ansi-fdl-local-loopback") return 11;
            if (name == "t1e1-line-att-fdl-local-loopback") return 12;
            if (name == "t1e1-payload-ansi-fdl-local-loopback") return 13;
            if (name == "t1e1-payload-att-fdl-local-loopback") return 14;
            if (name == "t1e1-line-iboc-local-loopback") return 15;
            return -1;
        }
};

class IntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf if_state_unknown;
        static const ydk::Enum::YLeaf if_state_up;
        static const ydk::Enum::YLeaf if_state_down;
        static const ydk::Enum::YLeaf if_state_test;

        static int get_enum_value(const std::string & name) {
            if (name == "if-state-unknown") return 0;
            if (name == "if-state-up") return 1;
            if (name == "if-state-down") return 2;
            if (name == "if-state-test") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "if-oper-state-invalid") return 0;
            if (name == "if-oper-state-ready") return 1;
            if (name == "if-oper-state-no-pass") return 2;
            if (name == "if-oper-state-test") return 3;
            if (name == "if-oper-state-unknown") return 4;
            if (name == "if-oper-state-dormant") return 5;
            if (name == "if-oper-state-not-present") return 6;
            if (name == "if-oper-state-lower-layer-down") return 7;
            return -1;
        }
};

class AggregationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lag_off;
        static const ydk::Enum::YLeaf lag_auto;
        static const ydk::Enum::YLeaf lag_active;
        static const ydk::Enum::YLeaf lag_passive;

        static int get_enum_value(const std::string & name) {
            if (name == "lag-off") return 0;
            if (name == "lag-auto") return 1;
            if (name == "lag-active") return 2;
            if (name == "lag-passive") return 3;
            return -1;
        }
};

class SubrateSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1_subrate_56kbps;
        static const ydk::Enum::YLeaf dsx1_subrate_64kbps;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx1-subrate-56kbps") return 0;
            if (name == "dsx1-subrate-64kbps") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "iana-iftype-other") return 1;
            if (name == "iana-iftype-regular1822") return 2;
            if (name == "iana-iftype-hdh1822") return 3;
            if (name == "iana-iftype-ddnx25") return 4;
            if (name == "iana-iftype-rfc877x25") return 5;
            if (name == "iana-iftype-ethernet-csmacd") return 6;
            if (name == "iana-iftype-iso88023-csmacd") return 7;
            if (name == "iana-iftype-iso88024-tokenbus") return 8;
            if (name == "iana-iftype-iso88025-tokenring") return 9;
            if (name == "iana-iftype-iso88026-man") return 10;
            if (name == "iana-iftype-starlan") return 11;
            if (name == "iana-iftype-proteon10mbit") return 12;
            if (name == "iana-iftype-proteon80mbit") return 13;
            if (name == "iana-iftype-hyperchannel") return 14;
            if (name == "iana-iftype-fddi") return 15;
            if (name == "iana-iftype-lapb") return 16;
            if (name == "iana-iftype-sdlc") return 17;
            if (name == "iana-iftype-ds1") return 18;
            if (name == "iana-iftype-e1") return 19;
            if (name == "iana-iftype-basicisdn") return 20;
            if (name == "iana-iftype-primaryisdn") return 21;
            if (name == "iana-iftype-prop-p2p-serial") return 22;
            if (name == "iana-iftype-ppp") return 23;
            if (name == "iana-iftype-sw-loopback") return 24;
            if (name == "iana-iftype-eon") return 25;
            if (name == "iana-iftype-ethernet3mbit") return 26;
            if (name == "iana-iftype-nsip") return 27;
            if (name == "iana-iftype-slip") return 28;
            if (name == "iana-iftype-ultra") return 29;
            if (name == "iana-iftype-ds3") return 30;
            if (name == "iana-iftype-sip") return 31;
            if (name == "iana-iftype-framerelay") return 32;
            if (name == "iana-iftype-rs232") return 33;
            if (name == "iana-iftype-para") return 34;
            if (name == "iana-iftype-arcnet") return 35;
            if (name == "iana-iftype-arcnetplus") return 36;
            if (name == "iana-iftype-atm") return 37;
            if (name == "iana-iftype-miox25") return 38;
            if (name == "iana-iftype-sonet") return 39;
            if (name == "iana-iftype-x25ple") return 40;
            if (name == "iana-iftype-iso88022-llc") return 41;
            if (name == "iana-iftype-localtalk") return 42;
            if (name == "iana-iftype-smdsdxi") return 43;
            if (name == "iana-iftype-framerelay-service") return 44;
            if (name == "iana-iftype-v35") return 45;
            if (name == "iana-iftype-hssi") return 46;
            if (name == "iana-iftype-hippi") return 47;
            if (name == "iana-iftype-modem") return 48;
            if (name == "iana-iftype-aal5") return 49;
            if (name == "iana-iftype-sonetpath") return 50;
            if (name == "iana-iftype-sonetvt") return 51;
            if (name == "iana-iftype-smdsicip") return 52;
            if (name == "iana-iftype-propvirtual") return 53;
            if (name == "iana-iftype-propmultiplexor") return 54;
            if (name == "iana-iftype-ieee80212") return 55;
            if (name == "iana-iftype-fiberchannel") return 56;
            if (name == "iana-iftype-hippi-interface") return 57;
            if (name == "iana-iftype-framerelay-interconnect") return 58;
            if (name == "iana-iftype-aflane8023") return 59;
            if (name == "iana-iftype-aflane8025") return 60;
            if (name == "iana-iftype-cctemul") return 61;
            if (name == "iana-iftype-fastether") return 62;
            if (name == "iana-iftype-isdn") return 63;
            if (name == "iana-iftype-v11") return 64;
            if (name == "iana-iftype-v36") return 65;
            if (name == "iana-iftype-g703at64k") return 66;
            if (name == "iana-iftype-g703at2mb") return 67;
            if (name == "iana-iftype-qllc") return 68;
            if (name == "iana-iftype-fastetherfx") return 69;
            if (name == "iana-iftype-channel") return 70;
            if (name == "iana-iftype-ieee80211") return 71;
            if (name == "iana-iftype-ibm370parchan") return 72;
            if (name == "iana-iftype-escon") return 73;
            if (name == "iana-iftype-dlsw") return 74;
            if (name == "iana-iftype-isdns") return 75;
            if (name == "iana-iftype-isdnu") return 76;
            if (name == "iana-iftype-lapd") return 77;
            if (name == "iana-iftype-ipswitch") return 78;
            if (name == "iana-iftype-rsrb") return 79;
            if (name == "iana-iftype-atmlogical") return 80;
            if (name == "iana-iftype-ds0") return 81;
            if (name == "iana-iftype-ds0bundle") return 82;
            if (name == "iana-iftype-bsc") return 83;
            if (name == "iana-iftype-async") return 84;
            if (name == "iana-iftype-cnr") return 85;
            if (name == "iana-iftype-iso88025-dtr") return 86;
            if (name == "iana-iftype-eplrs") return 87;
            if (name == "iana-iftype-arap") return 88;
            if (name == "iana-iftype-propcnls") return 89;
            if (name == "iana-iftype-hostpad") return 90;
            if (name == "iana-iftype-termpad") return 91;
            if (name == "iana-iftype-framerelay-mpi") return 92;
            if (name == "iana-iftype-x213") return 93;
            if (name == "iana-iftype-adsl") return 94;
            if (name == "iana-iftype-radsl") return 95;
            if (name == "iana-iftype-sdsl") return 96;
            if (name == "iana-iftype-vdsl") return 97;
            if (name == "iana-iftype-iso88025-crfpint") return 98;
            if (name == "iana-iftype-myrinet") return 99;
            if (name == "iana-iftype-voiceem") return 100;
            if (name == "iana-iftype-voicefxo") return 101;
            if (name == "iana-iftype-voicefxs") return 102;
            if (name == "iana-iftype-voiceencap") return 103;
            if (name == "iana-iftype-voip") return 104;
            if (name == "iana-iftype-atmdxi") return 105;
            if (name == "iana-iftype-atmfuni") return 106;
            if (name == "iana-iftype-atmima") return 107;
            if (name == "iana-iftype-ppp-multilinkbundle") return 108;
            if (name == "iana-iftype-ipovercdlc") return 109;
            if (name == "iana-iftype-ipoverclaw") return 110;
            if (name == "iana-iftype-stack2stack") return 111;
            if (name == "iana-iftype-virtualipaddress") return 112;
            if (name == "iana-iftype-mpc") return 113;
            if (name == "iana-iftype-ipoveratm") return 114;
            if (name == "iana-iftype-iso88025-fiber") return 115;
            if (name == "iana-iftype-tdlc") return 116;
            if (name == "iana-iftype-gige") return 117;
            if (name == "iana-iftype-hdlc") return 118;
            if (name == "iana-iftype-lapf") return 119;
            if (name == "iana-iftype-v37") return 120;
            if (name == "iana-iftype-x25mlp") return 121;
            if (name == "iana-iftype-x25huntgroup") return 122;
            if (name == "iana-iftype-transphdlc") return 123;
            if (name == "iana-iftype-interleave") return 124;
            if (name == "iana-iftype-fast") return 125;
            if (name == "iana-iftype-ip") return 126;
            if (name == "iana-iftype-docs-cable-maclayer") return 127;
            if (name == "iana-iftype-docs-cable-downstream") return 128;
            if (name == "iana-iftype-docs-cable-upstream") return 129;
            if (name == "iana-iftype-a12mppswitch") return 130;
            if (name == "iana-iftype-tunnel") return 131;
            if (name == "iana-iftype-coffee") return 132;
            if (name == "iana-iftype-ces") return 133;
            if (name == "iana-iftype-atmsubinterface") return 134;
            if (name == "iana-iftype-l2vlan") return 135;
            if (name == "iana-iftype-l3ipvlan") return 136;
            if (name == "iana-iftype-l3ipxvlan") return 137;
            if (name == "iana-iftype-digital-powerline") return 138;
            if (name == "iana-iftype-media-mailoverip") return 139;
            if (name == "iana-iftype-dtm") return 140;
            if (name == "iana-iftype-dcn") return 141;
            if (name == "iana-iftype-ipforward") return 142;
            if (name == "iana-iftype-msdsl") return 143;
            if (name == "iana-iftype-ieee1394") return 144;
            if (name == "iana-iftype-gsn") return 145;
            if (name == "iana-iftype-dvbrcc-maclayer") return 146;
            if (name == "iana-iftype-dvbrcc-downstream") return 147;
            if (name == "iana-iftype-dvbrcc-upstream") return 148;
            if (name == "iana-iftype-atmvirtual") return 149;
            if (name == "iana-iftype-mplstunnel") return 150;
            if (name == "iana-iftype-srp") return 151;
            if (name == "iana-iftype-voiceoveratm") return 152;
            if (name == "iana-iftype-voiceoverframerelay") return 153;
            if (name == "iana-iftype-idsl") return 154;
            if (name == "iana-iftype-compositelink") return 155;
            if (name == "iana-iftype-ss7siglink") return 156;
            if (name == "iana-iftype-propwireless-p2p") return 157;
            if (name == "iana-iftype-frforward") return 158;
            if (name == "iana-iftype-rfc1483") return 159;
            if (name == "iana-iftype-usb") return 160;
            if (name == "iana-iftype-ieee8023-adlag") return 161;
            if (name == "iana-iftype-bgppolicy-accounting") return 162;
            if (name == "iana-iftype-frf16mfrbundle") return 163;
            if (name == "iana-iftype-h323gatekeeper") return 164;
            if (name == "iana-iftype-h323proxy") return 165;
            if (name == "iana-iftype-mpls") return 166;
            if (name == "iana-iftype-mfsiglink") return 167;
            if (name == "iana-iftype-hdsl2") return 168;
            if (name == "iana-iftype-shdsl") return 169;
            if (name == "iana-iftype-ds1fdl") return 170;
            if (name == "iana-iftype-pos") return 171;
            if (name == "iana-iftype-dvbasiin") return 172;
            if (name == "iana-iftype-dvbasiout") return 173;
            if (name == "iana-iftype-plc") return 174;
            if (name == "iana-iftype-nfas") return 175;
            if (name == "iana-iftype-tr008") return 176;
            if (name == "iana-iftype-gr303rdt") return 177;
            if (name == "iana-iftype-gr303idt") return 178;
            if (name == "iana-iftype-isup") return 179;
            if (name == "iana-iftype-prop-docs-wireless-maclayer") return 180;
            if (name == "iana-iftype-prop-docs-wireless-downstream") return 181;
            if (name == "iana-iftype-prop-docs-wireless-upstream") return 182;
            if (name == "iana-iftype-hiperlan2") return 183;
            if (name == "iana-iftype-prop-bwap2mp") return 184;
            if (name == "iana-iftype-sonetoverheadchannel") return 185;
            if (name == "iana-iftype-digital-wrapperoverheadchannel") return 186;
            if (name == "iana-iftype-aal2") return 187;
            if (name == "iana-iftype-radiomac") return 188;
            if (name == "iana-iftype-atmradio") return 189;
            if (name == "iana-iftype-imt") return 190;
            if (name == "iana-iftype-mvl") return 191;
            if (name == "iana-iftype-reachhdsl") return 192;
            if (name == "iana-iftype-frdlciendpt") return 193;
            if (name == "iana-iftype-atmvciendpt") return 194;
            if (name == "iana-iftype-opticalchannel") return 195;
            if (name == "iana-iftype-opticaltransport") return 196;
            if (name == "iana-iftype-propatm") return 197;
            if (name == "iana-iftype-voiceovercable") return 198;
            if (name == "iana-iftype-infiniband") return 199;
            if (name == "iana-iftype-telink") return 200;
            if (name == "iana-iftype-q2931") return 201;
            if (name == "iana-iftype-virtualatg") return 202;
            if (name == "iana-iftype-siptg") return 203;
            if (name == "iana-iftype-sipsig") return 204;
            if (name == "iana-iftype-docs-cable-upstreamchannel") return 205;
            if (name == "iana-iftype-econet") return 206;
            if (name == "iana-iftype-pon155") return 207;
            if (name == "iana-iftype-pon622") return 208;
            if (name == "iana-iftype-bridge-if") return 209;
            if (name == "iana-iftype-linegroup") return 210;
            if (name == "iana-iftype-voiceemfgd") return 211;
            if (name == "iana-iftype-voiceefgdeana") return 212;
            if (name == "iana-iftype-voicedid") return 213;
            if (name == "iana-iftype-mpegtransport") return 214;
            if (name == "iana-iftype-sixtofour") return 215;
            if (name == "iana-iftype-gtp") return 216;
            if (name == "iana-iftype-pdnetherloop1") return 217;
            if (name == "iana-iftype-pdnetherloop2") return 218;
            if (name == "iana-iftype-opticalchannel-group") return 219;
            if (name == "iana-iftype-homepna") return 220;
            if (name == "iana-iftype-gfp") return 221;
            if (name == "iana-iftype-ciscoislvlan") return 222;
            if (name == "iana-iftype-actelismetaloop") return 223;
            if (name == "iana-iftype-fciplink") return 224;
            if (name == "iana-iftype-rpr") return 225;
            if (name == "iana-iftype-qam") return 226;
            if (name == "iana-iftype-lmp") return 227;
            if (name == "iana-iftype-cblvectastar") return 228;
            if (name == "iana-iftype-docs-cable-mcmts-downtream") return 229;
            if (name == "iana-iftype-adsl2") return 230;
            if (name == "iana-iftype-macseccontrolledif") return 231;
            if (name == "iana-iftype-macsecuncontrolledif") return 232;
            if (name == "iana-iftype-aviciopticalether") return 233;
            if (name == "iana-iftype-atmbond") return 234;
            if (name == "iana-iftype-voicefgdos") return 235;
            if (name == "iana-iftype-mocaversion1") return 236;
            if (name == "iana-iftype-ieee80216-wman") return 237;
            if (name == "iana-iftype-adsl2plus") return 238;
            if (name == "iana-iftype-dvbrcsmaclayer") return 239;
            if (name == "iana-iftype-dvbtdm") return 240;
            if (name == "iana-iftype-dvbrcstdma") return 241;
            if (name == "iana-iftype-x86laps") return 242;
            if (name == "iana-iftype-wwanpp") return 243;
            if (name == "iana-iftype-wwanpp2") return 244;
            if (name == "iana-iftype-voiceebs") return 245;
            if (name == "iana-iftype-ifpwtype") return 246;
            if (name == "iana-iftype-ilan") return 247;
            if (name == "iana-iftype-pip") return 248;
            if (name == "iana-iftype-aluelp") return 249;
            if (name == "iana-iftype-gpon") return 250;
            if (name == "iana-iftype-vdsl2") return 251;
            if (name == "iana-iftype-capwapdot11-profile") return 252;
            if (name == "iana-iftype-capwapdot11-bss") return 253;
            if (name == "iana-iftype-capwapwtp-virtualradio") return 254;
            if (name == "iana-iftype-bits") return 255;
            if (name == "iana-iftype-docs-cable-upstreamrfport") return 256;
            if (name == "iana-iftype-cable-downstreamrfport") return 257;
            if (name == "iana-iftype-vmware-virtualnic") return 258;
            if (name == "iana-iftype-ieee802154") return 259;
            if (name == "iana-iftype-otnodu") return 260;
            if (name == "iana-iftype-otnotu") return 261;
            if (name == "iana-iftype-ifvfitype") return 262;
            if (name == "iana-iftype-g9981") return 263;
            if (name == "iana-iftype-g9982") return 264;
            if (name == "iana-iftype-g9983") return 265;
            if (name == "iana-iftype-aluepon") return 266;
            if (name == "iana-iftype-aluepon-onu") return 267;
            if (name == "iana-iftype-aluepon-physicaluni") return 268;
            if (name == "iana-iftype-aluepon-logicalink") return 269;
            if (name == "iana-iftype-alugpon-onu") return 270;
            if (name == "iana-iftype-alugpon-physicaluni") return 271;
            if (name == "iana-iftype-vmwarenicteam") return 272;
            if (name == "iana-iftype-docs-ofdm-downstream") return 277;
            if (name == "iana-iftype-docs-ofdma-upstream") return 278;
            if (name == "iana-iftype-gfast") return 279;
            if (name == "iana-iftype-sdci") return 280;
            if (name == "iana-iftype-xbox-wireless") return 281;
            if (name == "iana-iftype-fastdsl") return 282;
            return -1;
        }
};

class QosDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos_inbound;
        static const ydk::Enum::YLeaf qos_outbound;

        static int get_enum_value(const std::string & name) {
            if (name == "qos-inbound") return 0;
            if (name == "qos-outbound") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "speed-10mb") return 0;
            if (name == "speed-100mb") return 1;
            if (name == "speed-1gb") return 2;
            if (name == "speed-10gb") return 3;
            if (name == "speed-25gb") return 4;
            if (name == "speed-40gb") return 5;
            if (name == "speed-50gb") return 6;
            if (name == "speed-100gb") return 7;
            if (name == "speed-unknown") return 8;
            if (name == "speed-auto") return 9;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_INTERFACES_OPER_ */

