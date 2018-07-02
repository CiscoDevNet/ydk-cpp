#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_5_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {


class Controller::Switch::Oper::Fdb::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Statistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Statistics


class Controller::Switch::Oper::Fdb::Statistics::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class CounterInfo; //type: Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo
        class CoreId; //type: Controller::Switch::Oper::Fdb::Statistics::Location::CoreId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo> counter_info;
        ydk::YList core_id;
        
}; // Controller::Switch::Oper::Fdb::Statistics::Location


class Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo : public ydk::Entity
{
    public:
        CounterInfo();
        ~CounterInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_shadow_entries; //type: uint32
        ydk::YLeaf fdb_max_shadow_entries; //type: uint32
        ydk::YLeaf fdb_max_hash_chain; //type: uint32
        ydk::YLeaf fdb_entries_added; //type: uint32
        ydk::YLeaf fdb_entries_deleted; //type: uint32
        ydk::YLeaf fdb_entries_updated; //type: uint32
        ydk::YLeaf fdb_flushes; //type: uint32
        ydk::YLeaf fdb_address_updates; //type: uint32
        ydk::YLeaf fdb_new_addresses; //type: uint32
        ydk::YLeaf fdb_aged_updates; //type: uint32
        ydk::YLeaf fdb_transplant_updates; //type: uint32
        ydk::YLeaf fdb_forwarding_updates; //type: uint32
        ydk::YLeaf fdb_address_insert_errors; //type: uint32
        ydk::YLeaf fdb_address_update_errors; //type: uint32
        ydk::YLeaf fdb_memory_errors; //type: uint32
        ydk::YLeaf fdb_allocation_errors; //type: uint32
        ydk::YLeaf fdb_address_updates_queued; //type: uint32
        ydk::YLeaf fdb_address_queue_full; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_forwarding_updates_queued; //type: uint32
        ydk::YLeaf fdb_forwarding_queue_full; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo


class Controller::Switch::Oper::Fdb::Statistics::Location::CoreId : public ydk::Entity
{
    public:
        CoreId();
        ~CoreId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf core; //type: int32
        ydk::YLeaf core_entries; //type: uint32
        ydk::YLeaf core_static_entries; //type: uint32

}; // Controller::Switch::Oper::Fdb::Statistics::Location::CoreId


class Controller::Switch::Oper::Fdb::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

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

        class Location; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        class Rules; //type: Controller::Switch::Oper::Vlan::Rules
        class Information; //type: Controller::Switch::Oper::Vlan::Information
        class VlanDetail; //type: Controller::Switch::Oper::Vlan::VlanDetail
        class Membership; //type: Controller::Switch::Oper::Vlan::Membership

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Rules> rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::VlanDetail> vlan_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Membership> membership;
        
}; // Controller::Switch::Oper::Vlan


class Controller::Switch::Oper::Vlan::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

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

        class Location; //type: Controller::Switch::Oper::Vlan::Rules::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::Rules


class Controller::Switch::Oper::Vlan::Rules::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Vlan::Rules::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Vlan::Rules::Location


class Controller::Switch::Oper::Vlan::Rules::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class VlanId; //type: Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Rules::Location::PortIter


class Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        class RuleId; //type: Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId

        ydk::YList rule_id;
        
}; // Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId


class Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId : public ydk::Entity
{
    public:
        RuleId();
        ~RuleId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        ydk::YLeaf match_table; //type: SwitchTableTypeEnum
        ydk::YLeaf match_type; //type: SwitchMatchTypeEnum
        ydk::YLeaf match_vlan_id; //type: uint16
        ydk::YLeaf action; //type: SwitchActionTypeEnum
        ydk::YLeaf action_vlan_id; //type: uint16

}; // Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId


class Controller::Switch::Oper::Vlan::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

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

        class Location; //type: Controller::Switch::Oper::Vlan::Information::Location
        class Summary; //type: Controller::Switch::Oper::Vlan::Information::Summary

        ydk::YList location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Information::Summary> summary;
        
}; // Controller::Switch::Oper::Vlan::Information


class Controller::Switch::Oper::Vlan::Information::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class SdrId; //type: Controller::Switch::Oper::Vlan::Information::Location::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Location


class Controller::Switch::Oper::Vlan::Information::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class VlanId; //type: Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Location::SdrId


class Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeaf vlan_use; //type: string

}; // Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId


class Controller::Switch::Oper::Vlan::Information::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        class SdrId; //type: Controller::Switch::Oper::Vlan::Information::Summary::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Summary


class Controller::Switch::Oper::Vlan::Information::Summary::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

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

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class VlanId; //type: Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Summary::SdrId


class Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeaf vlan_use; //type: string

}; // Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId


class Controller::Switch::Oper::Vlan::VlanDetail : public ydk::Entity
{
    public:
        VlanDetail();
        ~VlanDetail();

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

        class VlanId; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

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

        ydk::YLeaf vlan; //type: uint16
        class Rules; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules> rules;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class RuleId; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId

        ydk::YList rule_id;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId : public ydk::Entity
{
    public:
        RuleId();
        ~RuleId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        ydk::YLeaf match_table; //type: SwitchTableTypeEnum
        ydk::YLeaf match_type; //type: SwitchMatchTypeEnum
        ydk::YLeaf match_vlan_id; //type: uint16
        ydk::YLeaf action; //type: SwitchActionTypeEnum
        ydk::YLeaf action_vlan_id; //type: uint16

}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId


class Controller::Switch::Oper::Vlan::Membership : public ydk::Entity
{
    public:
        Membership();
        ~Membership();

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

        class Location; //type: Controller::Switch::Oper::Vlan::Membership::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::Membership


class Controller::Switch::Oper::Vlan::Membership::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class VlanId; //type: Controller::Switch::Oper::Vlan::Membership::Location::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Membership::Location


class Controller::Switch::Oper::Vlan::Membership::Location::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Vlan::Membership::Location::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeafList port; //type: list of  uint8

}; // Controller::Switch::Oper::Vlan::Membership::Location::VlanId


class Controller::Switch::Oper::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        class PortStatistics; //type: Controller::Switch::Oper::Sdr::PortStatistics
        class GlobalStatistics; //type: Controller::Switch::Oper::Sdr::GlobalStatistics
        class Policers; //type: Controller::Switch::Oper::Sdr::Policers
        class SdrDetail; //type: Controller::Switch::Oper::Sdr::SdrDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::PortStatistics> port_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::GlobalStatistics> global_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::Policers> policers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::SdrDetail> sdr_detail;
        
}; // Controller::Switch::Oper::Sdr


class Controller::Switch::Oper::Sdr::PortStatistics : public ydk::Entity
{
    public:
        PortStatistics();
        ~PortStatistics();

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

        class Location; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics


class Controller::Switch::Oper::Sdr::PortStatistics::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class SdrId; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class TrafficTypeId; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId

        ydk::YList traffic_type_id;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId : public ydk::Entity
{
    public:
        TrafficTypeId();
        ~TrafficTypeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_type; //type: EsdmaSdrTrafficType
        class DirectionId; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId

        ydk::YList direction_id;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId : public ydk::Entity
{
    public:
        DirectionId();
        ~DirectionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        ydk::YLeaf green_packets; //type: uint64
        ydk::YLeaf yellow_packets; //type: uint64
        ydk::YLeaf red_packets; //type: uint64

}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId


class Controller::Switch::Oper::Sdr::GlobalStatistics : public ydk::Entity
{
    public:
        GlobalStatistics();
        ~GlobalStatistics();

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

        class Location; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class SdrId; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class TrafficTypeId; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId

        ydk::YList traffic_type_id;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId : public ydk::Entity
{
    public:
        TrafficTypeId();
        ~TrafficTypeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_type; //type: EsdmaSdrTrafficType
        class TrafficClassId; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId

        ydk::YList traffic_class_id;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId : public ydk::Entity
{
    public:
        TrafficClassId();
        ~TrafficClassId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tc; //type: int8
        ydk::YLeaf green_packets; //type: uint64
        ydk::YLeaf yellow_packets; //type: uint64
        ydk::YLeaf red_packets; //type: uint64

}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId


class Controller::Switch::Oper::Sdr::Policers : public ydk::Entity
{
    public:
        Policers();
        ~Policers();

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

        class Location; //type: Controller::Switch::Oper::Sdr::Policers::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::Policers


class Controller::Switch::Oper::Sdr::Policers::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class EsdPolicerStatus; //type: Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus
        class SdrId; //type: Controller::Switch::Oper::Sdr::Policers::Location::SdrId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus> esd_policer_status;
        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::Policers::Location


class Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus : public ydk::Entity
{
    public:
        EsdPolicerStatus();
        ~EsdPolicerStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IndentGroup; //type: Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup> indent_group;
        
}; // Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus


class Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup : public ydk::Entity
{
    public:
        IndentGroup();
        ~IndentGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf esd_port_policing_enabled; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_port_committed_burst_size; //type: uint32
        ydk::YLeaf esd_port_peak_burst_size; //type: uint32
        ydk::YLeaf esd_port_policer_mru; //type: uint32
        ydk::YLeaf esd_global_policing_enabled; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_global_committed_burst_size; //type: uint32
        ydk::YLeaf esd_global_peak_burst_size; //type: uint32
        ydk::YLeaf esd_global_policer_mru; //type: uint32

}; // Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup


class Controller::Switch::Oper::Sdr::Policers::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        ydk::YLeaf esd_sdr_cir; //type: uint8
        ydk::YLeaf esd_sdr_pir; //type: uint8
        class EsdSdrCosTypeIter; //type: Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter

        ydk::YList esd_sdr_cos_type_iter;
        
}; // Controller::Switch::Oper::Sdr::Policers::Location::SdrId


class Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter : public ydk::Entity
{
    public:
        EsdSdrCosTypeIter();
        ~EsdSdrCosTypeIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf esd_sdr_cos_type; //type: EsdCirEirType
        ydk::YLeaf esd_sdr_cos_0; //type: uint8
        ydk::YLeaf esd_sdr_cos_1; //type: uint8
        ydk::YLeaf esd_sdr_cos_2; //type: uint8
        ydk::YLeaf esd_sdr_cos_3; //type: uint8
        ydk::YLeaf esd_sdr_cos_4; //type: uint8
        ydk::YLeaf esd_sdr_cos_5; //type: uint8
        ydk::YLeaf esd_sdr_cos_6; //type: uint8
        ydk::YLeaf esd_sdr_cos_7; //type: uint8

}; // Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter


class Controller::Switch::Oper::Sdr::SdrDetail : public ydk::Entity
{
    public:
        SdrDetail();
        ~SdrDetail();

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

        class SdrId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

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

        ydk::YLeaf sdr; //type: uint8
        class PortStatistics; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics> port_statistics;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics : public ydk::Entity
{
    public:
        PortStatistics();
        ~PortStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class TrafficTypeId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId

        ydk::YList traffic_type_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId : public ydk::Entity
{
    public:
        TrafficTypeId();
        ~TrafficTypeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_type; //type: EsdmaSdrTrafficType
        class DirectionId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId

        ydk::YList direction_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId : public ydk::Entity
{
    public:
        DirectionId();
        ~DirectionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        class TrafficClassId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId

        ydk::YList traffic_class_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId : public ydk::Entity
{
    public:
        TrafficClassId();
        ~TrafficClassId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tc; //type: int8
        ydk::YLeaf green_packets; //type: uint64
        ydk::YLeaf yellow_packets; //type: uint64
        ydk::YLeaf red_packets; //type: uint64

}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId


class Controller::Switch::Oper::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

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

        class Summary; //type: Controller::Switch::Oper::Sfp::Summary
        class Detail; //type: Controller::Switch::Oper::Sfp::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail> detail;
        
}; // Controller::Switch::Oper::Sfp


class Controller::Switch::Oper::Sfp::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        class Location; //type: Controller::Switch::Oper::Sfp::Summary::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sfp::Summary


class Controller::Switch::Oper::Sfp::Summary::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class SfpPortIter; //type: Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter

        ydk::YList sfp_port_iter;
        
}; // Controller::Switch::Oper::Sfp::Summary::Location


class Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter : public ydk::Entity
{
    public:
        SfpPortIter();
        ~SfpPortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sfp_port; //type: int32
        ydk::YLeaf sfp_inserted; //type: EsdmaSwitchSfpInsertedEnum
        ydk::YLeaf sfp_controller; //type: EsdmaSwitchSfpControllerEnum
        ydk::YLeaf sfp_type; //type: EsdmaSwitchSfpTypeEnum
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter


class Controller::Switch::Oper::Sfp::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::Switch::Oper::Sfp::Detail::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sfp::Detail


class Controller::Switch::Oper::Sfp::Detail::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class SfpPortIter; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter

        ydk::YList sfp_port_iter;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter : public ydk::Entity
{
    public:
        SfpPortIter();
        ~SfpPortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sfp_port; //type: int32
        ydk::YLeaf sfp_inserted; //type: EsdmaSwitchSfpInsertedEnum
        ydk::YLeaf sfp_type; //type: EsdmaSwitchSfpTypeEnum
        class SfpDetails; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails
        class QsfpDetails; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails> sfp_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails> qsfp_details;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails : public ydk::Entity
{
    public:
        SfpDetails();
        ~SfpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SfpPortDetail; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail
        class SfpMsaData; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData
        class SfpDiagAnalogInfo; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo
        class SfpDiagData1; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1
        class SfpDiagUserInfo; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo
        class SfpDiagData2; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail> sfp_port_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData> sfp_msa_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo> sfp_diag_analog_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1> sfp_diag_data1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo> sfp_diag_user_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2> sfp_diag_data2;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail : public ydk::Entity
{
    public:
        SfpPortDetail();
        ~SfpPortDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sfp_tranceiver_type; //type: EsdmaSwitchSfpTranceiverTypeEnum
        ydk::YLeaf sfp_tranceiver_code; //type: EsdmaSwitchSfpTypeEnum
        ydk::YLeaf sfp_encoding; //type: EsdmaSfpEncodingEnum
        ydk::YLeaf sfp_bit_rate; //type: uint32
        ydk::YLeaf sfp_link_reach_9u_fiber_km; //type: uint32
        ydk::YLeaf sfp_link_reach_9u_fiber_m; //type: uint32
        ydk::YLeaf sfp_link_reach_50u_fiber_m; //type: uint32
        ydk::YLeaf sfp_link_reach_62_5u_fiber_m; //type: uint32
        ydk::YLeaf sfp_link_reach_copper_m; //type: uint32
        ydk::YLeaf sfp_vendor_name; //type: string
        ydk::YLeaf sfp_vendor_oui; //type: string
        ydk::YLeaf sfp_vendor_part_num; //type: string
        ydk::YLeaf sfp_laser_wavelength; //type: uint32
        ydk::YLeaf sfp_options; //type: SfpOptions
        ydk::YLeaf sfp_vendor_serial_num; //type: string
        ydk::YLeaf sfp_data_code; //type: string
        ydk::YLeaf sfp_diag_monitoring; //type: SfpDiagMonitoring
        ydk::YLeaf sfp_enhanced_options; //type: SfpEnhancedOptions

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData : public ydk::Entity
{
    public:
        SfpMsaData();
        ~SfpMsaData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sfp_msa_0x00; //type: string
        ydk::YLeaf sfp_msa_0x10; //type: string
        ydk::YLeaf sfp_msa_0x20; //type: string
        ydk::YLeaf sfp_msa_0x30; //type: string
        ydk::YLeaf sfp_msa_0x40; //type: string
        ydk::YLeaf sfp_msa_0x50; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo : public ydk::Entity
{
    public:
        SfpDiagAnalogInfo();
        ~SfpDiagAnalogInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Thresholds; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds
        class RealTimeData; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds> thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData> real_time_data;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Temperature; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature
        class Voltage; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage
        class Bias; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias
        class TxPower; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower
        class RxPower; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature> temperature;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage> voltage;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias> bias;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower> tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower> rx_power;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature : public ydk::Entity
{
    public:
        Temperature();
        ~Temperature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf temp_alarm_high; //type: string
        ydk::YLeaf temp_warning_high; //type: string
        ydk::YLeaf temp_warning_low; //type: string
        ydk::YLeaf temp_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage : public ydk::Entity
{
    public:
        Voltage();
        ~Voltage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf volt_alarm_high; //type: string
        ydk::YLeaf volt_warning_high; //type: string
        ydk::YLeaf volt_warning_low; //type: string
        ydk::YLeaf volt_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias : public ydk::Entity
{
    public:
        Bias();
        ~Bias();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bias_alarm_high; //type: string
        ydk::YLeaf bias_warning_high; //type: string
        ydk::YLeaf bias_warning_low; //type: string
        ydk::YLeaf bias_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower : public ydk::Entity
{
    public:
        TxPower();
        ~TxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_power_alarm_high; //type: string
        ydk::YLeaf tx_power_warning_high; //type: string
        ydk::YLeaf tx_power_warning_low; //type: string
        ydk::YLeaf tx_power_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower : public ydk::Entity
{
    public:
        RxPower();
        ~RxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_power_alarm_high; //type: string
        ydk::YLeaf rx_power_warning_high; //type: string
        ydk::YLeaf rx_power_warning_low; //type: string
        ydk::YLeaf rx_power_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData : public ydk::Entity
{
    public:
        RealTimeData();
        ~RealTimeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Current; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current> current;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current : public ydk::Entity
{
    public:
        Current();
        ~Current();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cur_temperature; //type: string
        ydk::YLeaf cur_voltage; //type: string
        ydk::YLeaf cur_bias; //type: string
        ydk::YLeaf cur_tx_power; //type: string
        ydk::YLeaf cur_rx_power; //type: string
        ydk::YLeaf optional_status_control; //type: OptionalStatusControl

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1 : public ydk::Entity
{
    public:
        SfpDiagData1();
        ~SfpDiagData1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticalSfpDiag; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag> optical_sfp_diag;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag : public ydk::Entity
{
    public:
        OpticalSfpDiag();
        ~OpticalSfpDiag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sfp_diag_0x00; //type: string
        ydk::YLeaf sfp_diag_0x10; //type: string
        ydk::YLeaf sfp_diag_0x20; //type: string
        ydk::YLeaf sfp_diag_0x30; //type: string
        ydk::YLeaf sfp_diag_0x40; //type: string
        ydk::YLeaf sfp_diag_0x50; //type: string
        ydk::YLeaf sfp_diag_0x60; //type: string
        ydk::YLeaf sfp_diag_0x70; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo : public ydk::Entity
{
    public:
        SfpDiagUserInfo();
        ~SfpDiagUserInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CiscoData; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData> cisco_data;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData : public ydk::Entity
{
    public:
        CiscoData();
        ~CiscoData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco_clei_code; //type: string
        ydk::YLeaf cisco_part_number; //type: string
        ydk::YLeaf cisco_min_temperature; //type: int8
        ydk::YLeaf cisco_max_temperature; //type: int8
        ydk::YLeaf cisco_product_id; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2 : public ydk::Entity
{
    public:
        SfpDiagData2();
        ~SfpDiagData2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticalSfpDiag; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag> optical_sfp_diag;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag : public ydk::Entity
{
    public:
        OpticalSfpDiag();
        ~OpticalSfpDiag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sfp_diag_0x80; //type: string
        ydk::YLeaf sfp_diag_0x90; //type: string
        ydk::YLeaf sfp_diag_0xa0; //type: string
        ydk::YLeaf sfp_diag_0xb0; //type: string
        ydk::YLeaf sfp_diag_0xc0; //type: string
        ydk::YLeaf sfp_diag_0xd0; //type: string
        ydk::YLeaf sfp_diag_0xe0; //type: string
        ydk::YLeaf sfp_diag_0xf0; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails : public ydk::Entity
{
    public:
        QsfpDetails();
        ~QsfpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QsfpPageA0Data; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data
        class QsfpPageA00Data; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data
        class QsfpPageA03Data; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data> qsfp_page_a0_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data> qsfp_page_a0_0_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data> qsfp_page_a0_3_data;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data : public ydk::Entity
{
    public:
        QsfpPageA0Data();
        ~QsfpPageA0Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QsfpRealTimeData; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData
        class QsfpRealTimeStatusFlags; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData> qsfp_real_time_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags> qsfp_real_time_status_flags;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData : public ydk::Entity
{
    public:
        QsfpRealTimeData();
        ~QsfpRealTimeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QsfpTempVolt; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt
        class QsfpTxChannelBias; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias
        class QsfpTxOutputPower; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower
        class QsfpRxInputPower; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt> qsfp_temp_volt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias> qsfp_tx_channel_bias;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower> qsfp_tx_output_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower> qsfp_rx_input_power;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt : public ydk::Entity
{
    public:
        QsfpTempVolt();
        ~QsfpTempVolt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_monitor_temperature; //type: string
        ydk::YLeaf module_monitor_voltage; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias : public ydk::Entity
{
    public:
        QsfpTxChannelBias();
        ~QsfpTxChannelBias();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_monitor_tx1_bias; //type: string
        ydk::YLeaf channel_monitor_tx2_bias; //type: string
        ydk::YLeaf channel_monitor_tx3_bias; //type: string
        ydk::YLeaf channel_monitor_tx4_bias; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower : public ydk::Entity
{
    public:
        QsfpTxOutputPower();
        ~QsfpTxOutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_monitor_tx1_power; //type: string
        ydk::YLeaf channel_monitor_tx2_power; //type: string
        ydk::YLeaf channel_monitor_tx3_power; //type: string
        ydk::YLeaf channel_monitor_tx4_power; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower : public ydk::Entity
{
    public:
        QsfpRxInputPower();
        ~QsfpRxInputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_monitor_rx1_power; //type: string
        ydk::YLeaf channel_monitor_rx2_power; //type: string
        ydk::YLeaf channel_monitor_rx3_power; //type: string
        ydk::YLeaf channel_monitor_rx4_power; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags : public ydk::Entity
{
    public:
        QsfpRealTimeStatusFlags();
        ~QsfpRealTimeStatusFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QsfpRealTimeStatus; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus
        class QsfpRealTimeInterruptFlags; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus> qsfp_real_time_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags> qsfp_real_time_interrupt_flags;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus : public ydk::Entity
{
    public:
        QsfpRealTimeStatus();
        ~QsfpRealTimeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_page_select; //type: string
        ydk::YLeaf qsfp_status; //type: QsfpStatus

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags : public ydk::Entity
{
    public:
        QsfpRealTimeInterruptFlags();
        ~QsfpRealTimeInterruptFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_int_flags_los_indicator; //type: QsfpIntFlagsLOSIndicator
        ydk::YLeaf qsfp_int_flags_fault_indicator; //type: QsfpIntFlagsFaultIndicator
        ydk::YLeaf qsfp_int_flags_temperature_indicator; //type: QsfpIntFlagsTemperatureIndicator
        ydk::YLeaf qsfp_int_flags_supply_voltage_indicator; //type: QsfpIntFlagsSupplyVoltageIndicator
        ydk::YLeaf qsfp_int_flags_rx_power_indicator; //type: QsfpIntFlagsRxPowerIndicator
        ydk::YLeaf qsfp_int_flags_tx_bias_indicator; //type: QsfpIntFlagsTxBiasIndicator

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data : public ydk::Entity
{
    public:
        QsfpPageA00Data();
        ~QsfpPageA00Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_identifier; //type: EsdmaSwitchSfpTranceiverTypeEnum
        ydk::YLeaf qsfp_transceiver; //type: EsdmaQsfpTransceiverEnum
        ydk::YLeaf qsfp_extended_transceiver; //type: string
        ydk::YLeaf qsfp_encoding; //type: EsdmaSfpEncodingEnum
        ydk::YLeaf qsfp_bit_rate; //type: uint32
        ydk::YLeaf qsfp_link_length_standard_sm_fiber_km; //type: uint32
        ydk::YLeaf qsfp_link_length_om3_50u_fiber_m; //type: uint32
        ydk::YLeaf qsfp_link_length_om2_50u_fiber_m; //type: uint32
        ydk::YLeaf qsfp_link_length_om1_62_5u_fiber_m; //type: uint32
        ydk::YLeaf qsfp_link_length_copper_cable_assembly_fiber_m; //type: uint32
        ydk::YLeaf qsfp_device_tech; //type: string
        ydk::YLeaf qsfp_vendor_name; //type: string
        ydk::YLeaf qsfp_vendor_oui; //type: string
        ydk::YLeaf qsfp_vendor_part_num; //type: string
        ydk::YLeaf qsfp_laser_wavelength; //type: uint32
        ydk::YLeaf qsfp_wavelength_tolerance; //type: uint32
        ydk::YLeaf qsfp_max_case_temperature; //type: string
        ydk::YLeaf qsfp_option_value_rx_amplitude; //type: QsfpOptionValueRxAmplitude
        ydk::YLeaf qsfp_option_values_indicator; //type: QsfpOptionValuesIndicator
        ydk::YLeaf qsfp_vendor_serial_num; //type: string
        ydk::YLeaf qsfp_date_code; //type: string
        ydk::YLeaf qsfp_diag_monitoring_type; //type: QsfpDiagMonitoringType

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data : public ydk::Entity
{
    public:
        QsfpPageA03Data();
        ~QsfpPageA03Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QsfpTemperature; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature
        class QsfpVoltage; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage
        class QsfpTxBias; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias
        class QsfpTxPower; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower
        class QsfpRxPower; //type: Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature> qsfp_temperature;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage> qsfp_voltage;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias> qsfp_tx_bias;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower> qsfp_tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower> qsfp_rx_power;
        
}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature : public ydk::Entity
{
    public:
        QsfpTemperature();
        ~QsfpTemperature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_temp_alarm_high; //type: string
        ydk::YLeaf qsfp_temp_warning_high; //type: string
        ydk::YLeaf qsfp_temp_warning_low; //type: string
        ydk::YLeaf qsfp_temp_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage : public ydk::Entity
{
    public:
        QsfpVoltage();
        ~QsfpVoltage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_volt_alarm_high; //type: string
        ydk::YLeaf qsfp_volt_warning_high; //type: string
        ydk::YLeaf qsfp_volt_warning_low; //type: string
        ydk::YLeaf qsfp_volt_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias : public ydk::Entity
{
    public:
        QsfpTxBias();
        ~QsfpTxBias();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_tx_bias_alarm_high; //type: string
        ydk::YLeaf qsfp_tx_bias_warning_high; //type: string
        ydk::YLeaf qsfp_tx_bias_warning_low; //type: string
        ydk::YLeaf qsfp_tx_bias_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower : public ydk::Entity
{
    public:
        QsfpTxPower();
        ~QsfpTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_tx_power_alarm_high; //type: string
        ydk::YLeaf qsfp_tx_power_warning_high; //type: string
        ydk::YLeaf qsfp_tx_power_warning_low; //type: string
        ydk::YLeaf qsfp_tx_power_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower


class Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower : public ydk::Entity
{
    public:
        QsfpRxPower();
        ~QsfpRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qsfp_rx_power_alarm_high; //type: string
        ydk::YLeaf qsfp_rx_power_warning_high; //type: string
        ydk::YLeaf qsfp_rx_power_warning_low; //type: string
        ydk::YLeaf qsfp_rx_power_alarm_low; //type: string

}; // Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower


class Controller::Switch::Oper::Mlap : public ydk::Entity
{
    public:
        Mlap();
        ~Mlap();

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

        class Reachable; //type: Controller::Switch::Oper::Mlap::Reachable
        class Detail; //type: Controller::Switch::Oper::Mlap::Detail
        class Statistics; //type: Controller::Switch::Oper::Mlap::Statistics
        class SummaryData; //type: Controller::Switch::Oper::Mlap::SummaryData
        class Debug; //type: Controller::Switch::Oper::Mlap::Debug
        class Trace; //type: Controller::Switch::Oper::Mlap::Trace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Reachable> reachable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::SummaryData> summary_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Debug> debug;
        ydk::YList trace;
        
}; // Controller::Switch::Oper::Mlap


class Controller::Switch::Oper::Mlap::Reachable : public ydk::Entity
{
    public:
        Reachable();
        ~Reachable();

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

        class Location; //type: Controller::Switch::Oper::Mlap::Reachable::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mlap::Reachable


class Controller::Switch::Oper::Mlap::Reachable::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum

}; // Controller::Switch::Oper::Mlap::Reachable::Location


class Controller::Switch::Oper::Mlap::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::Switch::Oper::Mlap::Detail::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mlap::Detail


class Controller::Switch::Oper::Mlap::Detail::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Mlap::Detail::Location


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class GenData; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData
        class MlapInternalDetails; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails
        class MlapExternalDetails; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData> gen_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails> mlap_internal_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails> mlap_external_details;
        
}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData : public ydk::Entity
{
    public:
        GenData();
        ~GenData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_num; //type: string
        ydk::YLeaf connects_to; //type: string
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf admin_state; //type: EsdmaSwitchPortState
        ydk::YLeaf protocol_state; //type: MlapStateEnum
        ydk::YLeaf forwarding; //type: SwitchForwardingState
        ydk::YLeaf mlap_protocol; //type: MlapProtocolEnum
        ydk::YLeaf protocol_pkt_sent; //type: uint64
        ydk::YLeaf protocol_pkt_recv; //type: uint64
        ydk::YLeaf protocol_set_color_pkts_sent; //type: uint64
        ydk::YLeaf protocol_set_color_pkts_recv; //type: uint64
        ydk::YLeaf protocol_send_error; //type: uint64
        ydk::YLeaf protocol_recv_error; //type: uint64
        ydk::YLeaf protocol_state_changes; //type: uint32

}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails : public ydk::Entity
{
    public:
        MlapInternalDetails();
        ~MlapInternalDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Info; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info> info;
        
}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_owner; //type: EsdmaCpu
        ydk::YLeaf current_active_owner; //type: EsdmaCpu
        ydk::YLeaf mlap_peer_flags; //type: MlapPeerFlags
        ydk::YLeaf mlap_peer_idle_count; //type: uint32
        ydk::YLeaf my_connection_active_mask; //type: uint64
        ydk::YLeaf peer_connection_active_mask; //type: uint64
        ydk::YLeaf endpoint_card_type; //type: MlapEpType
        ydk::YLeaf endpoint_mac_address; //type: string

}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails : public ydk::Entity
{
    public:
        MlapExternalDetails();
        ~MlapExternalDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalStateInformation; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation
        class PeerStateInformation; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation
        class PeerOtherLinkStateInformation; //type: Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation> local_state_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation> peer_state_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation> peer_other_link_state_information;
        
}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation : public ydk::Entity
{
    public:
        LocalStateInformation();
        ~LocalStateInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf chassis_type; //type: EsdmaRackTypeEnum
        ydk::YLeaf endpoint_type; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf endpoint_slot_number; //type: uint32
        ydk::YLeaf endpoint_switch_number; //type: uint32
        ydk::YLeaf endpoint_switch_port_number; //type: uint32
        ydk::YLeaf endpoint_chassis_serial_number; //type: string
        ydk::YLeaf mlap_state; //type: MlapStateEnum
        ydk::YLeaf inter_fcc_sw_port; //type: boolean
        ydk::YLeaf fcc_sw_indirectly_reachable; //type: boolean

}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation : public ydk::Entity
{
    public:
        PeerStateInformation();
        ~PeerStateInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf chassis_type; //type: EsdmaRackTypeEnum
        ydk::YLeaf endpoint_type; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf endpoint_slot_number; //type: uint32
        ydk::YLeaf endpoint_switch_number; //type: uint32
        ydk::YLeaf endpoint_switch_port_number; //type: uint32
        ydk::YLeaf endpoint_chassis_serial_number; //type: string
        ydk::YLeaf mlap_state; //type: MlapStateEnum
        ydk::YLeaf inter_fcc_sw_port; //type: boolean
        ydk::YLeaf fcc_sw_indirectly_reachable; //type: boolean

}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation


class Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation : public ydk::Entity
{
    public:
        PeerOtherLinkStateInformation();
        ~PeerOtherLinkStateInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf chassis_type; //type: EsdmaRackTypeEnum
        ydk::YLeaf endpoint_type; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf endpoint_slot_number; //type: uint32
        ydk::YLeaf endpoint_switch_number; //type: uint32
        ydk::YLeaf endpoint_switch_port_number; //type: uint32
        ydk::YLeaf endpoint_chassis_serial_number; //type: string
        ydk::YLeaf mlap_state; //type: MlapStateEnum
        ydk::YLeaf inter_fcc_sw_port; //type: boolean
        ydk::YLeaf fcc_sw_indirectly_reachable; //type: boolean

}; // Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation


class Controller::Switch::Oper::Mlap::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Mlap::Statistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mlap::Statistics


class Controller::Switch::Oper::Mlap::Statistics::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Mlap::Statistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Mlap::Statistics::Location


class Controller::Switch::Oper::Mlap::Statistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf protocol_state; //type: MlapStateEnum
        ydk::YLeaf protocol_state_changes; //type: uint32
        ydk::YLeaf protocol_pkt_sent; //type: uint64
        ydk::YLeaf protocol_pkt_recv; //type: uint64
        ydk::YLeaf protocol_set_color_pkts_sent; //type: uint64
        ydk::YLeaf protocol_set_color_pkts_recv; //type: uint64
        ydk::YLeaf protocol_send_error; //type: uint64
        ydk::YLeaf protocol_recv_error; //type: uint64
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Mlap::Statistics::Location::PortIter


class Controller::Switch::Oper::Mlap::SummaryData : public ydk::Entity
{
    public:
        SummaryData();
        ~SummaryData();

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

        class Location; //type: Controller::Switch::Oper::Mlap::SummaryData::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mlap::SummaryData


class Controller::Switch::Oper::Mlap::SummaryData::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Mlap::SummaryData::Location


class Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf admin_state; //type: EsdmaSwitchPortState
        ydk::YLeaf protocol_state; //type: MlapStateEnum
        ydk::YLeaf forwarding; //type: SwitchForwardingState
        ydk::YLeaf mlap_protocol; //type: MlapProtocolEnum
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter


class Controller::Switch::Oper::Mlap::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

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

        class Counters; //type: Controller::Switch::Oper::Mlap::Debug::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Debug::Counters> counters;
        
}; // Controller::Switch::Oper::Mlap::Debug


class Controller::Switch::Oper::Mlap::Debug::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        class Location; //type: Controller::Switch::Oper::Mlap::Debug::Counters::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mlap::Debug::Counters


class Controller::Switch::Oper::Mlap::Debug::Counters::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class Counters_; //type: Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_> counters;
        
}; // Controller::Switch::Oper::Mlap::Debug::Counters::Location


class Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_ : public ydk::Entity
{
    public:
        Counters_();
        ~Counters_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eval_all_links_called; //type: uint64
        ydk::YLeaf timer_event_queued; //type: uint64
        ydk::YLeaf rx_packet_event_queued; //type: uint64
        ydk::YLeaf eval_all_links_queued; //type: uint64
        ydk::YLeaf link_status_queued; //type: uint64
        ydk::YLeaf admin_status_queued; //type: uint64
        ydk::YLeaf fwd_status_queued; //type: uint64
        ydk::YLeaf current_fifo_depth; //type: uint64
        ydk::YLeaf max_fifo_depth; //type: uint64
        ydk::YLeaf vlan_color_changes; //type: uint32
        ydk::YLeaf current_mlap_timeout_ms_interval; //type: uint32
        ydk::YLeaf aging_debug_enabled; //type: boolean
        ydk::YLeaf trace_verbosity; //type: MlapTraceVerbosity

}; // Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_


class Controller::Switch::Oper::Mlap::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Switch::Oper::Mlap::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mlap::Trace


class Controller::Switch::Oper::Mlap::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Switch::Oper::Mlap::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::Mlap::Trace::Location


class Controller::Switch::Oper::Mlap::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::Mlap::Trace::Location::AllOptions


class Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::SwitchDebugCont : public ydk::Entity
{
    public:
        SwitchDebugCont();
        ~SwitchDebugCont();

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

        class Debug; //type: Controller::Switch::Oper::SwitchDebugCont::Debug

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::SwitchDebugCont::Debug> debug;
        
}; // Controller::Switch::Oper::SwitchDebugCont


class Controller::Switch::Oper::SwitchDebugCont::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

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

        class Counters; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::SwitchDebugCont::Debug::Counters> counters;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        class Location; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class Counters_; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_> counters;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_ : public ydk::Entity
{
    public:
        Counters_();
        ~Counters_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phy_polling_enabled; //type: boolean
        ydk::YLeaf tx_thread_wdog_cnt; //type: uint64
        ydk::YLeaf rx_thread_wdog_cnt; //type: uint64
        ydk::YLeaf task_lock_longest_wait_time; //type: uint64
        ydk::YLeaf task_lock_longest_wait_event; //type: uint32
        ydk::YLeaf task_lock_longest_held_time; //type: uint64
        ydk::YLeaf task_lock_longest_held_event; //type: uint32
        ydk::YLeaf task_unlock_longest_wait_time; //type: uint64
        ydk::YLeaf task_unlock_longest_wait_event; //type: uint32
        ydk::YLeaf dma_max_rx_dequeued_per_int; //type: uint64
        ydk::YLeaf dma_rx_packets_dequeued; //type: uint64
        ydk::YLeaf dma_rx_packet_dequeue_errors; //type: uint64
        ydk::YLeaf dma_tx_packets_queued; //type: uint64
        ydk::YLeaf dma_tx_packets_completed; //type: uint64
        ydk::YLeaf dma_tx_packet_no_msg_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_msg_too_big_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_no_buffer_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_queue_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_completion_errors; //type: uint64
        ydk::YLeaf dma_max_tx_freed_per_int; //type: uint64
        ydk::YLeaf dma_tx_buf_alloc_count; //type: uint64
        ydk::YLeaf dma_tx_buf_free_count; //type: uint64
        class SwitchCore; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore

        ydk::YList switch_core;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore : public ydk::Entity
{
    public:
        SwitchCore();
        ~SwitchCore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf core; //type: uint8
        ydk::YLeaf msi_count; //type: uint64
        ydk::YLeaf aer_count; //type: uint64
        ydk::YLeaf hp_count; //type: uint64
        ydk::YLeaf wdog_count; //type: uint64
        ydk::YLeaf core_task_lock_longest_wait_time; //type: uint64
        ydk::YLeaf core_task_lock_longest_held_time; //type: uint64
        ydk::YLeaf core_task_unlock_longest_wait_time; //type: uint64

}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore


class Controller::Switch::Oper::Esd : public ydk::Entity
{
    public:
        Esd();
        ~Esd();

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

        class Instance; //type: Controller::Switch::Oper::Esd::Instance

        ydk::YList instance;
        
}; // Controller::Switch::Oper::Esd


class Controller::Switch::Oper::Esd::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf process_name; //type: string
        class Trace; //type: Controller::Switch::Oper::Esd::Instance::Trace

        ydk::YList trace;
        
}; // Controller::Switch::Oper::Esd::Instance


class Controller::Switch::Oper::Esd::Instance::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace


class Controller::Switch::Oper::Esd::Instance::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace::Location


class Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions


class Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent : public ydk::Entity
{
    public:
        MgmtAgent();
        ~MgmtAgent();

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

        class Esdma; //type: Controller::Switch::Oper::MgmtAgent::Esdma
        class Connections; //type: Controller::Switch::Oper::MgmtAgent::Connections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Esdma> esdma;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections> connections;
        
}; // Controller::Switch::Oper::MgmtAgent


class Controller::Switch::Oper::MgmtAgent::Esdma : public ydk::Entity
{
    public:
        Esdma();
        ~Esdma();

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

        class Trace; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace

        ydk::YList trace;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent::Connections : public ydk::Entity
{
    public:
        Connections();
        ~Connections();

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

        ydk::YLeaf sdr_nm_num_clients; //type: uint32
        ydk::YLeaf esd_client_num_clients; //type: uint32
        ydk::YLeaf mlap_client_num_clients; //type: uint32
        class EsdmaInfo; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo
        class SdrNmClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId
        class EsdClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId
        class MlapClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo> esdma_info;
        ydk::YList sdr_nm_client_id;
        ydk::YList esd_client_id;
        ydk::YList mlap_client_id;
        
}; // Controller::Switch::Oper::MgmtAgent::Connections


class Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo : public ydk::Entity
{
    public:
        EsdmaInfo();
        ~EsdmaInfo();

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

        ydk::YLeaf active_esdma_address; //type: string

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo


class Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId : public ydk::Entity
{
    public:
        SdrNmClientId();
        ~SdrNmClientId();

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

        ydk::YLeaf sdr_nm_ip_address; //type: string
        ydk::YLeaf sdr_nm_port_num; //type: uint16

}; // Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId


class Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId : public ydk::Entity
{
    public:
        EsdClientId();
        ~EsdClientId();

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

        ydk::YLeaf esd_client_ip_address; //type: string
        ydk::YLeaf esd_client_port_num; //type: uint16
        ydk::YLeaf esd_client_location; //type: string
        ydk::YLeaf esd_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_client_sdr_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId


class Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId : public ydk::Entity
{
    public:
        MlapClientId();
        ~MlapClientId();

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

        ydk::YLeaf mlap_client_ip_address; //type: string
        ydk::YLeaf mlap_client_port_num; //type: uint16
        ydk::YLeaf mlap_client_location; //type: string
        ydk::YLeaf mlap_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId


class Controller::Switch::Oper::PortState : public ydk::Entity
{
    public:
        PortState();
        ~PortState();

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

        class Location; //type: Controller::Switch::Oper::PortState::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::PortState


class Controller::Switch::Oper::PortState::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::PortState::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::PortState::Location


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_5_ */

