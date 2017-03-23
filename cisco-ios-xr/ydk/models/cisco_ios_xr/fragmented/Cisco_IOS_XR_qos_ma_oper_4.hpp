#ifndef _CISCO_IOS_XR_QOS_MA_OPER_4_
#define _CISCO_IOS_XR_QOS_MA_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::QosGlobal : public Entity
{
    public:
        QosGlobal();
        ~QosGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoQ; //type: Qos::QosGlobal::VoQ

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ> vo_q;


}; // Qos::QosGlobal


class Qos::QosGlobal::VoQ : public Entity
{
    public:
        VoQ();
        ~VoQ();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoQStatistics; //type: Qos::QosGlobal::VoQ::VoQStatistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics> vo_q_statistics;


}; // Qos::QosGlobal::VoQ


class Qos::QosGlobal::VoQ::VoQStatistics : public Entity
{
    public:
        VoQStatistics();
        ~VoQStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoQinterfaces; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces> vo_qinterfaces;


}; // Qos::QosGlobal::VoQ::VoQStatistics


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces : public Entity
{
    public:
        VoQinterfaces();
        ~VoQinterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoQinterface; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface> > vo_qinterface;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface : public Entity
{
    public:
        VoQinterface();
        ~VoQinterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class OutputVoQ; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ
        class VoQMemberInterfaces; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ> output_vo_q;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces> vo_q_member_interfaces;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ : public Entity
{
    public:
        OutputVoQ();
        ~OutputVoQ();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocationvoQs; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs
        class VoQStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs> locationvo_qs;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats> vo_q_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs : public Entity
{
    public:
        LocationvoQs();
        ~LocationvoQs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocationvoQ; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ> > locationvo_q;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ : public Entity
{
    public:
        LocationvoQ();
        ~LocationvoQ();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class VoQStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats> vo_q_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats : public Entity
{
    public:
        VoQStats();
        ~VoQStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats> > class_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::ChildPolicy


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::LocationvoQs::LocationvoQ::VoQStats::ClassStats::WredStatsArray::RedLabel


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats : public Entity
{
    public:
        VoQStats();
        ~VoQStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats> > class_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::ChildPolicy


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::OutputVoQ::VoQStats::ClassStats::WredStatsArray::RedLabel


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces : public Entity
{
    public:
        VoQMemberInterfaces();
        ~VoQMemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoQMemberInterface; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface> > vo_q_member_interface;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface : public Entity
{
    public:
        VoQMemberInterface();
        ~VoQMemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class VoQoutput; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput> vo_qoutput;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput : public Entity
{
    public:
        VoQoutput();
        ~VoQoutput();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoQStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats> vo_q_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats : public Entity
{
    public:
        VoQStats();
        ~VoQStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats> > class_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats
        class IphcStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy
        class CacStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::CacStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray


class Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Qos::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface> > interface;


}; // Qos::InterfaceTable


class Qos::InterfaceTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Nodes; //type: Qos::InterfaceTable::Interface::Nodes
        class MemberInterfaces; //type: Qos::InterfaceTable::Interface::MemberInterfaces
        class SatelliteIds; //type: Qos::InterfaceTable::Interface::SatelliteIds
        class Input; //type: Qos::InterfaceTable::Interface::Input
        class Output; //type: Qos::InterfaceTable::Interface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces> member_interfaces;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output> output;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds> satellite_ids;


}; // Qos::InterfaceTable::Interface


class Qos::InterfaceTable::Interface::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Qos::InterfaceTable::Interface::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node> > node;


}; // Qos::InterfaceTable::Interface::Nodes


class Qos::InterfaceTable::Interface::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class Input; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input
        class Output; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output> output;


}; // Qos::InterfaceTable::Interface::Nodes::Node


class Qos::InterfaceTable::Interface::Nodes::Node::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics> statistics;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input


class Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames


class Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats> > class_stats;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::InterfaceTable::Interface::Nodes::Node::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::Nodes::Node::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics> statistics;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output


class Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames


class Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats> > class_stats;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::InterfaceTable::Interface::Nodes::Node::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::MemberInterfaces : public Entity
{
    public:
        MemberInterfaces();
        ~MemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MemberInterface; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface> > member_interface;


}; // Qos::InterfaceTable::Interface::MemberInterfaces


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface : public Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class SatelliteIds; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds
        class Input; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input
        class Output; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output> output;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds> satellite_ids;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds : public Entity
{
    public:
        SatelliteIds();
        ~SatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SatelliteId; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId> > satellite_id;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId : public Entity
{
    public:
        SatelliteId();
        ~SatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nv_satellite_id; //type: int32

        class Input; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input
        class Output; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output> output;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics> statistics;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats> > class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics> statistics;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats> > class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics> statistics;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats> > class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum

        class GeneralStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf non_tcp_total_out_packets; //type: uint64
        YLeaf non_tcp_total_out_bytes; //type: uint64
        YLeaf non_tcp_bytes_saved; //type: uint64
        YLeaf non_tcp_compressed_packets_out; //type: uint64
        YLeaf non_tcp_bytes_sent_rate; //type: uint32
        YLeaf non_tcp_full_header_packets_out; //type: uint64
        YLeaf tcp_total_out_packets; //type: uint64
        YLeaf tcp_total_out_bytes; //type: uint64
        YLeaf tcp_bytes_saved; //type: uint64
        YLeaf tcp_compressed_packets_out; //type: uint64
        YLeaf tcp_bytes_sent_rate; //type: uint32
        YLeaf tcp_full_header_packets_out; //type: uint64



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf tail_drop_packets; //type: uint64
        YLeaf tail_drop_bytes; //type: uint64
        YLeaf atm_clp0_drop_packets; //type: uint64
        YLeaf atm_clp0_drop_bytes; //type: uint64
        YLeaf atm_clp1_drop_packets; //type: uint64
        YLeaf atm_clp1_drop_bytes; //type: uint64
        YLeaf queue_drop_threshold; //type: uint32
        YLeaf forced_wred_stats_display; //type: boolean
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32

        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf conform_packets; //type: uint64
        YLeaf conform_bytes; //type: uint64
        YLeaf exceed_packets; //type: uint64
        YLeaf exceed_bytes; //type: uint64
        YLeaf violate_packets; //type: uint64
        YLeaf violate_bytes; //type: uint64
        YLeaf parent_drop_packets; //type: uint64
        YLeaf parent_drop_bytes; //type: uint64
        YLeaf conform_rate; //type: uint32
        YLeaf exceed_rate; //type: uint32
        YLeaf violate_rate; //type: uint32

        class ColorClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conform_class_conform_packets; //type: uint64
        YLeaf conform_class_conform_bytes; //type: uint64
        YLeaf conform_class_conform_rate; //type: uint32
        YLeaf conform_class_exceed_packets; //type: uint64
        YLeaf conform_class_exceed_bytes; //type: uint64
        YLeaf conform_class_exceed_rate; //type: uint32
        YLeaf conform_class_violate_packets; //type: uint64
        YLeaf conform_class_violate_bytes; //type: uint64
        YLeaf conform_class_violate_rate; //type: uint32
        YLeaf exceed_class_exceed_packets; //type: uint64
        YLeaf exceed_class_exceed_bytes; //type: uint64
        YLeaf exceed_class_exceed_rate; //type: uint32
        YLeaf exceed_class_violate_packets; //type: uint64
        YLeaf exceed_class_violate_bytes; //type: uint64
        YLeaf exceed_class_violate_rate; //type: uint32
        YLeaf violate_class_violate_packets; //type: uint64
        YLeaf violate_class_violate_bytes; //type: uint64
        YLeaf violate_class_violate_rate; //type: uint32



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64

        class RedLabel; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics> statistics;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32

        class ClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats> > class_stats;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_4_ */

