#ifndef _CISCO_IOS_XE_NATIVE_1_
#define _CISCO_IOS_XE_NATIVE_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Service::Timestamps::Log::Datetime::Localtime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Localtime::Year


class Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec


class Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Msec


class Native::Service::Timestamps::Log::Datetime::Msec::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Msec::Localtime


class Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year


class Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime
        class Year; //type: Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime


class Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year


class Native::Service::Timestamps::Log::Datetime::Msec::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Msec::Year


class Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime


class Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec
        class Year; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime
        class Year; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec> msec; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime


class Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec


class Native::Service::Timestamps::Log::Datetime::Year : public Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Year


class Native::Service::Timestamps::Log::Datetime::Year::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec> msec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Year::Localtime


class Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec


class Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Year::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Year::Msec


class Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime


class Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone : public Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Localtime; //type: Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec> msec; // presence node
        
}; // Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone


class Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime : public Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime


class Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf localtime; //type: empty

}; // Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec


class Native::Service::Alignment : public Entity
{
    public:
        Alignment();
        ~Alignment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf detection; //type: empty
        YLeaf logging; //type: empty

}; // Native::Service::Alignment


class Native::Service::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Max; //type: Native::Service::Counters::Max

        std::shared_ptr<Cisco_IOS_XE_native::Native::Service::Counters::Max> max;
        
}; // Native::Service::Counters


class Native::Service::Counters::Max : public Entity
{
    public:
        Max();
        ~Max();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf age; //type: uint8

}; // Native::Service::Counters::Max


class Native::Service::Heartbeat : public Entity
{
    public:
        Heartbeat();
        ~Heartbeat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fatal_count; //type: uint8
        YLeaf interrupt_interval; //type: uint8
        YLeaf interrupt_max; //type: uint8
        YLeaf transmit_interval; //type: uint8
        YLeaf warning_timeout; //type: uint8

}; // Native::Service::Heartbeat


class Native::Service::Prompt : public Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config; //type: empty

}; // Native::Service::Prompt


class Native::Platform : public Entity
{
    public:
        Platform();
        ~Platform();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_cdvt; //type: boolean
        YLeaf cfm; //type: empty
        YLeaf bfd_debug_trace; //type: uint8
        YLeaf shell; //type: boolean
        YLeaf tcam_parity_error; //type: TcamParityErrorEnum
        class Icmp; //type: Native::Platform::Icmp
        class IpPorts; //type: Native::Platform::IpPorts
        class Bfd; //type: Native::Platform::Bfd
        class Console; //type: Native::Platform::Console
        class Enable; //type: Native::Platform::Enable
        class ExternalAlarm; //type: Native::Platform::ExternalAlarm
        class Hardware; //type: Native::Platform::Hardware
        class Ipsec; //type: Native::Platform::Ipsec
        class L2Vpn; //type: Native::Platform::L2Vpn
        class Multicast; //type: Native::Platform::Multicast
        class PuntKeepalive; //type: Native::Platform::PuntKeepalive
        class PuntPolicer; //type: Native::Platform::PuntPolicer
        class Qos; //type: Native::Platform::Qos
        class Reload; //type: Native::Platform::Reload
        class Urpf; //type: Native::Platform::Urpf
        class TcamThreshold; //type: Native::Platform::TcamThreshold
        class Trace; //type: Native::Platform::Trace

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Console> console; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::ExternalAlarm> external_alarm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware> hardware;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::IpPorts> ip_ports;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::L2Vpn> l2vpn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntKeepalive> punt_keepalive; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntPolicer> punt_policer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Qos> qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Reload> reload;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::TcamThreshold> tcam_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Trace> trace;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf> urpf;
                class TcamParityErrorEnum;

}; // Native::Platform


class Native::Platform::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RateLimit; //type: Native::Platform::Icmp::RateLimit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Icmp::RateLimit> rate_limit;
        
}; // Native::Platform::Icmp


class Native::Platform::Icmp::RateLimit : public Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet; //type: uint32
        YLeaf duration; //type: uint32

}; // Native::Platform::Icmp::RateLimit


class Native::Platform::IpPorts : public Entity
{
    public:
        IpPorts();
        ~IpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ephemeral_max; //type: uint16

}; // Native::Platform::IpPorts


class Native::Platform::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_offload; //type: empty
        YLeaf allow_svi; //type: empty
        YLeaf enable_offload; //type: empty

}; // Native::Platform::Bfd


class Native::Platform::Console : public Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf output; //type: OutputEnum
        class OutputEnum;

}; // Native::Platform::Console


class Native::Platform::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Controller; //type: Native::Platform::Enable::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Enable::Controller> > controller;
        
}; // Native::Platform::Enable


class Native::Platform::Enable::Controller : public Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sonet; //type: string

}; // Native::Platform::Enable::Controller


class Native::Platform::ExternalAlarm : public Entity
{
    public:
        ExternalAlarm();
        ~ExternalAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line; //type: uint32
        YLeaf alarm; //type: one of uint16, enumeration

}; // Native::Platform::ExternalAlarm


class Native::Platform::Hardware : public Entity
{
    public:
        Hardware();
        ~Hardware();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lite; //type: Native::Platform::Hardware::Lite
        class Throughput; //type: Native::Platform::Hardware::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware::Lite> lite;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware::Throughput> throughput;
        
}; // Native::Platform::Hardware


class Native::Platform::Hardware::Lite : public Entity
{
    public:
        Lite();
        ~Lite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf license; //type: LicenseEnum
        class LicenseEnum;

}; // Native::Platform::Hardware::Lite


class Native::Platform::Hardware::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: DisableEnum
        class Level; //type: Native::Platform::Hardware::Throughput::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Hardware::Throughput::Level> level;
                class DisableEnum;

}; // Native::Platform::Hardware::Throughput


class Native::Platform::Hardware::Throughput::Level : public Entity
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

        YLeaf kbps; //type: KbpsEnum
        YLeaf eval_only; //type: empty
        class KbpsEnum;

}; // Native::Platform::Hardware::Throughput::Level


class Native::Platform::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf arlog_supress; //type: empty
        YLeaf fips_mode; //type: empty
        YLeaf gdoi; //type: GdoiEnum
        class Llq; //type: Native::Platform::Ipsec::Llq
        class Reassemble; //type: Native::Platform::Ipsec::Reassemble

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Ipsec::Llq> llq;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Ipsec::Reassemble> reassemble;
                class GdoiEnum;

}; // Native::Platform::Ipsec


class Native::Platform::Ipsec::Llq : public Entity
{
    public:
        Llq();
        ~Llq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_group; //type: uint8

}; // Native::Platform::Ipsec::Llq


class Native::Platform::Ipsec::Reassemble : public Entity
{
    public:
        Reassemble();
        ~Reassemble();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transit; //type: empty

}; // Native::Platform::Ipsec::Reassemble


class Native::Platform::L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hdlc_pass_through; //type: empty
        class Statistics; //type: Native::Platform::L2Vpn::Statistics

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::L2Vpn::Statistics> statistics;
        
}; // Native::Platform::L2Vpn


class Native::Platform::L2Vpn::Statistics : public Entity
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

        YLeaf enable; //type: empty

}; // Native::Platform::L2Vpn::Statistics


class Native::Platform::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mgre; //type: Native::Platform::Multicast::Mgre
        class Oce; //type: Native::Platform::Multicast::Oce

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast::Mgre> mgre;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast::Oce> oce;
        
}; // Native::Platform::Multicast


class Native::Platform::Multicast::Mgre : public Entity
{
    public:
        Mgre();
        ~Mgre();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf injection; //type: empty

}; // Native::Platform::Multicast::Mgre


class Native::Platform::Multicast::Oce : public Entity
{
    public:
        Oce();
        ~Oce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flag; //type: Native::Platform::Multicast::Oce::Flag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Multicast::Oce::Flag> flag;
        
}; // Native::Platform::Multicast::Oce


class Native::Platform::Multicast::Oce::Flag : public Entity
{
    public:
        Flag();
        ~Flag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf suppress; //type: empty

}; // Native::Platform::Multicast::Oce::Flag


class Native::Platform::PuntKeepalive : public Entity
{
    public:
        PuntKeepalive();
        ~PuntKeepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_kernel_core; //type: boolean
        class Settings; //type: Native::Platform::PuntKeepalive::Settings

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntKeepalive::Settings> settings;
        
}; // Native::Platform::PuntKeepalive


class Native::Platform::PuntKeepalive::Settings : public Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fatal_count; //type: uint16
        YLeaf transmit_interval; //type: uint16
        YLeaf warning_count; //type: uint16

}; // Native::Platform::PuntKeepalive::Settings


class Native::Platform::PuntPolicer : public Entity
{
    public:
        PuntPolicer();
        ~PuntPolicer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PuntNum; //type: Native::Platform::PuntPolicer::PuntNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::PuntPolicer::PuntNum> > punt_num;
        
}; // Native::Platform::PuntPolicer


class Native::Platform::PuntPolicer::PuntNum : public Entity
{
    public:
        PuntNum();
        ~PuntNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cause; //type: uint8
        YLeaf max_rate; //type: uint16
        YLeaf high; //type: empty

}; // Native::Platform::PuntPolicer::PuntNum


class Native::Platform::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cac_policer; //type: uint16
        YLeaf marker_statistics; //type: empty
        YLeaf performance_monitor; //type: empty
        YLeaf punt_path_matching; //type: empty
        class MatchStatistics; //type: Native::Platform::Qos::MatchStatistics

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Qos::MatchStatistics> match_statistics;
        
}; // Native::Platform::Qos


class Native::Platform::Qos::MatchStatistics : public Entity
{
    public:
        MatchStatistics();
        ~MatchStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_filter; //type: empty
        YLeaf per_ace; //type: empty

}; // Native::Platform::Qos::MatchStatistics


class Native::Platform::Reload : public Entity
{
    public:
        Reload();
        ~Reload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf immediate; //type: empty

}; // Native::Platform::Reload


class Native::Platform::Urpf : public Entity
{
    public:
        Urpf();
        ~Urpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Loose; //type: Native::Platform::Urpf::Loose

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf::Loose> loose;
        
}; // Native::Platform::Urpf


class Native::Platform::Urpf::Loose : public Entity
{
    public:
        Loose();
        ~Loose();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Platform::Urpf::Loose::Counter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter> counter;
        
}; // Native::Platform::Urpf::Loose


class Native::Platform::Urpf::Loose::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Platform::Urpf::Loose::Counter::Ipv4
        class Ipv6; //type: Native::Platform::Urpf::Loose::Counter::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv6> ipv6;
        
}; // Native::Platform::Urpf::Loose::Counter


class Native::Platform::Urpf::Loose::Counter::Ipv4 : public Entity
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

        class Supress; //type: Native::Platform::Urpf::Loose::Counter::Ipv4::Supress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv4::Supress> supress;
        
}; // Native::Platform::Urpf::Loose::Counter::Ipv4


class Native::Platform::Urpf::Loose::Counter::Ipv4::Supress : public Entity
{
    public:
        Supress();
        ~Supress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asymmetric_only; //type: empty

}; // Native::Platform::Urpf::Loose::Counter::Ipv4::Supress


class Native::Platform::Urpf::Loose::Counter::Ipv6 : public Entity
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

        class Supress; //type: Native::Platform::Urpf::Loose::Counter::Ipv6::Supress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Urpf::Loose::Counter::Ipv6::Supress> supress;
        
}; // Native::Platform::Urpf::Loose::Counter::Ipv6


class Native::Platform::Urpf::Loose::Counter::Ipv6::Supress : public Entity
{
    public:
        Supress();
        ~Supress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asymmetric_only; //type: empty

}; // Native::Platform::Urpf::Loose::Counter::Ipv6::Supress


class Native::Platform::TcamThreshold : public Entity
{
    public:
        TcamThreshold();
        ~TcamThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alarm_frequency; //type: uint32

}; // Native::Platform::TcamThreshold


class Native::Platform::Trace : public Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Runtime; //type: Native::Platform::Trace::Runtime

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Platform::Trace::Runtime> > runtime;
        
}; // Native::Platform::Trace


class Native::Platform::Trace::Runtime : public Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slot; //type: uint8
        YLeaf bay; //type: uint8
        YLeaf process; //type: ProcessEnum
        YLeaf module; //type: ModuleEnum
        YLeaf level; //type: LevelEnum
        class ProcessEnum;
        class ModuleEnum;
        class LevelEnum;

}; // Native::Platform::Trace::Runtime


class Native::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_resort; //type: LastResortEnum
        YLeaf use_tacacs; //type: empty
        class Password; //type: Native::Enable::Password
        class Secret; //type: Native::Enable::Secret

        std::shared_ptr<Cisco_IOS_XE_native::Native::Enable::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Enable::Secret> secret;
                class LastResortEnum;

}; // Native::Enable


class Native::Enable::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Enable::Password


class Native::Enable::Secret : public Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Enable::Secret


class Native::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encryption; //type: Native::Password::Encryption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Password::Encryption> encryption;
        
}; // Native::Password


class Native::Password::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aes; //type: empty

}; // Native::Password::Encryption


class Native::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Native::Eap::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Eap::Profile> > profile;
        
}; // Native::Eap


class Native::Eap::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf pki_trustpoint; //type: string
        class Method; //type: Native::Eap::Profile::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::Eap::Profile::Method> method;
        
}; // Native::Eap::Profile


class Native::Eap::Profile::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast; //type: empty
        YLeaf gtc; //type: empty
        YLeaf leap; //type: empty
        YLeaf mschapv2; //type: empty
        YLeaf peap; //type: empty
        YLeaf md5; //type: empty
        YLeaf tls; //type: empty

}; // Native::Eap::Profile::Method


class Native::Archive : public Entity
{
    public:
        Archive();
        ~Archive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path; //type: one of string, enumeration
        YLeaf maximum; //type: uint8
        YLeaf time_period; //type: uint32
        class Log; //type: Native::Archive::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive::Log> log;
                class PathEnum;

}; // Native::Archive


class Native::Archive::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Native::Archive::Log::Config

        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive::Log::Config> config;
        
}; // Native::Archive::Log


class Native::Archive::Log::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hidekeys; //type: empty
        class Logging; //type: Native::Archive::Log::Config::Logging
        class Notify; //type: Native::Archive::Log::Config::Notify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive::Log::Config::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive::Log::Config::Notify> notify;
        
}; // Native::Archive::Log::Config


class Native::Archive::Log::Config::Logging : public Entity
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

        YLeaf enable; //type: empty
        YLeaf size; //type: uint16
        class Persistent; //type: Native::Archive::Log::Config::Logging::Persistent

        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive::Log::Config::Logging::Persistent> persistent; // presence node
        
}; // Native::Archive::Log::Config::Logging


class Native::Archive::Log::Config::Logging::Persistent : public Entity
{
    public:
        Persistent();
        ~Persistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty
        YLeaf reload; //type: empty

}; // Native::Archive::Log::Config::Logging::Persistent


class Native::Archive::Log::Config::Notify : public Entity
{
    public:
        Notify();
        ~Notify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Syslog; //type: Native::Archive::Log::Config::Notify::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Archive::Log::Config::Notify::Syslog> syslog; // presence node
        
}; // Native::Archive::Log::Config::Notify


class Native::Archive::Log::Config::Notify::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf contenttype; //type: ContenttypeEnum
        class ContenttypeEnum;

}; // Native::Archive::Log::Config::Notify::Syslog


class Native::Username : public Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf privilege; //type: uint8
        YLeaf one_time; //type: empty
        class Password; //type: Native::Username::Password
        class Secret; //type: Native::Username::Secret

        std::shared_ptr<Cisco_IOS_XE_native::Native::Username::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Username::Secret> secret;
        
}; // Native::Username


class Native::Username::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf password; //type: string
        class EncryptionEnum;

}; // Native::Username::Password


class Native::Username::Secret : public Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf secret; //type: string
        class EncryptionEnum;

}; // Native::Username::Secret


class Native::Controller : public Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ControllerTxExList; //type: Native::Controller::ControllerTxExList
        class Cellular; //type: Native::Controller::Cellular
        class Sonet; //type: Native::Controller::Sonet
        class SonetAcr; //type: Native::Controller::SonetAcr
        class Wanphy; //type: Native::Controller::Wanphy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Cellular> > cellular;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::ControllerTxExList> > controller_tx_ex_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet> > sonet;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr> > sonet_acr;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Wanphy> > wanphy;
        
}; // Native::Controller


class Native::Controller::ControllerTxExList : public Entity
{
    public:
        ControllerTxExList();
        ~ControllerTxExList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: NameEnum
        YLeaf number; //type: string
        YLeaf atm; //type: empty
        YLeaf framing; //type: string
        YLeaf linecode; //type: LinecodeEnum
        class Clock; //type: Native::Controller::ControllerTxExList::Clock
        class Cablelength; //type: Native::Controller::ControllerTxExList::Cablelength
        class ChannelGroup; //type: Native::Controller::ControllerTxExList::ChannelGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Cablelength> cablelength;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::ChannelGroup> > channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock> clock;
                class NameEnum;
        class LinecodeEnum;

}; // Native::Controller::ControllerTxExList


class Native::Controller::ControllerTxExList::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Controller::ControllerTxExList::Clock::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock::Source> source;
        
}; // Native::Controller::ControllerTxExList::Clock


class Native::Controller::ControllerTxExList::Clock::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal; //type: empty
        YLeaf loop_timed; //type: empty
        class Line; //type: Native::Controller::ControllerTxExList::Clock::Source::Line

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::ControllerTxExList::Clock::Source::Line> line; // presence node
        
}; // Native::Controller::ControllerTxExList::Clock::Source


class Native::Controller::ControllerTxExList::Clock::Source::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf line_mode; //type: LineModeEnum
        class LineModeEnum;

}; // Native::Controller::ControllerTxExList::Clock::Source::Line


class Native::Controller::ControllerTxExList::Cablelength : public Entity
{
    public:
        Cablelength();
        ~Cablelength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: string
        YLeaf short; //type: string

}; // Native::Controller::ControllerTxExList::Cablelength


class Native::Controller::ControllerTxExList::ChannelGroup : public Entity
{
    public:
        ChannelGroup();
        ~ChannelGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeafList timeslots; //type: list of  one of uint16, string

}; // Native::Controller::ControllerTxExList::ChannelGroup


class Native::Controller::Cellular : public Entity
{
    public:
        Cellular();
        ~Cellular();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class Lte; //type: Native::Controller::Cellular::Lte

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Cellular::Lte> lte;
        
}; // Native::Controller::Cellular


class Native::Controller::Cellular::Lte : public Entity
{
    public:
        Lte();
        ~Lte();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Modem; //type: Native::Controller::Cellular::Lte::Modem

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem> modem;
        
}; // Native::Controller::Cellular::Lte


class Native::Controller::Cellular::Lte::Modem : public Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkRecovery; //type: Native::Controller::Cellular::Lte::Modem::LinkRecovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::LinkRecovery> link_recovery;
        
}; // Native::Controller::Cellular::Lte::Modem


class Native::Controller::Cellular::Lte::Modem::LinkRecovery : public Entity
{
    public:
        LinkRecovery();
        ~LinkRecovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf monitor_timer; //type: uint32
        YLeaf wait_timer; //type: uint32
        YLeaf debounce_count; //type: uint32
        class Rssi; //type: Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi> rssi;
        
}; // Native::Controller::Cellular::Lte::Modem::LinkRecovery


class Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi : public Entity
{
    public:
        Rssi();
        ~Rssi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf onset_threshold; //type: int32

}; // Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi


class Native::Controller::Sonet : public Entity
{
    public:
        Sonet();
        ~Sonet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf framing; //type: FramingEnum
        YLeaf shutdown; //type: empty
        class Clock; //type: Native::Controller::Sonet::Clock
        class Aug; //type: Native::Controller::Sonet::Aug
        class Au3; //type: Native::Controller::Sonet::Au3
        class Au4Atm; //type: Native::Controller::Sonet::Au4Atm
        class Au4; //type: Native::Controller::Sonet::Au4
        class Aps; //type: Native::Controller::Sonet::Aps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Aps> aps;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au3> > au_3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4> > au_4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4Atm> au_4_atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Aug> aug;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Clock> clock;
                class FramingEnum;

}; // Native::Controller::Sonet


class Native::Controller::Sonet::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: SourceEnum
        class SourceEnum;

}; // Native::Controller::Sonet::Clock


class Native::Controller::Sonet::Aug : public Entity
{
    public:
        Aug();
        ~Aug();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mapping; //type: MappingEnum
        class MappingEnum;

}; // Native::Controller::Sonet::Aug


class Native::Controller::Sonet::Au3 : public Entity
{
    public:
        Au3();
        ~Au3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        class Overhead; //type: Native::Controller::Sonet::Au3::Overhead
        class Mode; //type: Native::Controller::Sonet::Au3::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au3::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au3::Overhead> overhead;
        
}; // Native::Controller::Sonet::Au3


class Native::Controller::Sonet::Au3::Overhead : public Entity
{
    public:
        Overhead();
        ~Overhead();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf byte; //type: ByteEnum
        YLeaf length; //type: uint8
        class ByteEnum;

}; // Native::Controller::Sonet::Au3::Overhead


class Native::Controller::Sonet::Au3::Mode : public Entity
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

        YLeaf mapping; //type: MappingEnum
        class MappingEnum;

}; // Native::Controller::Sonet::Au3::Mode


class Native::Controller::Sonet::Au4Atm : public Entity
{
    public:
        Au4Atm();
        ~Au4Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Au4; //type: Native::Controller::Sonet::Au4Atm::Au4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4Atm::Au4> au_4;
        
}; // Native::Controller::Sonet::Au4Atm


class Native::Controller::Sonet::Au4Atm::Au4 : public Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf atm; //type: empty

}; // Native::Controller::Sonet::Au4Atm::Au4


class Native::Controller::Sonet::Au4 : public Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf tug_3; //type: int8
        YLeaf mode; //type: ModeEnum
        YLeaf cem_group; //type: int32
        YLeaf unframed; //type: empty
        YLeaf framing; //type: FramingEnum
        class CemGroupTimeslots; //type: Native::Controller::Sonet::Au4::CemGroupTimeslots
        class ChannelGroupTimeslots; //type: Native::Controller::Sonet::Au4::ChannelGroupTimeslots
        class CemGroupUnframed; //type: Native::Controller::Sonet::Au4::CemGroupUnframed
        class FramingUnframed; //type: Native::Controller::Sonet::Au4::FramingUnframed
        class CemGroupAtm; //type: Native::Controller::Sonet::Au4::CemGroupAtm
        class ImaGroup; //type: Native::Controller::Sonet::Au4::ImaGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::ImaGroup> ima_group;
                class ModeEnum;
        class FramingEnum;

}; // Native::Controller::Sonet::Au4


class Native::Controller::Sonet::Au4::CemGroupTimeslots : public Entity
{
    public:
        CemGroupTimeslots();
        ~CemGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::Sonet::Au4::CemGroupTimeslots


class Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf cem_group; //type: int32
        YLeaf timeslots; //type: string

}; // Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2


class Native::Controller::Sonet::Au4::ChannelGroupTimeslots : public Entity
{
    public:
        ChannelGroupTimeslots();
        ~ChannelGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::Sonet::Au4::ChannelGroupTimeslots


class Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf channel_group; //type: int32
        YLeaf timeslots; //type: string

}; // Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2


class Native::Controller::Sonet::Au4::CemGroupUnframed : public Entity
{
    public:
        CemGroupUnframed();
        ~CemGroupUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2> > tug_2;
        
}; // Native::Controller::Sonet::Au4::CemGroupUnframed


class Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf cem_group; //type: int32
        YLeaf unframed; //type: empty

}; // Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2


class Native::Controller::Sonet::Au4::FramingUnframed : public Entity
{
    public:
        FramingUnframed();
        ~FramingUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::Sonet::Au4::FramingUnframed::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::FramingUnframed::Tug2> > tug_2;
        
}; // Native::Controller::Sonet::Au4::FramingUnframed


class Native::Controller::Sonet::Au4::FramingUnframed::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf framing; //type: FramingEnum
        class FramingEnum;

}; // Native::Controller::Sonet::Au4::FramingUnframed::Tug2


class Native::Controller::Sonet::Au4::CemGroupAtm : public Entity
{
    public:
        CemGroupAtm();
        ~CemGroupAtm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::Sonet::Au4::CemGroupAtm::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::CemGroupAtm::Tug2> > tug_2;
        
}; // Native::Controller::Sonet::Au4::CemGroupAtm


class Native::Controller::Sonet::Au4::CemGroupAtm::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf atm; //type: empty

}; // Native::Controller::Sonet::Au4::CemGroupAtm::Tug2


class Native::Controller::Sonet::Au4::ImaGroup : public Entity
{
    public:
        ImaGroup();
        ~ImaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::Sonet::Au4::ImaGroup::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Au4::ImaGroup::Tug2> > tug_2;
        
}; // Native::Controller::Sonet::Au4::ImaGroup


class Native::Controller::Sonet::Au4::ImaGroup::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf ima_group; //type: int32

}; // Native::Controller::Sonet::Au4::ImaGroup::Tug2


class Native::Controller::Sonet::Aps : public Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf working; //type: int8
        YLeaf hspw_icrm_grp; //type: uint8
        class Group; //type: Native::Controller::Sonet::Aps::Group
        class Protect; //type: Native::Controller::Sonet::Aps::Protect
        class Interchassis; //type: Native::Controller::Sonet::Aps::Interchassis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Aps::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Aps::Interchassis> interchassis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::Sonet::Aps::Protect> protect;
        
}; // Native::Controller::Sonet::Aps


class Native::Controller::Sonet::Aps::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint8
        YLeaf acr; //type: int8

}; // Native::Controller::Sonet::Aps::Group


class Native::Controller::Sonet::Aps::Protect : public Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf ip_addr; //type: string

}; // Native::Controller::Sonet::Aps::Protect


class Native::Controller::Sonet::Aps::Interchassis : public Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint8

}; // Native::Controller::Sonet::Aps::Interchassis


class Native::Controller::SonetAcr : public Entity
{
    public:
        SonetAcr();
        ~SonetAcr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf framing; //type: FramingEnum
        YLeaf shutdown; //type: empty
        class Clock; //type: Native::Controller::SonetAcr::Clock
        class Aug; //type: Native::Controller::SonetAcr::Aug
        class Au3; //type: Native::Controller::SonetAcr::Au3
        class Au4Atm; //type: Native::Controller::SonetAcr::Au4Atm
        class Au4; //type: Native::Controller::SonetAcr::Au4
        class Aps; //type: Native::Controller::SonetAcr::Aps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Aps> aps;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au3> > au_3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4> > au_4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4Atm> au_4_atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Aug> aug;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Clock> clock;
                class FramingEnum;

}; // Native::Controller::SonetAcr


class Native::Controller::SonetAcr::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: SourceEnum
        class SourceEnum;

}; // Native::Controller::SonetAcr::Clock


class Native::Controller::SonetAcr::Aug : public Entity
{
    public:
        Aug();
        ~Aug();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mapping; //type: MappingEnum
        class MappingEnum;

}; // Native::Controller::SonetAcr::Aug


class Native::Controller::SonetAcr::Au3 : public Entity
{
    public:
        Au3();
        ~Au3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        class Overhead; //type: Native::Controller::SonetAcr::Au3::Overhead
        class Mode; //type: Native::Controller::SonetAcr::Au3::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au3::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au3::Overhead> overhead;
        
}; // Native::Controller::SonetAcr::Au3


class Native::Controller::SonetAcr::Au3::Overhead : public Entity
{
    public:
        Overhead();
        ~Overhead();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf byte; //type: ByteEnum
        YLeaf length; //type: uint8
        class ByteEnum;

}; // Native::Controller::SonetAcr::Au3::Overhead


class Native::Controller::SonetAcr::Au3::Mode : public Entity
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

        YLeaf mapping; //type: MappingEnum
        class MappingEnum;

}; // Native::Controller::SonetAcr::Au3::Mode


class Native::Controller::SonetAcr::Au4Atm : public Entity
{
    public:
        Au4Atm();
        ~Au4Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Au4; //type: Native::Controller::SonetAcr::Au4Atm::Au4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4Atm::Au4> au_4;
        
}; // Native::Controller::SonetAcr::Au4Atm


class Native::Controller::SonetAcr::Au4Atm::Au4 : public Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf atm; //type: empty

}; // Native::Controller::SonetAcr::Au4Atm::Au4


class Native::Controller::SonetAcr::Au4 : public Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf tug_3; //type: int8
        YLeaf mode; //type: ModeEnum
        YLeaf cem_group; //type: int32
        YLeaf unframed; //type: empty
        YLeaf framing; //type: FramingEnum
        class CemGroupTimeslots; //type: Native::Controller::SonetAcr::Au4::CemGroupTimeslots
        class ChannelGroupTimeslots; //type: Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots
        class CemGroupUnframed; //type: Native::Controller::SonetAcr::Au4::CemGroupUnframed
        class FramingUnframed; //type: Native::Controller::SonetAcr::Au4::FramingUnframed
        class CemGroupAtm; //type: Native::Controller::SonetAcr::Au4::CemGroupAtm
        class ImaGroup; //type: Native::Controller::SonetAcr::Au4::ImaGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::ImaGroup> ima_group;
                class ModeEnum;
        class FramingEnum;

}; // Native::Controller::SonetAcr::Au4


class Native::Controller::SonetAcr::Au4::CemGroupTimeslots : public Entity
{
    public:
        CemGroupTimeslots();
        ~CemGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::SonetAcr::Au4::CemGroupTimeslots


class Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf cem_group; //type: int32
        YLeaf timeslots; //type: string

}; // Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2


class Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots : public Entity
{
    public:
        ChannelGroupTimeslots();
        ~ChannelGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2> > tug_2;
        
}; // Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots


class Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf channel_group; //type: int32
        YLeaf timeslots; //type: string

}; // Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2


class Native::Controller::SonetAcr::Au4::CemGroupUnframed : public Entity
{
    public:
        CemGroupUnframed();
        ~CemGroupUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2> > tug_2;
        
}; // Native::Controller::SonetAcr::Au4::CemGroupUnframed


class Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf cem_group; //type: int32
        YLeaf unframed; //type: empty

}; // Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2


class Native::Controller::SonetAcr::Au4::FramingUnframed : public Entity
{
    public:
        FramingUnframed();
        ~FramingUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2> > tug_2;
        
}; // Native::Controller::SonetAcr::Au4::FramingUnframed


class Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf framing; //type: FramingEnum
        class FramingEnum;

}; // Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2


class Native::Controller::SonetAcr::Au4::CemGroupAtm : public Entity
{
    public:
        CemGroupAtm();
        ~CemGroupAtm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2> > tug_2;
        
}; // Native::Controller::SonetAcr::Au4::CemGroupAtm

class Native::Platform::TcamParityErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class Native::Platform::Console::OutputEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf serial;
        static const Enum::YLeaf virtual_;

};

class Native::Platform::Hardware::Lite::LicenseEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;

};

class Native::Platform::Hardware::Throughput::DisableEnum : public Enum
{
    public:
        static const Enum::YLeaf internal_license;

};

class Native::Platform::Hardware::Throughput::Level::KbpsEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_10000;
        static const Enum::YLeaf Y_25000;
        static const Enum::YLeaf Y_50000;

};

class Native::Platform::Ipsec::GdoiEnum : public Enum
{
    public:
        static const Enum::YLeaf accept_both;

};

class Native::Platform::Trace::Runtime::ProcessEnum : public Enum
{
    public:
        static const Enum::YLeaf iomd;

};

class Native::Platform::Trace::Runtime::ModuleEnum : public Enum
{
    public:
        static const Enum::YLeaf all_modules;

};

class Native::Platform::Trace::Runtime::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf info;

};

class Native::Enable::LastResortEnum : public Enum
{
    public:
        static const Enum::YLeaf password;
        static const Enum::YLeaf succeed;

};

class Native::Enable::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Enable::Secret::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_4;
        static const Enum::YLeaf Y_5;

};

class Native::Archive::PathEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf harddisk__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf tftp__COLON__;

};

class Native::Archive::Log::Config::Notify::Syslog::ContenttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf plaintext;
        static const Enum::YLeaf xml;

};

class Native::Username::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Username::Secret::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_5;

};

class Native::Controller::ControllerTxExList::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf t1;
        static const Enum::YLeaf e1;
        static const Enum::YLeaf t3;
        static const Enum::YLeaf T1;
        static const Enum::YLeaf E1;
        static const Enum::YLeaf T3;

};

class Native::Controller::ControllerTxExList::LinecodeEnum : public Enum
{
    public:
        static const Enum::YLeaf ami;
        static const Enum::YLeaf b8zs;
        static const Enum::YLeaf hdb3;

};

class Native::Controller::ControllerTxExList::Clock::Source::Line::LineModeEnum : public Enum
{
    public:
        static const Enum::YLeaf primary;
        static const Enum::YLeaf secondary;

};

class Native::Controller::Sonet::FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf sonet;
        static const Enum::YLeaf sdh;

};

class Native::Controller::Sonet::Clock::SourceEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf line;

};

class Native::Controller::Sonet::Aug::MappingEnum : public Enum
{
    public:
        static const Enum::YLeaf au_3;
        static const Enum::YLeaf au_4;

};

class Native::Controller::Sonet::Au3::Overhead::ByteEnum : public Enum
{
    public:
        static const Enum::YLeaf j1;

};

class Native::Controller::Sonet::Au3::Mode::MappingEnum : public Enum
{
    public:
        static const Enum::YLeaf c_11;
        static const Enum::YLeaf c_12;
        static const Enum::YLeaf c_2;

};

class Native::Controller::Sonet::Au4::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf c_11;
        static const Enum::YLeaf c_12;
        static const Enum::YLeaf c_2;
        static const Enum::YLeaf c_3;
        static const Enum::YLeaf c_4;
        static const Enum::YLeaf e3;

};

class Native::Controller::Sonet::Au4::FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf unframed;

};

class Native::Controller::Sonet::Au4::FramingUnframed::Tug2::FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf unframed;

};

class Native::Controller::SonetAcr::FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf sonet;
        static const Enum::YLeaf sdh;

};

class Native::Controller::SonetAcr::Clock::SourceEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf line;

};

class Native::Controller::SonetAcr::Aug::MappingEnum : public Enum
{
    public:
        static const Enum::YLeaf au_3;
        static const Enum::YLeaf au_4;

};

class Native::Controller::SonetAcr::Au3::Overhead::ByteEnum : public Enum
{
    public:
        static const Enum::YLeaf j1;

};

class Native::Controller::SonetAcr::Au3::Mode::MappingEnum : public Enum
{
    public:
        static const Enum::YLeaf c_11;
        static const Enum::YLeaf c_12;
        static const Enum::YLeaf c_2;

};

class Native::Controller::SonetAcr::Au4::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf c_11;
        static const Enum::YLeaf c_12;
        static const Enum::YLeaf c_2;
        static const Enum::YLeaf c_3;
        static const Enum::YLeaf c_4;
        static const Enum::YLeaf e3;

};

class Native::Controller::SonetAcr::Au4::FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf unframed;

};

class Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf unframed;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_1_ */

