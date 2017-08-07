#ifndef _CISCO_IOS_XE_NATIVE_172_
#define _CISCO_IOS_XE_NATIVE_172_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_171.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Process::Cpu::Threshold::Type::Interrupt : public ydk::Entity
{
    public:
        Interrupt();
        ~Interrupt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval : public ydk::Entity
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

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Process_


class Native::Process::Cpu::Threshold::Type::Process_::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval : public ydk::Entity
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

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total : public ydk::Entity
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

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Total::Rising

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Total


class Native::Process::Cpu::Threshold::Type::Total::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval : public ydk::Entity
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

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Exception : public ydk::Entity
{
    public:
        Exception();
        ~Exception();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crashinfo; //type: Native::Exception::Crashinfo

        std::shared_ptr<Cisco_IOS_XE_native::Native::Exception::Crashinfo> crashinfo; // presence node
        
}; // Native::Exception


class Native::Exception::Crashinfo : public ydk::Entity
{
    public:
        Crashinfo();
        ~Crashinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffersize; //type: uint16

}; // Native::Exception::Crashinfo


class Native::Iox : public ydk::Entity
{
    public:
        Iox();
        ~Iox();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Iox


class Native::Ap : public ydk::Entity
{
    public:
        Ap();
        ~Ap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Ap::Group
        class Dot11; //type: Native::Ap::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11> dot11;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group> > group;
        
}; // Native::Ap


class Native::Ap::Group : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Config; //type: Native::Ap::Group::Config

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config> config;
        
}; // Native::Ap::Group


class Native::Ap::Group::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf remote_lan; //type: string
        class AirtimeFairness; //type: Native::Ap::Group::Config::AirtimeFairness
        class Hyperlocation; //type: Native::Ap::Group::Config::Hyperlocation
        class Ntp; //type: Native::Ap::Group::Config::Ntp
        class Port; //type: Native::Ap::Group::Config::Port
        class RfProfile; //type: Native::Ap::Group::Config::RfProfile
        class Wlan; //type: Native::Ap::Group::Config::Wlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness> airtime_fairness;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Hyperlocation> hyperlocation; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Ntp> ntp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Port> > port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::RfProfile> rf_profile;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan> > wlan;
        
}; // Native::Ap::Group::Config


class Native::Ap::Group::Config::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot11; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11> dot11;
        
}; // Native::Ap::Group::Config::AirtimeFairness


class Native::Ap::Group::Config::AirtimeFairness::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Y_24Ghz; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz
        class Y_5Ghz; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz> y_24ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz> y_5ghz;
        
}; // Native::Ap::Group::Config::AirtimeFairness::Dot11


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz : public ydk::Entity
{
    public:
        Y_24Ghz();
        ~Y_24Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf optimization; //type: empty
        class Mode;

}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz : public ydk::Entity
{
    public:
        Y_5Ghz();
        ~Y_5Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optimization; //type: empty
        class Mode; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode> mode;
        
}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode : public ydk::Entity
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

        ydk::YLeaf enforce_policy; //type: empty
        ydk::YLeaf monitor; //type: empty

}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode


class Native::Ap::Group::Config::Hyperlocation : public ydk::Entity
{
    public:
        Hyperlocation();
        ~Hyperlocation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Ap::Group::Config::Hyperlocation::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Hyperlocation::Threshold> threshold;
        
}; // Native::Ap::Group::Config::Hyperlocation


class Native::Ap::Group::Config::Hyperlocation::Threshold : public ydk::Entity
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

        ydk::YLeaf detection; //type: int8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf trigger; //type: uint8

}; // Native::Ap::Group::Config::Hyperlocation::Threshold


class Native::Ap::Group::Config::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string

}; // Native::Ap::Group::Config::Ntp


class Native::Ap::Group::Config::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf poe; //type: empty
        ydk::YLeaf remote_lan; //type: string
        ydk::YLeaf shutdown; //type: empty

}; // Native::Ap::Group::Config::Port


class Native::Ap::Group::Config::RfProfile : public ydk::Entity
{
    public:
        RfProfile();
        ~RfProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot11; //type: Native::Ap::Group::Config::RfProfile::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::RfProfile::Dot11> dot11;
        
}; // Native::Ap::Group::Config::RfProfile


class Native::Ap::Group::Config::RfProfile::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_24ghz; //type: string
        ydk::YLeaf y_5ghz; //type: string

}; // Native::Ap::Group::Config::RfProfile::Dot11


class Native::Ap::Group::Config::Wlan : public ydk::Entity
{
    public:
        Wlan();
        ~Wlan();

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
        ydk::YLeaf radio_policy; //type: RadioPolicy
        ydk::YLeaf vlan; //type: string
        class AirtimeFairness; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness> airtime_fairness;
                class RadioPolicy;

}; // Native::Ap::Group::Config::Wlan


class Native::Ap::Group::Config::Wlan::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot11; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11> dot11;
        
}; // Native::Ap::Group::Config::Wlan::AirtimeFairness


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Y_24Ghz; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz
        class Y_5Ghz; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz> y_24ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz> y_5ghz;
        
}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz : public ydk::Entity
{
    public:
        Y_24Ghz();
        ~Y_24Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string

}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz : public ydk::Entity
{
    public:
        Y_5Ghz();
        ~Y_5Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string

}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz


class Native::Ap::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Y_24Ghz; //type: Native::Ap::Dot11::Y_24Ghz
        class Y_49Ghz; //type: Native::Ap::Dot11::Y_49Ghz
        class Y_5Ghz; //type: Native::Ap::Dot11::Y_5Ghz
        class AirtimeFairness; //type: Native::Ap::Dot11::AirtimeFairness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness> airtime_fairness;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz> y_24ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49Ghz> y_49ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz> y_5ghz;
        
}; // Native::Ap::Dot11


class Native::Ap::Dot11::Y_24Ghz : public ydk::Entity
{
    public:
        Y_24Ghz();
        ~Y_24Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Native::Ap::Dot11::Y_24Ghz::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate> rate;
        
}; // Native::Ap::Dot11::Y_24Ghz


class Native::Ap::Dot11::Y_24Ghz::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate_11M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M
        class Rate_12M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M
        class Rate_18M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M
        class Rate_1M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M
        class Rate_24M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M
        class Rate_2M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M
        class Rate_36M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M
        class Rate_48M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M
        class Rate_54M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M
        class Rate_5_5M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M
        class Rate_6M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M
        class Rate_9M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M> rate_11m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M> rate_12m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M> rate_18m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M> rate_1m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M> rate_24m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M> rate_2m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M> rate_36m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M> rate_48m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M> rate_54m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M> rate_5_5m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M> rate_6m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M> rate_9m;
        
}; // Native::Ap::Dot11::Y_24Ghz::Rate


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M : public ydk::Entity
{
    public:
        Rate_11M();
        ~Rate_11M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M : public ydk::Entity
{
    public:
        Rate_12M();
        ~Rate_12M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M : public ydk::Entity
{
    public:
        Rate_18M();
        ~Rate_18M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M : public ydk::Entity
{
    public:
        Rate_1M();
        ~Rate_1M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M : public ydk::Entity
{
    public:
        Rate_24M();
        ~Rate_24M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M : public ydk::Entity
{
    public:
        Rate_2M();
        ~Rate_2M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M : public ydk::Entity
{
    public:
        Rate_36M();
        ~Rate_36M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M : public ydk::Entity
{
    public:
        Rate_48M();
        ~Rate_48M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M : public ydk::Entity
{
    public:
        Rate_54M();
        ~Rate_54M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M : public ydk::Entity
{
    public:
        Rate_5_5M();
        ~Rate_5_5M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M : public ydk::Entity
{
    public:
        Rate_6M();
        ~Rate_6M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M : public ydk::Entity
{
    public:
        Rate_9M();
        ~Rate_9M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M


class Native::Ap::Dot11::Y_49Ghz : public ydk::Entity
{
    public:
        Y_49Ghz();
        ~Y_49Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rrm; //type: Native::Ap::Dot11::Y_49Ghz::Rrm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49Ghz::Rrm> rrm;
        
}; // Native::Ap::Dot11::Y_49Ghz


class Native::Ap::Dot11::Y_49Ghz::Rrm : public ydk::Entity
{
    public:
        Rrm();
        ~Rrm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Native::Ap::Dot11::Y_49Ghz::Rrm::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49Ghz::Rrm::Profile> profile;
        
}; // Native::Ap::Dot11::Y_49Ghz::Rrm


class Native::Ap::Dot11::Y_49Ghz::Rrm::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foreign; //type: uint8

}; // Native::Ap::Dot11::Y_49Ghz::Rrm::Profile


class Native::Ap::Dot11::Y_5Ghz : public ydk::Entity
{
    public:
        Y_5Ghz();
        ~Y_5Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Native::Ap::Dot11::Y_5Ghz::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate> rate;
        
}; // Native::Ap::Dot11::Y_5Ghz


class Native::Ap::Dot11::Y_5Ghz::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate_11M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M
        class Rate_12M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M
        class Rate_18M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M
        class Rate_1M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M
        class Rate_24M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M
        class Rate_2M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M
        class Rate_36M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M
        class Rate_48M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M
        class Rate_54M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M
        class Rate_5_5M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M
        class Rate_6M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M
        class Rate_9M; //type: Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M> rate_11m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M> rate_12m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M> rate_18m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M> rate_1m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M> rate_24m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M> rate_2m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M> rate_36m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M> rate_48m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M> rate_54m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M> rate_5_5m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M> rate_6m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M> rate_9m;
        
}; // Native::Ap::Dot11::Y_5Ghz::Rate


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M : public ydk::Entity
{
    public:
        Rate_11M();
        ~Rate_11M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_11M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M : public ydk::Entity
{
    public:
        Rate_12M();
        ~Rate_12M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_12M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M : public ydk::Entity
{
    public:
        Rate_18M();
        ~Rate_18M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_18M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M : public ydk::Entity
{
    public:
        Rate_1M();
        ~Rate_1M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_1M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M : public ydk::Entity
{
    public:
        Rate_24M();
        ~Rate_24M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_24M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M : public ydk::Entity
{
    public:
        Rate_2M();
        ~Rate_2M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_2M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M : public ydk::Entity
{
    public:
        Rate_36M();
        ~Rate_36M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_36M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M : public ydk::Entity
{
    public:
        Rate_48M();
        ~Rate_48M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_48M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M : public ydk::Entity
{
    public:
        Rate_54M();
        ~Rate_54M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_54M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M : public ydk::Entity
{
    public:
        Rate_5_5M();
        ~Rate_5_5M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_5_5M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M : public ydk::Entity
{
    public:
        Rate_6M();
        ~Rate_6M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_6M


class Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M : public ydk::Entity
{
    public:
        Rate_9M();
        ~Rate_9M();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5Ghz::Rate::Rate_9M


class Native::Ap::Dot11::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyName; //type: Native::Ap::Dot11::AirtimeFairness::PolicyName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness::PolicyName> > policy_name;
        
}; // Native::Ap::Dot11::AirtimeFairness


class Native::Ap::Dot11::AirtimeFairness::PolicyName : public ydk::Entity
{
    public:
        PolicyName();
        ~PolicyName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_id; //type: uint16

}; // Native::Ap::Dot11::AirtimeFairness::PolicyName


class Native::Arp : public ydk::Entity
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

        class ArpEntry; //type: Native::Arp::ArpEntry
        class AccessList; //type: Native::Arp::AccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList> > access_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::ArpEntry> > arp_entry;
        
}; // Native::Arp


class Native::Arp::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf hardware_address; //type: string
        ydk::YLeaf arp_type; //type: ArpType
        class ArpType;

}; // Native::Arp::ArpEntry


class Native::Arp::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

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
        class Permit; //type: Native::Arp::AccessList::Permit
        class Deny; //type: Native::Arp::AccessList::Deny
        class Default_; //type: Native::Arp::AccessList::Default_
        class No; //type: Native::Arp::AccessList::No

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::No> no;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit> permit;
        
}; // Native::Arp::AccessList


class Native::Arp::AccessList::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Ip
        class Request; //type: Native::Arp::AccessList::Permit::Request
        class Response; //type: Native::Arp::AccessList::Permit::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request> request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response> response;
        
}; // Native::Arp::AccessList::Permit


class Native::Arp::AccessList::Permit::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Permit::Ip


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Any


class Native::Arp::AccessList::Permit::Ip::Any::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Permit::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Request::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Request


class Native::Arp::AccessList::Permit::Request::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Permit::Response : public ydk::Entity
{
    public:
        Response();
        ~Response();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Response::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Response


class Native::Arp::AccessList::Permit::Response::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Response::Ip::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Any


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_ : public ydk::Entity
{
    public:
        Any_();
        ~Any_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress


class Native::Arp::AccessList::Permit::Response::Ip::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_ : public ydk::Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress


class Native::Arp::AccessList::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Deny::Ip
        class Request; //type: Native::Arp::AccessList::Deny::Request
        class Response; //type: Native::Arp::AccessList::Deny::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Request> request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Response> response;
        
}; // Native::Arp::AccessList::Deny


class Native::Arp::AccessList::Deny::Ip : public ydk::Entity
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

        class SenderIpAddress; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Deny::Ip::Any
        class Host; //type: Native::Arp::AccessList::Deny::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::Any> any;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress> > sender_ip_address;
        
}; // Native::Arp::AccessList::Deny::Ip


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host> host;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_mask; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: empty

}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host

class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enforce_policy;
        static const ydk::Enum::YLeaf monitor;

};

class Native::Ap::Group::Config::Wlan::RadioPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf dot11a;
        static const ydk::Enum::YLeaf dot11bg;
        static const ydk::Enum::YLeaf dot11g;

};

class Native::Arp::ArpEntry::ArpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ARPA;
        static const ydk::Enum::YLeaf SAP;
        static const ydk::Enum::YLeaf SMDS;
        static const ydk::Enum::YLeaf SNAP;
        static const ydk::Enum::YLeaf SRP_A;
        static const ydk::Enum::YLeaf SRP_B;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_172_ */

