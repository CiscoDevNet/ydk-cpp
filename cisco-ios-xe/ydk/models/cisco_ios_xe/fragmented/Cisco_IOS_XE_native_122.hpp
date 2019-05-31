#ifndef _CISCO_IOS_XE_NATIVE_122_
#define _CISCO_IOS_XE_NATIVE_122_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_121.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

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

        ydk::YLeaf number; //type: uint32
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging> aggressive_aging;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class SynFlood; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf packet; //type: uint8
        ydk::YLeaf total; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class SynFlood; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf inspect; //type: string

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf


class Native::ParameterMap::Type::InspectGlobal : public ydk::Entity
{
    public:
        InspectGlobal();
        ~InspectGlobal();

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

        ydk::YLeaf icmp_unreachable_allow; //type: empty
        ydk::YLeaf multi_tenancy; //type: empty
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobal::AggressiveAging
        class Alert; //type: Native::ParameterMap::Type::InspectGlobal::Alert
        class Inspect; //type: Native::ParameterMap::Type::InspectGlobal::Inspect
        class Lisp; //type: Native::ParameterMap::Type::InspectGlobal::Lisp
        class Log; //type: Native::ParameterMap::Type::InspectGlobal::Log
        class MaxIncomplete; //type: Native::ParameterMap::Type::InspectGlobal::MaxIncomplete
        class Tcp; //type: Native::ParameterMap::Type::InspectGlobal::Tcp
        class ZoneMismatch; //type: Native::ParameterMap::Type::InspectGlobal::ZoneMismatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::AggressiveAging> aggressive_aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Inspect> inspect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::ZoneMismatch> zone_mismatch;
        
}; // Native::ParameterMap::Type::InspectGlobal


class Native::ParameterMap::Type::InspectGlobal::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobal::AggressiveAging


class Native::ParameterMap::Type::InspectGlobal::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

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

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::Alert


class Native::ParameterMap::Type::InspectGlobal::Inspect : public ydk::Entity
{
    public:
        Inspect();
        ~Inspect();

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
        class Vrf; //type: Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf

        ydk::YList vrf;
        
}; // Native::ParameterMap::Type::InspectGlobal::Inspect


class Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf


class Native::ParameterMap::Type::InspectGlobal::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

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

        ydk::YLeaf inner_packet_inspection; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::Lisp


class Native::ParameterMap::Type::InspectGlobal::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf dropped_packets; //type: empty
        class FlowExport; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport> flow_export;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport : public ydk::Entity
{
    public:
        FlowExport();
        ~FlowExport();

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

        class Template; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template
        class V9; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9> v9;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

        ydk::YLeaf timeout_rate; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9 : public ydk::Entity
{
    public:
        V9();
        ~V9();

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

        class Udp; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp> udp;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        class Destination; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination> destination;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf dst_port; //type: uint16

}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination


class Native::ParameterMap::Type::InspectGlobal::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

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

        ydk::YLeaf icmp; //type: uint32
        ydk::YLeaf tcp; //type: uint32
        ydk::YLeaf udp; //type: uint32
        class HalfOpenSessions; //type: Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions> half_open_sessions;
        
}; // Native::ParameterMap::Type::InspectGlobal::MaxIncomplete


class Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

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

        ydk::YLeaf number; //type: uint32
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging> aggressive_aging;
        
}; // Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging


class Native::ParameterMap::Type::InspectGlobal::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class SynFlood; //type: Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood
        class WindowScaleEnforcement; //type: Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood> syn_flood;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement> window_scale_enforcement;
        
}; // Native::ParameterMap::Type::InspectGlobal::Tcp


class Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood


class Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement : public ydk::Entity
{
    public:
        WindowScaleEnforcement();
        ~WindowScaleEnforcement();

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

        ydk::YLeaf loose; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement


class Native::ParameterMap::Type::InspectGlobal::ZoneMismatch : public ydk::Entity
{
    public:
        ZoneMismatch();
        ~ZoneMismatch();

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

        ydk::YLeaf drop; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::ZoneMismatch


class Native::ParameterMap::Type::InspectVrf : public ydk::Entity
{
    public:
        InspectVrf();
        ~InspectVrf();

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
        class Alert; //type: Native::ParameterMap::Type::InspectVrf::Alert
        class MaxIncomplete; //type: Native::ParameterMap::Type::InspectVrf::MaxIncomplete
        class Session; //type: Native::ParameterMap::Type::InspectVrf::Session
        class Tcp; //type: Native::ParameterMap::Type::InspectVrf::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Session> session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Tcp> tcp;
        
}; // Native::ParameterMap::Type::InspectVrf


class Native::ParameterMap::Type::InspectVrf::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectVrf::Alert


class Native::ParameterMap::Type::InspectVrf::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icmp; //type: uint32
        ydk::YLeaf tcp; //type: uint32
        ydk::YLeaf udp; //type: uint32
        class HalfOpenSessions; //type: Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions> half_open_sessions;
        
}; // Native::ParameterMap::Type::InspectVrf::MaxIncomplete


class Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32

}; // Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectVrf::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32

}; // Native::ParameterMap::Type::InspectVrf::Session


class Native::ParameterMap::Type::InspectVrf::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SynFlood; //type: Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectVrf::Tcp


class Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood


class Native::ParameterMap::Type::InspectZone : public ydk::Entity
{
    public:
        InspectZone();
        ~InspectZone();

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
        ydk::YLeaf max_destination; //type: uint32
        class Alert; //type: Native::ParameterMap::Type::InspectZone::Alert
        class Tcp; //type: Native::ParameterMap::Type::InspectZone::Tcp
        class ThreatDetection; //type: Native::ParameterMap::Type::InspectZone::ThreatDetection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::ThreatDetection> threat_detection;
        
}; // Native::ParameterMap::Type::InspectZone


class Native::ParameterMap::Type::InspectZone::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectZone::Alert


class Native::ParameterMap::Type::InspectZone::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SynFlood; //type: Native::ParameterMap::Type::InspectZone::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectZone::Tcp


class Native::ParameterMap::Type::InspectZone::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate> rate;
        
}; // Native::ParameterMap::Type::InspectZone::Tcp::SynFlood


class Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_destination; //type: uint32

}; // Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate


class Native::ParameterMap::Type::InspectZone::ThreatDetection : public ydk::Entity
{
    public:
        ThreatDetection();
        ~ThreatDetection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf basic_threat; //type: empty
        class Rate; //type: Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate> rate;
        
}; // Native::ParameterMap::Type::InspectZone::ThreatDetection


class Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwDrop; //type: Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop
        class InspectDrop; //type: Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop
        class SynAttack; //type: Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop> fw_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop> inspect_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack> syn_attack;
        
}; // Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate


class Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop : public ydk::Entity
{
    public:
        FwDrop();
        ~FwDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint16
        ydk::YLeaf average_threshold; //type: uint32
        ydk::YLeaf burst_threshold; //type: uint32

}; // Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop


class Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop : public ydk::Entity
{
    public:
        InspectDrop();
        ~InspectDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint16
        ydk::YLeaf average_threshold; //type: uint32
        ydk::YLeaf burst_threshold; //type: uint32

}; // Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop


class Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack : public ydk::Entity
{
    public:
        SynAttack();
        ~SynAttack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_time_frame; //type: uint16
        ydk::YLeaf average_threshold; //type: uint32
        ydk::YLeaf burst_threshold; //type: uint32

}; // Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack


class Native::ParameterMap::Type::Regex : public ydk::Entity
{
    public:
        Regex();
        ~Regex();

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
        class Pattern; //type: Native::ParameterMap::Type::Regex::Pattern

        ydk::YList pattern;
        
}; // Native::ParameterMap::Type::Regex


class Native::ParameterMap::Type::Regex::Pattern : public ydk::Entity
{
    public:
        Pattern();
        ~Pattern();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regexp; //type: string

}; // Native::ParameterMap::Type::Regex::Pattern


class Native::ParameterMap::Type::Webauth : public ydk::Entity
{
    public:
        Webauth();
        ~Webauth();

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
        ydk::YLeaf captive_bypass_portal; //type: empty
        ydk::YLeaf logout_window_disabled; //type: empty
        ydk::YLeaf max_http_conns; //type: uint8
        ydk::YLeaf success_window_disable; //type: empty
        ydk::YLeaf type; //type: Type_
        class Consent; //type: Native::ParameterMap::Type::Webauth::Consent
        class CustomPage; //type: Native::ParameterMap::Type::Webauth::CustomPage
        class LoginAuthBypass; //type: Native::ParameterMap::Type::Webauth::LoginAuthBypass
        class Redirect; //type: Native::ParameterMap::Type::Webauth::Redirect
        class SleepingClient; //type: Native::ParameterMap::Type::Webauth::SleepingClient
        class Timeout; //type: Native::ParameterMap::Type::Webauth::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Consent> consent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::CustomPage> custom_page;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::LoginAuthBypass> login_auth_bypass;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::SleepingClient> sleeping_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Timeout> timeout;
                class Type_;

}; // Native::ParameterMap::Type::Webauth


class Native::ParameterMap::Type::Webauth::Consent : public ydk::Entity
{
    public:
        Consent();
        ~Consent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf email; //type: empty

}; // Native::ParameterMap::Type::Webauth::Consent


class Native::ParameterMap::Type::Webauth::CustomPage : public ydk::Entity
{
    public:
        CustomPage();
        ~CustomPage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Login; //type: Native::ParameterMap::Type::Webauth::CustomPage::Login
        class Failure; //type: Native::ParameterMap::Type::Webauth::CustomPage::Failure
        class Success; //type: Native::ParameterMap::Type::Webauth::CustomPage::Success

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::CustomPage::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::CustomPage::Failure> failure;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::CustomPage::Success> success;
        
}; // Native::ParameterMap::Type::Webauth::CustomPage


class Native::ParameterMap::Type::Webauth::CustomPage::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: string
        class Expired; //type: Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired> expired;
        
}; // Native::ParameterMap::Type::Webauth::CustomPage::Login


class Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired : public ydk::Entity
{
    public:
        Expired();
        ~Expired();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: string

}; // Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired


class Native::ParameterMap::Type::Webauth::CustomPage::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: string

}; // Native::ParameterMap::Type::Webauth::CustomPage::Failure


class Native::ParameterMap::Type::Webauth::CustomPage::Success : public ydk::Entity
{
    public:
        Success();
        ~Success();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: string

}; // Native::ParameterMap::Type::Webauth::CustomPage::Success


class Native::ParameterMap::Type::Webauth::LoginAuthBypass : public ydk::Entity
{
    public:
        LoginAuthBypass();
        ~LoginAuthBypass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAccessList; //type: Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList> ip_access_list;
        
}; // Native::ParameterMap::Type::Webauth::LoginAuthBypass


class Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList : public ydk::Entity
{
    public:
        IpAccessList();
        ~IpAccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf domain_name_list; //type: string

}; // Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList


class Native::ParameterMap::Type::Webauth::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf for_login; //type: string
        ydk::YLeaf on_failure; //type: string
        ydk::YLeaf on_success; //type: string
        class Append; //type: Native::ParameterMap::Type::Webauth::Redirect::Append
        class Portal; //type: Native::ParameterMap::Type::Webauth::Redirect::Portal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Redirect::Append> append;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Redirect::Portal> portal;
        
}; // Native::ParameterMap::Type::Webauth::Redirect


class Native::ParameterMap::Type::Webauth::Redirect::Append : public ydk::Entity
{
    public:
        Append();
        ~Append();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApMac; //type: Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac
        class ClientMac; //type: Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac
        class WlanSsid; //type: Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac> ap_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac> client_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid> wlan_ssid;
        
}; // Native::ParameterMap::Type::Webauth::Redirect::Append


class Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac : public ydk::Entity
{
    public:
        ApMac();
        ~ApMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac


class Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac : public ydk::Entity
{
    public:
        ClientMac();
        ~ClientMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac


class Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid : public ydk::Entity
{
    public:
        WlanSsid();
        ~WlanSsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid


class Native::ParameterMap::Type::Webauth::Redirect::Portal : public ydk::Entity
{
    public:
        Portal();
        ~Portal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::ParameterMap::Type::Webauth::Redirect::Portal


class Native::ParameterMap::Type::Webauth::SleepingClient : public ydk::Entity
{
    public:
        SleepingClient();
        ~SleepingClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::ParameterMap::Type::Webauth::SleepingClient


class Native::ParameterMap::Type::Webauth::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitState; //type: Native::ParameterMap::Type::Webauth::Timeout::InitState
        class FinWait; //type: Native::ParameterMap::Type::Webauth::Timeout::FinWait

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Timeout::InitState> init_state; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Webauth::Timeout::FinWait> fin_wait;
        
}; // Native::ParameterMap::Type::Webauth::Timeout


class Native::ParameterMap::Type::Webauth::Timeout::InitState : public ydk::Entity
{
    public:
        InitState();
        ~InitState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sec; //type: uint32

}; // Native::ParameterMap::Type::Webauth::Timeout::InitState


class Native::ParameterMap::Type::Webauth::Timeout::FinWait : public ydk::Entity
{
    public:
        FinWait();
        ~FinWait();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: uint32

}; // Native::ParameterMap::Type::Webauth::Timeout::FinWait


class Native::ParameterMap::Type::WebauthGlobal : public ydk::Entity
{
    public:
        WebauthGlobal();
        ~WebauthGlobal();

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

        class Webauth; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth> webauth;
        
}; // Native::ParameterMap::Type::WebauthGlobal


class Native::ParameterMap::Type::WebauthGlobal::Webauth : public ydk::Entity
{
    public:
        Webauth();
        ~Webauth();

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

        class Global; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global> global; // presence node
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf captive_bypass_portal; //type: empty
        ydk::YLeaf intercept_https_enable; //type: empty
        ydk::YLeaf logout_window_disabled; //type: empty
        ydk::YLeaf max_http_conns; //type: uint8
        ydk::YLeaf success_window_disable; //type: empty
        ydk::YLeaf type; //type: Type_
        class Consent; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent
        class CustomPage; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage
        class LoginAuthBypass; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass
        class Redirect; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect
        class SleepingClient; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient
        class Timeout; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout
        class VirtualIp; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp
        class WatchList; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent> consent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage> custom_page;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass> login_auth_bypass;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient> sleeping_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp> virtual_ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList> watch_list;
                class Type_;

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent : public ydk::Entity
{
    public:
        Consent();
        ~Consent();

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

        ydk::YLeaf email; //type: empty

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage : public ydk::Entity
{
    public:
        CustomPage();
        ~CustomPage();

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

        class Login; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login
        class Failure; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure
        class Success; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login> login;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure> failure;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success> success;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        ydk::YLeaf device; //type: string
        class Expired; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired> expired;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired : public ydk::Entity
{
    public:
        Expired();
        ~Expired();

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

        ydk::YLeaf device; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

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

        ydk::YLeaf device; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success : public ydk::Entity
{
    public:
        Success();
        ~Success();

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

        ydk::YLeaf device; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass : public ydk::Entity
{
    public:
        LoginAuthBypass();
        ~LoginAuthBypass();

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

        class IpAccessList; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList> ip_access_list;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList : public ydk::Entity
{
    public:
        IpAccessList();
        ~IpAccessList();

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
        ydk::YLeaf domain_name_list; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

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

        ydk::YLeaf for_login; //type: string
        ydk::YLeaf on_failure; //type: string
        ydk::YLeaf on_success; //type: string
        class Append; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append
        class Portal; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append> append;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal> portal;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append : public ydk::Entity
{
    public:
        Append();
        ~Append();

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

        class ApMac; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac
        class ClientMac; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac
        class WlanSsid; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac> ap_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac> client_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid> wlan_ssid;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac : public ydk::Entity
{
    public:
        ApMac();
        ~ApMac();

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

        ydk::YLeaf tag; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac : public ydk::Entity
{
    public:
        ClientMac();
        ~ClientMac();

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

        ydk::YLeaf tag; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid : public ydk::Entity
{
    public:
        WlanSsid();
        ~WlanSsid();

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

        ydk::YLeaf tag; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal : public ydk::Entity
{
    public:
        Portal();
        ~Portal();

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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient : public ydk::Entity
{
    public:
        SleepingClient();
        ~SleepingClient();

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

        ydk::YLeaf timeout; //type: uint32

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

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

        class InitState; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState
        class FinWait; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState> init_state; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait> fin_wait;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState : public ydk::Entity
{
    public:
        InitState();
        ~InitState();

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

        ydk::YLeaf sec; //type: uint32

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait : public ydk::Entity
{
    public:
        FinWait();
        ~FinWait();

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

        ydk::YLeaf msec; //type: uint32

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp : public ydk::Entity
{
    public:
        VirtualIp();
        ~VirtualIp();

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

        class Ipv4; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4
        class Ipv6; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6> ipv6;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_host; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_host; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList : public ydk::Entity
{
    public:
        WatchList();
        ~WatchList();

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

        ydk::YLeaf enabled; //type: empty
        ydk::YLeaf dynamic_expiry_timeout; //type: uint32
        class AddItem; //type: Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem> add_item;
        
}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList


class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem : public ydk::Entity
{
    public:
        AddItem();
        ~AddItem();

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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem


class Native::ParameterMap::Type::Umbrella : public ydk::Entity
{
    public:
        Umbrella();
        ~Umbrella();

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

        class Global; //type: Native::ParameterMap::Type::Umbrella::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Umbrella::Global> global; // presence node
        
}; // Native::ParameterMap::Type::Umbrella


class Native::ParameterMap::Type::Umbrella::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf token; //type: string
        ydk::YLeaf local_domain; //type: string
        ydk::YLeaf dnscrypt; //type: boolean
        ydk::YLeaf public_key; //type: string
        ydk::YLeaf udp_timeout; //type: uint8
        class Resolver; //type: Native::ParameterMap::Type::Umbrella::Global::Resolver

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Umbrella::Global::Resolver> resolver;
        
}; // Native::ParameterMap::Type::Umbrella::Global


class Native::ParameterMap::Type::Umbrella::Global::Resolver : public ydk::Entity
{
    public:
        Resolver();
        ~Resolver();

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

        class Ipv4; //type: Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4
        class Ipv6; //type: Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6

        ydk::YList ipv4;
        ydk::YList ipv6;
        
}; // Native::ParameterMap::Type::Umbrella::Global::Resolver


class Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf address; //type: string

}; // Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4


class Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf address; //type: string

}; // Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6


class Native::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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

        class AnalysisModule; //type: Native::Ppp::AnalysisModule
        class Packet; //type: Native::Ppp::Packet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ppp::AnalysisModule> analysis_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ppp::Packet> packet;
        
}; // Native::Ppp


class Native::Ppp::AnalysisModule : public ydk::Entity
{
    public:
        AnalysisModule();
        ~AnalysisModule();

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

        class Monitoring; //type: Native::Ppp::AnalysisModule::Monitoring

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ppp::AnalysisModule::Monitoring> monitoring;
        
}; // Native::Ppp::AnalysisModule


class Native::Ppp::AnalysisModule::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

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

        ydk::YLeaf interface_name; //type: string

}; // Native::Ppp::AnalysisModule::Monitoring


class Native::Ppp::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

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

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf allow_time; //type: uint32
        ydk::YLeaf block_time; //type: uint32

}; // Native::Ppp::Packet


class Native::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class AddressTable; //type: Native::Mac::AddressTable
        class AccessList; //type: Native::Mac::AccessList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable> address_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AccessList> access_list;
        
}; // Native::Mac


class Native::Mac::AddressTable : public ydk::Entity
{
    public:
        AddressTable();
        ~AddressTable();

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

        ydk::YLeaf control_packet_learn; //type: empty
        class AgingTime; //type: Native::Mac::AddressTable::AgingTime
        class Learning; //type: Native::Mac::AddressTable::Learning
        class Notification; //type: Native::Mac::AddressTable::Notification
        class Static; //type: Native::Mac::AddressTable::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::AgingTime> aging_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::Learning> learning;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification> notification;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::Static> static_;
        
}; // Native::Mac::AddressTable


class Native::Mac::AddressTable::AgingTime : public ydk::Entity
{
    public:
        AgingTime();
        ~AgingTime();

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

        ydk::YLeaf val; //type: uint32
        ydk::YLeaf routed_mac; //type: empty
        ydk::YLeaf vlan; //type: uint16

}; // Native::Mac::AddressTable::AgingTime


class Native::Mac::AddressTable::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

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

}; // Native::Mac::AddressTable::Learning


class Native::Mac::AddressTable::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

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

        ydk::YLeaf mac_move; //type: empty
        class Change; //type: Native::Mac::AddressTable::Notification::Change
        class Threshold; //type: Native::Mac::AddressTable::Notification::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Change> change; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Threshold> threshold; // presence node
        
}; // Native::Mac::AddressTable::Notification


class Native::Mac::AddressTable::Notification::Change : public ydk::Entity
{
    public:
        Change();
        ~Change();

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

        ydk::YLeaf history_size; //type: uint16
        ydk::YLeaf interval; //type: uint32

}; // Native::Mac::AddressTable::Notification::Change


class Native::Mac::AddressTable::Notification::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        ydk::YLeaf interval; //type: uint32
        class Limit; //type: Native::Mac::AddressTable::Notification::Threshold::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mac::AddressTable::Notification::Threshold::Limit> limit;
        
}; // Native::Mac::AddressTable::Notification::Threshold


class Native::Mac::AddressTable::Notification::Threshold::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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

        ydk::YLeaf percentage; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Mac::AddressTable::Notification::Threshold::Limit


class Native::Mac::AddressTable::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf interface; //type: string

}; // Native::Mac::AddressTable::Static


class Native::Mac::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

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

        class Extended; //type: Native::Mac::AccessList::Extended

        ydk::YList extended;
        
}; // Native::Mac::AccessList


class Native::Mac::AccessList::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

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

        ydk::YLeaf id; //type: string
        class Entry; //type: Native::Mac::AccessList::Extended::Entry

        ydk::YList entry;
        
}; // Native::Mac::AccessList::Extended


class Native::Mac::AccessList::Extended::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf values; //type: string
        class Action;

}; // Native::Mac::AccessList::Extended::Entry


class Native::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

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

        class Server; //type: Native::Tacacs::Server

        ydk::YList server;
        
}; // Native::Tacacs


class Native::Tacacs::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        class Address; //type: Native::Tacacs::Server::Address
        class Key; //type: Native::Tacacs::Server::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Tacacs::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Tacacs::Server::Key> key;
        
}; // Native::Tacacs::Server


class Native::Tacacs::Server::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string

}; // Native::Tacacs::Server::Address


class Native::Tacacs::Server::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Tacacs::Server::Key


class Native::TacacsServer : public ydk::Entity
{
    public:
        TacacsServer();
        ~TacacsServer();

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

        ydk::YLeaf timeout; //type: uint16
        class Host; //type: Native::TacacsServer::Host
        class DirectedRequest; //type: Native::TacacsServer::DirectedRequest
        class Key; //type: Native::TacacsServer::Key

        ydk::YList host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TacacsServer::DirectedRequest> directed_request; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TacacsServer::Key> key;
        
}; // Native::TacacsServer


class Native::TacacsServer::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf name; //type: one of union, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf key; //type: one of enumeration, string
        ydk::YLeaf encryption_key; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Key;

}; // Native::TacacsServer::Host


class Native::TacacsServer::DirectedRequest : public ydk::Entity
{
    public:
        DirectedRequest();
        ~DirectedRequest();

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

        ydk::YLeaf restricted; //type: empty
        ydk::YLeaf no_truncate; //type: empty

}; // Native::TacacsServer::DirectedRequest


class Native::TacacsServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::TacacsServer::Key


class Native::Software : public ydk::Entity
{
    public:
        Software();
        ~Software();

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

        class AutoUpgrade; //type: Native::Software::AutoUpgrade

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Software::AutoUpgrade> auto_upgrade;
        
}; // Native::Software


class Native::Software::AutoUpgrade : public ydk::Entity
{
    public:
        AutoUpgrade();
        ~AutoUpgrade();

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

        ydk::YLeaf enable; //type: empty

}; // Native::Software::AutoUpgrade


class Native::Upgrade : public ydk::Entity
{
    public:
        Upgrade();
        ~Upgrade();

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

        class Fpd; //type: Native::Upgrade::Fpd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Upgrade::Fpd> fpd;
        
}; // Native::Upgrade


class Native::Upgrade::Fpd : public ydk::Entity
{
    public:
        Fpd();
        ~Fpd();

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

        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf path; //type: string

}; // Native::Upgrade::Fpd


class Native::Vtp : public ydk::Entity
{
    public:
        Vtp();
        ~Vtp();

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

        ydk::YLeaf file; //type: string
        ydk::YLeaf pruning; //type: empty
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf domain; //type: string
        class Interface; //type: Native::Vtp::Interface
        class Password; //type: Native::Vtp::Password
        class Mode; //type: Native::Vtp::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Mode> mode;
        
}; // Native::Vtp


class Native::Vtp::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf only; //type: empty

}; // Native::Vtp::Interface


class Native::Vtp::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        ydk::YLeaf password; //type: string
        ydk::YLeaf hidden; //type: empty
        ydk::YLeaf secret; //type: empty

}; // Native::Vtp::Password


class Native::Vtp::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        class Client; //type: Native::Vtp::Mode::Client
        class Off; //type: Native::Vtp::Mode::Off
        class Server; //type: Native::Vtp::Mode::Server
        class Transparent; //type: Native::Vtp::Mode::Transparent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Mode::Client> client; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Mode::Off> off; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Mode::Server> server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vtp::Mode::Transparent> transparent; // presence node
        
}; // Native::Vtp::Mode


class Native::Vtp::Mode::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Client


class Native::Vtp::Mode::Off : public ydk::Entity
{
    public:
        Off();
        ~Off();

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

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Off


class Native::Vtp::Mode::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Server


class Native::Vtp::Mode::Transparent : public ydk::Entity
{
    public:
        Transparent();
        ~Transparent();

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

        ydk::YLeaf mst; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Vtp::Mode::Transparent


class Native::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

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

        class Logging; //type: Native::Xconnect::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Xconnect::Logging> logging;
        
}; // Native::Xconnect


class Native::Xconnect::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::Xconnect::Logging::Pseudowire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Xconnect::Logging::Pseudowire> pseudowire;
        
}; // Native::Xconnect::Logging


class Native::Xconnect::Logging::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

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

        ydk::YLeaf status; //type: empty

}; // Native::Xconnect::Logging::Pseudowire


class Native::Fabric : public ydk::Entity
{
    public:
        Fabric();
        ~Fabric();

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

        class SwitchingMode; //type: Native::Fabric::SwitchingMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fabric::SwitchingMode> switching_mode;
        
}; // Native::Fabric


class Native::Fabric::SwitchingMode : public ydk::Entity
{
    public:
        SwitchingMode();
        ~SwitchingMode();

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

        class Allow; //type: Native::Fabric::SwitchingMode::Allow
        class Force; //type: Native::Fabric::SwitchingMode::Force

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Allow> allow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Force> force;
        
}; // Native::Fabric::SwitchingMode


class Native::Fabric::SwitchingMode::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

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

        ydk::YLeaf bus_mode; //type: empty
        class Truncated; //type: Native::Fabric::SwitchingMode::Allow::Truncated

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fabric::SwitchingMode::Allow::Truncated> truncated; // presence node
        
}; // Native::Fabric::SwitchingMode::Allow


class Native::Fabric::SwitchingMode::Allow::Truncated : public ydk::Entity
{
    public:
        Truncated();
        ~Truncated();

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

        ydk::YLeaf threshold; //type: uint8

}; // Native::Fabric::SwitchingMode::Allow::Truncated


class Native::Fabric::SwitchingMode::Force : public ydk::Entity
{
    public:
        Force();
        ~Force();

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

        ydk::YLeaf bus_mode; //type: empty

}; // Native::Fabric::SwitchingMode::Force


class Native::PortChannel : public ydk::Entity
{
    public:
        PortChannel();
        ~PortChannel();

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

        ydk::YLeaf auto_; //type: empty
        class LoadBalance; //type: Native::PortChannel::LoadBalance
        class LoadBalancing; //type: Native::PortChannel::LoadBalancing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel::LoadBalancing> load_balancing;
        
}; // Native::PortChannel


class Native::PortChannel::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

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

        ydk::YLeaf load_balance; //type: LoadBalance_
        class Extended; //type: Native::PortChannel::LoadBalance::Extended

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PortChannel::LoadBalance::Extended> extended; // presence node
                class LoadBalance_;

}; // Native::PortChannel::LoadBalance


class Native::PortChannel::LoadBalance::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

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

        ydk::YLeafList extended; //type: list of  Extended_
        class Extended_;

}; // Native::PortChannel::LoadBalance::Extended


class Native::PortChannel::LoadBalancing : public ydk::Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

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

        ydk::YLeaf vlan_manual; //type: empty

}; // Native::PortChannel::LoadBalancing


class Native::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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

        class Chain; //type: Native::Key::Chain

        ydk::YList chain;
        
}; // Native::Key


class Native::Key::Chain : public ydk::Entity
{
    public:
        Chain();
        ~Chain();

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
        ydk::YLeaf macsec; //type: empty
        class Key_; //type: Native::Key::Chain::Key_

        ydk::YList key;
        
}; // Native::Key::Chain


class Native::Key::Chain::Key_ : public ydk::Entity
{
    public:
        Key_();
        ~Key_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cryptographic_algorithm; //type: CryptographicAlgorithm
        class KeyString; //type: Native::Key::Chain::Key_::KeyString
        class Lifetime; //type: Native::Key::Chain::Key_::Lifetime
        class LifetimeLocal; //type: Native::Key::Chain::Key_::LifetimeLocal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain::Key_::KeyString> key_string;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain::Key_::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain::Key_::LifetimeLocal> lifetime_local;
                class CryptographicAlgorithm;

}; // Native::Key::Chain::Key_


class Native::Key::Chain::Key_::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Key::Chain::Key_::KeyString


class Native::Key::Chain::Key_::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LifetimeGroup; //type: Native::Key::Chain::Key_::Lifetime::LifetimeGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain::Key_::Lifetime::LifetimeGroup> lifetime_group;
        
}; // Native::Key::Chain::Key_::Lifetime


class Native::Key::Chain::Key_::Lifetime::LifetimeGroup : public ydk::Entity
{
    public:
        LifetimeGroup();
        ~LifetimeGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string
        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf hh_mm_ss1; //type: string
        ydk::YLeaf date3; //type: uint8
        ydk::YLeaf month3; //type: string
        ydk::YLeaf date4; //type: uint8
        ydk::YLeaf month4; //type: string
        ydk::YLeaf year1; //type: uint16
        ydk::YLeaf infinite; //type: empty

}; // Native::Key::Chain::Key_::Lifetime::LifetimeGroup

class Native::ParameterMap::Type::Webauth::Type_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authbypass;
        static const ydk::Enum::YLeaf consent;
        static const ydk::Enum::YLeaf webauth;
        static const ydk::Enum::YLeaf webconsent;

};

class Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Type_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authbypass;
        static const ydk::Enum::YLeaf consent;
        static const ydk::Enum::YLeaf webauth;
        static const ydk::Enum::YLeaf webconsent;

};

class Native::Mac::AccessList::Extended::Entry::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Tacacs::Server::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::TacacsServer::Host::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::TacacsServer::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::PortChannel::LoadBalance::LoadBalance_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_ip;
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf dst_mixed_ip_port;
        static const ydk::Enum::YLeaf dst_port;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf src_dst_ip;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_dst_mixed_ip_port;
        static const ydk::Enum::YLeaf src_dst_port;
        static const ydk::Enum::YLeaf src_ip;
        static const ydk::Enum::YLeaf src_mac;
        static const ydk::Enum::YLeaf src_mixed_ip_port;
        static const ydk::Enum::YLeaf src_port;

};

class Native::PortChannel::LoadBalance::Extended::Extended_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_ip;
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf dst_port;
        static const ydk::Enum::YLeaf ipv6_label;
        static const ydk::Enum::YLeaf l3_proto;
        static const ydk::Enum::YLeaf src_ip;
        static const ydk::Enum::YLeaf src_mac;
        static const ydk::Enum::YLeaf src_port;

};

class Native::Key::Chain::Key_::CryptographicAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;
        static const ydk::Enum::YLeaf hmac_sha_1;
        static const ydk::Enum::YLeaf hmac_sha_256;
        static const ydk::Enum::YLeaf hmac_sha_384;
        static const ydk::Enum::YLeaf hmac_sha_512;
        static const ydk::Enum::YLeaf md5;

};

class Native::Key::Chain::Key_::KeyString::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_122_ */

