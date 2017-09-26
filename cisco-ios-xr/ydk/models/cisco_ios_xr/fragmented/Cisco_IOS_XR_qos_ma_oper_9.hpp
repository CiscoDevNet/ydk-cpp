#ifndef _CISCO_IOS_XR_QOS_MA_OPER_9_
#define _CISCO_IOS_XR_QOS_MA_OPER_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_8.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy : public ydk::Entity
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
        class ClassStats_; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
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
        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
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
        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
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
        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
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
        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


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


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray : public ydk::Entity
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
        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray : public ydk::Entity
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
        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray : public ydk::Entity
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
        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
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

}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_9_ */

