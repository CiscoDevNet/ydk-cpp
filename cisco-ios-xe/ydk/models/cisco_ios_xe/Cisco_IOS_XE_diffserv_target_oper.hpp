#ifndef _CISCO_IOS_XE_DIFFSERV_TARGET_OPER_
#define _CISCO_IOS_XE_DIFFSERV_TARGET_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_diffserv_target_oper {

class Direction : public virtual ydk::Identity
{
    public:
        Direction();
        ~Direction();


}; // Direction

class DiffservInterfacesState : public ydk::Entity
{
    public:
        DiffservInterfacesState();
        ~DiffservInterfacesState();

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

        class DiffservInterface; //type: DiffservInterfacesState::DiffservInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface> > diffserv_interface;
        
}; // DiffservInterfacesState


class DiffservInterfacesState::DiffservInterface : public ydk::Entity
{
    public:
        DiffservInterface();
        ~DiffservInterface();

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
        class DiffservTargetEntry; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry> > diffserv_target_entry;
        
}; // DiffservInterfacesState::DiffservInterface


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry : public ydk::Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf policy_name; //type: string
        class DiffservTargetClassifierStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics> > diffserv_target_classifier_statistics;
        
}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics : public ydk::Entity
{
    public:
        DiffservTargetClassifierStatistics();
        ~DiffservTargetClassifierStatistics();

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
        class ClassifierEntryStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics
        class MeterStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics
        class QueuingStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics> classifier_entry_statistics;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics> > meter_statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics> queuing_statistics;
        
}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics : public ydk::Entity
{
    public:
        ClassifierEntryStatistics();
        ~ClassifierEntryStatistics();

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

}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics : public ydk::Entity
{
    public:
        MeterStatistics();
        ~MeterStatistics();

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

}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics : public ydk::Entity
{
    public:
        QueuingStatistics();
        ~QueuingStatistics();

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
        class WredStats; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats> wred_stats;
        
}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats : public ydk::Entity
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

}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats

class Inbound : public cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::Direction, virtual ydk::Identity
{
    public:
        Inbound();
        ~Inbound();


}; // Inbound

class Outbound : public cisco_ios_xe::Cisco_IOS_XE_diffserv_target_oper::Direction, virtual ydk::Identity
{
    public:
        Outbound();
        ~Outbound();


}; // Outbound


}
}

#endif /* _CISCO_IOS_XE_DIFFSERV_TARGET_OPER_ */

