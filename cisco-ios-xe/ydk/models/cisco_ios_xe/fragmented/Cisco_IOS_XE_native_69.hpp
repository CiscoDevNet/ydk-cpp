#ifndef _CISCO_IOS_XE_NATIVE_69_
#define _CISCO_IOS_XE_NATIVE_69_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_66.hpp"
#include "Cisco_IOS_XE_native_68.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member : public ydk::Entity
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

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_protect; //type: empty
        ydk::YLeaf node_protect; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency : public ydk::Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdtime; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Down; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down> down;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Working; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working
        class Protect; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect> > protect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working> > working;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working : public ydk::Entity
{
    public:
        Working();
        ~Working();

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
        class Dynamic; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic
        class Explicit_; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic> dynamic; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_> explicit_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting> segment_routing; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf attributes; //type: string
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting> segment_routing; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attributes; //type: string
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_ : public ydk::Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf attributes; //type: string
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect : public ydk::Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::id)
        ydk::YLeaf id;
        class Diverse; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse
        class Explicit_; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_
        class List; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse> diverse;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_> explicit_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List> list;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse : public ydk::Entity
{
    public:
        Diverse();
        ~Diverse();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: empty
        ydk::YLeaf srlg; //type: empty
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf attributes; //type: string
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_ : public ydk::Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf attributes; //type: string
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf attributes; //type: string
        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: Metric
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf hop_limit; //type: uint8
        ydk::YLeaf tiebreaker; //type: MplsTeTiebreakerType
        class Invalidation; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation> invalidation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting> segment_routing;
                class Metric;

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: int32
        ydk::YLeaf drop; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency; //type: Adjacency
        class Adjacency;

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority : public ydk::Entity
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

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute : public ydk::Entity
{
    public:
        RecordRoute();
        ~RecordRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute


class Native::Interface::VirtualTemplate::Tunnel::Rbscp : public ydk::Entity
{
    public:
        Rbscp();
        ~Rbscp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ack_split; //type: uint8
        ydk::YLeaf delay; //type: empty
        ydk::YLeaf input_drop; //type: uint8
        ydk::YLeaf long_drop; //type: empty
        ydk::YLeaf report; //type: empty
        ydk::YLeaf window_stuff; //type: uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Rbscp


class Native::Interface::VirtualTemplate::Tunnel::SrcPort : public ydk::Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_num; //type: uint16
        ydk::YLeaf dynamic; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::SrcPort


class Native::Interface::VirtualTemplate::Tunnel::Udlr : public ydk::Entity
{
    public:
        Udlr();
        ~Udlr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_resolution; //type: empty
        ydk::YLeaf receive_only; //type: string
        ydk::YLeaf send_only; //type: string

}; // Native::Interface::VirtualTemplate::Tunnel::Udlr


class Native::Interface::VirtualTemplate::Tunnel::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id1; //type: uint16
        ydk::YLeaf hyphen; //type: empty
        ydk::YLeaf id2; //type: uint16

}; // Native::Interface::VirtualTemplate::Tunnel::Vlan


class Native::Interface::VirtualTemplate::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::VirtualTemplate::Crypto::Map
        class Ipsec; //type: Native::Interface::VirtualTemplate::Crypto::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Crypto::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Crypto::Map> map;
        
}; // Native::Interface::VirtualTemplate::Crypto


class Native::Interface::VirtualTemplate::Crypto::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string
        ydk::YLeaf redundancy; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Interface::VirtualTemplate::Crypto::Map


class Native::Interface::VirtualTemplate::Crypto::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        class DfBit;
        class Fragmentation;

}; // Native::Interface::VirtualTemplate::Crypto::Ipsec


class Native::Interface::VirtualTemplate::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Manual; //type: Native::Interface::VirtualTemplate::Cts::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual> manual; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts


class Native::Interface::VirtualTemplate::Cts::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::VirtualTemplate::Cts::Manual::Policy
        class Sap; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::VirtualTemplate::Cts::Manual::Propagate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Propagate> propagate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap> sap;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual


class Native::Interface::VirtualTemplate::Cts::Manual::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Static_; //type: Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Policy


class Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_ : public ydk::Entity
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

        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_


class Native::Interface::VirtualTemplate::Cts::Manual::Sap : public ydk::Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pmk; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ModeList; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GcmEncrypt; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty

}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::VirtualTemplate::Cts::Manual::Propagate : public ydk::Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: boolean

}; // Native::Interface::VirtualTemplate::Cts::Manual::Propagate


class Native::Interface::VirtualTemplate::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history; //type: empty
        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string
        class Type; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type> type;
        
}; // Native::Interface::VirtualTemplate::ServicePolicy


class Native::Interface::VirtualTemplate::ServicePolicy::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Control; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::VirtualTemplate::ServicePolicy::Type


class Native::Interface::VirtualTemplate::ServicePolicy::Type::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber; //type: string

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::Control


class Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf name; //type: string
        class Direction;

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain : public ydk::Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain


class Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

}; // Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::VirtualTemplate::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting; //type: one of string, enumeration
        ydk::YLeaf authorization; //type: one of string, enumeration
        class Chap; //type: Native::Interface::VirtualTemplate::Ppp::Chap
        class Authentication; //type: Native::Interface::VirtualTemplate::Ppp::Authentication
        class Ipcp; //type: Native::Interface::VirtualTemplate::Ppp::Ipcp
        class Multilink; //type: Native::Interface::VirtualTemplate::Ppp::Multilink

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Chap> chap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Ipcp> ipcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink> multilink; // presence node
                class Accounting;
        class Authorization;

}; // Native::Interface::VirtualTemplate::Ppp


class Native::Interface::VirtualTemplate::Ppp::Chap : public ydk::Entity
{
    public:
        Chap();
        ~Chap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        ydk::YLeaf challenge_length; //type: uint8

}; // Native::Interface::VirtualTemplate::Ppp::Chap


class Native::Interface::VirtualTemplate::Ppp::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method; //type: Method
        ydk::YLeaf list_name; //type: string
        ydk::YLeaf chap; //type: empty
        ydk::YLeaf callback; //type: empty
        ydk::YLeaf callin; //type: empty
        ydk::YLeaf callout; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf eap; //type: empty
        ydk::YLeaf ms_chap; //type: empty
        ydk::YLeaf ms_chap_v2; //type: empty
        ydk::YLeaf one_time; //type: empty
        ydk::YLeaf optional; //type: empty
        ydk::YLeaf pap; //type: empty
        class Method;

}; // Native::Interface::VirtualTemplate::Ppp::Authentication


class Native::Interface::VirtualTemplate::Ppp::Ipcp : public ydk::Entity
{
    public:
        Ipcp();
        ~Ipcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dns; //type: Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns> dns;
        
}; // Native::Interface::VirtualTemplate::Ppp::Ipcp


class Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string

}; // Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns


class Native::Interface::VirtualTemplate::Ppp::Multilink : public ydk::Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint32
        class Links; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Links
        class Endpoint; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint
        class Fragment; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint> endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment> fragment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Links> links;
        
}; // Native::Interface::VirtualTemplate::Ppp::Multilink


class Native::Interface::VirtualTemplate::Ppp::Multilink::Links : public ydk::Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minimum; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum> minimum;
        
}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Links


class Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum : public ydk::Entity
{
    public:
        Minimum();
        ~Minimum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_value; //type: uint8
        ydk::YLeaf mandatory; //type: empty

}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum


class Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint : public ydk::Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string; //type: string

}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint


class Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment : public ydk::Entity
{
    public:
        Fragment();
        ~Fragment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay> delay;
        
}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment


class Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay : public ydk::Entity
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

        ydk::YLeaf delay_value; //type: uint16
        ydk::YLeaf additional_delay_value; //type: uint16

}; // Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay


class Native::Interface::VirtualTemplate::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eap; //type: empty

}; // Native::Interface::VirtualTemplate::Mab


class Native::Interface::VirtualTemplate::ZoneMember : public ydk::Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security; //type: string

}; // Native::Interface::VirtualTemplate::ZoneMember


class Native::Interface::Virtualportgroup : public ydk::Entity
{
    public:
        Virtualportgroup();
        ~Virtualportgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf if_state; //type: IfState
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf max_reserved_bandwidth; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf service_insertion; //type: ServiceInsertion
        ydk::YLeaf channel_protocol; //type: ChannelProtocol
        ydk::YLeaf duplex; //type: Duplex
        class SwitchportConf; //type: Native::Interface::Virtualportgroup::SwitchportConf
        class Switchport; //type: Native::Interface::Virtualportgroup::Switchport
        class Arp; //type: Native::Interface::Virtualportgroup::Arp
        class Backup; //type: Native::Interface::Virtualportgroup::Backup
        class Cemoudp; //type: Native::Interface::Virtualportgroup::Cemoudp
        class CwsTunnel; //type: Native::Interface::Virtualportgroup::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Virtualportgroup::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Virtualportgroup::Encapsulation
        class FairQueueConf; //type: Native::Interface::Virtualportgroup::FairQueueConf
        class FairQueue; //type: Native::Interface::Virtualportgroup::FairQueue
        class Flowcontrol; //type: Native::Interface::Virtualportgroup::Flowcontrol
        class Isis; //type: Native::Interface::Virtualportgroup::Isis
        class KeepaliveSettings; //type: Native::Interface::Virtualportgroup::KeepaliveSettings
        class Bfd; //type: Native::Interface::Virtualportgroup::Bfd
        class Bandwidth; //type: Native::Interface::Virtualportgroup::Bandwidth
        class Dampening; //type: Native::Interface::Virtualportgroup::Dampening
        class Domain; //type: Native::Interface::Virtualportgroup::Domain
        class HoldQueue; //type: Native::Interface::Virtualportgroup::HoldQueue
        class Mpls; //type: Native::Interface::Virtualportgroup::Mpls
        class IpVrf; //type: Native::Interface::Virtualportgroup::IpVrf
        class Vrf; //type: Native::Interface::Virtualportgroup::Vrf
        class Ip; //type: Native::Interface::Virtualportgroup::Ip
        class Ipv6; //type: Native::Interface::Virtualportgroup::Ipv6
        class Logging; //type: Native::Interface::Virtualportgroup::Logging
        class Mdix; //type: Native::Interface::Virtualportgroup::Mdix
        class Mop; //type: Native::Interface::Virtualportgroup::Mop
        class Interface_Qos; //type: Native::Interface::Virtualportgroup::Interface_Qos
        class Standby; //type: Native::Interface::Virtualportgroup::Standby
        class AccessSession; //type: Native::Interface::Virtualportgroup::AccessSession
        class StormControl; //type: Native::Interface::Virtualportgroup::StormControl
        class Trust; //type: Native::Interface::Virtualportgroup::Trust
        class Utd; //type: Native::Interface::Virtualportgroup::Utd
        class PriorityQueue; //type: Native::Interface::Virtualportgroup::PriorityQueue
        class RcvQueue; //type: Native::Interface::Virtualportgroup::RcvQueue
        class Peer; //type: Native::Interface::Virtualportgroup::Peer
        class PmPath; //type: Native::Interface::Virtualportgroup::PmPath
        class CarrierDelay; //type: Native::Interface::Virtualportgroup::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Virtualportgroup::ChannelGroup
        class Ethernet; //type: Native::Interface::Virtualportgroup::Ethernet
        class Negotiation; //type: Native::Interface::Virtualportgroup::Negotiation
        class Synchronous; //type: Native::Interface::Virtualportgroup::Synchronous
        class Speed; //type: Native::Interface::Virtualportgroup::Speed
        class Plim; //type: Native::Interface::Virtualportgroup::Plim
        class Pppoe; //type: Native::Interface::Virtualportgroup::Pppoe
        class Service; //type: Native::Interface::Virtualportgroup::Service
        class Snmp; //type: Native::Interface::Virtualportgroup::Snmp
        class Cts; //type: Native::Interface::Virtualportgroup::Cts
        class ServicePolicy; //type: Native::Interface::Virtualportgroup::ServicePolicy
        class Mab; //type: Native::Interface::Virtualportgroup::Mab

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Dampening> dampening;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Flowcontrol> flowcontrol;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::HoldQueue> > hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mab> mab; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Vrf> vrf;
                class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;

}; // Native::Interface::Virtualportgroup


class Native::Interface::Virtualportgroup::SwitchportConf : public ydk::Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::Virtualportgroup::SwitchportConf


class Native::Interface::Virtualportgroup::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Virtualportgroup::Switchport


class Native::Interface::Virtualportgroup::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::Virtualportgroup::Arp


class Native::Interface::Virtualportgroup::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Virtualportgroup::Backup::Delay
        class Interface_; //type: Native::Interface::Virtualportgroup::Backup::Interface_
        class Load; //type: Native::Interface::Virtualportgroup::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Load> load;
        
}; // Native::Interface::Virtualportgroup::Backup


class Native::Interface::Virtualportgroup::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf failure; //type: one of uint32, enumeration
        ydk::YLeaf secondary_disable; //type: one of uint32, enumeration
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::Virtualportgroup::Backup::Delay


class Native::Interface::Virtualportgroup::Backup::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

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
        class AtmSubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Virtualportgroup::Backup::Interface_


class Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface : public ydk::Entity
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

}; // Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface


class Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface : public ydk::Entity
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

}; // Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface : public ydk::Entity
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

}; // Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface


class Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Virtualportgroup::Backup::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of uint32, enumeration
        ydk::YLeaf kickout; //type: one of uint32, enumeration
        class Kickin;
        class Kickout;

}; // Native::Interface::Virtualportgroup::Backup::Load


class Native::Interface::Virtualportgroup::Cemoudp : public ydk::Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::Virtualportgroup::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Virtualportgroup::Cemoudp


class Native::Interface::Virtualportgroup::Cemoudp::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::Virtualportgroup::Cemoudp::Reserve


class Native::Interface::Virtualportgroup::CwsTunnel : public ydk::Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::Virtualportgroup::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::CwsTunnel::Out> out;
        
}; // Native::Interface::Virtualportgroup::CwsTunnel


class Native::Interface::Virtualportgroup::CwsTunnel::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Virtualportgroup::CwsTunnel::Out


class Native::Interface::Virtualportgroup::L2ProtocolTunnel : public ydk::Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf stp; //type: empty
        ydk::YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Virtualportgroup::L2ProtocolTunnel


class Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold : public ydk::Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold


class Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold : public ydk::Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Virtualportgroup::Encapsulation : public ydk::Entity
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

        class Dot1Q; //type: Native::Interface::Virtualportgroup::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Virtualportgroup::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Virtualportgroup::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Virtualportgroup::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Virtualportgroup::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Virtualportgroup::Encapsulation


class Native::Interface::Virtualportgroup::Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::Virtualportgroup::Encapsulation::Dot1Q


class Native::Interface::Virtualportgroup::Encapsulation::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::Virtualportgroup::Encapsulation::Isl


class Native::Interface::Virtualportgroup::Encapsulation::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Virtualportgroup::Encapsulation::Ppp


class Native::Interface::Virtualportgroup::Encapsulation::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Virtualportgroup::Encapsulation::Slip


class Native::Interface::Virtualportgroup::Encapsulation::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::Virtualportgroup::Encapsulation::FrameRelay


class Native::Interface::Virtualportgroup::FairQueueConf : public ydk::Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::Virtualportgroup::FairQueueConf


class Native::Interface::Virtualportgroup::FairQueue : public ydk::Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::Virtualportgroup::FairQueue


class Native::Interface::Virtualportgroup::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::Virtualportgroup::Flowcontrol


class Native::Interface::Virtualportgroup::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Virtualportgroup::Isis


class Native::Interface::Virtualportgroup::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Virtualportgroup::KeepaliveSettings


class Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive


class Native::Interface::Virtualportgroup::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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
        ydk::YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::Virtualportgroup::Bfd::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bfd::Interval> interval;
        
}; // Native::Interface::Virtualportgroup::Bfd


class Native::Interface::Virtualportgroup::Bfd::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msecs; //type: uint16
        ydk::YLeaf min_rx; //type: uint16
        ydk::YLeaf multiplier; //type: uint8

}; // Native::Interface::Virtualportgroup::Bfd::Interval


class Native::Interface::Virtualportgroup::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Virtualportgroup::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Virtualportgroup::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Bandwidth::Receive> receive;
        
}; // Native::Interface::Virtualportgroup::Bandwidth


class Native::Interface::Virtualportgroup::Bandwidth::Receive : public ydk::Entity
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

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Virtualportgroup::Bandwidth::Receive


class Native::Interface::Virtualportgroup::Bandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Virtualportgroup::Bandwidth::Inherit


class Native::Interface::Virtualportgroup::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Virtualportgroup::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Dampening::Restart> restart;
        
}; // Native::Interface::Virtualportgroup::Dampening


class Native::Interface::Virtualportgroup::Dampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Virtualportgroup::Dampening::Restart


class Native::Interface::Virtualportgroup::Domain : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::Virtualportgroup::Domain


class Native::Interface::Virtualportgroup::HoldQueue : public ydk::Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::Virtualportgroup::HoldQueue


class Native::Interface::Virtualportgroup::Mpls : public ydk::Entity
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


}; // Native::Interface::Virtualportgroup::Mpls


class Native::Interface::Virtualportgroup::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Virtualportgroup::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::IpVrf::Ip> ip;
        
}; // Native::Interface::Virtualportgroup::IpVrf


class Native::Interface::Virtualportgroup::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::Virtualportgroup::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Virtualportgroup::IpVrf::Ip


class Native::Interface::Virtualportgroup::IpVrf::Ip::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Virtualportgroup::IpVrf::Ip::Vrf


class Native::Interface::Virtualportgroup::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Virtualportgroup::Vrf


class Native::Interface::Virtualportgroup::Ip : public ydk::Entity
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

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf directed_broadcast; //type: one of string, uint16
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup
        class Arp; //type: Native::Interface::Virtualportgroup::Ip::Arp
        class Vrf; //type: Native::Interface::Virtualportgroup::Ip::Vrf
        class NoAddress; //type: Native::Interface::Virtualportgroup::Ip::NoAddress
        class Address; //type: Native::Interface::Virtualportgroup::Ip::Address
        class HelloInterval; //type: Native::Interface::Virtualportgroup::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Virtualportgroup::Ip::Authentication
        class HoldTime; //type: Native::Interface::Virtualportgroup::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Virtualportgroup::Ip::HelperAddress
        class Pim; //type: Native::Interface::Virtualportgroup::Ip::Pim
        class Policy; //type: Native::Interface::Virtualportgroup::Ip::Policy
        class Rip; //type: Native::Interface::Virtualportgroup::Ip::Rip
        class RouteCacheConf; //type: Native::Interface::Virtualportgroup::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Virtualportgroup::Ip::RouteCache
        class Router; //type: Native::Interface::Virtualportgroup::Ip::Router
        class Tcp; //type: Native::Interface::Virtualportgroup::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Virtualportgroup::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Virtualportgroup::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Virtualportgroup::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Virtualportgroup::Ip::Verify
        class Igmp; //type: Native::Interface::Virtualportgroup::Ip::Igmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Vrf> vrf;
        
}; // Native::Interface::Virtualportgroup::Ip


class Native::Interface::Virtualportgroup::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Virtualportgroup::Ip::AccessGroup


class Native::Interface::Virtualportgroup::Ip::AccessGroup::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Virtualportgroup::Ip::AccessGroup::In


class Native::Interface::Virtualportgroup::Ip::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Virtualportgroup::Ip::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::AccessGroup::In::Acl


class Native::Interface::Virtualportgroup::Ip::AccessGroup::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Virtualportgroup::Ip::AccessGroup::Out


class Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::AccessGroup::Out::Acl


class Native::Interface::Virtualportgroup::Ip::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inspection; //type: Native::Interface::Virtualportgroup::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Virtualportgroup::Ip::Arp


class Native::Interface::Virtualportgroup::Ip::Arp::Inspection : public ydk::Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Virtualportgroup::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Virtualportgroup::Ip::Arp::Inspection


class Native::Interface::Virtualportgroup::Ip::Arp::Inspection::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf rate; //type: uint32

}; // Native::Interface::Virtualportgroup::Ip::Arp::Inspection::Limit


class Native::Interface::Virtualportgroup::Ip::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: string
        ydk::YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Virtualportgroup::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Virtualportgroup::Ip::Vrf


class Native::Interface::Virtualportgroup::Ip::Vrf::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf liin_vrf; //type: empty
        ydk::YLeaf mgmtvrf; //type: empty
        ydk::YLeaf word; //type: string

}; // Native::Interface::Virtualportgroup::Ip::Vrf::Forwarding


class Native::Interface::Virtualportgroup::Ip::NoAddress : public ydk::Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: boolean

}; // Native::Interface::Virtualportgroup::Ip::NoAddress


class Native::Interface::Virtualportgroup::Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Virtualportgroup::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Virtualportgroup::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Virtualportgroup::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Virtualportgroup::Ip::Address


class Native::Interface::Virtualportgroup::Ip::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Interface::Virtualportgroup::Ip::Address::Primary


class Native::Interface::Virtualportgroup::Ip::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::Address::Secondary


class Native::Interface::Virtualportgroup::Ip::Address::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Virtualportgroup::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Virtualportgroup::Ip::Address::Dhcp


class Native::Interface::Virtualportgroup::Ip::Address::Dhcp::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::Virtualportgroup::Ip::Address::Dhcp::ClientId


class Native::Interface::Virtualportgroup::Ip::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Virtualportgroup::Ip::HelloInterval


class Native::Interface::Virtualportgroup::Ip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyChain; //type: Native::Interface::Virtualportgroup::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Virtualportgroup::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Virtualportgroup::Ip::Authentication


class Native::Interface::Virtualportgroup::Ip::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Interface::Virtualportgroup::Ip::Authentication::KeyChain


class Native::Interface::Virtualportgroup::Ip::Authentication::Mode : public ydk::Entity
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

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf md5; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::Authentication::Mode


class Native::Interface::Virtualportgroup::Ip::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Virtualportgroup::Ip::HoldTime


class Native::Interface::Virtualportgroup::Ip::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf global; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Interface::Virtualportgroup::Ip::HelperAddress


class Native::Interface::Virtualportgroup::Ip::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Virtualportgroup::Ip::Pim


class Native::Interface::Virtualportgroup::Ip::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Interface::Virtualportgroup::Ip::Policy


class Native::Interface::Virtualportgroup::Ip::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Virtualportgroup::Ip::Rip::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Rip::Authentication> authentication;
        
}; // Native::Interface::Virtualportgroup::Ip::Rip


class Native::Interface::Virtualportgroup::Ip::Rip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class Mode; //type: Native::Interface::Virtualportgroup::Ip::Rip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Rip::Authentication::Mode> mode;
        
}; // Native::Interface::Virtualportgroup::Ip::Rip::Authentication


class Native::Interface::Virtualportgroup::Ip::Rip::Authentication::Mode : public ydk::Entity
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

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf text; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::Rip::Authentication::Mode


class Native::Interface::Virtualportgroup::Ip::RouteCacheConf : public ydk::Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_cache; //type: boolean

}; // Native::Interface::Virtualportgroup::Ip::RouteCacheConf


class Native::Interface::Virtualportgroup::Ip::RouteCache : public ydk::Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cef; //type: boolean
        ydk::YLeaf flow; //type: boolean
        ydk::YLeaf policy; //type: boolean
        ydk::YLeaf same_interface; //type: boolean

}; // Native::Interface::Virtualportgroup::Ip::RouteCache


class Native::Interface::Virtualportgroup::Ip::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Interface::Virtualportgroup::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Virtualportgroup::Ip::Router


class Native::Interface::Virtualportgroup::Ip::Router::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::Interface::Virtualportgroup::Ip::Router::Isis


class Native::Interface::Virtualportgroup::Ip::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Virtualportgroup::Ip::Tcp


class Native::Interface::Virtualportgroup::Ip::VirtualReassembly : public ydk::Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_reassemblies; //type: uint32
        ydk::YLeaf max_fragments; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf drop_fragments; //type: empty
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Virtualportgroup::Ip::VirtualReassembly


class Native::Interface::Virtualportgroup::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Virtualportgroup::Ip::Dhcp


class Native::Interface::Virtualportgroup::Ip::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eigrp; //type: Native::Interface::Virtualportgroup::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Virtualportgroup::Ip::SummaryAddress


class Native::Interface::Virtualportgroup::Ip::SummaryAddress::Eigrp : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Interface::Virtualportgroup::Ip::SummaryAddress::Eigrp


class Native::Interface::Virtualportgroup::Ip::Verify : public ydk::Entity
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

        class Source; //type: Native::Interface::Virtualportgroup::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Virtualportgroup::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Virtualportgroup::Ip::Verify


class Native::Interface::Virtualportgroup::Ip::Verify::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::Virtualportgroup::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Virtualportgroup::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Virtualportgroup::Ip::Verify::Source

class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

};

class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf unprotected;

};

class Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Interface::VirtualTemplate::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};

class Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::VirtualTemplate::Ppp::Accounting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Interface::VirtualTemplate::Ppp::Authorization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Interface::VirtualTemplate::Ppp::Authentication::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf chap;
        static const ydk::Enum::YLeaf eap;
        static const ydk::Enum::YLeaf ms_chap;
        static const ydk::Enum::YLeaf ms_chap_v2;
        static const ydk::Enum::YLeaf pap;

};

class Native::Interface::Virtualportgroup::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Virtualportgroup::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Virtualportgroup::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::Virtualportgroup::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::Virtualportgroup::Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Virtualportgroup::Flowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Virtualportgroup::Flowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Virtualportgroup::HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_69_ */

