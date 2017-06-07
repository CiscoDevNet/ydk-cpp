#ifndef _CISCO_IOS_XR_QOS_MA_OPER_5_
#define _CISCO_IOS_XR_QOS_MA_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ColorClassStats; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::InterfaceTable::Interface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::SatelliteIds : public Entity
{
    public:
        SatelliteIds();
        ~SatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SatelliteId; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId> > satellite_id;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId : public Entity
{
    public:
        SatelliteId();
        ~SatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nv_satellite_id; //type: int32
        class Input; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input
        class Output; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input> input;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output> output;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics> statistics;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ColorClassStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics> statistics;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ColorClassStats; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::InterfaceTable::Interface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::Input::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics> statistics;
        
}; // Qos::InterfaceTable::Interface::Input


class Qos::InterfaceTable::Interface::Input::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::InterfaceTable::Interface::Input::ServicePolicyNames


class Qos::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::InterfaceTable::Interface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::Input::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::InterfaceTable::Interface::Input::Statistics


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ColorClassStats; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::InterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::InterfaceTable::Interface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyNames; //type: Qos::InterfaceTable::Interface::Output::ServicePolicyNames
        class Statistics; //type: Qos::InterfaceTable::Interface::Output::Statistics

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics> statistics;
        
}; // Qos::InterfaceTable::Interface::Output


class Qos::InterfaceTable::Interface::Output::ServicePolicyNames : public Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicyInstance; //type: Qos::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::InterfaceTable::Interface::Output::ServicePolicyNames


class Qos::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance : public Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_name; //type: string

}; // Qos::InterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::InterfaceTable::Interface::Output::Statistics : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::InterfaceTable::Interface::Output::Statistics


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats : public Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf shared_queue_id; //type: uint32
        YLeaf queue_descr; //type: string
        YLeaf cac_state; //type: CacStateEnum
        class GeneralStats; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats : public Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats : public Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf drop_rates; //type: uint32
        YLeaf admitpackets; //type: uint64
        YLeaf admit_bytes; //type: uint64
        YLeaf admit_rates; //type: uint32

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::CacStats


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray : public Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class QueueInstanceLength; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray : public Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ColorClassStats; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray : public Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_title; //type: string
        YLeaf red_transmit_packets; //type: uint64
        YLeaf red_transmit_bytes; //type: uint64
        YLeaf random_drop_packets; //type: uint64
        YLeaf random_drop_bytes; //type: uint64
        YLeaf max_threshold_packets; //type: uint64
        YLeaf max_threshold_bytes; //type: uint64
        YLeaf red_ecn_marked_packets; //type: uint64
        YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_qos_ma_oper::Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray


class Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wred_type; //type: WredEnum
        YLeaf value_; //type: uint8

}; // Qos::InterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_5_ */

