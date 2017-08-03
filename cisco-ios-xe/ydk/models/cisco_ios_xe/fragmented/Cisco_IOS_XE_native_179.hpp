#ifndef _CISCO_IOS_XE_NATIVE_179_
#define _CISCO_IOS_XE_NATIVE_179_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::HwSwitch : public ydk::Entity
{
    public:
        HwSwitch();
        ~HwSwitch();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switch_; //type: Native::HwSwitch::Switch_

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch_> switch_;
        
}; // Native::HwSwitch


class Native::HwSwitch::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SwitchNumber; //type: Native::HwSwitch::Switch_::SwitchNumber

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch_::SwitchNumber> > switch_number;
        
}; // Native::HwSwitch::Switch_


class Native::HwSwitch::Switch_::SwitchNumber : public ydk::Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_number; //type: uint8
        class Logging; //type: Native::HwSwitch::Switch_::SwitchNumber::Logging

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch_::SwitchNumber::Logging> logging;
        
}; // Native::HwSwitch::Switch_::SwitchNumber


class Native::HwSwitch::Switch_::SwitchNumber::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Onboard; //type: Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard

        std::shared_ptr<Cisco_IOS_XE_native::Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard> onboard; // presence node
        
}; // Native::HwSwitch::Switch_::SwitchNumber::Logging


class Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard : public ydk::Entity
{
    public:
        Onboard();
        ~Onboard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: empty
        ydk::YLeaf environment; //type: empty
        ydk::YLeaf message; //type: empty
        ydk::YLeaf poe; //type: empty
        ydk::YLeaf temperature; //type: empty
        ydk::YLeaf voltage; //type: empty

}; // Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard


class Native::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Utd


class Native::UtdEngine : public ydk::Entity
{
    public:
        UtdEngine();
        ~UtdEngine();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Utd; //type: Native::UtdEngine::Utd

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd> utd;
        
}; // Native::UtdEngine


class Native::UtdEngine::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Engine; //type: Native::UtdEngine::Utd::Engine
        class Whitelist; //type: Native::UtdEngine::Utd::Whitelist

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine> engine;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Whitelist> whitelist;
        
}; // Native::UtdEngine::Utd


class Native::UtdEngine::Utd::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Advanced; //type: Native::UtdEngine::Utd::Engine::Advanced
        class Standard; //type: Native::UtdEngine::Utd::Engine::Standard

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced> advanced;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard> standard;
        
}; // Native::UtdEngine::Utd::Engine


class Native::UtdEngine::Utd::Engine::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::UtdEngine::Utd::Engine::Advanced::Default_
        class Threat; //type: Native::UtdEngine::Utd::Engine::Advanced::Threat

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced::Threat> threat; // presence node
        
}; // Native::UtdEngine::Utd::Engine::Advanced


class Native::UtdEngine::Utd::Engine::Advanced::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threat; //type: Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat> threat; // presence node
        
}; // Native::UtdEngine::Utd::Engine::Advanced::Default_


class Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat : public ydk::Entity
{
    public:
        Threat();
        ~Threat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat


class Native::UtdEngine::Utd::Engine::Advanced::Threat : public ydk::Entity
{
    public:
        Threat();
        ~Threat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf detection; //type: empty

}; // Native::UtdEngine::Utd::Engine::Advanced::Threat


class Native::UtdEngine::Utd::Engine::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: Policy
        ydk::YLeaf threat; //type: Threat
        ydk::YLeaf whitelist; //type: empty
        class Default_; //type: Native::UtdEngine::Utd::Engine::Standard::Default_
        class Logging; //type: Native::UtdEngine::Utd::Engine::Standard::Logging
        class Signature; //type: Native::UtdEngine::Utd::Engine::Standard::Signature

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature> signature;
                class Policy;
        class Threat;

}; // Native::UtdEngine::Utd::Engine::Standard


class Native::UtdEngine::Utd::Engine::Standard::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: empty
        ydk::YLeaf threat; //type: empty

}; // Native::UtdEngine::Utd::Engine::Standard::Default_


class Native::UtdEngine::Utd::Engine::Standard::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Server; //type: Native::UtdEngine::Utd::Engine::Standard::Logging::Server
        class Syslog; //type: Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Logging::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog> syslog; // presence node
        
}; // Native::UtdEngine::Utd::Engine::Standard::Logging


class Native::UtdEngine::Utd::Engine::Standard::Logging::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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
        ydk::YLeaf level; //type: SyslogLevelType
        ydk::YLeaf syslog; //type: empty

}; // Native::UtdEngine::Utd::Engine::Standard::Logging::Server


class Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: SyslogLevelType

}; // Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog


class Native::UtdEngine::Utd::Engine::Standard::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Update; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update> update;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OccurAt; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt
        class Server; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt> occur_at;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server> server;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt : public ydk::Entity
{
    public:
        OccurAt();
        ~OccurAt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily
        class Monthly; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly
        class Weekly; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily> daily;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly> monthly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly> weekly;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly : public ydk::Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: string
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: string
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cisco; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco
        class Url; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco> cisco;
        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url> url;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco : public ydk::Entity
{
    public:
        Cisco();
        ~Cisco();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

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
        class All; //type: Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All> all;
        
}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url


class Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All : public ydk::Entity
{
    public:
        All();
        ~All();

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
        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All


class Native::UtdEngine::Utd::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Signature; //type: Native::UtdEngine::Utd::Whitelist::Signature

        std::shared_ptr<Cisco_IOS_XE_native::Native::UtdEngine::Utd::Whitelist::Signature> signature;
        
}; // Native::UtdEngine::Utd::Whitelist


class Native::UtdEngine::Utd::Whitelist::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint64
        ydk::YLeaf comment; //type: string

}; // Native::UtdEngine::Utd::Whitelist::Signature


class Native::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Service; //type: Native::Voice::Service

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Voice::Service> > service;
        
}; // Native::Voice


class Native::Voice::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Fax; //type: Native::Voice::Service::Fax

        std::shared_ptr<Cisco_IOS_XE_native::Native::Voice::Service::Fax> fax;
                class Type;

}; // Native::Voice::Service


class Native::Voice::Service::Fax : public ydk::Entity
{
    public:
        Fax();
        ~Fax();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf fallback; //type: Fallback
        ydk::YLeaf codec; //type: Codec
        ydk::YLeaf ls_redundancy; //type: uint8
        ydk::YLeaf hs_redundancy; //type: uint8
        ydk::YLeaf version; //type: Version
        class Protocol;
        class Fallback;
        class Codec;
        class Version;

}; // Native::Voice::Service::Fax


class Native::VoiceCard : public ydk::Entity
{
    public:
        VoiceCard();
        ~VoiceCard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot; //type: uint8

}; // Native::VoiceCard


class Native::Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_before_forward; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeafList search_order; //type: list of  SearchOrder
        class SearchOrder;

}; // Native::Vpdn


class Native::Vstack : public ydk::Entity
{
    public:
        Vstack();
        ~Vstack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf director; //type: string

}; // Native::Vstack

class Native::UtdEngine::Utd::Engine::Standard::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf balanced;
        static const ydk::Enum::YLeaf connectivity;
        static const ydk::Enum::YLeaf security;

};

class Native::UtdEngine::Utd::Engine::Standard::Threat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detection;
        static const ydk::Enum::YLeaf protection;

};

class Native::Voice::Service::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pots;
        static const ydk::Enum::YLeaf saf;
        static const ydk::Enum::YLeaf voatm;
        static const ydk::Enum::YLeaf vofr;
        static const ydk::Enum::YLeaf voip;

};

class Native::Voice::Service::Fax::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pass_through;
        static const ydk::Enum::YLeaf t38;

};

class Native::Voice::Service::Fax::Fallback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pass_through;

};

class Native::Voice::Service::Fax::Codec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g711ulaw;

};

class Native::Voice::Service::Fax::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_3;

};

class Native::Vpdn::SearchOrder : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf multihop_hostname;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_179_ */

