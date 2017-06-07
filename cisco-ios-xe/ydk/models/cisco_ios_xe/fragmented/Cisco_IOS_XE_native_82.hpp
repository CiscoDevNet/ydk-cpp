#ifndef _CISCO_IOS_XE_NATIVE_82_
#define _CISCO_IOS_XE_NATIVE_82_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_81.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Boff; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff> > boff;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff : public Entity
{
    public:
        Boff();
        ~Boff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boff; //type: uint16
        class Boff0; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0> > boff0;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0 : public Entity
{
    public:
        Boff0();
        ~Boff0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boff0; //type: uint16
        YLeaf bstep; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border : public Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf interface; //type: empty
        class KeyChain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain> > key_chain;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kc_name; //type: string
        YLeaf interface; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain


class Native::Pfr::Master::IcmpModeConfigPfrMc::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf relative; //type: uint16
        YLeaf threshold; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter : public Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn : public Entity
{
    public:
        Learn();
        ~Learn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LrnMode__ConfigPfrMcLearn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn> lrn_mode__config_pfr_mc_learn;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn : public Entity
{
    public:
        LrnMode__ConfigPfrMcLearn();
        ~LrnMode__ConfigPfrMcLearn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: empty
        YLeaf monitor_period; //type: uint16
        YLeaf periodic_interval; //type: uint16
        YLeaf throughput; //type: empty
        class AggregationType; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType
        class Expire; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire
        class Inside; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside
        class List; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List
        class Prefixes; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes
        class TrafficClass; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType> aggregation_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire> expire;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside> inside;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes> prefixes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass> traffic_class;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType : public Entity
{
    public:
        AggregationType();
        ~AggregationType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgp; //type: empty
        YLeaf non_bgp; //type: empty
        YLeaf prefix_length; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire : public Entity
{
    public:
        Expire();
        ~Expire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class After; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After> after;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After : public Entity
{
    public:
        After();
        ~After();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session; //type: uint16
        YLeaf time; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside : public Entity
{
    public:
        Inside();
        ~Inside();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bgp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List : public Entity
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

        class Seq; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq> seq;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq : public Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PfrTc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc> > pfr_tc;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc : public Entity
{
    public:
        PfrTc();
        ~PfrTc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pfr_tc; //type: uint16
        YLeaf refname; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prnum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum> > prnum;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum : public Entity
{
    public:
        Prnum();
        ~Prnum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prnum; //type: uint32
        YLeaf applications; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aggregate; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate
        class Filter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter
        class Keys; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate> aggregate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter> filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys> keys;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate : public Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys : public Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport
        class Dscp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport> dport; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp> dscp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol> protocol; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport : public Entity
{
    public:
        Dport();
        ~Dport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: empty
        YLeaf protocol; //type: empty
        YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dport; //type: empty
        YLeaf protocol; //type: empty
        YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol : public Entity
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

        YLeaf dport; //type: empty
        YLeaf dscp; //type: empty
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport : public Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dport; //type: empty
        YLeaf dscp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport : public Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dport; //type: empty
        YLeaf dscp; //type: empty
        YLeaf protocol; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Loss : public Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf relative; //type: uint16
        YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max : public Entity
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

        class Prefix; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix
        class Range; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range> range;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Total; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total> total;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Maxpr; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr> > maxpr;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr : public Entity
{
    public:
        Maxpr();
        ~Maxpr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maxpr; //type: uint32
        YLeaf learn; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range : public Entity
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

        class Receive; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive> receive;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive


class Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization : public Entity
{
    public:
        MaxRangeUtilization();
        ~MaxRangeUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer : public Entity
{
    public:
        McPeer();
        ~McPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4
        class Domain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp
        class HeadEnd; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd> head_end;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf description; //type: string
        YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain : public Entity
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

        class Dmval; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval> > dmval;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval : public Entity
{
    public:
        Dmval();
        ~Dmval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmval; //type: uint16
        YLeaf description; //type: string
        YLeaf eigrp; //type: string
        YLeaf head_end; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4> > ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf interface; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf description; //type: string
        YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd : public Entity
{
    public:
        HeadEnd();
        ~HeadEnd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface> > interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf description; //type: string
        YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode : public Entity
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

        class Monitor; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor
        class Route; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route
        class Verify; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify> verify;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf both; //type: empty
        YLeaf fast; //type: empty
        YLeaf passive; //type: empty
        class Active; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active> active; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throughput; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf control; //type: empty
        YLeaf observe; //type: empty
        class Metric; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol> protocol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp
        class Static_; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_> static_;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_pref; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol : public Entity
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

        YLeaf pbr; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bidirectional; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos : public Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold> threshold;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MosThresh; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh> > mos_thresh;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh : public Entity
{
    public:
        MosThresh();
        ~MosThresh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mos_thresh; //type: string
        YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh


class Native::Pfr::Master::IcmpModeConfigPfrMc::Probe : public Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Probe


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve : public Entity
{
    public:
        Resolve();
        ~Resolve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: empty
        YLeaf equivalent_path_round_robin; //type: empty
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss> loss;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos> mos;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DelPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol> > del_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol : public Entity
{
    public:
        DelPol();
        ~DelPol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf del_pol; //type: uint8
        YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter : public Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class JitPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol> > jit_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol : public Entity
{
    public:
        JitPol();
        ~JitPol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf jit_pol; //type: uint8
        YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss : public Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LossPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol> > loss_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol : public Entity
{
    public:
        LossPol();
        ~LossPol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf loss_pol; //type: uint8
        YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos : public Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MosPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol> > mos_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol : public Entity
{
    public:
        MosPol();
        ~MosPol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mos_pol; //type: uint8
        YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp : public Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf post_dial_delay; //type: uint16
        YLeaf signaling_retries; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery : public Entity
{
    public:
        TargetDiscovery();
        ~TargetDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ResponderList; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList> responder_list;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList : public Entity
{
    public:
        ResponderList();
        ~ResponderList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TdNum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum> > td_num;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum : public Entity
{
    public:
        TdNum();
        ~TdNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf td_num; //type: string
        YLeaf inside_prefixes; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute : public Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf probe_delay; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute


class Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable : public Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf relative; //type: uint16
        YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable


class Native::PfrMap : public Entity
{
    public:
        PfrMap();
        ~PfrMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pfr_tg; //type: string
        class Match; //type: Native::PfrMap::Match
        class Set; //type: Native::PfrMap::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set> set;
        
}; // Native::PfrMap


class Native::PfrMap::Match : public Entity
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

        class Ip; //type: Native::PfrMap::Match::Ip
        class Pfr; //type: Native::PfrMap::Match::Pfr
        class TrafficClass; //type: Native::PfrMap::Match::TrafficClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match::Pfr> pfr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Match::TrafficClass> traffic_class;
        
}; // Native::PfrMap::Match


class Native::PfrMap::Match::Ip : public Entity
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

        YLeaf address; //type: empty

}; // Native::PfrMap::Match::Ip


class Native::PfrMap::Match::Pfr : public Entity
{
    public:
        Pfr();
        ~Pfr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf learn; //type: empty

}; // Native::PfrMap::Match::Pfr


class Native::PfrMap::Match::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: empty
        YLeaf application; //type: empty
        YLeaf prefix_list; //type: empty

}; // Native::PfrMap::Match::TrafficClass


class Native::PfrMap::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holddown; //type: uint16
        YLeaf interface; //type: string
        YLeaf jitter; //type: empty
        YLeaf mode; //type: empty
        YLeaf mos; //type: empty
        YLeaf next_hop; //type: empty
        YLeaf periodic; //type: empty
        YLeaf probe; //type: empty
        YLeaf resolve; //type: empty
        YLeaf traceroute; //type: empty
        YLeaf trap_enable; //type: empty
        YLeaf trigger_log_percentage; //type: empty
        YLeaf unreachable; //type: empty
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


class Native::PfrMap::Set::ActiveProbe : public Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Echo; //type: Native::PfrMap::Set::ActiveProbe::Echo
        class Jitter; //type: Native::PfrMap::Set::ActiveProbe::Jitter
        class TcpConn; //type: Native::PfrMap::Set::ActiveProbe::TcpConn
        class UdpEcho; //type: Native::PfrMap::Set::ActiveProbe::UdpEcho

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Echo> echo;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::TcpConn> tcp_conn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::UdpEcho> udp_echo;
        
}; // Native::PfrMap::Set::ActiveProbe


class Native::PfrMap::Set::ActiveProbe::Echo : public Entity
{
    public:
        Echo();
        ~Echo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::Echo


class Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf dscp; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::Jitter : public Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::Jitter


class Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::TcpConn : public Entity
{
    public:
        TcpConn();
        ~TcpConn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::TcpConn


class Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::UdpEcho : public Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::UdpEcho


class Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname


class Native::PfrMap::Set::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BoffT; //type: Native::PfrMap::Set::Backoff::BoffT

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff::BoffT> > boff_t;
        
}; // Native::PfrMap::Set::Backoff


class Native::PfrMap::Set::Backoff::BoffT : public Entity
{
    public:
        BoffT();
        ~BoffT();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boff_t; //type: uint16
        class BoffT0; //type: Native::PfrMap::Set::Backoff::BoffT::BoffT0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff::BoffT::BoffT0> > boff_t0;
        
}; // Native::PfrMap::Set::Backoff::BoffT


class Native::PfrMap::Set::Backoff::BoffT::BoffT0 : public Entity
{
    public:
        BoffT0();
        ~BoffT0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boff_t0; //type: uint16
        YLeaf boff_rng; //type: uint16

}; // Native::PfrMap::Set::Backoff::BoffT::BoffT0


class Native::PfrMap::Set::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf relative; //type: empty
        YLeaf threshold; //type: empty

}; // Native::PfrMap::Set::Delay


class Native::PfrMap::Set::LinkGroup : public Entity
{
    public:
        LinkGroup();
        ~LinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LgName; //type: Native::PfrMap::Set::LinkGroup::LgName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup::LgName> > lg_name;
        
}; // Native::PfrMap::Set::LinkGroup


class Native::PfrMap::Set::LinkGroup::LgName : public Entity
{
    public:
        LgName();
        ~LgName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lg_name; //type: string
        class Fallback; //type: Native::PfrMap::Set::LinkGroup::LgName::Fallback

        std::shared_ptr<Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup::LgName::Fallback> fallback; // presence node
        
}; // Native::PfrMap::Set::LinkGroup::LgName


class Native::PfrMap::Set::LinkGroup::LgName::Fallback : public Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fall_name; //type: string

}; // Native::PfrMap::Set::LinkGroup::LgName::Fallback


class Native::PfrMap::Set::Loss : public Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf relative; //type: uint16
        YLeaf threshold; //type: uint32

}; // Native::PfrMap::Set::Loss


class Native::FacilityAlarm : public Entity
{
    public:
        FacilityAlarm();
        ~FacilityAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: SeverityEnum
        YLeaf exceed_action; //type: ExceedActionEnum
        class SeverityEnum;
        class ExceedActionEnum;

}; // Native::FacilityAlarm


class Native::Setup : public Entity
{
    public:
        Setup();
        ~Setup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf express; //type: boolean

}; // Native::Setup


class Native::TodClock : public Entity
{
    public:
        TodClock();
        ~TodClock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InputSource; //type: Native::TodClock::InputSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::TodClock::InputSource> input_source;
        
}; // Native::TodClock


class Native::TodClock::InputSource : public Entity
{
    public:
        InputSource();
        ~InputSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        class Ptp; //type: Native::TodClock::InputSource::Ptp

        std::shared_ptr<Cisco_IOS_XE_native::Native::TodClock::InputSource::Ptp> ptp;
        
}; // Native::TodClock::InputSource


class Native::TodClock::InputSource::Ptp : public Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: uint8

}; // Native::TodClock::InputSource::Ptp


class Native::NetworkClock : public Entity
{
    public:
        NetworkClock();
        ~NetworkClock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Synchronization; //type: Native::NetworkClock::Synchronization
        class WaitToRestore; //type: Native::NetworkClock::WaitToRestore
        class InputSource; //type: Native::NetworkClock::InputSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource> input_source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::Synchronization> synchronization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::WaitToRestore> wait_to_restore;
        
}; // Native::NetworkClock


class Native::NetworkClock::Synchronization : public Entity
{
    public:
        Synchronization();
        ~Synchronization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf automatic; //type: empty
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::NetworkClock::Synchronization


class Native::NetworkClock::WaitToRestore : public Entity
{
    public:
        WaitToRestore();
        ~WaitToRestore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf global; //type: empty

}; // Native::NetworkClock::WaitToRestore


class Native::NetworkClock::InputSource : public Entity
{
    public:
        InputSource();
        ~InputSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8
        class Interface; //type: Native::NetworkClock::InputSource::Interface
        class Ptp; //type: Native::NetworkClock::InputSource::Ptp

        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Ptp> ptp;
        
}; // Native::NetworkClock::InputSource


class Native::NetworkClock::InputSource::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::NetworkClock::InputSource::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::NetworkClock::InputSource::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::NetworkClock::InputSource::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::NetworkClock::InputSource::Interface


class Native::NetworkClock::InputSource::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::NetworkClock::InputSource::Interface::AtmSubinterface


class Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface


class Native::NetworkClock::InputSource::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::NetworkClock::InputSource::Interface::LispSubinterface


class Native::NetworkClock::InputSource::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::NetworkClock::InputSource::Interface::PortChannelSubinterface


class Native::NetworkClock::InputSource::Ptp : public Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: uint8

}; // Native::NetworkClock::InputSource::Ptp


class Native::L2Vpn : public Entity
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

        class Pseudowire; //type: Native::L2Vpn::Pseudowire
        class Vfi; //type: Native::L2Vpn::Vfi
        class Xconnect; //type: Native::L2Vpn::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire> pseudowire;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi> vfi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect> xconnect;
        
}; // Native::L2Vpn


class Native::L2Vpn::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routing; //type: empty
        class StaticOam; //type: Native::L2Vpn::Pseudowire::StaticOam
        class Tlv; //type: Native::L2Vpn::Pseudowire::Tlv
        class Group; //type: Native::L2Vpn::Pseudowire::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam> static_oam;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv> tlv;
        
}; // Native::L2Vpn::Pseudowire


class Native::L2Vpn::Pseudowire::StaticOam : public Entity
{
    public:
        StaticOam();
        ~StaticOam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Class_; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_> > class_;
        
}; // Native::L2Vpn::Pseudowire::StaticOam


class Native::L2Vpn::Pseudowire::StaticOam::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_nm; //type: string
        class Timeout; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout> timeout;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Refresh; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh> refresh;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh : public Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Send; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send> send;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32

}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send


class Native::L2Vpn::Pseudowire::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: Native::L2Vpn::Pseudowire::Tlv::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_> > template_;
        
}; // Native::L2Vpn::Pseudowire::Tlv


class Native::L2Vpn::Pseudowire::Tlv::Template_ : public Entity
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

        YLeaf tlv_nm; //type: string
        class Tlv_; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_> tlv;
        
}; // Native::L2Vpn::Pseudowire::Tlv::Template_


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_ : public Entity
{
    public:
        Tlv_();
        ~Tlv_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TlvType; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType
        class TlvDescription; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription> tlv_description;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType> tlv_type;
        
}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType : public Entity
{
    public:
        TlvType();
        ~TlvType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8

}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription : public Entity
{
    public:
        TlvDescription();
        ~TlvDescription();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string

}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription


class Native::L2Vpn::Pseudowire::Group : public Entity
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

        YLeaf status; //type: empty

}; // Native::L2Vpn::Pseudowire::Group


class Native::L2Vpn::Vfi : public Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::L2Vpn::Vfi::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context> > context;
        
}; // Native::L2Vpn::Vfi


class Native::L2Vpn::Vfi::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vfi_nm; //type: string
        class Autodiscovery; //type: Native::L2Vpn::Vfi::Context::Autodiscovery
        class Vpn; //type: Native::L2Vpn::Vfi::Context::Vpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery> autodiscovery;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Vpn> vpn;
        
}; // Native::L2Vpn::Vfi::Context


class Native::L2Vpn::Vfi::Context::Autodiscovery : public Entity
{
    public:
        Autodiscovery();
        ~Autodiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp> bgp;
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Signaling; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling> signaling;
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling : public Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp_; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_
        class Ldp; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_> bgp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp> ldp; // presence node
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_ : public Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_; //type: string

}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_; //type: string

}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp


class Native::L2Vpn::Vfi::Context::Vpn : public Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32

}; // Native::L2Vpn::Vfi::Context::Vpn


class Native::L2Vpn::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::L2Vpn::Xconnect::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context> > context;
        
}; // Native::L2Vpn::Xconnect


class Native::L2Vpn::Xconnect::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xc_name; //type: string
        class XcModeConfigXconnect; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect> xc_mode_config_xconnect;
        
}; // Native::L2Vpn::Xconnect::Context


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect : public Entity
{
    public:
        XcModeConfigXconnect();
        ~XcModeConfigXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
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


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking : public Entity
{
    public:
        Interworking();
        ~Interworking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ethernet; //type: empty
        YLeaf ip; //type: empty
        YLeaf vlan; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match : public Entity
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

        class Protocol; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol> protocol;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol : public Entity
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

        YLeaf ipv6; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16
        class Ipv4; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4
        class Interface; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface> > interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4> > ipv4;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf mem_vcid; //type: uint32

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf group; //type: empty
        YLeaf service_instance; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint8
        class Predictive; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive> predictive;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive : public Entity
{
    public:
        Predictive();
        ~Predictive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disabled; //type: empty
        YLeaf enabled; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Circuit; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit
        class Link; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit> circuit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link> link;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote

class Native::FacilityAlarm::SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;

};

class Native::FacilityAlarm::ExceedActionEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::NetworkClock::Synchronization::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf QL_enabled;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_82_ */

