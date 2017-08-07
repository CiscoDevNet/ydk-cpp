#ifndef _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_1_
#define _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_plat_chas_invmgr_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_plat_chas_invmgr_oper {


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Attributes


class PlatformInventory::Racks::Rack::Attributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime


}
}

#endif /* _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_1_ */

