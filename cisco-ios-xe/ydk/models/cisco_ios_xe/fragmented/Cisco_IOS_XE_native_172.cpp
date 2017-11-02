
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_172.hpp"
#include "Cisco_IOS_XE_native_174.hpp"
#include "Cisco_IOS_XE_native_173.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Process::Cpu::Threshold::Type::Interrupt::Interrupt()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>())
{
    rising->parent = this;

    yang_name = "interrupt"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::~Interrupt()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interrupt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::Rising()
{

    yang_name = "rising"; yang_parent_name = "interrupt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::Interval()
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Process_()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>())
{
    rising->parent = this;

    yang_name = "process"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Process_::~Process_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::Rising()
{

    yang_name = "rising"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::Interval()
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Total()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>())
{
    rising->parent = this;

    yang_name = "total"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Total::~Total()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::Rising()
{

    yang_name = "rising"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::Interval()
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Exception::Exception()
    :
    crashinfo(nullptr) // presence node
{

    yang_name = "exception"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Exception::~Exception()
{
}

bool Native::Exception::has_data() const
{
    return (crashinfo !=  nullptr && crashinfo->has_data());
}

bool Native::Exception::has_operation() const
{
    return is_set(yfilter)
	|| (crashinfo !=  nullptr && crashinfo->has_operation());
}

std::string Native::Exception::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crashinfo")
    {
        if(crashinfo == nullptr)
        {
            crashinfo = std::make_shared<Native::Exception::Crashinfo>();
        }
        return crashinfo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crashinfo != nullptr)
    {
        children["crashinfo"] = crashinfo;
    }

    return children;
}

void Native::Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Exception::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crashinfo")
        return true;
    return false;
}

Native::Exception::Crashinfo::Crashinfo()
    :
    buffersize{YType::uint16, "buffersize"}
{

    yang_name = "crashinfo"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Exception::Crashinfo::~Crashinfo()
{
}

bool Native::Exception::Crashinfo::has_data() const
{
    return buffersize.is_set;
}

bool Native::Exception::Crashinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter);
}

std::string Native::Exception::Crashinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Exception::Crashinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crashinfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Exception::Crashinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Exception::Crashinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Exception::Crashinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Exception::Crashinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffersize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Exception::Crashinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffersize")
    {
        buffersize.yfilter = yfilter;
    }
}

bool Native::Exception::Crashinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffersize")
        return true;
    return false;
}

Native::Iox::Iox()
{

    yang_name = "iox"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Iox::~Iox()
{
}

bool Native::Iox::has_data() const
{
    return false;
}

bool Native::Iox::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Iox::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Iox::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iox";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Iox::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Iox::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Iox::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Iox::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Iox::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Iox::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ap::Ap()
    :
    dot11(std::make_shared<Native::Ap::Dot11>())
{
    dot11->parent = this;

    yang_name = "ap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::~Ap()
{
}

bool Native::Ap::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ap:ap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Group()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Native::Ap::Group::Config>())
{
    config->parent = this;

    yang_name = "group"; yang_parent_name = "ap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Group::~Group()
{
}

bool Native::Ap::Group::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data());
}

bool Native::Ap::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Ap::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Ap::Group::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Ap::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ap::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "name")
        return true;
    return false;
}

Native::Ap::Group::Config::Config()
    :
    description{YType::str, "description"},
    remote_lan{YType::str, "remote-lan"}
    	,
    airtime_fairness(std::make_shared<Native::Ap::Group::Config::AirtimeFairness>())
	,hyperlocation(nullptr) // presence node
	,ntp(std::make_shared<Native::Ap::Group::Config::Ntp>())
	,rf_profile(std::make_shared<Native::Ap::Group::Config::RfProfile>())
{
    airtime_fairness->parent = this;
    ntp->parent = this;
    rf_profile->parent = this;

    yang_name = "config"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::~Config()
{
}

bool Native::Ap::Group::Config::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wlan.size(); index++)
    {
        if(wlan[index]->has_data())
            return true;
    }
    return description.is_set
	|| remote_lan.is_set
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data())
	|| (hyperlocation !=  nullptr && hyperlocation->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (rf_profile !=  nullptr && rf_profile->has_data());
}

bool Native::Ap::Group::Config::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wlan.size(); index++)
    {
        if(wlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(remote_lan.yfilter)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation())
	|| (hyperlocation !=  nullptr && hyperlocation->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (rf_profile !=  nullptr && rf_profile->has_operation());
}

std::string Native::Ap::Group::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (remote_lan.is_set || is_set(remote_lan.yfilter)) leaf_name_data.push_back(remote_lan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Group::Config::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    if(child_yang_name == "hyperlocation")
    {
        if(hyperlocation == nullptr)
        {
            hyperlocation = std::make_shared<Native::Ap::Group::Config::Hyperlocation>();
        }
        return hyperlocation;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Ap::Group::Config::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group::Config::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    if(child_yang_name == "rf-profile")
    {
        if(rf_profile == nullptr)
        {
            rf_profile = std::make_shared<Native::Ap::Group::Config::RfProfile>();
        }
        return rf_profile;
    }

    if(child_yang_name == "wlan")
    {
        for(auto const & c : wlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group::Config::Wlan>();
        c->parent = this;
        wlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    if(hyperlocation != nullptr)
    {
        children["hyperlocation"] = hyperlocation;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    if(rf_profile != nullptr)
    {
        children["rf-profile"] = rf_profile;
    }

    for (auto const & c : wlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::Group::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lan")
    {
        remote_lan = value;
        remote_lan.value_namespace = name_space;
        remote_lan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "remote-lan")
    {
        remote_lan.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "airtime-fairness" || name == "hyperlocation" || name == "ntp" || name == "port" || name == "rf-profile" || name == "wlan" || name == "description" || name == "remote-lan")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::AirtimeFairness()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11>())
{
    dot11->parent = this;

    yang_name = "airtime-fairness"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::has_operation() const
{
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::AirtimeFairness::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::AirtimeFairness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz>())
	,y_5ghz(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz>())
{
    y_24ghz->parent = this;
    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "airtime-fairness"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24GHz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_5GHz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24GHz"] = y_24ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5GHz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24GHz" || name == "_5GHz")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Y_24GHz()
    :
    mode{YType::enumeration, "mode"},
    optimization{YType::empty, "optimization"}
{

    yang_name = "_24GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::~Y_24GHz()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::has_data() const
{
    return mode.is_set
	|| optimization.is_set;
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(optimization.yfilter);
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "optimization")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Y_5GHz()
    :
    optimization{YType::empty, "optimization"}
    	,
    mode(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode>())
{
    mode->parent = this;

    yang_name = "_5GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::~Y_5GHz()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::has_data() const
{
    return optimization.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "optimization")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::Mode()
    :
    enforce_policy{YType::empty, "enforce-policy"},
    monitor{YType::empty, "monitor"}
{

    yang_name = "mode"; yang_parent_name = "_5GHz"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::~Mode()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::has_data() const
{
    return enforce_policy.is_set
	|| monitor.is_set;
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enforce_policy.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforce_policy.is_set || is_set(enforce_policy.yfilter)) leaf_name_data.push_back(enforce_policy.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enforce-policy")
    {
        enforce_policy = value;
        enforce_policy.value_namespace = name_space;
        enforce_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enforce-policy")
    {
        enforce_policy.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enforce-policy" || name == "monitor")
        return true;
    return false;
}

Native::Ap::Group::Config::Hyperlocation::Hyperlocation()
    :
    threshold(std::make_shared<Native::Ap::Group::Config::Hyperlocation::Threshold>())
{
    threshold->parent = this;

    yang_name = "hyperlocation"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Hyperlocation::~Hyperlocation()
{
}

bool Native::Ap::Group::Config::Hyperlocation::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Ap::Group::Config::Hyperlocation::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Ap::Group::Config::Hyperlocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyperlocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Hyperlocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Hyperlocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Ap::Group::Config::Hyperlocation::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Hyperlocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Ap::Group::Config::Hyperlocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::Hyperlocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::Hyperlocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Ap::Group::Config::Hyperlocation::Threshold::Threshold()
    :
    detection{YType::int8, "detection"},
    reset{YType::uint8, "reset"},
    trigger{YType::uint8, "trigger"}
{

    yang_name = "threshold"; yang_parent_name = "hyperlocation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Hyperlocation::Threshold::~Threshold()
{
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_data() const
{
    return detection.is_set
	|| reset.is_set
	|| trigger.is_set;
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Native::Ap::Group::Config::Hyperlocation::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Hyperlocation::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Hyperlocation::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Hyperlocation::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Hyperlocation::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Hyperlocation::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "reset" || name == "trigger")
        return true;
    return false;
}

Native::Ap::Group::Config::Ntp::Ntp()
    :
    ip{YType::str, "ip"}
{

    yang_name = "ntp"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Ntp::~Ntp()
{
}

bool Native::Ap::Group::Config::Ntp::has_data() const
{
    return ip.is_set;
}

bool Native::Ap::Group::Config::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Ap::Group::Config::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Ap::Group::Config::Port::Port()
    :
    id{YType::uint8, "id"},
    poe{YType::empty, "poe"},
    remote_lan{YType::str, "remote-lan"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "port"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Port::~Port()
{
}

bool Native::Ap::Group::Config::Port::has_data() const
{
    return id.is_set
	|| poe.is_set
	|| remote_lan.is_set
	|| shutdown.is_set;
}

bool Native::Ap::Group::Config::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poe.yfilter)
	|| ydk::is_set(remote_lan.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Ap::Group::Config::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poe.is_set || is_set(poe.yfilter)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (remote_lan.is_set || is_set(remote_lan.yfilter)) leaf_name_data.push_back(remote_lan.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poe")
    {
        poe = value;
        poe.value_namespace = name_space;
        poe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lan")
    {
        remote_lan = value;
        remote_lan.value_namespace = name_space;
        remote_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poe")
    {
        poe.yfilter = yfilter;
    }
    if(value_path == "remote-lan")
    {
        remote_lan.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "poe" || name == "remote-lan" || name == "shutdown")
        return true;
    return false;
}

Native::Ap::Group::Config::RfProfile::RfProfile()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::RfProfile::Dot11>())
{
    dot11->parent = this;

    yang_name = "rf-profile"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::RfProfile::~RfProfile()
{
}

bool Native::Ap::Group::Config::RfProfile::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::RfProfile::has_operation() const
{
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::RfProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rf-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::RfProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::RfProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::RfProfile::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::RfProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::RfProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::RfProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::RfProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Config::RfProfile::Dot11::Dot11()
    :
    y_24ghz{YType::str, "_24ghz"},
    y_5ghz{YType::str, "_5ghz"}
{

    yang_name = "dot11"; yang_parent_name = "rf-profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::RfProfile::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_data() const
{
    return y_24ghz.is_set
	|| y_5ghz.is_set;
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_24ghz.yfilter)
	|| ydk::is_set(y_5ghz.yfilter);
}

std::string Native::Ap::Group::Config::RfProfile::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::RfProfile::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_24ghz.is_set || is_set(y_24ghz.yfilter)) leaf_name_data.push_back(y_24ghz.get_name_leafdata());
    if (y_5ghz.is_set || is_set(y_5ghz.yfilter)) leaf_name_data.push_back(y_5ghz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::RfProfile::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::RfProfile::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::RfProfile::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_24ghz")
    {
        y_24ghz = value;
        y_24ghz.value_namespace = name_space;
        y_24ghz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_5ghz")
    {
        y_5ghz = value;
        y_5ghz.value_namespace = name_space;
        y_5ghz.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::RfProfile::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_24ghz")
    {
        y_24ghz.yfilter = yfilter;
    }
    if(value_path == "_5ghz")
    {
        y_5ghz.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24ghz" || name == "_5ghz")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::Wlan()
    :
    name{YType::str, "name"},
    radio_policy{YType::enumeration, "radio-policy"},
    vlan{YType::str, "vlan"}
    	,
    airtime_fairness(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness>())
{
    airtime_fairness->parent = this;

    yang_name = "wlan"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::~Wlan()
{
}

bool Native::Ap::Group::Config::Wlan::has_data() const
{
    return name.is_set
	|| radio_policy.is_set
	|| vlan.is_set
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data());
}

bool Native::Ap::Group::Config::Wlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(radio_policy.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wlan" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (radio_policy.is_set || is_set(radio_policy.yfilter)) leaf_name_data.push_back(radio_policy.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-policy")
    {
        radio_policy = value;
        radio_policy.value_namespace = name_space;
        radio_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Wlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "radio-policy")
    {
        radio_policy.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Wlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "airtime-fairness" || name == "name" || name == "radio-policy" || name == "vlan")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::AirtimeFairness()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11>())
{
    dot11->parent = this;

    yang_name = "airtime-fairness"; yang_parent_name = "wlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_operation() const
{
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz>())
	,y_5ghz(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz>())
{
    y_24ghz->parent = this;
    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "airtime-fairness"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24GHz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_5GHz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24GHz"] = y_24ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5GHz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24GHz" || name == "_5GHz")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::Y_24GHz()
    :
    policy{YType::str, "policy"}
{

    yang_name = "_24GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::~Y_24GHz()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::has_data() const
{
    return policy.is_set;
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::Y_5GHz()
    :
    policy{YType::str, "policy"}
{

    yang_name = "_5GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::~Y_5GHz()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::has_data() const
{
    return policy.is_set;
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ap::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Dot11::Y_24ghz>())
	,y_49ghz(std::make_shared<Native::Ap::Dot11::Y_49ghz>())
	,y_5ghz(std::make_shared<Native::Ap::Dot11::Y_5ghz>())
	,airtime_fairness(std::make_shared<Native::Ap::Dot11::AirtimeFairness>())
{
    y_24ghz->parent = this;
    y_49ghz->parent = this;
    y_5ghz->parent = this;
    airtime_fairness->parent = this;

    yang_name = "dot11"; yang_parent_name = "ap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::~Dot11()
{
}

bool Native::Ap::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_49ghz !=  nullptr && y_49ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data())
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data());
}

bool Native::Ap::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_49ghz !=  nullptr && y_49ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation())
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation());
}

std::string Native::Ap::Dot11::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24ghz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Dot11::Y_24ghz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_49ghz")
    {
        if(y_49ghz == nullptr)
        {
            y_49ghz = std::make_shared<Native::Ap::Dot11::Y_49ghz>();
        }
        return y_49ghz;
    }

    if(child_yang_name == "_5ghz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Dot11::Y_5ghz>();
        }
        return y_5ghz;
    }

    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Dot11::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24ghz"] = y_24ghz;
    }

    if(y_49ghz != nullptr)
    {
        children["_49ghz"] = y_49ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5ghz"] = y_5ghz;
    }

    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    return children;
}

void Native::Ap::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24ghz" || name == "_49ghz" || name == "_5ghz" || name == "airtime-fairness")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Y_24ghz()
    :
    rate(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate>())
{
    rate->parent = this;

    yang_name = "_24ghz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::~Y_24ghz()
{
}

bool Native::Ap::Dot11::Y_24ghz::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Ap::Dot11::Y_24ghz::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Ap::Dot11::Y_24ghz::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24ghz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Ap::Dot11::Y_24ghz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_24ghz::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_24ghz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::Rate()
    :
    rate_11m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE11M>())
	,rate_12m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE12M>())
	,rate_18m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE18M>())
	,rate_1m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE1M>())
	,rate_24m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE24M>())
	,rate_2m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE2M>())
	,rate_36m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE36M>())
	,rate_48m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE48M>())
	,rate_54m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE54M>())
	,rate_5_5m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE55M>())
	,rate_6m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE6M>())
	,rate_9m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE9M>())
{
    rate_11m->parent = this;
    rate_12m->parent = this;
    rate_18m->parent = this;
    rate_1m->parent = this;
    rate_24m->parent = this;
    rate_2m->parent = this;
    rate_36m->parent = this;
    rate_48m->parent = this;
    rate_54m->parent = this;
    rate_5_5m->parent = this;
    rate_6m->parent = this;
    rate_9m->parent = this;

    yang_name = "rate"; yang_parent_name = "_24ghz"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::~Rate()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::has_data() const
{
    return (rate_11m !=  nullptr && rate_11m->has_data())
	|| (rate_12m !=  nullptr && rate_12m->has_data())
	|| (rate_18m !=  nullptr && rate_18m->has_data())
	|| (rate_1m !=  nullptr && rate_1m->has_data())
	|| (rate_24m !=  nullptr && rate_24m->has_data())
	|| (rate_2m !=  nullptr && rate_2m->has_data())
	|| (rate_36m !=  nullptr && rate_36m->has_data())
	|| (rate_48m !=  nullptr && rate_48m->has_data())
	|| (rate_54m !=  nullptr && rate_54m->has_data())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_data())
	|| (rate_6m !=  nullptr && rate_6m->has_data())
	|| (rate_9m !=  nullptr && rate_9m->has_data());
}

bool Native::Ap::Dot11::Y_24ghz::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (rate_11m !=  nullptr && rate_11m->has_operation())
	|| (rate_12m !=  nullptr && rate_12m->has_operation())
	|| (rate_18m !=  nullptr && rate_18m->has_operation())
	|| (rate_1m !=  nullptr && rate_1m->has_operation())
	|| (rate_24m !=  nullptr && rate_24m->has_operation())
	|| (rate_2m !=  nullptr && rate_2m->has_operation())
	|| (rate_36m !=  nullptr && rate_36m->has_operation())
	|| (rate_48m !=  nullptr && rate_48m->has_operation())
	|| (rate_54m !=  nullptr && rate_54m->has_operation())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_operation())
	|| (rate_6m !=  nullptr && rate_6m->has_operation())
	|| (rate_9m !=  nullptr && rate_9m->has_operation());
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RATE_11M")
    {
        if(rate_11m == nullptr)
        {
            rate_11m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE11M>();
        }
        return rate_11m;
    }

    if(child_yang_name == "RATE_12M")
    {
        if(rate_12m == nullptr)
        {
            rate_12m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE12M>();
        }
        return rate_12m;
    }

    if(child_yang_name == "RATE_18M")
    {
        if(rate_18m == nullptr)
        {
            rate_18m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE18M>();
        }
        return rate_18m;
    }

    if(child_yang_name == "RATE_1M")
    {
        if(rate_1m == nullptr)
        {
            rate_1m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE1M>();
        }
        return rate_1m;
    }

    if(child_yang_name == "RATE_24M")
    {
        if(rate_24m == nullptr)
        {
            rate_24m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE24M>();
        }
        return rate_24m;
    }

    if(child_yang_name == "RATE_2M")
    {
        if(rate_2m == nullptr)
        {
            rate_2m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE2M>();
        }
        return rate_2m;
    }

    if(child_yang_name == "RATE_36M")
    {
        if(rate_36m == nullptr)
        {
            rate_36m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE36M>();
        }
        return rate_36m;
    }

    if(child_yang_name == "RATE_48M")
    {
        if(rate_48m == nullptr)
        {
            rate_48m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE48M>();
        }
        return rate_48m;
    }

    if(child_yang_name == "RATE_54M")
    {
        if(rate_54m == nullptr)
        {
            rate_54m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE54M>();
        }
        return rate_54m;
    }

    if(child_yang_name == "RATE_5_5M")
    {
        if(rate_5_5m == nullptr)
        {
            rate_5_5m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE55M>();
        }
        return rate_5_5m;
    }

    if(child_yang_name == "RATE_6M")
    {
        if(rate_6m == nullptr)
        {
            rate_6m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE6M>();
        }
        return rate_6m;
    }

    if(child_yang_name == "RATE_9M")
    {
        if(rate_9m == nullptr)
        {
            rate_9m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE9M>();
        }
        return rate_9m;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_11m != nullptr)
    {
        children["RATE_11M"] = rate_11m;
    }

    if(rate_12m != nullptr)
    {
        children["RATE_12M"] = rate_12m;
    }

    if(rate_18m != nullptr)
    {
        children["RATE_18M"] = rate_18m;
    }

    if(rate_1m != nullptr)
    {
        children["RATE_1M"] = rate_1m;
    }

    if(rate_24m != nullptr)
    {
        children["RATE_24M"] = rate_24m;
    }

    if(rate_2m != nullptr)
    {
        children["RATE_2M"] = rate_2m;
    }

    if(rate_36m != nullptr)
    {
        children["RATE_36M"] = rate_36m;
    }

    if(rate_48m != nullptr)
    {
        children["RATE_48M"] = rate_48m;
    }

    if(rate_54m != nullptr)
    {
        children["RATE_54M"] = rate_54m;
    }

    if(rate_5_5m != nullptr)
    {
        children["RATE_5_5M"] = rate_5_5m;
    }

    if(rate_6m != nullptr)
    {
        children["RATE_6M"] = rate_6m;
    }

    if(rate_9m != nullptr)
    {
        children["RATE_9M"] = rate_9m;
    }

    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_24ghz::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RATE_11M" || name == "RATE_12M" || name == "RATE_18M" || name == "RATE_1M" || name == "RATE_24M" || name == "RATE_2M" || name == "RATE_36M" || name == "RATE_48M" || name == "RATE_54M" || name == "RATE_5_5M" || name == "RATE_6M" || name == "RATE_9M")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::RATE11M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_11M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::~RATE11M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_11M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::RATE12M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_12M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::~RATE12M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_12M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::RATE18M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_18M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::~RATE18M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_18M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::RATE1M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_1M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::~RATE1M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_1M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::RATE24M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_24M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::~RATE24M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_24M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::RATE2M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_2M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::~RATE2M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_2M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::RATE36M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_36M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::~RATE36M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_36M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::RATE48M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_48M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::~RATE48M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_48M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::RATE54M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_54M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::~RATE54M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_54M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::RATE55M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_5_5M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::~RATE55M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_5_5M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::RATE6M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_6M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::~RATE6M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_6M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::RATE9M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_9M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::~RATE9M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_9M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_49ghz::Y_49ghz()
    :
    rrm(std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm>())
{
    rrm->parent = this;

    yang_name = "_49ghz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_49ghz::~Y_49ghz()
{
}

bool Native::Ap::Dot11::Y_49ghz::has_data() const
{
    return (rrm !=  nullptr && rrm->has_data());
}

bool Native::Ap::Dot11::Y_49ghz::has_operation() const
{
    return is_set(yfilter)
	|| (rrm !=  nullptr && rrm->has_operation());
}

std::string Native::Ap::Dot11::Y_49ghz::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_49ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_49ghz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_49ghz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rrm")
    {
        if(rrm == nullptr)
        {
            rrm = std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm>();
        }
        return rrm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rrm != nullptr)
    {
        children["rrm"] = rrm;
    }

    return children;
}

void Native::Ap::Dot11::Y_49ghz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_49ghz::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_49ghz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rrm")
        return true;
    return false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::Rrm()
    :
    profile(std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm::Profile>())
{
    profile->parent = this;

    yang_name = "rrm"; yang_parent_name = "_49ghz"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::~Rrm()
{
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_49ghz/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rrm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_49ghz::Rrm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49ghz::Rrm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49ghz::Rrm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Ap::Dot11::Y_49ghz::Rrm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_49ghz::Rrm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::Profile::Profile()
    :
    foreign{YType::uint8, "foreign"}
{

    yang_name = "profile"; yang_parent_name = "rrm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::Profile::~Profile()
{
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::Profile::has_data() const
{
    return foreign.is_set;
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foreign.yfilter);
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_49ghz/rrm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign.is_set || is_set(foreign.yfilter)) leaf_name_data.push_back(foreign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_49ghz::Rrm::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreign")
    {
        foreign = value;
        foreign.value_namespace = name_space;
        foreign.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_49ghz::Rrm::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreign")
    {
        foreign.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Y_5ghz()
    :
    rate(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate>())
{
    rate->parent = this;

    yang_name = "_5ghz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::~Y_5ghz()
{
}

bool Native::Ap::Dot11::Y_5ghz::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Ap::Dot11::Y_5ghz::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Ap::Dot11::Y_5ghz::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5ghz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Ap::Dot11::Y_5ghz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_5ghz::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_5ghz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::Rate()
    :
    rate_11m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE11M>())
	,rate_12m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE12M>())
	,rate_18m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE18M>())
	,rate_1m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE1M>())
	,rate_24m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE24M>())
	,rate_2m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE2M>())
	,rate_36m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE36M>())
	,rate_48m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE48M>())
	,rate_54m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE54M>())
	,rate_5_5m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE55M>())
	,rate_6m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE6M>())
	,rate_9m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE9M>())
{
    rate_11m->parent = this;
    rate_12m->parent = this;
    rate_18m->parent = this;
    rate_1m->parent = this;
    rate_24m->parent = this;
    rate_2m->parent = this;
    rate_36m->parent = this;
    rate_48m->parent = this;
    rate_54m->parent = this;
    rate_5_5m->parent = this;
    rate_6m->parent = this;
    rate_9m->parent = this;

    yang_name = "rate"; yang_parent_name = "_5ghz"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::~Rate()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::has_data() const
{
    return (rate_11m !=  nullptr && rate_11m->has_data())
	|| (rate_12m !=  nullptr && rate_12m->has_data())
	|| (rate_18m !=  nullptr && rate_18m->has_data())
	|| (rate_1m !=  nullptr && rate_1m->has_data())
	|| (rate_24m !=  nullptr && rate_24m->has_data())
	|| (rate_2m !=  nullptr && rate_2m->has_data())
	|| (rate_36m !=  nullptr && rate_36m->has_data())
	|| (rate_48m !=  nullptr && rate_48m->has_data())
	|| (rate_54m !=  nullptr && rate_54m->has_data())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_data())
	|| (rate_6m !=  nullptr && rate_6m->has_data())
	|| (rate_9m !=  nullptr && rate_9m->has_data());
}

bool Native::Ap::Dot11::Y_5ghz::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (rate_11m !=  nullptr && rate_11m->has_operation())
	|| (rate_12m !=  nullptr && rate_12m->has_operation())
	|| (rate_18m !=  nullptr && rate_18m->has_operation())
	|| (rate_1m !=  nullptr && rate_1m->has_operation())
	|| (rate_24m !=  nullptr && rate_24m->has_operation())
	|| (rate_2m !=  nullptr && rate_2m->has_operation())
	|| (rate_36m !=  nullptr && rate_36m->has_operation())
	|| (rate_48m !=  nullptr && rate_48m->has_operation())
	|| (rate_54m !=  nullptr && rate_54m->has_operation())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_operation())
	|| (rate_6m !=  nullptr && rate_6m->has_operation())
	|| (rate_9m !=  nullptr && rate_9m->has_operation());
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RATE_11M")
    {
        if(rate_11m == nullptr)
        {
            rate_11m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE11M>();
        }
        return rate_11m;
    }

    if(child_yang_name == "RATE_12M")
    {
        if(rate_12m == nullptr)
        {
            rate_12m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE12M>();
        }
        return rate_12m;
    }

    if(child_yang_name == "RATE_18M")
    {
        if(rate_18m == nullptr)
        {
            rate_18m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE18M>();
        }
        return rate_18m;
    }

    if(child_yang_name == "RATE_1M")
    {
        if(rate_1m == nullptr)
        {
            rate_1m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE1M>();
        }
        return rate_1m;
    }

    if(child_yang_name == "RATE_24M")
    {
        if(rate_24m == nullptr)
        {
            rate_24m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE24M>();
        }
        return rate_24m;
    }

    if(child_yang_name == "RATE_2M")
    {
        if(rate_2m == nullptr)
        {
            rate_2m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE2M>();
        }
        return rate_2m;
    }

    if(child_yang_name == "RATE_36M")
    {
        if(rate_36m == nullptr)
        {
            rate_36m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE36M>();
        }
        return rate_36m;
    }

    if(child_yang_name == "RATE_48M")
    {
        if(rate_48m == nullptr)
        {
            rate_48m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE48M>();
        }
        return rate_48m;
    }

    if(child_yang_name == "RATE_54M")
    {
        if(rate_54m == nullptr)
        {
            rate_54m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE54M>();
        }
        return rate_54m;
    }

    if(child_yang_name == "RATE_5_5M")
    {
        if(rate_5_5m == nullptr)
        {
            rate_5_5m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE55M>();
        }
        return rate_5_5m;
    }

    if(child_yang_name == "RATE_6M")
    {
        if(rate_6m == nullptr)
        {
            rate_6m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE6M>();
        }
        return rate_6m;
    }

    if(child_yang_name == "RATE_9M")
    {
        if(rate_9m == nullptr)
        {
            rate_9m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE9M>();
        }
        return rate_9m;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_11m != nullptr)
    {
        children["RATE_11M"] = rate_11m;
    }

    if(rate_12m != nullptr)
    {
        children["RATE_12M"] = rate_12m;
    }

    if(rate_18m != nullptr)
    {
        children["RATE_18M"] = rate_18m;
    }

    if(rate_1m != nullptr)
    {
        children["RATE_1M"] = rate_1m;
    }

    if(rate_24m != nullptr)
    {
        children["RATE_24M"] = rate_24m;
    }

    if(rate_2m != nullptr)
    {
        children["RATE_2M"] = rate_2m;
    }

    if(rate_36m != nullptr)
    {
        children["RATE_36M"] = rate_36m;
    }

    if(rate_48m != nullptr)
    {
        children["RATE_48M"] = rate_48m;
    }

    if(rate_54m != nullptr)
    {
        children["RATE_54M"] = rate_54m;
    }

    if(rate_5_5m != nullptr)
    {
        children["RATE_5_5M"] = rate_5_5m;
    }

    if(rate_6m != nullptr)
    {
        children["RATE_6M"] = rate_6m;
    }

    if(rate_9m != nullptr)
    {
        children["RATE_9M"] = rate_9m;
    }

    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_5ghz::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RATE_11M" || name == "RATE_12M" || name == "RATE_18M" || name == "RATE_1M" || name == "RATE_24M" || name == "RATE_2M" || name == "RATE_36M" || name == "RATE_48M" || name == "RATE_54M" || name == "RATE_5_5M" || name == "RATE_6M" || name == "RATE_9M")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::RATE11M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_11M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::~RATE11M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_11M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::RATE12M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_12M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::~RATE12M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_12M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::RATE18M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_18M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::~RATE18M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_18M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::RATE1M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_1M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::~RATE1M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_1M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::RATE24M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_24M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::~RATE24M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_24M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::RATE2M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_2M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::~RATE2M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_2M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::RATE36M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_36M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::~RATE36M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_36M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::RATE48M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_48M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::~RATE48M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_48M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::RATE54M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_54M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::~RATE54M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_54M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::RATE55M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_5_5M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::~RATE55M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_5_5M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::RATE6M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_6M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::~RATE6M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_6M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::RATE9M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_9M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::~RATE9M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_9M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::AirtimeFairness::AirtimeFairness()
{

    yang_name = "airtime-fairness"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Dot11::AirtimeFairness::has_data() const
{
    for (std::size_t index=0; index<policy_name.size(); index++)
    {
        if(policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ap::Dot11::AirtimeFairness::has_operation() const
{
    for (std::size_t index=0; index<policy_name.size(); index++)
    {
        if(policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ap::Dot11::AirtimeFairness::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::AirtimeFairness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-name")
    {
        for(auto const & c : policy_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Dot11::AirtimeFairness::PolicyName>();
        c->parent = this;
        policy_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::Dot11::AirtimeFairness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::AirtimeFairness::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::AirtimeFairness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

Native::Ap::Dot11::AirtimeFairness::PolicyName::PolicyName()
    :
    policy_name{YType::str, "policy-name"},
    policy_id{YType::uint16, "policy-id"}
{

    yang_name = "policy-name"; yang_parent_name = "airtime-fairness"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::AirtimeFairness::PolicyName::~PolicyName()
{
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_data() const
{
    return policy_name.is_set
	|| policy_id.is_set;
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_id.yfilter);
}

std::string Native::Ap::Dot11::AirtimeFairness::PolicyName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/airtime-fairness/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::AirtimeFairness::PolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-name" <<"[policy-name='" <<policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::AirtimeFairness::PolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_id.is_set || is_set(policy_id.yfilter)) leaf_name_data.push_back(policy_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::AirtimeFairness::PolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::AirtimeFairness::PolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::AirtimeFairness::PolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-id")
    {
        policy_id = value;
        policy_id.value_namespace = name_space;
        policy_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::AirtimeFairness::PolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-id")
    {
        policy_id.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "policy-id")
        return true;
    return false;
}

Native::Arp::Arp()
{

    yang_name = "arp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Arp::~Arp()
{
}

bool Native::Arp::has_data() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-arp:arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-entry")
    {
        for(auto const & c : arp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::ArpEntry>();
        c->parent = this;
        arp_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arp_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : access_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-entry" || name == "access-list")
        return true;
    return false;
}

Native::Arp::ArpEntry::ArpEntry()
    :
    ip{YType::str, "ip"},
    hardware_address{YType::str, "hardware-address"},
    arp_type{YType::enumeration, "arp-type"}
{

    yang_name = "arp-entry"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Arp::ArpEntry::~ArpEntry()
{
}

bool Native::Arp::ArpEntry::has_data() const
{
    return ip.is_set
	|| hardware_address.is_set
	|| arp_type.is_set;
}

bool Native::Arp::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(arp_type.yfilter);
}

std::string Native::Arp::ArpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (arp_type.is_set || is_set(arp_type.yfilter)) leaf_name_data.push_back(arp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-type")
    {
        arp_type = value;
        arp_type.value_namespace = name_space;
        arp_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
    if(value_path == "arp-type")
    {
        arp_type.yfilter = yfilter;
    }
}

bool Native::Arp::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "hardware-address" || name == "arp-type")
        return true;
    return false;
}

Native::Arp::AccessList::AccessList()
    :
    name{YType::str, "name"}
    	,
    permit(std::make_shared<Native::Arp::AccessList::Permit>())
	,deny(std::make_shared<Native::Arp::AccessList::Deny>())
	,default_(std::make_shared<Native::Arp::AccessList::Default_>())
	,no(std::make_shared<Native::Arp::AccessList::No>())
{
    permit->parent = this;
    deny->parent = this;
    default_->parent = this;
    no->parent = this;

    yang_name = "access-list"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Arp::AccessList::~AccessList()
{
}

bool Native::Arp::AccessList::has_data() const
{
    return name.is_set
	|| (permit !=  nullptr && permit->has_data())
	|| (deny !=  nullptr && deny->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (no !=  nullptr && no->has_data());
}

bool Native::Arp::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permit !=  nullptr && permit->has_operation())
	|| (deny !=  nullptr && deny->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (no !=  nullptr && no->has_operation());
}

std::string Native::Arp::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Arp::AccessList::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Arp::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Arp::AccessList::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "no")
    {
        if(no == nullptr)
        {
            no = std::make_shared<Native::Arp::AccessList::No>();
        }
        return no;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(no != nullptr)
    {
        children["no"] = no;
    }

    return children;
}

void Native::Arp::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit" || name == "deny" || name == "default" || name == "no" || name == "name")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::Permit::Request>())
	,response(std::make_shared<Native::Arp::AccessList::Permit::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::~Permit()
{
}

bool Native::Arp::AccessList::Permit::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::Permit::Request::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::~Response()
{
}

bool Native::Arp::AccessList::Permit::Response::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Deny()
    :
    ip(std::make_shared<Native::Arp::AccessList::Deny::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::Deny::Request>())
	,response(std::make_shared<Native::Arp::AccessList::Deny::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::~Deny()
{
}

bool Native::Arp::AccessList::Deny::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Deny::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Deny::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Deny::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Deny::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Deny::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Deny::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Deny::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Deny::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Deny::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Deny::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Deny::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Deny::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Deny::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

const Enum::YLeaf Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Mode::enforce_policy {0, "enforce-policy"};
const Enum::YLeaf Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Mode::monitor {1, "monitor"};

const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::all {0, "all"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::dot11a {1, "dot11a"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::dot11bg {2, "dot11bg"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::dot11g {3, "dot11g"};

const Enum::YLeaf Native::Arp::ArpEntry::ArpType::ARPA {0, "ARPA"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SAP {1, "SAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SMDS {2, "SMDS"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SNAP {3, "SNAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_A {4, "SRP-A"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_B {5, "SRP-B"};


}
}

