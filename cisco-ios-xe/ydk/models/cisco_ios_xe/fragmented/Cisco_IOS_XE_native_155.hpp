#ifndef _CISCO_IOS_XE_NATIVE_155_
#define _CISCO_IOS_XE_NATIVE_155_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_154.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All> all;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList> > port_number_list;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber : public Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On> on;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily : public Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On : public Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf month; //type: MonthTypeEnum
        YLeaf day_of_month; //type: uint16
        YLeaf year; //type: uint16
        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly : public Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf day; //type: WeekdayTypeEnum
        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList : public Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On> on;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily : public Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On : public Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf month; //type: MonthTypeEnum
        YLeaf day_of_month; //type: uint16
        YLeaf year; //type: uint16
        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly : public Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf day; //type: WeekdayTypeEnum
        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On> on;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily : public Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On : public Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf month; //type: MonthTypeEnum
        YLeaf day_of_month; //type: uint16
        YLeaf year; //type: uint16
        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly : public Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf day; //type: WeekdayTypeEnum
        YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly


class Native::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf run; //type: empty

}; // Native::Lldp


class Native::PmAgent : public Entity
{
    public:
        PmAgent();
        ~PmAgent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConfigPmAgent; //type: Native::PmAgent::ConfigPmAgent

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent> config_pm_agent;
        
}; // Native::PmAgent


class Native::PmAgent::ConfigPmAgent : public Entity
{
    public:
        ConfigPmAgent();
        ~ConfigPmAgent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        class Device; //type: Native::PmAgent::ConfigPmAgent::Device
        class InstanceId; //type: Native::PmAgent::ConfigPmAgent::InstanceId
        class Region; //type: Native::PmAgent::ConfigPmAgent::Region
        class Site; //type: Native::PmAgent::ConfigPmAgent::Site
        class Tenant; //type: Native::PmAgent::ConfigPmAgent::Tenant
        class Pmcs; //type: Native::PmAgent::ConfigPmAgent::Pmcs

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device> device;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId> > instance_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs> pmcs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region> region;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site> site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant> tenant;
        
}; // Native::PmAgent::ConfigPmAgent


class Native::PmAgent::ConfigPmAgent::Device : public Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Device::Id
        class Type; //type: Native::PmAgent::ConfigPmAgent::Device::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type> type;
        
}; // Native::PmAgent::ConfigPmAgent::Device


class Native::PmAgent::ConfigPmAgent::Device::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Device_Range; //type: Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range> > device_range;
        
}; // Native::PmAgent::ConfigPmAgent::Device::Id


class Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range : public Entity
{
    public:
        Device_Range();
        ~Device_Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_id_range; //type: uint32
        YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range


class Native::PmAgent::ConfigPmAgent::Device::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pxtr; //type: empty
        class Ntr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr
        class Rtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Rtr
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Xtr

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr> ntr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Rtr> rtr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr : public Entity
{
    public:
        Ntr();
        ~Ntr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr> rtr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr : public Entity
{
    public:
        Rtr();
        ~Rtr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr : public Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Rtr : public Entity
{
    public:
        Rtr();
        ~Rtr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ntr; //type: empty
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type::Rtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr : public Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ntr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Xtr : public Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ntr; //type: empty
        YLeaf rtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Xtr


class Native::PmAgent::ConfigPmAgent::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_id_range; //type: uint32
        class ConfigPmAgentInstance; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance> config_pm_agent_instance;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance : public Entity
{
    public:
        ConfigPmAgentInstance();
        ~ConfigPmAgentInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EnterprisePrefix; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix> enterprise_prefix;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix : public Entity
{
    public:
        EnterprisePrefix();
        ~EnterprisePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6


class Native::PmAgent::ConfigPmAgent::Region : public Entity
{
    public:
        Region();
        ~Region();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Region::Id

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Region


class Native::PmAgent::ConfigPmAgent::Region::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Region_Id_Range; //type: Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range> > region_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Region::Id


class Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range : public Entity
{
    public:
        Region_Id_Range();
        ~Region_Id_Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf region_id_range; //type: uint32
        YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range


class Native::PmAgent::ConfigPmAgent::Site : public Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Site::Id

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Site


class Native::PmAgent::ConfigPmAgent::Site::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Site_Id_Range; //type: Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range> > site_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Site::Id


class Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range : public Entity
{
    public:
        Site_Id_Range();
        ~Site_Id_Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_id_range; //type: uint32
        YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range


class Native::PmAgent::ConfigPmAgent::Tenant : public Entity
{
    public:
        Tenant();
        ~Tenant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Tenant::Id

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Tenant


class Native::PmAgent::ConfigPmAgent::Tenant::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tenant_Id_Range; //type: Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range> > tenant_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Tenant::Id


class Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range : public Entity
{
    public:
        Tenant_Id_Range();
        ~Tenant_Id_Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tenant_id_range; //type: uint32
        YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range


class Native::PmAgent::ConfigPmAgent::Pmcs : public Entity
{
    public:
        Pmcs();
        ~Pmcs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pmcs_Ipv4; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4> > pmcs_ipv4;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4 : public Entity
{
    public:
        Pmcs_Ipv4();
        ~Pmcs_Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf backup; //type: empty
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pmcs_Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6> > pmcs_ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6 : public Entity
{
    public:
        Pmcs_Ipv6();
        ~Pmcs_Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: string
        YLeaf backup; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6_; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_> > ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_ : public Entity
{
    public:
        Ipv6_();
        ~Ipv6_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: string
        YLeaf backup; //type: empty
        YLeaf ipv4; //type: string

}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_


class Native::Power : public Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf redundancy_mode; //type: RedundancyModeEnum
        YLeaf max_min; //type: MaxMinEnum
        YLeaf inputs; //type: uint8
        class Inline_; //type: Native::Power::Inline_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Power::Inline_> inline_; // presence node
                class RedundancyModeEnum;
        class MaxMinEnum;

}; // Native::Power


class Native::Power::Inline_ : public Entity
{
    public:
        Inline_();
        ~Inline_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Consumption; //type: Native::Power::Inline_::Consumption
        class Logging; //type: Native::Power::Inline_::Logging

        std::shared_ptr<Cisco_IOS_XE_native::Native::Power::Inline_::Consumption> consumption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Power::Inline_::Logging> logging;
        
}; // Native::Power::Inline_


class Native::Power::Inline_::Consumption : public Entity
{
    public:
        Consumption();
        ~Consumption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint16

}; // Native::Power::Inline_::Consumption


class Native::Power::Inline_::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf global; //type: empty

}; // Native::Power::Inline_::Logging


class Native::AccessSession : public Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attributes; //type: Native::AccessSession::Attributes
        class MacMove; //type: Native::AccessSession::MacMove

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessSession::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessSession::MacMove> mac_move;
        
}; // Native::AccessSession


class Native::AccessSession::Attributes : public Entity
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

        class FilterList; //type: Native::AccessSession::Attributes::FilterList

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList> filter_list;
        
}; // Native::AccessSession::Attributes


class Native::AccessSession::Attributes::FilterList : public Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::AccessSession::Attributes::FilterList::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList::List> > list;
        
}; // Native::AccessSession::Attributes::FilterList


class Native::AccessSession::Attributes::FilterList::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf cdp; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf lldp; //type: empty

}; // Native::AccessSession::Attributes::FilterList::List


class Native::AccessSession::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deny; //type: empty

}; // Native::AccessSession::MacMove


class Native::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Command; //type: Native::Authentication::Command
        class Critical; //type: Native::Authentication::Critical
        class MacMove; //type: Native::Authentication::MacMove

        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication::Command> command;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication::Critical> critical;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication::MacMove> mac_move;
        
}; // Native::Authentication


class Native::Authentication::Command : public Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BouncePort; //type: Native::Authentication::Command::BouncePort
        class DisablePort; //type: Native::Authentication::Command::DisablePort

        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication::Command::BouncePort> bounce_port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication::Command::DisablePort> disable_port;
        
}; // Native::Authentication::Command


class Native::Authentication::Command::BouncePort : public Entity
{
    public:
        BouncePort();
        ~BouncePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Authentication::Command::BouncePort


class Native::Authentication::Command::DisablePort : public Entity
{
    public:
        DisablePort();
        ~DisablePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Authentication::Command::DisablePort


class Native::Authentication::Critical : public Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Recovery; //type: Native::Authentication::Critical::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Authentication::Critical::Recovery> recovery;
        
}; // Native::Authentication::Critical


class Native::Authentication::Critical::Recovery : public Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint32

}; // Native::Authentication::Critical::Recovery


class Native::Authentication::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf permit; //type: empty

}; // Native::Authentication::MacMove


class Native::ServiceList : public Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MdnsSd; //type: Native::ServiceList::MdnsSd

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd> > mdns_sd;
        
}; // Native::ServiceList


class Native::ServiceList::MdnsSd : public Entity
{
    public:
        MdnsSd();
        ~MdnsSd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_list_name; //type: string
        class Deny; //type: Native::ServiceList::MdnsSd::Deny
        class Permit; //type: Native::ServiceList::MdnsSd::Permit
        class Query; //type: Native::ServiceList::MdnsSd::Query

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny> > deny;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit> > permit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Query> query;
        
}; // Native::ServiceList::MdnsSd


class Native::ServiceList::MdnsSd::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Deny::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match> match;
        
}; // Native::ServiceList::MdnsSd::Deny


class Native::ServiceList::MdnsSd::Deny::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf learnt_interface; //type: empty
        YLeaf service_instance; //type: string
        YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Deny::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Deny::Match::MessageType

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::Location> location; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Deny::Match


class Native::ServiceList::MdnsSd::Deny::Match::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Deny::Match::Location


class Native::ServiceList::MdnsSd::Deny::Match::MessageType : public Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf announcement; //type: empty
        YLeaf query; //type: empty
        YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Deny::Match::MessageType


class Native::ServiceList::MdnsSd::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Permit::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match> match;
        
}; // Native::ServiceList::MdnsSd::Permit


class Native::ServiceList::MdnsSd::Permit::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf learnt_interface; //type: empty
        YLeaf service_instance; //type: string
        YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Permit::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Permit::Match::MessageType

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::Location> location; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Permit::Match


class Native::ServiceList::MdnsSd::Permit::Match::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Permit::Match::Location


class Native::ServiceList::MdnsSd::Permit::Match::MessageType : public Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf announcement; //type: empty
        YLeaf query; //type: empty
        YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Permit::Match::MessageType


class Native::ServiceList::MdnsSd::Query : public Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_type; //type: string

}; // Native::ServiceList::MdnsSd::Query


class Native::ServiceRouting : public Entity
{
    public:
        ServiceRouting();
        ~ServiceRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf capabilities_manager; //type: boolean

}; // Native::ServiceRouting


class Native::NetworkPolicy : public Entity
{
    public:
        NetworkPolicy();
        ~NetworkPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: uint32

}; // Native::NetworkPolicy


class Native::Energywise : public Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Domain; //type: Native::Energywise::Domain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise::Domain> > domain;
        
}; // Native::Energywise


class Native::Energywise::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class Security; //type: Native::Energywise::Domain::Security

        std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise::Domain::Security> security;
        
}; // Native::Energywise::Domain


class Native::Energywise::Domain::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SharedSecret; //type: Native::Energywise::Domain::Security::SharedSecret

        std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret> shared_secret;
        
}; // Native::Energywise::Domain::Security


class Native::Energywise::Domain::Security::SharedSecret : public Entity
{
    public:
        SharedSecret();
        ~SharedSecret();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Zero; //type: Native::Energywise::Domain::Security::SharedSecret::Zero

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret::Zero> > zero;
        
}; // Native::Energywise::Domain::Security::SharedSecret


class Native::Energywise::Domain::Security::SharedSecret::Zero : public Entity
{
    public:
        Zero();
        ~Zero();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class Protocol; //type: Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol> protocol;
        
}; // Native::Energywise::Domain::Security::SharedSecret::Zero


class Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Udp; //type: Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp> udp;
        
}; // Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol


class Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: uint16
        YLeaf ip; //type: string

}; // Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp


class Native::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip_Camera_Interface_Template; //type: Native::Template_::Ip_Camera_Interface_Template
        class Lap_Interface_Template; //type: Native::Template_::Lap_Interface_Template
        class Ap_Interface_Template; //type: Native::Template_::Ap_Interface_Template
        class Dmp_Interface_Template; //type: Native::Template_::Dmp_Interface_Template
        class Ip_Phone_Interface_Template; //type: Native::Template_::Ip_Phone_Interface_Template
        class Msp_Camera_Interface_Template; //type: Native::Template_::Msp_Camera_Interface_Template
        class Msp_Vc_Interface_Template; //type: Native::Template_::Msp_Vc_Interface_Template
        class Printer_Interface_Template; //type: Native::Template_::Printer_Interface_Template
        class Router_Interface_Template; //type: Native::Template_::Router_Interface_Template
        class Switch_Interface_Template; //type: Native::Template_::Switch_Interface_Template
        class Tp_Interface_Template; //type: Native::Template_::Tp_Interface_Template

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template> ap_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Dmp_Interface_Template> dmp_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template> ip_camera_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Phone_Interface_Template> ip_phone_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template> lap_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Camera_Interface_Template> msp_camera_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Msp_Vc_Interface_Template> msp_vc_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Printer_Interface_Template> printer_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Router_Interface_Template> router_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Switch_Interface_Template> switch_interface_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Tp_Interface_Template> tp_interface_template;
        
}; // Native::Template_


class Native::Template_::Ip_Camera_Interface_Template : public Entity
{
    public:
        Ip_Camera_Interface_Template();
        ~Ip_Camera_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Ip_Camera_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Ip_Camera_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Ip_Camera_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Ip_Camera_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Ip_Camera_Interface_Template


class Native::Template_::Ip_Camera_Interface_Template::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Ip_Camera_Interface_Template::ServicePolicy


class Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input : public Entity
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

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input


class Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output : public Entity
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

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output


class Native::Template_::Ip_Camera_Interface_Template::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Ip_Camera_Interface_Template::Switchport


class Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk; //type: empty
        YLeaf access; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode


class Native::Template_::Ip_Camera_Interface_Template::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::Block


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aging; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        class Type; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inactivity; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        class Vlan; //type: Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation : public Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restrict; //type: empty
        YLeaf shutdown; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Ip_Camera_Interface_Template::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::Access


class Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice


class Native::Template_::Ip_Camera_Interface_Template::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Ip_Camera_Interface_Template::SpanningTree


class Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast : public Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf edge; //type: empty
        YLeaf network; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast


class Native::Template_::Ip_Camera_Interface_Template::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Broadcast; //type: Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Ip_Camera_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Ip_Camera_Interface_Template::StormControl


class Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast


class Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: string

}; // Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        YLeaf b_unit; //type: string

}; // Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Ip_Camera_Interface_Template::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Template_::Ip_Camera_Interface_Template::StormControl::Action


class Native::Template_::Ip_Camera_Interface_Template::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dhcp; //type: Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Ip_Camera_Interface_Template::Ip


class Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp


class Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate; //type: uint16

}; // Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Lap_Interface_Template : public Entity
{
    public:
        Lap_Interface_Template();
        ~Lap_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Lap_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Lap_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Lap_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Lap_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Lap_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Lap_Interface_Template


class Native::Template_::Lap_Interface_Template::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Template_::Lap_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Lap_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Lap_Interface_Template::ServicePolicy


class Native::Template_::Lap_Interface_Template::ServicePolicy::Input : public Entity
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

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Lap_Interface_Template::ServicePolicy::Input


class Native::Template_::Lap_Interface_Template::ServicePolicy::Output : public Entity
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

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Lap_Interface_Template::ServicePolicy::Output


class Native::Template_::Lap_Interface_Template::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template_::Lap_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Lap_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Lap_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Lap_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Lap_Interface_Template::Switchport


class Native::Template_::Lap_Interface_Template::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk; //type: empty
        YLeaf access; //type: empty

}; // Native::Template_::Lap_Interface_Template::Switchport::Mode


class Native::Template_::Lap_Interface_Template::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Template_::Lap_Interface_Template::Switchport::Block


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aging; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        class Type; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type> type; // presence node
        
}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inactivity; //type: empty

}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range> > range;
        
}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        class Vlan; //type: Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan> vlan; // presence node
        
}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access; //type: empty

}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan


class Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation : public Entity
{
    public:
        Violation();
        ~Violation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restrict; //type: empty
        YLeaf shutdown; //type: empty

}; // Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation


class Native::Template_::Lap_Interface_Template::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Lap_Interface_Template::Switchport::Access


class Native::Template_::Lap_Interface_Template::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Template_::Lap_Interface_Template::Switchport::Voice


class Native::Template_::Lap_Interface_Template::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy; //type: empty
        class Bpduguard; //type: Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard
        class Portfast; //type: Native::Template_::Lap_Interface_Template::SpanningTree::Portfast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::SpanningTree::Portfast> portfast;
        
}; // Native::Template_::Lap_Interface_Template::SpanningTree


class Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard


class Native::Template_::Lap_Interface_Template::SpanningTree::Portfast : public Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf edge; //type: empty
        YLeaf network; //type: empty

}; // Native::Template_::Lap_Interface_Template::SpanningTree::Portfast


class Native::Template_::Lap_Interface_Template::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Broadcast; //type: Native::Template_::Lap_Interface_Template::StormControl::Broadcast
        class Action; //type: Native::Template_::Lap_Interface_Template::StormControl::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::StormControl::Broadcast> broadcast;
        
}; // Native::Template_::Lap_Interface_Template::StormControl


class Native::Template_::Lap_Interface_Template::StormControl::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level> level;
        
}; // Native::Template_::Lap_Interface_Template::StormControl::Broadcast


class Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        class Pps; //type: Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps
        class Bps; //type: Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level


class Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps : public Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: string

}; // Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps


class Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps : public Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: decimal64
        YLeaf b_unit; //type: string

}; // Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps


class Native::Template_::Lap_Interface_Template::StormControl::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf trap; //type: empty

}; // Native::Template_::Lap_Interface_Template::StormControl::Action


class Native::Template_::Lap_Interface_Template::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dhcp; //type: Native::Template_::Lap_Interface_Template::Ip::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Ip::Dhcp> dhcp;
        
}; // Native::Template_::Lap_Interface_Template::Ip


class Native::Template_::Lap_Interface_Template::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Template_::Lap_Interface_Template::Ip::Dhcp


class Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit> limit;
        
}; // Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping


class Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate; //type: uint16

}; // Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit


class Native::Template_::Ap_Interface_Template : public Entity
{
    public:
        Ap_Interface_Template();
        ~Ap_Interface_Template();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_interval; //type: uint16
        class ServicePolicy; //type: Native::Template_::Ap_Interface_Template::ServicePolicy
        class Switchport; //type: Native::Template_::Ap_Interface_Template::Switchport
        class SpanningTree; //type: Native::Template_::Ap_Interface_Template::SpanningTree
        class StormControl; //type: Native::Template_::Ap_Interface_Template::StormControl
        class Ip; //type: Native::Template_::Ap_Interface_Template::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport> switchport;
        
}; // Native::Template_::Ap_Interface_Template


class Native::Template_::Ap_Interface_Template::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Template_::Ap_Interface_Template::ServicePolicy::Input
        class Output; //type: Native::Template_::Ap_Interface_Template::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::ServicePolicy::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::ServicePolicy::Output> output;
        
}; // Native::Template_::Ap_Interface_Template::ServicePolicy


class Native::Template_::Ap_Interface_Template::ServicePolicy::Input : public Entity
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

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Ap_Interface_Template::ServicePolicy::Input


class Native::Template_::Ap_Interface_Template::ServicePolicy::Output : public Entity
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

        YLeaf policy_map_name; //type: string

}; // Native::Template_::Ap_Interface_Template::ServicePolicy::Output


class Native::Template_::Ap_Interface_Template::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        class Mode; //type: Native::Template_::Ap_Interface_Template::Switchport::Mode
        class Block; //type: Native::Template_::Ap_Interface_Template::Switchport::Block
        class PortSecurity; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity
        class Access; //type: Native::Template_::Ap_Interface_Template::Switchport::Access
        class Voice; //type: Native::Template_::Ap_Interface_Template::Switchport::Voice

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::Voice> voice;
        
}; // Native::Template_::Ap_Interface_Template::Switchport


class Native::Template_::Ap_Interface_Template::Switchport::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk; //type: empty
        YLeaf access; //type: empty

}; // Native::Template_::Ap_Interface_Template::Switchport::Mode


class Native::Template_::Ap_Interface_Template::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Template_::Ap_Interface_Template::Switchport::Block


class Native::Template_::Ap_Interface_Template::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aging; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging
        class Maximum; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum
        class Violation; //type: Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Violation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Violation> violation;
        
}; // Native::Template_::Ap_Interface_Template::Switchport::PortSecurity

class Native::Power::RedundancyModeEnum : public Enum
{
    public:
        static const Enum::YLeaf combined;
        static const Enum::YLeaf redundant;

};

class Native::Power::MaxMinEnum : public Enum
{
    public:
        static const Enum::YLeaf max;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_155_ */

