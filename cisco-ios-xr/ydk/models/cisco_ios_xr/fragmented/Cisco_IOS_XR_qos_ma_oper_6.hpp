#ifndef _CISCO_IOS_XR_QOS_MA_OPER_6_
#define _CISCO_IOS_XR_QOS_MA_OPER_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_3.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_4.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_5.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics : public ydk::Entity
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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics : public ydk::Entity
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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames
        class Statistics; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics> statistics;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics : public ydk::Entity
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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray


class Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::Nodes::Node::PolicyMap::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::QosGlobal : public ydk::Entity
{
    public:
        QosGlobal();
        ~QosGlobal();

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

        class VoQ; //type: Qos::QosGlobal::VoQ

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ> vo_q;
        
}; // Qos::QosGlobal


class Qos::QosGlobal::VoQ : public ydk::Entity
{
    public:
        VoQ();
        ~VoQ();

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

        class VoQStatistics; //type: Qos::QosGlobal::VoQ::VoQStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics> vo_q_statistics;
        
}; // Qos::QosGlobal::VoQ


class Qos::QosGlobal::VoQ::VoQStatistics : public ydk::Entity
{
    public:
        VoQStatistics();
        ~VoQStatistics();

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

        class VoQinterfaces; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces> vo_qinterfaces;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces : public ydk::Entity
{
    public:
        VoQinterfaces();
        ~VoQinterfaces();

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

        class VoQinterface; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface> > vo_qinterface;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface : public ydk::Entity
{
    public:
        VoQinterface();
        ~VoQinterface();

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

        ydk::YLeaf interface_name; //type: string
        class OutputVoQ; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ
        class VoQMemberInterfaces; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ> output_vo_q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces> vo_q_member_interfaces;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ : public ydk::Entity
{
    public:
        OutputVoQ();
        ~OutputVoQ();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocationvoQs; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs
        class VoQStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs> locationvo_qs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats> vo_q_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs : public ydk::Entity
{
    public:
        LocationvoQs();
        ~LocationvoQs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocationvoQ; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ> > locationvo_q;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ : public ydk::Entity
{
    public:
        LocationvoQ();
        ~LocationvoQ();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class VoQStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats> vo_q_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats : public ydk::Entity
{
    public:
        VoQStats();
        ~VoQStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats> > class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats : public ydk::Entity
{
    public:
        VoQStats();
        ~VoQStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats> > class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats : public ydk::Entity
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

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces : public ydk::Entity
{
    public:
        VoQMemberInterfaces();
        ~VoQMemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VoQMemberInterface; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface> > vo_q_member_interface;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface : public ydk::Entity
{
    public:
        VoQMemberInterface();
        ~VoQMemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class VoQoutput; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput> vo_qoutput;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput : public ydk::Entity
{
    public:
        VoQoutput();
        ~VoQoutput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VoQStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats> vo_q_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats : public ydk::Entity
{
    public:
        VoQStats();
        ~VoQStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats> > class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_6_ */

