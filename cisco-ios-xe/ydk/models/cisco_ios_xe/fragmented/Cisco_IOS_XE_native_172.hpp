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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

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

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Process_


class Native::Process::Cpu::Threshold::Type::Process_::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

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

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Total::Rising

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Total


class Native::Process::Cpu::Threshold::Type::Total::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange : public ydk::Entity
{
    public:
        CpuRange();
        ~CpuRange();

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

        ydk::YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Crashinfo; //type: Native::Exception::Crashinfo

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Exception::Crashinfo> crashinfo; // presence node
        
}; // Native::Exception


class Native::Exception::Crashinfo : public ydk::Entity
{
    public:
        Crashinfo();
        ~Crashinfo();

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

        ydk::YLeaf buffersize; //type: uint16

}; // Native::Exception::Crashinfo


class Native::Iox : public ydk::Entity
{
    public:
        Iox();
        ~Iox();

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


}; // Native::Iox


class Native::Ap : public ydk::Entity
{
    public:
        Ap();
        ~Ap();

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

        class Group; //type: Native::Ap::Group
        class Dot11; //type: Native::Ap::Dot11

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group> > group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11> dot11;
        
}; // Native::Ap


class Native::Ap::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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
        class Config; //type: Native::Ap::Group::Config

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config> config;
        
}; // Native::Ap::Group


class Native::Ap::Group::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness> airtime_fairness;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Hyperlocation> hyperlocation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Ntp> ntp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Port> > port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::RfProfile> rf_profile;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan> > wlan;
        
}; // Native::Ap::Group::Config


class Native::Ap::Group::Config::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot11; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11> dot11;
        
}; // Native::Ap::Group::Config::AirtimeFairness


class Native::Ap::Group::Config::AirtimeFairness::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Y_24GHz; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz
        class Y_5GHz; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz> y_24ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz> y_5ghz;
        
}; // Native::Ap::Group::Config::AirtimeFairness::Dot11


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz : public ydk::Entity
{
    public:
        Y_24GHz();
        ~Y_24GHz();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf optimization; //type: empty
        class Mode;

}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz : public ydk::Entity
{
    public:
        Y_5GHz();
        ~Y_5GHz();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optimization; //type: empty
        class Mode; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode> mode;
        
}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode : public ydk::Entity
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

        ydk::YLeaf enforce_policy; //type: empty
        ydk::YLeaf monitor; //type: empty

}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode


class Native::Ap::Group::Config::Hyperlocation : public ydk::Entity
{
    public:
        Hyperlocation();
        ~Hyperlocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Ap::Group::Config::Hyperlocation::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Hyperlocation::Threshold> threshold;
        
}; // Native::Ap::Group::Config::Hyperlocation


class Native::Ap::Group::Config::Hyperlocation::Threshold : public ydk::Entity
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot11; //type: Native::Ap::Group::Config::RfProfile::Dot11

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::RfProfile::Dot11> dot11;
        
}; // Native::Ap::Group::Config::RfProfile


class Native::Ap::Group::Config::RfProfile::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness> airtime_fairness;
                class RadioPolicy;

}; // Native::Ap::Group::Config::Wlan


class Native::Ap::Group::Config::Wlan::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot11; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11> dot11;
        
}; // Native::Ap::Group::Config::Wlan::AirtimeFairness


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Y_24GHz; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz
        class Y_5GHz; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz> y_24ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz> y_5ghz;
        
}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz : public ydk::Entity
{
    public:
        Y_24GHz();
        ~Y_24GHz();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string

}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz : public ydk::Entity
{
    public:
        Y_5GHz();
        ~Y_5GHz();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: string

}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz


class Native::Ap::Dot11 : public ydk::Entity
{
    public:
        Dot11();
        ~Dot11();

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

        class Y_24ghz; //type: Native::Ap::Dot11::Y_24ghz
        class Y_49ghz; //type: Native::Ap::Dot11::Y_49ghz
        class Y_5ghz; //type: Native::Ap::Dot11::Y_5ghz
        class AirtimeFairness; //type: Native::Ap::Dot11::AirtimeFairness

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz> y_24ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49ghz> y_49ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz> y_5ghz;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness> airtime_fairness;
        
}; // Native::Ap::Dot11


class Native::Ap::Dot11::Y_24ghz : public ydk::Entity
{
    public:
        Y_24ghz();
        ~Y_24ghz();

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

        class Rate; //type: Native::Ap::Dot11::Y_24ghz::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate> rate;
        
}; // Native::Ap::Dot11::Y_24ghz


class Native::Ap::Dot11::Y_24ghz::Rate : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RATE11M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE11M
        class RATE12M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE12M
        class RATE18M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE18M
        class RATE1M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE1M
        class RATE24M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE24M
        class RATE2M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE2M
        class RATE36M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE36M
        class RATE48M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE48M
        class RATE54M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE54M
        class RATE55M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE55M
        class RATE6M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE6M
        class RATE9M; //type: Native::Ap::Dot11::Y_24ghz::Rate::RATE9M

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE11M> rate_11m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE12M> rate_12m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE18M> rate_18m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE1M> rate_1m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE24M> rate_24m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE2M> rate_2m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE36M> rate_36m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE48M> rate_48m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE54M> rate_54m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE55M> rate_5_5m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE6M> rate_6m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24ghz::Rate::RATE9M> rate_9m;
        
}; // Native::Ap::Dot11::Y_24ghz::Rate


class Native::Ap::Dot11::Y_24ghz::Rate::RATE11M : public ydk::Entity
{
    public:
        RATE11M();
        ~RATE11M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE11M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE12M : public ydk::Entity
{
    public:
        RATE12M();
        ~RATE12M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE12M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE18M : public ydk::Entity
{
    public:
        RATE18M();
        ~RATE18M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE18M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE1M : public ydk::Entity
{
    public:
        RATE1M();
        ~RATE1M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE1M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE24M : public ydk::Entity
{
    public:
        RATE24M();
        ~RATE24M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE24M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE2M : public ydk::Entity
{
    public:
        RATE2M();
        ~RATE2M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE2M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE36M : public ydk::Entity
{
    public:
        RATE36M();
        ~RATE36M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE36M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE48M : public ydk::Entity
{
    public:
        RATE48M();
        ~RATE48M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE48M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE54M : public ydk::Entity
{
    public:
        RATE54M();
        ~RATE54M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE54M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE55M : public ydk::Entity
{
    public:
        RATE55M();
        ~RATE55M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE55M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE6M : public ydk::Entity
{
    public:
        RATE6M();
        ~RATE6M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE6M


class Native::Ap::Dot11::Y_24ghz::Rate::RATE9M : public ydk::Entity
{
    public:
        RATE9M();
        ~RATE9M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24ghz::Rate::RATE9M


class Native::Ap::Dot11::Y_49ghz : public ydk::Entity
{
    public:
        Y_49ghz();
        ~Y_49ghz();

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

        class Rrm; //type: Native::Ap::Dot11::Y_49ghz::Rrm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49ghz::Rrm> rrm;
        
}; // Native::Ap::Dot11::Y_49ghz


class Native::Ap::Dot11::Y_49ghz::Rrm : public ydk::Entity
{
    public:
        Rrm();
        ~Rrm();

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

        class Profile; //type: Native::Ap::Dot11::Y_49ghz::Rrm::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49ghz::Rrm::Profile> profile;
        
}; // Native::Ap::Dot11::Y_49ghz::Rrm


class Native::Ap::Dot11::Y_49ghz::Rrm::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf foreign; //type: uint8

}; // Native::Ap::Dot11::Y_49ghz::Rrm::Profile


class Native::Ap::Dot11::Y_5ghz : public ydk::Entity
{
    public:
        Y_5ghz();
        ~Y_5ghz();

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

        class Rate; //type: Native::Ap::Dot11::Y_5ghz::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate> rate;
        
}; // Native::Ap::Dot11::Y_5ghz


class Native::Ap::Dot11::Y_5ghz::Rate : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RATE11M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE11M
        class RATE12M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE12M
        class RATE18M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE18M
        class RATE1M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE1M
        class RATE24M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE24M
        class RATE2M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE2M
        class RATE36M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE36M
        class RATE48M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE48M
        class RATE54M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE54M
        class RATE55M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE55M
        class RATE6M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE6M
        class RATE9M; //type: Native::Ap::Dot11::Y_5ghz::Rate::RATE9M

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE11M> rate_11m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE12M> rate_12m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE18M> rate_18m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE1M> rate_1m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE24M> rate_24m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE2M> rate_2m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE36M> rate_36m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE48M> rate_48m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE54M> rate_54m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE55M> rate_5_5m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE6M> rate_6m;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5ghz::Rate::RATE9M> rate_9m;
        
}; // Native::Ap::Dot11::Y_5ghz::Rate


class Native::Ap::Dot11::Y_5ghz::Rate::RATE11M : public ydk::Entity
{
    public:
        RATE11M();
        ~RATE11M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE11M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE12M : public ydk::Entity
{
    public:
        RATE12M();
        ~RATE12M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE12M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE18M : public ydk::Entity
{
    public:
        RATE18M();
        ~RATE18M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE18M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE1M : public ydk::Entity
{
    public:
        RATE1M();
        ~RATE1M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE1M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE24M : public ydk::Entity
{
    public:
        RATE24M();
        ~RATE24M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE24M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE2M : public ydk::Entity
{
    public:
        RATE2M();
        ~RATE2M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE2M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE36M : public ydk::Entity
{
    public:
        RATE36M();
        ~RATE36M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE36M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE48M : public ydk::Entity
{
    public:
        RATE48M();
        ~RATE48M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE48M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE54M : public ydk::Entity
{
    public:
        RATE54M();
        ~RATE54M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE54M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE55M : public ydk::Entity
{
    public:
        RATE55M();
        ~RATE55M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE55M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE6M : public ydk::Entity
{
    public:
        RATE6M();
        ~RATE6M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE6M


class Native::Ap::Dot11::Y_5ghz::Rate::RATE9M : public ydk::Entity
{
    public:
        RATE9M();
        ~RATE9M();

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

        ydk::YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_5ghz::Rate::RATE9M


class Native::Ap::Dot11::AirtimeFairness : public ydk::Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

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

        class PolicyName; //type: Native::Ap::Dot11::AirtimeFairness::PolicyName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness::PolicyName> > policy_name;
        
}; // Native::Ap::Dot11::AirtimeFairness


class Native::Ap::Dot11::AirtimeFairness::PolicyName : public ydk::Entity
{
    public:
        PolicyName();
        ~PolicyName();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ArpEntry; //type: Native::Arp::ArpEntry
        class AccessList; //type: Native::Arp::AccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::ArpEntry> > arp_entry;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList> > access_list;
        
}; // Native::Arp


class Native::Arp::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Permit; //type: Native::Arp::AccessList::Permit
        class Deny; //type: Native::Arp::AccessList::Deny
        class Default_; //type: Native::Arp::AccessList::Default_
        class No; //type: Native::Arp::AccessList::No

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit> permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::No> no;
        
}; // Native::Arp::AccessList


class Native::Arp::AccessList::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Ip
        class Request; //type: Native::Arp::AccessList::Permit::Request
        class Response; //type: Native::Arp::AccessList::Permit::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response> response;
        
}; // Native::Arp::AccessList::Permit


class Native::Arp::AccessList::Permit::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress> > sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host> host;
        
}; // Native::Arp::AccessList::Permit::Ip


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Any


class Native::Arp::AccessList::Permit::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Request::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Request


class Native::Arp::AccessList::Permit::Request::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress> > sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Permit::Response::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip> ip;
        
}; // Native::Arp::AccessList::Permit::Response


class Native::Arp::AccessList::Permit::Response::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderIpAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::Any
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress> > sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host> host;
        
}; // Native::Arp::AccessList::Permit::Response::Ip


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host


class Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Any


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress
        class Any_; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_
        class Host; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host> host;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host


class Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress> > ip_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class Mac; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any
        class Host_; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_> host;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_


class Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Arp::AccessList::Deny::Ip
        class Request; //type: Native::Arp::AccessList::Deny::Request
        class Response; //type: Native::Arp::AccessList::Deny::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Response> response;
        
}; // Native::Arp::AccessList::Deny


class Native::Arp::AccessList::Deny::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderIpAddress; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress
        class Any; //type: Native::Arp::AccessList::Deny::Ip::Any
        class Host; //type: Native::Arp::AccessList::Deny::Ip::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress> > sender_ip_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::Any> any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::Host> host;
        
}; // Native::Arp::AccessList::Deny::Ip


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress : public ydk::Entity
{
    public:
        SenderIpAddress();
        ~SenderIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ip_address_mask; //type: string
        class Mac; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac> mac;
        
}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac : public ydk::Entity
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

        class SenderMacAddress; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress
        class Any; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any
        class Host; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress> > sender_mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any> any; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host> host;
        
}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac


class Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress : public ydk::Entity
{
    public:
        SenderMacAddress();
        ~SenderMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SenderMacAddress; //type: Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress> > sender_mac_address;
        
}; // Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host

class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Mode : public ydk::Enum
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

