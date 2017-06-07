#ifndef _CISCO_IOS_XE_IP_SLA_OPER_
#define _CISCO_IOS_XE_IP_SLA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_ip_sla_oper {

class IpSlaStats : public Entity
{
    public:
        IpSlaStats();
        ~IpSlaStats();

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

        class SlaOperEntry; //type: IpSlaStats::SlaOperEntry

        std::vector<std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry> > sla_oper_entry;
        
}; // IpSlaStats


class IpSlaStats::SlaOperEntry : public Entity
{
    public:
        SlaOperEntry();
        ~SlaOperEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oper_id; //type: uint32
        YLeaf oper_type; //type: SlaOperTypeEnum
        YLeaf latest_return_code; //type: SlaReturnCodeEnum
        YLeaf success_count; //type: uint32
        YLeaf failure_count; //type: uint32
        YLeaf latest_oper_start_time; //type: string
        class RttInfo; //type: IpSlaStats::SlaOperEntry::RttInfo
        class MeasureStats; //type: IpSlaStats::SlaOperEntry::MeasureStats
        class Stats; //type: IpSlaStats::SlaOperEntry::Stats

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::MeasureStats> measure_stats;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::RttInfo> rtt_info;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats> stats;
        
}; // IpSlaStats::SlaOperEntry


class IpSlaStats::SlaOperEntry::RttInfo : public Entity
{
    public:
        RttInfo();
        ~RttInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LatestRtt; //type: IpSlaStats::SlaOperEntry::RttInfo::LatestRtt
        class TimeToLive; //type: IpSlaStats::SlaOperEntry::RttInfo::TimeToLive

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::RttInfo::LatestRtt> latest_rtt;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::RttInfo::TimeToLive> time_to_live;
        
}; // IpSlaStats::SlaOperEntry::RttInfo


class IpSlaStats::SlaOperEntry::RttInfo::LatestRtt : public Entity
{
    public:
        LatestRtt();
        ~LatestRtt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtt; //type: uint64
        YLeaf unknown; //type: empty
        YLeaf could_not_find; //type: empty

}; // IpSlaStats::SlaOperEntry::RttInfo::LatestRtt


class IpSlaStats::SlaOperEntry::RttInfo::TimeToLive : public Entity
{
    public:
        TimeToLive();
        ~TimeToLive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ttl; //type: uint64
        YLeaf forever; //type: empty

}; // IpSlaStats::SlaOperEntry::RttInfo::TimeToLive


class IpSlaStats::SlaOperEntry::MeasureStats : public Entity
{
    public:
        MeasureStats();
        ~MeasureStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intv_start_time; //type: string
        YLeaf init_count; //type: uint32
        YLeaf complete_count; //type: uint32
        YLeaf valid; //type: boolean

}; // IpSlaStats::SlaOperEntry::MeasureStats


class IpSlaStats::SlaOperEntry::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class IpSlaStats::SlaOperEntry::Stats::Rtt : public Entity
{
    public:
        Rtt();
        ~Rtt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtt_count; //type: uint32
        class SlaTimeValues; //type: IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues> sla_time_values;
        
}; // IpSlaStats::SlaOperEntry::Stats::Rtt


class IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues : public Entity
{
    public:
        SlaTimeValues();
        ~SlaTimeValues();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf avg; //type: uint32
        YLeaf max; //type: uint32
        YLeaf accuracy; //type: AccuracyTypeEnum

}; // IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues


class IpSlaStats::SlaOperEntry::Stats::OnewayLatency : public Entity
{
    public:
        OnewayLatency();
        ~OnewayLatency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_count; //type: uint32
        class Sd; //type: IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd
        class Ds; //type: IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds> ds;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd> sd;
        
}; // IpSlaStats::SlaOperEntry::Stats::OnewayLatency


class IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd : public Entity
{
    public:
        Sd();
        ~Sd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf avg; //type: uint32
        YLeaf max; //type: uint32
        YLeaf accuracy; //type: AccuracyTypeEnum

}; // IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd


class IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds : public Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf avg; //type: uint32
        YLeaf max; //type: uint32
        YLeaf accuracy; //type: AccuracyTypeEnum

}; // IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds


class IpSlaStats::SlaOperEntry::Stats::Jitter : public Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sd_sample_count; //type: uint32
        YLeaf ds_sample_count; //type: uint32
        class Sd; //type: IpSlaStats::SlaOperEntry::Stats::Jitter::Sd
        class Ds; //type: IpSlaStats::SlaOperEntry::Stats::Jitter::Ds

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Jitter::Ds> ds;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::Jitter::Sd> sd;
        
}; // IpSlaStats::SlaOperEntry::Stats::Jitter


class IpSlaStats::SlaOperEntry::Stats::Jitter::Sd : public Entity
{
    public:
        Sd();
        ~Sd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf avg; //type: uint32
        YLeaf max; //type: uint32
        YLeaf accuracy; //type: AccuracyTypeEnum

}; // IpSlaStats::SlaOperEntry::Stats::Jitter::Sd


class IpSlaStats::SlaOperEntry::Stats::Jitter::Ds : public Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf avg; //type: uint32
        YLeaf max; //type: uint32
        YLeaf accuracy; //type: AccuracyTypeEnum

}; // IpSlaStats::SlaOperEntry::Stats::Jitter::Ds


class IpSlaStats::SlaOperEntry::Stats::OverThreshold : public Entity
{
    public:
        OverThreshold();
        ~OverThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtt_count; //type: uint32
        YLeaf percent; //type: uint8

}; // IpSlaStats::SlaOperEntry::Stats::OverThreshold


class IpSlaStats::SlaOperEntry::Stats::PacketLoss : public Entity
{
    public:
        PacketLoss();
        ~PacketLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unprocessed_packets; //type: uint32
        YLeaf sd_count; //type: uint32
        YLeaf ds_count; //type: uint32
        YLeaf out_of_sequence; //type: uint32
        YLeaf drops; //type: uint32
        YLeaf late_arrivals; //type: uint32
        YLeaf skipped_packets; //type: uint32
        class SdLoss; //type: IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss
        class DsLoss; //type: IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss

        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss> ds_loss;
        std::shared_ptr<Cisco_IOS_XE_ip_sla_oper::IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss> sd_loss;
        
}; // IpSlaStats::SlaOperEntry::Stats::PacketLoss


class IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss : public Entity
{
    public:
        SdLoss();
        ~SdLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf loss_period_count; //type: uint32
        YLeaf loss_period_len_min; //type: uint32
        YLeaf loss_period_len_max; //type: uint32
        YLeaf inter_loss_period_len_min; //type: uint32
        YLeaf inter_loss_period_len_max; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss


class IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss : public Entity
{
    public:
        DsLoss();
        ~DsLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf loss_period_count; //type: uint32
        YLeaf loss_period_len_min; //type: uint32
        YLeaf loss_period_len_max; //type: uint32
        YLeaf inter_loss_period_len_min; //type: uint32
        YLeaf inter_loss_period_len_max; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss


class IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss : public Entity
{
    public:
        IcmpPacketLoss();
        ~IcmpPacketLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf late_arrivals; //type: uint32
        YLeaf out_of_sequence; //type: uint32
        YLeaf out_of_sequence_sd; //type: uint32
        YLeaf ds_out_of_sequence_ds; //type: uint32
        YLeaf out_of_sequence_both; //type: uint32
        YLeaf skipped_packets; //type: uint32
        YLeaf unprocessed_packets; //type: uint32
        YLeaf packet_loss; //type: uint32
        YLeaf loss_period_count; //type: uint32
        YLeaf loss_period_len_min; //type: uint32
        YLeaf loss_period_len_max; //type: uint32
        YLeaf inter_loss_period_len_min; //type: uint32
        YLeaf inter_loss_period_len_max; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss


class IpSlaStats::SlaOperEntry::Stats::VoiceScore : public Entity
{
    public:
        VoiceScore();
        ~VoiceScore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icpif; //type: uint32
        YLeaf mos; //type: uint32

}; // IpSlaStats::SlaOperEntry::Stats::VoiceScore

class TtlTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ttl_finite;
        static const Enum::YLeaf ttl_forever;

};

class RttTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf rtt_known;
        static const Enum::YLeaf rtt_unknown;
        static const Enum::YLeaf rtt_could_not_find;

};

class SlaOperTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf udp_echo;
        static const Enum::YLeaf udp_jitter;
        static const Enum::YLeaf icmp_jitter;
        static const Enum::YLeaf ethernet_jitter;
        static const Enum::YLeaf ethernet_echo;
        static const Enum::YLeaf y1731_delay;
        static const Enum::YLeaf y1731_loss;
        static const Enum::YLeaf video;
        static const Enum::YLeaf mcast;
        static const Enum::YLeaf pong;
        static const Enum::YLeaf path_jitter;

};

class SlaReturnCodeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ok;
        static const Enum::YLeaf disconnected;
        static const Enum::YLeaf busy;
        static const Enum::YLeaf timeout;
        static const Enum::YLeaf no_connection;
        static const Enum::YLeaf internal_error;
        static const Enum::YLeaf operation_failure;
        static const Enum::YLeaf could_not_find;

};

class AccuracyTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf milliseconds;
        static const Enum::YLeaf microseconds;

};


}
}

#endif /* _CISCO_IOS_XE_IP_SLA_OPER_ */

