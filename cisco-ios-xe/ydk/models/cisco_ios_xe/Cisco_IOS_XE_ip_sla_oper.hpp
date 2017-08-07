#ifndef _CISCO_IOS_XE_IP_SLA_OPER_
#define _CISCO_IOS_XE_IP_SLA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ip_sla_oper {

class IpSlaStats : public ydk::Entity
{
    public:
        IpSlaStats();
        ~IpSlaStats();

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

        class SlaOperEntry; //type: IpSlaStats::SlaOperEntry

        std::vector<std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry> > sla_oper_entry;
        
}; // IpSlaStats


class IpSlaStats::SlaOperEntry : public ydk::Entity
{
    public:
        SlaOperEntry();
        ~SlaOperEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_id; //type: uint32
        ydk::YLeaf oper_type; //type: SlaOperType
        ydk::YLeaf latest_return_code; //type: SlaReturnCode
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf failure_count; //type: uint32
        ydk::YLeaf latest_oper_start_time; //type: string
        class RttInfo; //type: IpSlaStats::SlaOperEntry::RttInfo
        class MeasureStats; //type: IpSlaStats::SlaOperEntry::MeasureStats
        class Stats; //type: IpSlaStats::SlaOperEntry::Stats

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::MeasureStats> measure_stats;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::RttInfo> rtt_info;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats> stats;
        
}; // IpSlaStats::SlaOperEntry


class IpSlaStats::SlaOperEntry::RttInfo : public ydk::Entity
{
    public:
        RttInfo();
        ~RttInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LatestRtt; //type: IpSlaStats::SlaOperEntry::RttInfo::LatestRtt
        class TimeToLive; //type: IpSlaStats::SlaOperEntry::RttInfo::TimeToLive

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::RttInfo::LatestRtt> latest_rtt;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::RttInfo::TimeToLive> time_to_live;
        
}; // IpSlaStats::SlaOperEntry::RttInfo


class IpSlaStats::SlaOperEntry::RttInfo::LatestRtt : public ydk::Entity
{
    public:
        LatestRtt();
        ~LatestRtt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt; //type: uint64
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf could_not_find; //type: empty

}; // IpSlaStats::SlaOperEntry::RttInfo::LatestRtt


class IpSlaStats::SlaOperEntry::RttInfo::TimeToLive : public ydk::Entity
{
    public:
        TimeToLive();
        ~TimeToLive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint64
        ydk::YLeaf forever; //type: empty

}; // IpSlaStats::SlaOperEntry::RttInfo::TimeToLive


class IpSlaStats::SlaOperEntry::MeasureStats : public ydk::Entity
{
    public:
        MeasureStats();
        ~MeasureStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intv_start_time; //type: string
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf complete_count; //type: uint32
        ydk::YLeaf valid; //type: boolean

}; // IpSlaStats::SlaOperEntry::MeasureStats


class IpSlaStats::SlaOperEntry::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rtt; //type: IpSlaStats::SlaOperEntry::Stats::Rtt
        class OnewayLatency; //type: IpSlaStats::SlaOperEntry::Stats::OnewayLatency
        class Jitter; //type: IpSlaStats::SlaOperEntry::Stats::Jitter
        class OverThreshold; //type: IpSlaStats::SlaOperEntry::Stats::OverThreshold
        class PacketLoss; //type: IpSlaStats::SlaOperEntry::Stats::PacketLoss
        class IcmpPacketLoss; //type: IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss
        class VoiceScore; //type: IpSlaStats::SlaOperEntry::Stats::VoiceScore

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss> icmp_packet_loss;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::OnewayLatency> oneway_latency;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::OverThreshold> over_threshold;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::PacketLoss> packet_loss;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Rtt> rtt;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::VoiceScore> voice_score;
        
}; // IpSlaStats::SlaOperEntry::Stats


class IpSlaStats::SlaOperEntry::Stats::Rtt : public ydk::Entity
{
    public:
        Rtt();
        ~Rtt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt_count; //type: uint32
        class SlaTimeValues; //type: IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues> sla_time_values;
        
}; // IpSlaStats::SlaOperEntry::Stats::Rtt


class IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues : public ydk::Entity
{
    public:
        SlaTimeValues();
        ~SlaTimeValues();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf accuracy; //type: AccuracyType

}; // IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues


class IpSlaStats::SlaOperEntry::Stats::OnewayLatency : public ydk::Entity
{
    public:
        OnewayLatency();
        ~OnewayLatency();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sample_count; //type: uint32
        class Sd; //type: IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd
        class Ds; //type: IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds> ds;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd> sd;
        
}; // IpSlaStats::SlaOperEntry::Stats::OnewayLatency


class IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd : public ydk::Entity
{
    public:
        Sd();
        ~Sd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf accuracy; //type: AccuracyType

}; // IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd


class IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds : public ydk::Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf accuracy; //type: AccuracyType

}; // IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds


class IpSlaStats::SlaOperEntry::Stats::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sd_sample_count; //type: uint32
        ydk::YLeaf ds_sample_count; //type: uint32
        class Sd; //type: IpSlaStats::SlaOperEntry::Stats::Jitter::Sd
        class Ds; //type: IpSlaStats::SlaOperEntry::Stats::Jitter::Ds

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Jitter::Ds> ds;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Jitter::Sd> sd;
        
}; // IpSlaStats::SlaOperEntry::Stats::Jitter


class IpSlaStats::SlaOperEntry::Stats::Jitter::Sd : public ydk::Entity
{
    public:
        Sd();
        ~Sd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf accuracy; //type: AccuracyType

}; // IpSlaStats::SlaOperEntry::Stats::Jitter::Sd


class IpSlaStats::SlaOperEntry::Stats::Jitter::Ds : public ydk::Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf accuracy; //type: AccuracyType

}; // IpSlaStats::SlaOperEntry::Stats::Jitter::Ds


class IpSlaStats::SlaOperEntry::Stats::OverThreshold : public ydk::Entity
{
    public:
        OverThreshold();
        ~OverThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt_count; //type: uint32
        ydk::YLeaf percent; //type: uint8

}; // IpSlaStats::SlaOperEntry::Stats::OverThreshold


class IpSlaStats::SlaOperEntry::Stats::PacketLoss : public ydk::Entity
{
    public:
        PacketLoss();
        ~PacketLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unprocessed_packets; //type: uint32
        ydk::YLeaf sd_count; //type: uint32
        ydk::YLeaf ds_count; //type: uint32
        ydk::YLeaf out_of_sequence; //type: uint32
        ydk::YLeaf drops; //type: uint32
        ydk::YLeaf late_arrivals; //type: uint32
        ydk::YLeaf skipped_packets; //type: uint32
        class SdLoss; //type: IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss
        class DsLoss; //type: IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss> ds_loss;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss> sd_loss;
        
}; // IpSlaStats::SlaOperEntry::Stats::PacketLoss


class IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss : public ydk::Entity
{
    public:
        SdLoss();
        ~SdLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loss_period_count; //type: uint32
        ydk::YLeaf loss_period_len_min; //type: uint32
        ydk::YLeaf loss_period_len_max; //type: uint32
        ydk::YLeaf inter_loss_period_len_min; //type: uint32
        ydk::YLeaf inter_loss_period_len_max; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss


class IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss : public ydk::Entity
{
    public:
        DsLoss();
        ~DsLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loss_period_count; //type: uint32
        ydk::YLeaf loss_period_len_min; //type: uint32
        ydk::YLeaf loss_period_len_max; //type: uint32
        ydk::YLeaf inter_loss_period_len_min; //type: uint32
        ydk::YLeaf inter_loss_period_len_max; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss


class IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss : public ydk::Entity
{
    public:
        IcmpPacketLoss();
        ~IcmpPacketLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf late_arrivals; //type: uint32
        ydk::YLeaf out_of_sequence; //type: uint32
        ydk::YLeaf out_of_sequence_sd; //type: uint32
        ydk::YLeaf out_of_sequence_ds; //type: uint32
        ydk::YLeaf out_of_sequence_both; //type: uint32
        ydk::YLeaf skipped_packets; //type: uint32
        ydk::YLeaf unprocessed_packets; //type: uint32
        ydk::YLeaf packet_loss; //type: uint32
        ydk::YLeaf loss_period_count; //type: uint32
        ydk::YLeaf loss_period_len_min; //type: uint32
        ydk::YLeaf loss_period_len_max; //type: uint32
        ydk::YLeaf inter_loss_period_len_min; //type: uint32
        ydk::YLeaf inter_loss_period_len_max; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss


class IpSlaStats::SlaOperEntry::Stats::VoiceScore : public ydk::Entity
{
    public:
        VoiceScore();
        ~VoiceScore();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icpif; //type: uint32
        ydk::YLeaf mos; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::VoiceScore

class SlaReturnCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ret_code_unknown;
        static const ydk::Enum::YLeaf ret_code_ok;
        static const ydk::Enum::YLeaf ret_code_disconnected;
        static const ydk::Enum::YLeaf ret_code_busy;
        static const ydk::Enum::YLeaf ret_code_timeout;
        static const ydk::Enum::YLeaf ret_code_no_connection;
        static const ydk::Enum::YLeaf ret_code_internal_error;
        static const ydk::Enum::YLeaf ret_code_operation_failure;
        static const ydk::Enum::YLeaf ret_code_could_not_find;

};

class AccuracyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accuracy_milliseconds;
        static const ydk::Enum::YLeaf accuracy_microseconds;

};

class SlaOperType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oper_type_unknown;
        static const ydk::Enum::YLeaf oper_type_udp_echo;
        static const ydk::Enum::YLeaf oper_type_udp_jitter;
        static const ydk::Enum::YLeaf oper_type_icmp_jitter;
        static const ydk::Enum::YLeaf oper_type_ethernet_jitter;
        static const ydk::Enum::YLeaf oper_type_ethernet_echo;
        static const ydk::Enum::YLeaf oper_type_y1731_delay;
        static const ydk::Enum::YLeaf oper_type_y1731_loss;
        static const ydk::Enum::YLeaf oper_type_video;
        static const ydk::Enum::YLeaf oper_type_mcast;
        static const ydk::Enum::YLeaf oper_type_pong;
        static const ydk::Enum::YLeaf oper_type_path_jitter;

};

class RttType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rtt_known;
        static const ydk::Enum::YLeaf rtt_unknown;
        static const ydk::Enum::YLeaf rtt_could_not_find;

};

class TtlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ttl_finite;
        static const ydk::Enum::YLeaf ttl_forever;

};


}
}

#endif /* _CISCO_IOS_XE_IP_SLA_OPER_ */

