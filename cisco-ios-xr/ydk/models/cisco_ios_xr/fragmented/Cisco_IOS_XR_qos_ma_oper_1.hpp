#ifndef _CISCO_IOS_XR_QOS_MA_OPER_1_
#define _CISCO_IOS_XR_QOS_MA_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::NvInterfaceTable::Interface::Input::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats> > class_stats;


}; // Qos::NvInterfaceTable::Interface::Input::Statistics


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray


class Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvInterfaceTable::Interface::Output : public Entity
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



        class ServicePolicyNames; //type: Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames
        class Statistics; //type: Qos::NvInterfaceTable::Interface::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics> statistics;


}; // Qos::NvInterfaceTable::Interface::Output


class Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames


class Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::NvInterfaceTable::Interface::Output::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats> > class_stats;


}; // Qos::NvInterfaceTable::Interface::Output::Statistics


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite : public Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteStatistics; //type: Qos::NvSatellite::NvSatelliteStatistics
        class NvSatelliteStatus; //type: Qos::NvSatellite::NvSatelliteStatus

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics> nv_satellite_statistics;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus> nv_satellite_status;


}; // Qos::NvSatellite


class Qos::NvSatellite::NvSatelliteStatistics : public Entity
{
    public:
        NvSatelliteStatistics();
        ~NvSatelliteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteIds; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds> nv_satellite_ids;


}; // Qos::NvSatellite::NvSatelliteStatistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds : public Entity
{
    public:
        NvSatelliteIds();
        ~NvSatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteId; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId> > nv_satellite_id;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId : public Entity
{
    public:
        NvSatelliteId();
        ~NvSatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: int32

        class NvSatelliteInterfaces; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces> nv_satellite_interfaces;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces : public Entity
{
    public:
        NvSatelliteInterfaces();
        ~NvSatelliteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteInterface; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface> > nv_satellite_interface;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface : public Entity
{
    public:
        NvSatelliteInterface();
        ~NvSatelliteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class MemberInterfaces; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces
        class Input; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces> member_interfaces;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output> output;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces : public Entity
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



        class MemberInterface; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface> > member_interface;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface : public Entity
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

        class SatelliteIds; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds
        class Input; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output> output;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds> satellite_ids;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds : public Entity
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



        class SatelliteId; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId> > satellite_id;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId : public Entity
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

        class Input; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output> output;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input : public Entity
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



        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics> statistics;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats> > class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output : public Entity
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



        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics> statistics;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats> > class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input : public Entity
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



        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics> statistics;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats> > class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output : public Entity
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



        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics> statistics;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats> > class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input : public Entity
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



        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics> statistics;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats> > class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output : public Entity
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



        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics> statistics;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames : public Entity
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



        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics : public Entity
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

        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats> > class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats : public Entity
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

        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy : public Entity
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





}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray : public Entity
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

        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
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

        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray : public Entity
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

        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;


}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
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



}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatus : public Entity
{
    public:
        NvSatelliteStatus();
        ~NvSatelliteStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteIds; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds> nv_satellite_ids;


}; // Qos::NvSatellite::NvSatelliteStatus


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds : public Entity
{
    public:
        NvSatelliteIds();
        ~NvSatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteId; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId> > nv_satellite_id;


}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId : public Entity
{
    public:
        NvSatelliteId();
        ~NvSatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: int32

        class NvSatelliteInterfaces; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces> nv_satellite_interfaces;


}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces : public Entity
{
    public:
        NvSatelliteInterfaces();
        ~NvSatelliteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NvSatelliteInterface; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface> > nv_satellite_interface;


}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface : public Entity
{
    public:
        NvSatelliteInterface();
        ~NvSatelliteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class MemberInterfaces; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces
        class Input; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input
        class Status; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Status
        class Output; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces> member_interfaces;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output> output;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Status> status;


}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces : public Entity
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



        class MemberInterface; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface> > member_interface;


}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces


class Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface : public Entity
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

        class Input; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output> output;


}; // Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_1_ */

