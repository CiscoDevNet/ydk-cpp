#ifndef _CISCO_IOS_XE_DIFFSERV_TARGET_OPER_
#define _CISCO_IOS_XE_DIFFSERV_TARGET_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_diffserv_target_oper {

class DirectionIdentity : public virtual Identity
{
    public:
        DirectionIdentity();
        ~DirectionIdentity();


}; // DirectionIdentity

class DiffservInterfacesState : public Entity
{
    public:
        DiffservInterfacesState();
        ~DiffservInterfacesState();

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

        class DiffservInterface; //type: DiffservInterfacesState::DiffservInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface> > diffserv_interface_;
        
}; // DiffservInterfacesState


class DiffservInterfacesState::DiffservInterface : public Entity
{
    public:
        DiffservInterface();
        ~DiffservInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class DiffservTargetEntry; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry

        std::vector<std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry> > diffserv_target_entry_;
        
}; // DiffservInterfacesState::DiffservInterface


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry : public Entity
{
    public:
        DiffservTargetEntry();
        ~DiffservTargetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionIdentity
        YLeaf policy_name; //type: string
        class DiffservTargetClassifierStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics

        std::vector<std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics> > diffserv_target_classifier_statistics_;
        
}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics : public Entity
{
    public:
        DiffservTargetClassifierStatistics();
        ~DiffservTargetClassifierStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classifier_entry_name; //type: string
        YLeaf parent_path; //type: string
        class ClassifierEntryStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics
        class MeterStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics
        class QueuingStatistics; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics

        std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics> classifier_entry_statistics_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics> > meter_statistics_;
        std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics> queuing_statistics_;
        
}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics : public Entity
{
    public:
        ClassifierEntryStatistics();
        ~ClassifierEntryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classified_pkts; //type: uint64
        YLeaf classified_bytes; //type: uint64
        YLeaf classified_rate; //type: uint64

}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics : public Entity
{
    public:
        MeterStatistics();
        ~MeterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf meter_id; //type: uint16
        YLeaf meter_succeed_pkts; //type: uint64
        YLeaf meter_succeed_bytes; //type: uint64
        YLeaf meter_failed_pkts; //type: uint64
        YLeaf meter_failed_bytes; //type: uint64

}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics : public Entity
{
    public:
        QueuingStatistics();
        ~QueuingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf output_pkts; //type: uint64
        YLeaf output_bytes; //type: uint64
        YLeaf queue_size_pkts; //type: uint64
        YLeaf queue_size_bytes; //type: uint64
        YLeaf drop_pkts; //type: uint64
        YLeaf drop_bytes; //type: uint64
        class WredStats; //type: DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats

        std::shared_ptr<Cisco_IOS_XE_diffserv_target_oper::DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats> wred_stats_;
        
}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics


class DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats : public Entity
{
    public:
        WredStats();
        ~WredStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf early_drop_pkts; //type: uint64
        YLeaf early_drop_bytes; //type: uint64

}; // DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats

class InboundIdentity : public Cisco_IOS_XE_diffserv_target_oper::DirectionIdentity, virtual Identity
{
    public:
        InboundIdentity();
        ~InboundIdentity();


}; // InboundIdentity

class OutboundIdentity : public Cisco_IOS_XE_diffserv_target_oper::DirectionIdentity, virtual Identity
{
    public:
        OutboundIdentity();
        ~OutboundIdentity();


}; // OutboundIdentity


}
}

#endif /* _CISCO_IOS_XE_DIFFSERV_TARGET_OPER_ */

