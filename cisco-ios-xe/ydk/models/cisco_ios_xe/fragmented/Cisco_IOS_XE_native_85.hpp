#ifndef _CISCO_IOS_XE_NATIVE_85_
#define _CISCO_IOS_XE_NATIVE_85_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prnum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum> > prnum;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum : public ydk::Entity
{
    public:
        Prnum();
        ~Prnum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prnum; //type: uint32
        ydk::YLeaf applications; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aggregate; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate
        class Filter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter
        class Keys; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate> aggregate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter> filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys> keys;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport
        class Dscp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport> dport; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp> dscp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol> protocol; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport : public ydk::Entity
{
    public:
        Dport();
        ~Dport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max : public ydk::Entity
{
    public:
        Max();
        ~Max();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix
        class Range; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range> range;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Total; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total> total;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Maxpr; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr> > maxpr;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr : public ydk::Entity
{
    public:
        Maxpr();
        ~Maxpr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxpr; //type: uint32
        ydk::YLeaf learn; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Receive; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive> receive;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive


class Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization : public ydk::Entity
{
    public:
        MaxRangeUtilization();
        ~MaxRangeUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer : public ydk::Entity
{
    public:
        McPeer();
        ~McPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4
        class Domain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp
        class HeadEnd; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd> head_end;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dmval; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval> > dmval;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval : public ydk::Entity
{
    public:
        Dmval();
        ~Dmval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmval; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf eigrp; //type: string
        ydk::YLeaf head_end; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd : public ydk::Entity
{
    public:
        HeadEnd();
        ~HeadEnd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitor; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor
        class Route; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route
        class Verify; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify> verify;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf both; //type: empty
        ydk::YLeaf fast; //type: empty
        ydk::YLeaf passive; //type: empty
        class Active; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active> active; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throughput; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control; //type: empty
        ydk::YLeaf observe; //type: empty
        class Metric; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol> protocol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp
        class Static_; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_> static_;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_pref; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbr; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bidirectional; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos : public ydk::Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold> threshold;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MosThresh; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh> > mos_thresh;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh : public ydk::Entity
{
    public:
        MosThresh();
        ~MosThresh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mos_thresh; //type: string
        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh


class Native::Pfr::Master::IcmpModeConfigPfrMc::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Probe


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve : public ydk::Entity
{
    public:
        Resolve();
        ~Resolve();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: empty
        ydk::YLeaf equivalent_path_round_robin; //type: empty
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss> loss;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos> mos;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DelPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol> > del_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol : public ydk::Entity
{
    public:
        DelPol();
        ~DelPol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf del_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JitPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol> > jit_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol : public ydk::Entity
{
    public:
        JitPol();
        ~JitPol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jit_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LossPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol> > loss_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol : public ydk::Entity
{
    public:
        LossPol();
        ~LossPol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loss_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos : public ydk::Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MosPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol> > mos_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol : public ydk::Entity
{
    public:
        MosPol();
        ~MosPol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mos_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf post_dial_delay; //type: uint16
        ydk::YLeaf signaling_retries; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery : public ydk::Entity
{
    public:
        TargetDiscovery();
        ~TargetDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ResponderList; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList> responder_list;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList : public ydk::Entity
{
    public:
        ResponderList();
        ~ResponderList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TdNum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum> > td_num;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum : public ydk::Entity
{
    public:
        TdNum();
        ~TdNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf td_num; //type: string
        ydk::YLeaf inside_prefixes; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_delay; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute


class Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable : public ydk::Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable


class Native::PfrMap : public ydk::Entity
{
    public:
        PfrMap();
        ~PfrMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfr_tg; //type: string
        class Match; //type: Native::PfrMap::Match
        class Set; //type: Native::PfrMap::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set> set;
        
}; // Native::PfrMap


class Native::PfrMap::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::PfrMap::Match::Ip
        class Pfr; //type: Native::PfrMap::Match::Pfr
        class TrafficClass; //type: Native::PfrMap::Match::TrafficClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match::Pfr> pfr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match::TrafficClass> traffic_class;
        
}; // Native::PfrMap::Match


class Native::PfrMap::Match::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::PfrMap::Match::Ip


class Native::PfrMap::Match::Pfr : public ydk::Entity
{
    public:
        Pfr();
        ~Pfr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learn; //type: empty

}; // Native::PfrMap::Match::Pfr


class Native::PfrMap::Match::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: empty
        ydk::YLeaf application; //type: empty
        ydk::YLeaf prefix_list; //type: empty

}; // Native::PfrMap::Match::TrafficClass


class Native::PfrMap::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf jitter; //type: empty
        ydk::YLeaf mode; //type: empty
        ydk::YLeaf mos; //type: empty
        ydk::YLeaf next_hop; //type: empty
        ydk::YLeaf periodic; //type: empty
        ydk::YLeaf probe; //type: empty
        ydk::YLeaf resolve; //type: empty
        ydk::YLeaf traceroute; //type: empty
        ydk::YLeaf trap_enable; //type: empty
        ydk::YLeaf trigger_log_percentage; //type: empty
        ydk::YLeaf unreachable; //type: empty
        class ActiveProbe; //type: Native::PfrMap::Set::ActiveProbe
        class Backoff; //type: Native::PfrMap::Set::Backoff
        class Delay; //type: Native::PfrMap::Set::Delay
        class LinkGroup; //type: Native::PfrMap::Set::LinkGroup
        class Loss; //type: Native::PfrMap::Set::Loss

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe> active_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff> backoff;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup> link_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Loss> loss;
        
}; // Native::PfrMap::Set


class Native::PfrMap::Set::ActiveProbe : public ydk::Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Echo; //type: Native::PfrMap::Set::ActiveProbe::Echo
        class Jitter; //type: Native::PfrMap::Set::ActiveProbe::Jitter
        class TcpConn; //type: Native::PfrMap::Set::ActiveProbe::TcpConn
        class UdpEcho; //type: Native::PfrMap::Set::ActiveProbe::UdpEcho

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Echo> echo;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::TcpConn> tcp_conn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::UdpEcho> udp_echo;
        
}; // Native::PfrMap::Set::ActiveProbe


class Native::PfrMap::Set::ActiveProbe::Echo : public ydk::Entity
{
    public:
        Echo();
        ~Echo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::Echo


class Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf dscp; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::Jitter


class Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::TcpConn : public ydk::Entity
{
    public:
        TcpConn();
        ~TcpConn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::TcpConn


class Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::UdpEcho


class Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname


class Native::PfrMap::Set::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BoffT; //type: Native::PfrMap::Set::Backoff::BoffT

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff::BoffT> > boff_t;
        
}; // Native::PfrMap::Set::Backoff


class Native::PfrMap::Set::Backoff::BoffT : public ydk::Entity
{
    public:
        BoffT();
        ~BoffT();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boff_t; //type: uint16
        class BoffT0; //type: Native::PfrMap::Set::Backoff::BoffT::BoffT0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff::BoffT::BoffT0> > boff_t0;
        
}; // Native::PfrMap::Set::Backoff::BoffT


class Native::PfrMap::Set::Backoff::BoffT::BoffT0 : public ydk::Entity
{
    public:
        BoffT0();
        ~BoffT0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boff_t0; //type: uint16
        ydk::YLeaf boff_rng; //type: uint16

}; // Native::PfrMap::Set::Backoff::BoffT::BoffT0


class Native::PfrMap::Set::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relative; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::PfrMap::Set::Delay


class Native::PfrMap::Set::LinkGroup : public ydk::Entity
{
    public:
        LinkGroup();
        ~LinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LgName; //type: Native::PfrMap::Set::LinkGroup::LgName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup::LgName> > lg_name;
        
}; // Native::PfrMap::Set::LinkGroup


class Native::PfrMap::Set::LinkGroup::LgName : public ydk::Entity
{
    public:
        LgName();
        ~LgName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lg_name; //type: string
        class Fallback; //type: Native::PfrMap::Set::LinkGroup::LgName::Fallback

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup::LgName::Fallback> fallback; // presence node
        
}; // Native::PfrMap::Set::LinkGroup::LgName


class Native::PfrMap::Set::LinkGroup::LgName::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fall_name; //type: string

}; // Native::PfrMap::Set::LinkGroup::LgName::Fallback


class Native::PfrMap::Set::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::PfrMap::Set::Loss


class Native::FacilityAlarm : public ydk::Entity
{
    public:
        FacilityAlarm();
        ~FacilityAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        ydk::YLeaf exceed_action; //type: ExceedAction
        class Severity;
        class ExceedAction;

}; // Native::FacilityAlarm


class Native::Setup : public ydk::Entity
{
    public:
        Setup();
        ~Setup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf express; //type: boolean

}; // Native::Setup


class Native::TodClock : public ydk::Entity
{
    public:
        TodClock();
        ~TodClock();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InputSource; //type: Native::TodClock::InputSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::TodClock::InputSource> input_source;
        
}; // Native::TodClock


class Native::TodClock::InputSource : public ydk::Entity
{
    public:
        InputSource();
        ~InputSource();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        class Ptp; //type: Native::TodClock::InputSource::Ptp

        std::shared_ptr<Cisco_IOS_XE_native::Native::TodClock::InputSource::Ptp> ptp;
        
}; // Native::TodClock::InputSource


class Native::TodClock::InputSource::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: uint8

}; // Native::TodClock::InputSource::Ptp


class Native::NetworkClock : public ydk::Entity
{
    public:
        NetworkClock();
        ~NetworkClock();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Synchronization; //type: Native::NetworkClock::Synchronization
        class WaitToRestore; //type: Native::NetworkClock::WaitToRestore
        class InputSource; //type: Native::NetworkClock::InputSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource> input_source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::Synchronization> synchronization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::WaitToRestore> wait_to_restore;
        
}; // Native::NetworkClock


class Native::NetworkClock::Synchronization : public ydk::Entity
{
    public:
        Synchronization();
        ~Synchronization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf automatic; //type: empty
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::NetworkClock::Synchronization


class Native::NetworkClock::WaitToRestore : public ydk::Entity
{
    public:
        WaitToRestore();
        ~WaitToRestore();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint32
        ydk::YLeaf global; //type: empty

}; // Native::NetworkClock::WaitToRestore


class Native::NetworkClock::InputSource : public ydk::Entity
{
    public:
        InputSource();
        ~InputSource();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        class Interface; //type: Native::NetworkClock::InputSource::Interface
        class Ptp; //type: Native::NetworkClock::InputSource::Ptp

        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Ptp> ptp;
        
}; // Native::NetworkClock::InputSource


class Native::NetworkClock::InputSource::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::NetworkClock::InputSource::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::NetworkClock::InputSource::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::NetworkClock::InputSource::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::NetworkClock::InputSource::Interface


class Native::NetworkClock::InputSource::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::NetworkClock::InputSource::Interface::AtmSubinterface


class Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface


class Native::NetworkClock::InputSource::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::NetworkClock::InputSource::Interface::LispSubinterface


class Native::NetworkClock::InputSource::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::NetworkClock::InputSource::Interface::PortChannelSubinterface


class Native::NetworkClock::InputSource::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: uint8

}; // Native::NetworkClock::InputSource::Ptp


class Native::L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pseudowire; //type: Native::L2Vpn::Pseudowire
        class Vfi; //type: Native::L2Vpn::Vfi
        class Xconnect; //type: Native::L2Vpn::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire> pseudowire;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi> vfi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect> xconnect;
        
}; // Native::L2Vpn


class Native::L2Vpn::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routing; //type: empty
        class StaticOam; //type: Native::L2Vpn::Pseudowire::StaticOam
        class Tlv; //type: Native::L2Vpn::Pseudowire::Tlv
        class Group; //type: Native::L2Vpn::Pseudowire::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam> static_oam;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv> tlv;
        
}; // Native::L2Vpn::Pseudowire


class Native::L2Vpn::Pseudowire::StaticOam : public ydk::Entity
{
    public:
        StaticOam();
        ~StaticOam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class_; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_> > class_;
        
}; // Native::L2Vpn::Pseudowire::StaticOam


class Native::L2Vpn::Pseudowire::StaticOam::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_nm; //type: string
        class Timeout; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout> timeout;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Refresh; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh> refresh;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Send; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send> send;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send


class Native::L2Vpn::Pseudowire::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template_; //type: Native::L2Vpn::Pseudowire::Tlv::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_> > template_;
        
}; // Native::L2Vpn::Pseudowire::Tlv


class Native::L2Vpn::Pseudowire::Tlv::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_nm; //type: string
        class Tlv_; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_> tlv;
        
}; // Native::L2Vpn::Pseudowire::Tlv::Template_


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_ : public ydk::Entity
{
    public:
        Tlv_();
        ~Tlv_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlvType; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType
        class TlvDescription; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription> tlv_description;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType> tlv_type;
        
}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType : public ydk::Entity
{
    public:
        TlvType();
        ~TlvType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8

}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription : public ydk::Entity
{
    public:
        TlvDescription();
        ~TlvDescription();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string

}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription


class Native::L2Vpn::Pseudowire::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: empty

}; // Native::L2Vpn::Pseudowire::Group


class Native::L2Vpn::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Native::L2Vpn::Vfi::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context> > context;
        
}; // Native::L2Vpn::Vfi


class Native::L2Vpn::Vfi::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vfi_nm; //type: string
        class Autodiscovery; //type: Native::L2Vpn::Vfi::Context::Autodiscovery
        class Vpn; //type: Native::L2Vpn::Vfi::Context::Vpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery> autodiscovery;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Vpn> vpn;
        
}; // Native::L2Vpn::Vfi::Context


class Native::L2Vpn::Vfi::Context::Autodiscovery : public ydk::Entity
{
    public:
        Autodiscovery();
        ~Autodiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp> bgp;
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Signaling; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling> signaling;
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_
        class Ldp; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_> bgp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp> ldp; // presence node
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp


class Native::L2Vpn::Vfi::Context::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32

}; // Native::L2Vpn::Vfi::Context::Vpn


class Native::L2Vpn::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Native::L2Vpn::Xconnect::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context> > context;
        
}; // Native::L2Vpn::Xconnect


class Native::L2Vpn::Xconnect::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xc_name; //type: string
        class XcModeConfigXconnect; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect> xc_mode_config_xconnect;
        
}; // Native::L2Vpn::Xconnect::Context


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect : public ydk::Entity
{
    public:
        XcModeConfigXconnect();
        ~XcModeConfigXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Interworking; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking
        class Match; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match
        class Member; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member
        class Redundancy; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy
        class Remote; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking> interworking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member> member;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote> remote;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking : public ydk::Entity
{
    public:
        Interworking();
        ~Interworking();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol> protocol;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        class Ipv4; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4
        class Interface; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface> > interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4> > ipv4;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mem_vcid; //type: uint32

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf group; //type: empty
        ydk::YLeaf service_instance; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        class Predictive; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive> predictive;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive : public ydk::Entity
{
    public:
        Predictive();
        ~Predictive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: empty
        ydk::YLeaf enabled; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Circuit; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit
        class Link; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit> circuit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link> link;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit : public ydk::Entity
{
    public:
        Circuit();
        ~Circuit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link


class Native::L2VpnConfig : public ydk::Entity
{
    public:
        L2VpnConfig();
        ~L2VpnConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Vpn; //type: Native::L2VpnConfig::L2Vpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn> l2vpn; // presence node
        
}; // Native::L2VpnConfig


class Native::L2VpnConfig::L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Logging; //type: Native::L2VpnConfig::L2Vpn::Logging
        class Redundancy; //type: Native::L2VpnConfig::L2Vpn::Redundancy

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Redundancy> redundancy;
        
}; // Native::L2VpnConfig::L2Vpn


class Native::L2VpnConfig::L2Vpn::Logging : public ydk::Entity
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

        ydk::YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::L2VpnConfig::L2Vpn::Logging::Pseudowire

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Logging::Pseudowire> pseudowire;
        
}; // Native::L2VpnConfig::L2Vpn::Logging


class Native::L2VpnConfig::L2Vpn::Logging::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: empty

}; // Native::L2VpnConfig::L2Vpn::Logging::Pseudowire


class Native::L2VpnConfig::L2Vpn::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Predictive; //type: Native::L2VpnConfig::L2Vpn::Redundancy::Predictive

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Redundancy::Predictive> predictive;
        
}; // Native::L2VpnConfig::L2Vpn::Redundancy


class Native::L2VpnConfig::L2Vpn::Redundancy::Predictive : public ydk::Entity
{
    public:
        Predictive();
        ~Predictive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty

}; // Native::L2VpnConfig::L2Vpn::Redundancy::Predictive


class Native::L3Vpn : public ydk::Entity
{
    public:
        L3Vpn();
        ~L3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encapsulation; //type: Native::L3Vpn::Encapsulation

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation> encapsulation;
        
}; // Native::L3Vpn


class Native::L3Vpn::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::L3Vpn::Encapsulation::Ip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip> > ip;
        
}; // Native::L3Vpn::Encapsulation


class Native::L3Vpn::Encapsulation::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        class Transport; //type: Native::L3Vpn::Encapsulation::Ip::Transport
        class Protocol; //type: Native::L3Vpn::Encapsulation::Ip::Protocol
        class Mpls; //type: Native::L3Vpn::Encapsulation::Ip::Mpls

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Transport> transport;
        
}; // Native::L3Vpn::Encapsulation::Ip


class Native::L3Vpn::Encapsulation::Ip::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4> ipv4; // presence node
        
}; // Native::L3Vpn::Encapsulation::Ip::Transport


class Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string

}; // Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4


class Native::L3Vpn::Encapsulation::Ip::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gre; //type: Native::L3Vpn::Encapsulation::Ip::Protocol::Gre

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Protocol::Gre> gre; // presence node
        
}; // Native::L3Vpn::Encapsulation::Ip::Protocol


class Native::L3Vpn::Encapsulation::Ip::Protocol::Gre : public ydk::Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint32

}; // Native::L3Vpn::Encapsulation::Ip::Protocol::Gre


class Native::L3Vpn::Encapsulation::Ip::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: one of uint32, enumeration
        class Mtu;

}; // Native::L3Vpn::Encapsulation::Ip::Mpls


class Native::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_map; //type: uint8
        class Atm; //type: Native::Mpls::Atm
        class Ip; //type: Native::Mpls::Ip
        class Label; //type: Native::Mpls::Label
        class Ldp; //type: Native::Mpls::Ldp
        class PrefixMap; //type: Native::Mpls::PrefixMap
        class Static_; //type: Native::Mpls::Static_
        class TrafficEng; //type: Native::Mpls::TrafficEng
        class Tp; //type: Native::Mpls::Tp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::PrefixMap> prefix_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Tp> tp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Mpls

class Native::FacilityAlarm::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;

};

class Native::FacilityAlarm::ExceedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

};

class Native::NetworkClock::Synchronization::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf QL_enabled;

};

class Native::L3Vpn::Encapsulation::Ip::Mpls::Mtu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_85_ */

