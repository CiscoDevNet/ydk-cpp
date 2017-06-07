#ifndef _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_1_
#define _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_plat_chas_invmgr_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_plat_chas_invmgr_oper {


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Attributes


class PlatformInventory::Racks::Rack::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime


}
}

#endif /* _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_1_ */

