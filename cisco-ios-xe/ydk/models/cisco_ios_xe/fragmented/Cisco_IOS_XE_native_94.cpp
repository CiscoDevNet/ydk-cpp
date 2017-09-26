
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_94.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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

Native::Profile::Profile()
    :
    flow{YType::empty, "flow"}
{

    yang_name = "profile"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Profile::~Profile()
{
}

bool Native::Profile::has_data() const
{
    return flow.is_set;
}

bool Native::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter);
}

std::string Native::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
}

bool Native::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::PseudowireClass::PseudowireClass()
    :
    name{YType::str, "name"},
    control_word{YType::empty, "Cisco-IOS-XE-l2vpn:control-word"},
    encapsulation{YType::enumeration, "Cisco-IOS-XE-l2vpn:encapsulation"},
    interworking{YType::enumeration, "Cisco-IOS-XE-l2vpn:interworking"},
    sequencing{YType::enumeration, "Cisco-IOS-XE-l2vpn:sequencing"}
    	,
    ip(std::make_shared<Native::PseudowireClass::Ip>())
	,load_balance(std::make_shared<Native::PseudowireClass::LoadBalance>())
	,monitor(std::make_shared<Native::PseudowireClass::Monitor>())
	,preferred_path(std::make_shared<Native::PseudowireClass::PreferredPath>())
	,protocol_l2tpv2(std::make_shared<Native::PseudowireClass::ProtocolL2Tpv2>())
	,protocol_l2tpv3(std::make_shared<Native::PseudowireClass::ProtocolL2Tpv3>())
	,protocol_mpls(std::make_shared<Native::PseudowireClass::ProtocolMpls>())
	,status(nullptr) // presence node
	,switching(std::make_shared<Native::PseudowireClass::Switching>())
{
    ip->parent = this;
    load_balance->parent = this;
    monitor->parent = this;
    preferred_path->parent = this;
    protocol_l2tpv2->parent = this;
    protocol_l2tpv3->parent = this;
    protocol_mpls->parent = this;
    switching->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PseudowireClass::~PseudowireClass()
{
}

bool Native::PseudowireClass::has_data() const
{
    return name.is_set
	|| control_word.is_set
	|| encapsulation.is_set
	|| interworking.is_set
	|| sequencing.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_data())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_data())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (switching !=  nullptr && switching->has_data());
}

bool Native::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_operation())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_operation())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (switching !=  nullptr && switching->has_operation());
}

std::string Native::PseudowireClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PseudowireClass::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PseudowireClass::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::PseudowireClass::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<Native::PseudowireClass::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "protocol-l2tpv2")
    {
        if(protocol_l2tpv2 == nullptr)
        {
            protocol_l2tpv2 = std::make_shared<Native::PseudowireClass::ProtocolL2Tpv2>();
        }
        return protocol_l2tpv2;
    }

    if(child_yang_name == "protocol-l2tpv3")
    {
        if(protocol_l2tpv3 == nullptr)
        {
            protocol_l2tpv3 = std::make_shared<Native::PseudowireClass::ProtocolL2Tpv3>();
        }
        return protocol_l2tpv3;
    }

    if(child_yang_name == "protocol-mpls")
    {
        if(protocol_mpls == nullptr)
        {
            protocol_mpls = std::make_shared<Native::PseudowireClass::ProtocolMpls>();
        }
        return protocol_mpls;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::PseudowireClass::Status>();
        }
        return status;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<Native::PseudowireClass::Switching>();
        }
        return switching;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(protocol_l2tpv2 != nullptr)
    {
        children["protocol-l2tpv2"] = protocol_l2tpv2;
    }

    if(protocol_l2tpv3 != nullptr)
    {
        children["protocol-l2tpv3"] = protocol_l2tpv3;
    }

    if(protocol_mpls != nullptr)
    {
        children["protocol-mpls"] = protocol_mpls;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    return children;
}

void Native::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "load-balance" || name == "monitor" || name == "preferred-path" || name == "protocol-l2tpv2" || name == "protocol-l2tpv3" || name == "protocol-mpls" || name == "status" || name == "switching" || name == "name" || name == "control-word" || name == "encapsulation" || name == "interworking" || name == "sequencing")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Ip()
    :
    protocol{YType::enumeration, "protocol"},
    ttl{YType::uint8, "ttl"}
    	,
    dfbit(std::make_shared<Native::PseudowireClass::Ip::Dfbit>())
	,local(std::make_shared<Native::PseudowireClass::Ip::Local>())
	,pmtu(nullptr) // presence node
	,tos(std::make_shared<Native::PseudowireClass::Ip::Tos>())
{
    dfbit->parent = this;
    local->parent = this;
    tos->parent = this;

    yang_name = "ip"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::~Ip()
{
}

bool Native::PseudowireClass::Ip::has_data() const
{
    return protocol.is_set
	|| ttl.is_set
	|| (dfbit !=  nullptr && dfbit->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (pmtu !=  nullptr && pmtu->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::PseudowireClass::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (dfbit !=  nullptr && dfbit->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (pmtu !=  nullptr && pmtu->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::PseudowireClass::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dfbit")
    {
        if(dfbit == nullptr)
        {
            dfbit = std::make_shared<Native::PseudowireClass::Ip::Dfbit>();
        }
        return dfbit;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::PseudowireClass::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "pmtu")
    {
        if(pmtu == nullptr)
        {
            pmtu = std::make_shared<Native::PseudowireClass::Ip::Pmtu>();
        }
        return pmtu;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::PseudowireClass::Ip::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dfbit != nullptr)
    {
        children["dfbit"] = dfbit;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(pmtu != nullptr)
    {
        children["pmtu"] = pmtu;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Native::PseudowireClass::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dfbit" || name == "local" || name == "pmtu" || name == "tos" || name == "protocol" || name == "ttl")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Dfbit::Dfbit()
    :
    set{YType::empty, "set"}
{

    yang_name = "dfbit"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Dfbit::~Dfbit()
{
}

bool Native::PseudowireClass::Ip::Dfbit::has_data() const
{
    return set.is_set;
}

bool Native::PseudowireClass::Ip::Dfbit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set.yfilter);
}

std::string Native::PseudowireClass::Ip::Dfbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dfbit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Dfbit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set.is_set || is_set(set.yfilter)) leaf_name_data.push_back(set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Dfbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Dfbit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Dfbit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set")
    {
        set = value;
        set.value_namespace = name_space;
        set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Dfbit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set")
    {
        set.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Dfbit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Local()
    :
    interface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Local::~Local()
{
}

bool Native::PseudowireClass::Ip::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::PseudowireClass::Ip::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::PseudowireClass::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::PseudowireClass::Ip::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Ip::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Ip::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Local::Interface::~Interface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::PseudowireClass::Ip::Local::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::PseudowireClass::Ip::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Pmtu::Pmtu()
    :
    max{YType::uint16, "max"}
{

    yang_name = "pmtu"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Pmtu::~Pmtu()
{
}

bool Native::PseudowireClass::Ip::Pmtu::has_data() const
{
    return max.is_set;
}

bool Native::PseudowireClass::Ip::Pmtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::PseudowireClass::Ip::Pmtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmtu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Pmtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Pmtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Pmtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Pmtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Pmtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Pmtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Tos::Tos()
    :
    reflect{YType::empty, "reflect"},
    value_{YType::uint8, "value"}
{

    yang_name = "tos"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Ip::Tos::~Tos()
{
}

bool Native::PseudowireClass::Ip::Tos::has_data() const
{
    return reflect.is_set
	|| value_.is_set;
}

bool Native::PseudowireClass::Ip::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reflect.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::PseudowireClass::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflect.is_set || is_set(reflect.yfilter)) leaf_name_data.push_back(reflect.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reflect")
    {
        reflect = value;
        reflect.value_namespace = name_space;
        reflect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reflect")
    {
        reflect.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reflect" || name == "value")
        return true;
    return false;
}

Native::PseudowireClass::LoadBalance::LoadBalance()
    :
    flow(nullptr) // presence node
{

    yang_name = "load-balance"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::LoadBalance::~LoadBalance()
{
}

bool Native::PseudowireClass::LoadBalance::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::PseudowireClass::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::PseudowireClass::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::PseudowireClass::LoadBalance::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::PseudowireClass::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::PseudowireClass::LoadBalance::Flow::Flow()
    :
    ethernet{YType::enumeration, "ethernet"}
{

    yang_name = "flow"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::LoadBalance::Flow::~Flow()
{
}

bool Native::PseudowireClass::LoadBalance::Flow::has_data() const
{
    return ethernet.is_set;
}

bool Native::PseudowireClass::LoadBalance::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::PseudowireClass::LoadBalance::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::LoadBalance::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::LoadBalance::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::LoadBalance::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::LoadBalance::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::LoadBalance::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::LoadBalance::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Monitor()
    :
    peer(std::make_shared<Native::PseudowireClass::Monitor::Peer>())
{
    peer->parent = this;

    yang_name = "monitor"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::~Monitor()
{
}

bool Native::PseudowireClass::Monitor::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::PseudowireClass::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::PseudowireClass::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::PseudowireClass::Monitor::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::PseudowireClass::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Peer()
    :
    bfd(nullptr) // presence node
{

    yang_name = "peer"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::~Peer()
{
}

bool Native::PseudowireClass::Monitor::Peer::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Bfd()
    :
    local(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local>())
{
    local->parent = this;

    yang_name = "bfd"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::~Bfd()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::Peer::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Local()
    :
    interface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::~Local()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::~Interface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::PseudowireClass::PreferredPath::PreferredPath()
    :
    interface(std::make_shared<Native::PseudowireClass::PreferredPath::Interface>())
	,peer_container(std::make_shared<Native::PseudowireClass::PreferredPath::PeerContainer>())
{
    interface->parent = this;
    peer_container->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::PreferredPath::~PreferredPath()
{
}

bool Native::PseudowireClass::PreferredPath::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data());
}

bool Native::PseudowireClass::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation());
}

std::string Native::PseudowireClass::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::PreferredPath::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::PseudowireClass::PreferredPath::PeerContainer>();
        }
        return peer_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    return children;
}

void Native::PseudowireClass::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "peer-container")
        return true;
    return false;
}

Native::PseudowireClass::PreferredPath::Interface::Interface()
    :
    disable_fallback{YType::empty, "disable-fallback"},
    tunnel{YType::uint64, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"}
{

    yang_name = "interface"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::PreferredPath::Interface::~Interface()
{
}

bool Native::PseudowireClass::PreferredPath::Interface::has_data() const
{
    return disable_fallback.is_set
	|| tunnel.is_set
	|| tunnel_tp.is_set;
}

bool Native::PseudowireClass::PreferredPath::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_fallback.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter);
}

std::string Native::PseudowireClass::PreferredPath::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::PreferredPath::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_fallback.is_set || is_set(disable_fallback.yfilter)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::PreferredPath::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::PreferredPath::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::PreferredPath::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
        disable_fallback.value_namespace = name_space;
        disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::PreferredPath::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-fallback")
    {
        disable_fallback.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::PreferredPath::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-fallback" || name == "Tunnel" || name == "Tunnel-tp")
        return true;
    return false;
}

Native::PseudowireClass::PreferredPath::PeerContainer::PeerContainer()
    :
    disable_fallback{YType::empty, "disable-fallback"},
    peer{YType::str, "peer"}
{

    yang_name = "peer-container"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::PreferredPath::PeerContainer::~PeerContainer()
{
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_data() const
{
    return disable_fallback.is_set
	|| peer.is_set;
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_fallback.yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::PseudowireClass::PreferredPath::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::PreferredPath::PeerContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_fallback.is_set || is_set(disable_fallback.yfilter)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::PreferredPath::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::PreferredPath::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::PreferredPath::PeerContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
        disable_fallback.value_namespace = name_space;
        disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::PreferredPath::PeerContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-fallback")
    {
        disable_fallback.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-fallback" || name == "peer")
        return true;
    return false;
}

Native::PseudowireClass::ProtocolL2Tpv2::ProtocolL2Tpv2()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-l2tpv2"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::ProtocolL2Tpv2::~ProtocolL2Tpv2()
{
}

bool Native::PseudowireClass::ProtocolL2Tpv2::has_data() const
{
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolL2Tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::PseudowireClass::ProtocolL2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::ProtocolL2Tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::ProtocolL2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::ProtocolL2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::ProtocolL2Tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::ProtocolL2Tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::ProtocolL2Tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::PseudowireClass::ProtocolL2Tpv3::ProtocolL2Tpv3()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-l2tpv3"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::ProtocolL2Tpv3::~ProtocolL2Tpv3()
{
}

bool Native::PseudowireClass::ProtocolL2Tpv3::has_data() const
{
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolL2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::PseudowireClass::ProtocolL2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::ProtocolL2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::ProtocolL2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::ProtocolL2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::ProtocolL2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::ProtocolL2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::ProtocolL2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::PseudowireClass::ProtocolMpls::ProtocolMpls()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-mpls"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::ProtocolMpls::~ProtocolMpls()
{
}

bool Native::PseudowireClass::ProtocolMpls::has_data() const
{
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::PseudowireClass::ProtocolMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::ProtocolMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::ProtocolMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::ProtocolMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::ProtocolMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::ProtocolMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::ProtocolMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::PseudowireClass::Status::Status()
    :
    decoupled{YType::empty, "decoupled"}
    	,
    admin_down(std::make_shared<Native::PseudowireClass::Status::AdminDown>())
	,control_plane(std::make_shared<Native::PseudowireClass::Status::ControlPlane>())
	,peer(std::make_shared<Native::PseudowireClass::Status::Peer>())
	,redundancy(std::make_shared<Native::PseudowireClass::Status::Redundancy>())
{
    admin_down->parent = this;
    control_plane->parent = this;
    peer->parent = this;
    redundancy->parent = this;

    yang_name = "status"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Status::~Status()
{
}

bool Native::PseudowireClass::Status::has_data() const
{
    return decoupled.is_set
	|| (admin_down !=  nullptr && admin_down->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::PseudowireClass::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decoupled.yfilter)
	|| (admin_down !=  nullptr && admin_down->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::PseudowireClass::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decoupled.is_set || is_set(decoupled.yfilter)) leaf_name_data.push_back(decoupled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-down")
    {
        if(admin_down == nullptr)
        {
            admin_down = std::make_shared<Native::PseudowireClass::Status::AdminDown>();
        }
        return admin_down;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::PseudowireClass::Status::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::PseudowireClass::Status::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::PseudowireClass::Status::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_down != nullptr)
    {
        children["admin-down"] = admin_down;
    }

    if(control_plane != nullptr)
    {
        children["control-plane"] = control_plane;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::PseudowireClass::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decoupled")
    {
        decoupled = value;
        decoupled.value_namespace = name_space;
        decoupled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decoupled")
    {
        decoupled.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down" || name == "control-plane" || name == "peer" || name == "redundancy" || name == "decoupled")
        return true;
    return false;
}

Native::PseudowireClass::Status::AdminDown::AdminDown()
    :
    disconnect{YType::empty, "disconnect"}
{

    yang_name = "admin-down"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Status::AdminDown::~AdminDown()
{
}

bool Native::PseudowireClass::Status::AdminDown::has_data() const
{
    return disconnect.is_set;
}

bool Native::PseudowireClass::Status::AdminDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disconnect.yfilter);
}

std::string Native::PseudowireClass::Status::AdminDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::AdminDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnect.is_set || is_set(disconnect.yfilter)) leaf_name_data.push_back(disconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::AdminDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::AdminDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::AdminDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disconnect")
    {
        disconnect = value;
        disconnect.value_namespace = name_space;
        disconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::AdminDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disconnect")
    {
        disconnect.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::AdminDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect")
        return true;
    return false;
}

Native::PseudowireClass::Status::ControlPlane::ControlPlane()
    :
    route_watch{YType::empty, "route-watch"}
{

    yang_name = "control-plane"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Status::ControlPlane::~ControlPlane()
{
}

bool Native::PseudowireClass::Status::ControlPlane::has_data() const
{
    return route_watch.is_set;
}

bool Native::PseudowireClass::Status::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_watch.yfilter);
}

std::string Native::PseudowireClass::Status::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_watch.is_set || is_set(route_watch.yfilter)) leaf_name_data.push_back(route_watch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-watch")
    {
        route_watch = value;
        route_watch.value_namespace = name_space;
        route_watch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-watch")
    {
        route_watch.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-watch")
        return true;
    return false;
}

Native::PseudowireClass::Status::Peer::Peer()
    :
    topology(std::make_shared<Native::PseudowireClass::Status::Peer::Topology>())
{
    topology->parent = this;

    yang_name = "peer"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Status::Peer::~Peer()
{
}

bool Native::PseudowireClass::Status::Peer::has_data() const
{
    return (topology !=  nullptr && topology->has_data());
}

bool Native::PseudowireClass::Status::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::PseudowireClass::Status::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::PseudowireClass::Status::Peer::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    return children;
}

void Native::PseudowireClass::Status::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Status::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Status::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Native::PseudowireClass::Status::Peer::Topology::Topology()
    :
    dual_homed{YType::empty, "dual-homed"}
{

    yang_name = "topology"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Status::Peer::Topology::~Topology()
{
}

bool Native::PseudowireClass::Status::Peer::Topology::has_data() const
{
    return dual_homed.is_set;
}

bool Native::PseudowireClass::Status::Peer::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_homed.yfilter);
}

std::string Native::PseudowireClass::Status::Peer::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::Peer::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_homed.is_set || is_set(dual_homed.yfilter)) leaf_name_data.push_back(dual_homed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::Peer::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::Peer::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::Peer::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-homed")
    {
        dual_homed = value;
        dual_homed.value_namespace = name_space;
        dual_homed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::Peer::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-homed")
    {
        dual_homed.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::Peer::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-homed")
        return true;
    return false;
}

Native::PseudowireClass::Status::Redundancy::Redundancy()
    :
    master{YType::empty, "master"}
{

    yang_name = "redundancy"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Status::Redundancy::~Redundancy()
{
}

bool Native::PseudowireClass::Status::Redundancy::has_data() const
{
    return master.is_set;
}

bool Native::PseudowireClass::Status::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter);
}

std::string Native::PseudowireClass::Status::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master")
        return true;
    return false;
}

Native::PseudowireClass::Switching::Switching()
    :
    tlv{YType::empty, "tlv"}
{

    yang_name = "switching"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PseudowireClass::Switching::~Switching()
{
}

bool Native::PseudowireClass::Switching::has_data() const
{
    return tlv.is_set;
}

bool Native::PseudowireClass::Switching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv.yfilter);
}

std::string Native::PseudowireClass::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv.is_set || is_set(tlv.yfilter)) leaf_name_data.push_back(tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PseudowireClass::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv")
    {
        tlv = value;
        tlv.value_namespace = name_space;
        tlv.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv")
    {
        tlv.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Native::Qos::Qos()
    :
    diffservmib{YType::empty, "Cisco-IOS-XE-qos:diffservmib"}
    	,
    account(std::make_shared<Native::Qos::Account>())
	,control_packets(nullptr) // presence node
	,preserve(std::make_shared<Native::Qos::Preserve>())
	,queue_softmax_multiplier(std::make_shared<Native::Qos::QueueSoftmaxMultiplier>())
	,trace(std::make_shared<Native::Qos::Trace>())
{
    account->parent = this;
    preserve->parent = this;
    queue_softmax_multiplier->parent = this;
    trace->parent = this;

    yang_name = "qos"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::~Qos()
{
}

bool Native::Qos::has_data() const
{
    return diffservmib.is_set
	|| (account !=  nullptr && account->has_data())
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (preserve !=  nullptr && preserve->has_data())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmib.yfilter)
	|| (account !=  nullptr && account->has_operation())
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (preserve !=  nullptr && preserve->has_operation())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmib.is_set || is_set(diffservmib.yfilter)) leaf_name_data.push_back(diffservmib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "control-packets")
    {
        if(control_packets == nullptr)
        {
            control_packets = std::make_shared<Native::Qos::ControlPackets>();
        }
        return control_packets;
    }

    if(child_yang_name == "preserve")
    {
        if(preserve == nullptr)
        {
            preserve = std::make_shared<Native::Qos::Preserve>();
        }
        return preserve;
    }

    if(child_yang_name == "queue-softmax-multiplier")
    {
        if(queue_softmax_multiplier == nullptr)
        {
            queue_softmax_multiplier = std::make_shared<Native::Qos::QueueSoftmaxMultiplier>();
        }
        return queue_softmax_multiplier;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Qos::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(control_packets != nullptr)
    {
        children["control-packets"] = control_packets;
    }

    if(preserve != nullptr)
    {
        children["preserve"] = preserve;
    }

    if(queue_softmax_multiplier != nullptr)
    {
        children["queue-softmax-multiplier"] = queue_softmax_multiplier;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    return children;
}

void Native::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffservmib")
    {
        diffservmib = value;
        diffservmib.value_namespace = name_space;
        diffservmib.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffservmib")
    {
        diffservmib.yfilter = yfilter;
    }
}

bool Native::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "control-packets" || name == "preserve" || name == "queue-softmax-multiplier" || name == "trace" || name == "diffservmib")
        return true;
    return false;
}

Native::Qos::Account::Account()
    :
    layer2(std::make_shared<Native::Qos::Account::Layer2>())
	,layer_all(std::make_shared<Native::Qos::Account::LayerAll>())
{
    layer2->parent = this;
    layer_all->parent = this;

    yang_name = "account"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::~Account()
{
}

bool Native::Qos::Account::has_data() const
{
    return (layer2 !=  nullptr && layer2->has_data())
	|| (layer_all !=  nullptr && layer_all->has_data());
}

bool Native::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| (layer2 !=  nullptr && layer2->has_operation())
	|| (layer_all !=  nullptr && layer_all->has_operation());
}

std::string Native::Qos::Account::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Qos::Account::Layer2>();
        }
        return layer2;
    }

    if(child_yang_name == "layer-all")
    {
        if(layer_all == nullptr)
        {
            layer_all = std::make_shared<Native::Qos::Account::LayerAll>();
        }
        return layer_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(layer2 != nullptr)
    {
        children["layer2"] = layer2;
    }

    if(layer_all != nullptr)
    {
        children["layer-all"] = layer_all;
    }

    return children;
}

void Native::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer2" || name == "layer-all")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Layer2()
    :
    encapsulation(std::make_shared<Native::Qos::Account::Layer2::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "layer2"; yang_parent_name = "account"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::Layer2::~Layer2()
{
}

bool Native::Qos::Account::Layer2::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::Qos::Account::Layer2::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::Qos::Account::Layer2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Qos::Account::Layer2::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::Qos::Account::Layer2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::Layer2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::Layer2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Encapsulation()
    :
    arpa{YType::empty, "arpa"},
    dot1q{YType::empty, "dot1q"},
    isl{YType::empty, "isl"}
    	,
    length(nullptr) // presence node
{

    yang_name = "encapsulation"; yang_parent_name = "layer2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::Layer2::Encapsulation::~Encapsulation()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::has_data() const
{
    return arpa.is_set
	|| dot1q.is_set
	|| isl.is_set
	|| (length !=  nullptr && length->has_data());
}

bool Native::Qos::Account::Layer2::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arpa.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(isl.yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpa.is_set || is_set(arpa.yfilter)) leaf_name_data.push_back(arpa.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (isl.is_set || is_set(isl.yfilter)) leaf_name_data.push_back(isl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Qos::Account::Layer2::Encapsulation::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpa")
    {
        arpa = value;
        arpa.value_namespace = name_space;
        arpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isl")
    {
        isl = value;
        isl.value_namespace = name_space;
        isl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpa")
    {
        arpa.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "isl")
    {
        isl.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length" || name == "arpa" || name == "dot1q" || name == "isl")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Length::Length()
    :
    byte_length{YType::int8, "byte-length"}
{

    yang_name = "length"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::Layer2::Encapsulation::Length::~Length()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_data() const
{
    return byte_length.is_set;
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_length.yfilter);
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::Encapsulation::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_length.is_set || is_set(byte_length.yfilter)) leaf_name_data.push_back(byte_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-length")
    {
        byte_length = value;
        byte_length.value_namespace = name_space;
        byte_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-length")
    {
        byte_length.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-length")
        return true;
    return false;
}

Native::Qos::Account::LayerAll::LayerAll()
    :
    encapsulation{YType::empty, "encapsulation"}
{

    yang_name = "layer-all"; yang_parent_name = "account"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::LayerAll::~LayerAll()
{
}

bool Native::Qos::Account::LayerAll::has_data() const
{
    return encapsulation.is_set;
}

bool Native::Qos::Account::LayerAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter);
}

std::string Native::Qos::Account::LayerAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::LayerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::LayerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::LayerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::LayerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::LayerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::LayerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Qos::Account::LayerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::ControlPackets::ControlPackets()
    :
    bpdu_range{YType::empty, "bpdu-range"},
    cdp_vtp{YType::empty, "cdp-vtp"},
    eapol{YType::empty, "eapol"},
    lldp{YType::empty, "lldp"},
    protocol_tunnel{YType::empty, "protocol-tunnel"},
    sstp{YType::empty, "sstp"}
{

    yang_name = "control-packets"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::ControlPackets::~ControlPackets()
{
}

bool Native::Qos::ControlPackets::has_data() const
{
    return bpdu_range.is_set
	|| cdp_vtp.is_set
	|| eapol.is_set
	|| lldp.is_set
	|| protocol_tunnel.is_set
	|| sstp.is_set;
}

bool Native::Qos::ControlPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bpdu_range.yfilter)
	|| ydk::is_set(cdp_vtp.yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| ydk::is_set(lldp.yfilter)
	|| ydk::is_set(protocol_tunnel.yfilter)
	|| ydk::is_set(sstp.yfilter);
}

std::string Native::Qos::ControlPackets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:control-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::ControlPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdu_range.is_set || is_set(bpdu_range.yfilter)) leaf_name_data.push_back(bpdu_range.get_name_leafdata());
    if (cdp_vtp.is_set || is_set(cdp_vtp.yfilter)) leaf_name_data.push_back(cdp_vtp.get_name_leafdata());
    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());
    if (protocol_tunnel.is_set || is_set(protocol_tunnel.yfilter)) leaf_name_data.push_back(protocol_tunnel.get_name_leafdata());
    if (sstp.is_set || is_set(sstp.yfilter)) leaf_name_data.push_back(sstp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::ControlPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::ControlPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range = value;
        bpdu_range.value_namespace = name_space;
        bpdu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp = value;
        cdp_vtp.value_namespace = name_space;
        cdp_vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel = value;
        protocol_tunnel.value_namespace = name_space;
        protocol_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sstp")
    {
        sstp = value;
        sstp.value_namespace = name_space;
        sstp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::ControlPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range.yfilter = yfilter;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp.yfilter = yfilter;
    }
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel.yfilter = yfilter;
    }
    if(value_path == "sstp")
    {
        sstp.yfilter = yfilter;
    }
}

bool Native::Qos::ControlPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu-range" || name == "cdp-vtp" || name == "eapol" || name == "lldp" || name == "protocol-tunnel" || name == "sstp")
        return true;
    return false;
}

Native::Qos::Preserve::Preserve()
    :
    marking(std::make_shared<Native::Qos::Preserve::Marking>())
	,mpls(std::make_shared<Native::Qos::Preserve::Mpls>())
{
    marking->parent = this;
    mpls->parent = this;

    yang_name = "preserve"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Preserve::~Preserve()
{
}

bool Native::Qos::Preserve::has_data() const
{
    return (marking !=  nullptr && marking->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Qos::Preserve::has_operation() const
{
    return is_set(yfilter)
	|| (marking !=  nullptr && marking->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Qos::Preserve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:preserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<Native::Qos::Preserve::Marking>();
        }
        return marking;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Qos::Preserve::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Qos::Preserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Preserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Preserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "marking" || name == "mpls")
        return true;
    return false;
}

Native::Qos::Preserve::Marking::Marking()
    :
    hipriority{YType::empty, "hipriority"}
{

    yang_name = "marking"; yang_parent_name = "preserve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Preserve::Marking::~Marking()
{
}

bool Native::Qos::Preserve::Marking::has_data() const
{
    return hipriority.is_set;
}

bool Native::Qos::Preserve::Marking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hipriority.yfilter);
}

std::string Native::Qos::Preserve::Marking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hipriority.is_set || is_set(hipriority.yfilter)) leaf_name_data.push_back(hipriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hipriority")
    {
        hipriority = value;
        hipriority.value_namespace = name_space;
        hipriority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hipriority")
    {
        hipriority.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hipriority")
        return true;
    return false;
}

Native::Qos::Preserve::Mpls::Mpls()
    :
    exp{YType::empty, "exp"}
{

    yang_name = "mpls"; yang_parent_name = "preserve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Preserve::Mpls::~Mpls()
{
}

bool Native::Qos::Preserve::Mpls::has_data() const
{
    return exp.is_set;
}

bool Native::Qos::Preserve::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter);
}

std::string Native::Qos::Preserve::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp")
        return true;
    return false;
}

Native::Qos::QueueSoftmaxMultiplier::QueueSoftmaxMultiplier()
    :
    value_{YType::int16, "value"}
{

    yang_name = "queue-softmax-multiplier"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::QueueSoftmaxMultiplier::~QueueSoftmaxMultiplier()
{
}

bool Native::Qos::QueueSoftmaxMultiplier::has_data() const
{
    return value_.is_set;
}

bool Native::Qos::QueueSoftmaxMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:queue-softmax-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::QueueSoftmaxMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::QueueSoftmaxMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::QueueSoftmaxMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::QueueSoftmaxMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::QueueSoftmaxMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Qos::QueueSoftmaxMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Qos::Trace::Trace()
    :
    resize(std::make_shared<Native::Qos::Trace::Resize>())
{
    resize->parent = this;

    yang_name = "trace"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Trace::~Trace()
{
}

bool Native::Qos::Trace::has_data() const
{
    return (resize !=  nullptr && resize->has_data());
}

bool Native::Qos::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (resize !=  nullptr && resize->has_operation());
}

std::string Native::Qos::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resize")
    {
        if(resize == nullptr)
        {
            resize = std::make_shared<Native::Qos::Trace::Resize>();
        }
        return resize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resize != nullptr)
    {
        children["resize"] = resize;
    }

    return children;
}

void Native::Qos::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resize")
        return true;
    return false;
}

Native::Qos::Trace::Resize::Resize()
    :
    all{YType::int32, "all"},
    error{YType::int32, "error"},
    event{YType::int32, "event"},
    size{YType::int32, "size"},
    warning{YType::int32, "warning"}
{

    yang_name = "resize"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Trace::Resize::~Resize()
{
}

bool Native::Qos::Trace::Resize::has_data() const
{
    return all.is_set
	|| error.is_set
	|| event.is_set
	|| size.is_set
	|| warning.is_set;
}

bool Native::Qos::Trace::Resize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Qos::Trace::Resize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Trace::Resize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Trace::Resize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Trace::Resize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::Resize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Trace::Resize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Trace::Resize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Qos::Trace::Resize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "error" || name == "event" || name == "size" || name == "warning")
        return true;
    return false;
}

Native::Radius::Radius()
{

    yang_name = "radius"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Radius::~Radius()
{
}

bool Native::Radius::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Radius::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Radius::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Radius::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "server")
        return true;
    return false;
}

Native::Radius::Filter::Filter()
    :
    id{YType::str, "id"},
    match{YType::enumeration, "match"}
{

    yang_name = "filter"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Radius::Filter::~Filter()
{
}

bool Native::Radius::Filter::has_data() const
{
    return id.is_set
	|| match.is_set;
}

bool Native::Radius::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(match.yfilter);
}

std::string Native::Radius::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:filter" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
}

bool Native::Radius::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "match")
        return true;
    return false;
}

Native::Radius::Server::Server()
    :
    id{YType::str, "id"},
    retransmit{YType::uint8, "retransmit"}
    	,
    address(std::make_shared<Native::Radius::Server::Address>())
	,automate_tester(std::make_shared<Native::Radius::Server::AutomateTester>())
	,backoff(std::make_shared<Native::Radius::Server::Backoff>())
	,key(std::make_shared<Native::Radius::Server::Key>())
	,pac(std::make_shared<Native::Radius::Server::Pac>())
{
    address->parent = this;
    automate_tester->parent = this;
    backoff->parent = this;
    key->parent = this;
    pac->parent = this;

    yang_name = "server"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Radius::Server::~Server()
{
}

bool Native::Radius::Server::has_data() const
{
    return id.is_set
	|| retransmit.is_set
	|| (address !=  nullptr && address->has_data())
	|| (automate_tester !=  nullptr && automate_tester->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (pac !=  nullptr && pac->has_data());
}

bool Native::Radius::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (automate_tester !=  nullptr && automate_tester->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (pac !=  nullptr && pac->has_operation());
}

std::string Native::Radius::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Radius::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "automate-tester")
    {
        if(automate_tester == nullptr)
        {
            automate_tester = std::make_shared<Native::Radius::Server::AutomateTester>();
        }
        return automate_tester;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Radius::Server::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Key>();
        }
        return key;
    }

    if(child_yang_name == "pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<Native::Radius::Server::Pac>();
        }
        return pac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(automate_tester != nullptr)
    {
        children["automate-tester"] = automate_tester;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(pac != nullptr)
    {
        children["pac"] = pac;
    }

    return children;
}

void Native::Radius::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
}

bool Native::Radius::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "automate-tester" || name == "backoff" || name == "key" || name == "pac" || name == "id" || name == "retransmit")
        return true;
    return false;
}

Native::Radius::Server::Address::Address()
    :
    ipv4(std::make_shared<Native::Radius::Server::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Address::~Address()
{
}

bool Native::Radius::Server::Address::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Radius::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Radius::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Radius::Server::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Radius::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Radius::Server::Address::Ipv4::Ipv4()
    :
    acct_port{YType::uint16, "acct-port"},
    auth_port{YType::uint16, "auth-port"},
    host{YType::str, "host"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Address::Ipv4::~Ipv4()
{
}

bool Native::Radius::Server::Address::Ipv4::has_data() const
{
    return acct_port.is_set
	|| auth_port.is_set
	|| host.is_set;
}

bool Native::Radius::Server::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Radius::Server::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-port" || name == "auth-port" || name == "host")
        return true;
    return false;
}

Native::Radius::Server::AutomateTester::AutomateTester()
    :
    at_option{YType::enumeration, "at-option"},
    username{YType::str, "username"}
{

    yang_name = "automate-tester"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::AutomateTester::~AutomateTester()
{
}

bool Native::Radius::Server::AutomateTester::has_data() const
{
    return at_option.is_set
	|| username.is_set;
}

bool Native::Radius::Server::AutomateTester::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(at_option.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::Radius::Server::AutomateTester::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "automate-tester";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::AutomateTester::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_option.is_set || is_set(at_option.yfilter)) leaf_name_data.push_back(at_option.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::AutomateTester::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::AutomateTester::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::AutomateTester::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-option")
    {
        at_option = value;
        at_option.value_namespace = name_space;
        at_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::AutomateTester::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-option")
    {
        at_option.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Radius::Server::AutomateTester::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-option" || name == "username")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Backoff()
    :
    exponential(nullptr) // presence node
{

    yang_name = "backoff"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Backoff::~Backoff()
{
}

bool Native::Radius::Server::Backoff::has_data() const
{
    return (exponential !=  nullptr && exponential->has_data());
}

bool Native::Radius::Server::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| (exponential !=  nullptr && exponential->has_operation());
}

std::string Native::Radius::Server::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exponential")
    {
        if(exponential == nullptr)
        {
            exponential = std::make_shared<Native::Radius::Server::Backoff::Exponential>();
        }
        return exponential;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exponential != nullptr)
    {
        children["exponential"] = exponential;
    }

    return children;
}

void Native::Radius::Server::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exponential")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Exponential::Exponential()
    :
    backoff_retry{YType::uint8, "backoff-retry"},
    max_delay{YType::uint8, "max-delay"}
{

    yang_name = "exponential"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Backoff::Exponential::~Exponential()
{
}

bool Native::Radius::Server::Backoff::Exponential::has_data() const
{
    return backoff_retry.is_set
	|| max_delay.is_set;
}

bool Native::Radius::Server::Backoff::Exponential::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_retry.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Radius::Server::Backoff::Exponential::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exponential";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Backoff::Exponential::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_retry.is_set || is_set(backoff_retry.yfilter)) leaf_name_data.push_back(backoff_retry.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Backoff::Exponential::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Backoff::Exponential::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Backoff::Exponential::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-retry")
    {
        backoff_retry = value;
        backoff_retry.value_namespace = name_space;
        backoff_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Backoff::Exponential::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-retry")
    {
        backoff_retry.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Backoff::Exponential::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-retry" || name == "max-delay")
        return true;
    return false;
}

Native::Radius::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Key::~Key()
{
}

bool Native::Radius::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Pac()
    :
    key(std::make_shared<Native::Radius::Server::Pac::Key>())
{
    key->parent = this;

    yang_name = "pac"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Pac::~Pac()
{
}

bool Native::Radius::Server::Pac::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Radius::Server::Pac::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Radius::Server::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Pac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Pac::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Radius::Server::Pac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Pac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Pac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Pac::Key::~Key()
{
}

bool Native::Radius::Server::Pac::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Pac::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Pac::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Pac::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Pac::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Pac::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Pac::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Pac::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Pac::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::RadiusServer::RadiusServer()
    :
    deadtime{YType::uint32, "Cisco-IOS-XE-aaa:deadtime"},
    retransmit{YType::uint8, "Cisco-IOS-XE-aaa:retransmit"},
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
    	,
    dead_criteria(std::make_shared<Native::RadiusServer::DeadCriteria>())
	,key(std::make_shared<Native::RadiusServer::Key>())
	,source_ports(std::make_shared<Native::RadiusServer::SourcePorts>())
	,vsa(std::make_shared<Native::RadiusServer::Vsa>())
{
    dead_criteria->parent = this;
    key->parent = this;
    source_ports->parent = this;
    vsa->parent = this;

    yang_name = "radius-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::~RadiusServer()
{
}

bool Native::RadiusServer::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return deadtime.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (source_ports !=  nullptr && source_ports->has_data())
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::RadiusServer::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (source_ports !=  nullptr && source_ports->has_operation())
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::RadiusServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        for(auto const & c : attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Attribute>();
        c->parent = this;
        attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "dead-criteria")
    {
        if(dead_criteria == nullptr)
        {
            dead_criteria = std::make_shared<Native::RadiusServer::DeadCriteria>();
        }
        return dead_criteria;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Key>();
        }
        return key;
    }

    if(child_yang_name == "source-ports")
    {
        if(source_ports == nullptr)
        {
            source_ports = std::make_shared<Native::RadiusServer::SourcePorts>();
        }
        return source_ports;
    }

    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::RadiusServer::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute)
    {
        children[c->get_segment_path()] = c;
    }

    if(dead_criteria != nullptr)
    {
        children["dead-criteria"] = dead_criteria;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(source_ports != nullptr)
    {
        children["source-ports"] = source_ports;
    }

    if(vsa != nullptr)
    {
        children["vsa"] = vsa;
    }

    return children;
}

void Native::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "dead-criteria" || name == "host" || name == "key" || name == "source-ports" || name == "vsa" || name == "deadtime" || name == "retransmit" || name == "timeout")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attribute()
    :
    number{YType::uint32, "number"},
    send_attribute{YType::enumeration, "send-attribute"}
    	,
    access_request(std::make_shared<Native::RadiusServer::Attribute::AccessRequest>())
	,attri31(std::make_shared<Native::RadiusServer::Attribute::Attri31>())
{
    access_request->parent = this;
    attri31->parent = this;

    yang_name = "attribute"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Attribute::~Attribute()
{
}

bool Native::RadiusServer::Attribute::has_data() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set
	|| (access_request !=  nullptr && access_request->has_data())
	|| (attri31 !=  nullptr && attri31->has_data());
}

bool Native::RadiusServer::Attribute::has_operation() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(send_attribute.yfilter)
	|| (access_request !=  nullptr && access_request->has_operation())
	|| (attri31 !=  nullptr && attri31->has_operation());
}

std::string Native::RadiusServer::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:attribute" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto send_attribute_name_datas = send_attribute.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), send_attribute_name_datas.begin(), send_attribute_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-request")
    {
        if(access_request == nullptr)
        {
            access_request = std::make_shared<Native::RadiusServer::Attribute::AccessRequest>();
        }
        return access_request;
    }

    if(child_yang_name == "attri31")
    {
        if(attri31 == nullptr)
        {
            attri31 = std::make_shared<Native::RadiusServer::Attribute::Attri31>();
        }
        return attri31;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_request != nullptr)
    {
        children["access-request"] = access_request;
    }

    if(attri31 != nullptr)
    {
        children["attri31"] = attri31;
    }

    return children;
}

void Native::RadiusServer::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.append(value);
    }
}

void Native::RadiusServer::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-request" || name == "attri31" || name == "number" || name == "send-attribute")
        return true;
    return false;
}

Native::RadiusServer::Attribute::AccessRequest::AccessRequest()
    :
    include{YType::empty, "include"}
{

    yang_name = "access-request"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::AccessRequest::~AccessRequest()
{
}

bool Native::RadiusServer::Attribute::AccessRequest::has_data() const
{
    return include.is_set;
}

bool Native::RadiusServer::Attribute::AccessRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::RadiusServer::Attribute::AccessRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::AccessRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include.is_set || is_set(include.yfilter)) leaf_name_data.push_back(include.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::AccessRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::AccessRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Attribute::AccessRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include")
    {
        include = value;
        include.value_namespace = name_space;
        include.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::AccessRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::AccessRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31()
{

    yang_name = "attri31"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::~Attri31()
{
}

bool Native::RadiusServer::Attribute::Attri31::has_data() const
{
    for (std::size_t index=0; index<attri31_list.size(); index++)
    {
        if(attri31_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Attribute::Attri31::has_operation() const
{
    for (std::size_t index=0; index<attri31_list.size(); index++)
    {
        if(attri31_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attri31-list")
    {
        for(auto const & c : attri31_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List>();
        c->parent = this;
        attri31_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attri31_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RadiusServer::Attribute::Attri31::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Attribute::Attri31::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Attribute::Attri31::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attri31-list")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::Attri31List()
    :
    calling_station_id{YType::enumeration, "calling-station-id"}
    	,
    id_mac(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>())
	,id_send(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>())
{
    id_mac->parent = this;
    id_send->parent = this;

    yang_name = "attri31-list"; yang_parent_name = "attri31"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::~Attri31List()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_data() const
{
    return calling_station_id.is_set
	|| (id_mac !=  nullptr && id_mac->has_data())
	|| (id_send !=  nullptr && id_send->has_data());
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(calling_station_id.yfilter)
	|| (id_mac !=  nullptr && id_mac->has_operation())
	|| (id_send !=  nullptr && id_send->has_operation());
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31-list" <<"[calling-station-id='" <<calling_station_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calling_station_id.is_set || is_set(calling_station_id.yfilter)) leaf_name_data.push_back(calling_station_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-mac")
    {
        if(id_mac == nullptr)
        {
            id_mac = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>();
        }
        return id_mac;
    }

    if(child_yang_name == "id-send")
    {
        if(id_send == nullptr)
        {
            id_send = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>();
        }
        return id_send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id_mac != nullptr)
    {
        children["id-mac"] = id_mac;
    }

    if(id_send != nullptr)
    {
        children["id-send"] = id_send;
    }

    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id = value;
        calling_station_id.value_namespace = name_space;
        calling_station_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-mac" || name == "id-send" || name == "calling-station-id")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::IdMac()
    :
    format{YType::enumeration, "format"},
    lu_case{YType::enumeration, "lu-case"}
{

    yang_name = "id-mac"; yang_parent_name = "attri31-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::~IdMac()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_data() const
{
    return format.is_set
	|| lu_case.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(lu_case.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (lu_case.is_set || is_set(lu_case.yfilter)) leaf_name_data.push_back(lu_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lu-case")
    {
        lu_case = value;
        lu_case.value_namespace = name_space;
        lu_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "lu-case")
    {
        lu_case.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "lu-case")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::IdSend()
    :
    mac_only{YType::empty, "mac-only"},
    nas_port_detail{YType::empty, "nas-port-detail"}
{

    yang_name = "id-send"; yang_parent_name = "attri31-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::~IdSend()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_data() const
{
    return mac_only.is_set
	|| nas_port_detail.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_only.yfilter)
	|| ydk::is_set(nas_port_detail.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_only.is_set || is_set(mac_only.yfilter)) leaf_name_data.push_back(mac_only.get_name_leafdata());
    if (nas_port_detail.is_set || is_set(nas_port_detail.yfilter)) leaf_name_data.push_back(nas_port_detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-only")
    {
        mac_only = value;
        mac_only.value_namespace = name_space;
        mac_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port-detail")
    {
        nas_port_detail = value;
        nas_port_detail.value_namespace = name_space;
        nas_port_detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-only")
    {
        mac_only.yfilter = yfilter;
    }
    if(value_path == "nas-port-detail")
    {
        nas_port_detail.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-only" || name == "nas-port-detail")
        return true;
    return false;
}

Native::RadiusServer::DeadCriteria::DeadCriteria()
    :
    time{YType::uint8, "time"},
    tries{YType::uint8, "tries"}
{

    yang_name = "dead-criteria"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::DeadCriteria::~DeadCriteria()
{
}

bool Native::RadiusServer::DeadCriteria::has_data() const
{
    return time.is_set
	|| tries.is_set;
}

bool Native::RadiusServer::DeadCriteria::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(tries.yfilter);
}

std::string Native::RadiusServer::DeadCriteria::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:dead-criteria";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::DeadCriteria::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (tries.is_set || is_set(tries.yfilter)) leaf_name_data.push_back(tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::DeadCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tries")
    {
        tries = value;
        tries.value_namespace = name_space;
        tries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::DeadCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "tries")
    {
        tries.yfilter = yfilter;
    }
}

bool Native::RadiusServer::DeadCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "tries")
        return true;
    return false;
}

Native::RadiusServer::Host::Host()
    :
    id{YType::str, "id"},
    acct_port{YType::uint16, "acct-port"},
    auth_port{YType::uint16, "auth-port"},
    clear_key{YType::str, "clear-key"},
    key{YType::str, "key"},
    retransmit{YType::uint8, "retransmit"},
    timeout{YType::uint16, "timeout"}
    	,
    test(std::make_shared<Native::RadiusServer::Host::Test>())
{
    test->parent = this;

    yang_name = "host"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Host::~Host()
{
}

bool Native::RadiusServer::Host::has_data() const
{
    return id.is_set
	|| acct_port.is_set
	|| auth_port.is_set
	|| clear_key.is_set
	|| key.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::RadiusServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::RadiusServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::RadiusServer::Host::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::RadiusServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "id" || name == "acct-port" || name == "auth-port" || name == "clear-key" || name == "key" || name == "retransmit" || name == "timeout")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Test()
{

    yang_name = "test"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Host::Test::~Test()
{
}

bool Native::RadiusServer::Host::Test::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Host::Test::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Host::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Host::Test::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RadiusServer::Host::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Host::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Host::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Username()
    :
    name{YType::str, "name"}
    	,
    key(std::make_shared<Native::RadiusServer::Host::Test::Username::Key>())
{
    key->parent = this;

    yang_name = "username"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Host::Test::Username::~Username()
{
}

bool Native::RadiusServer::Host::Test::Username::has_data() const
{
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::RadiusServer::Host::Test::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::RadiusServer::Host::Test::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Host::Test::Username::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::RadiusServer::Host::Test::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Key::Key()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "key"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Host::Test::Username::Key::~Key()
{
}

bool Native::RadiusServer::Host::Test::Username::Key::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::RadiusServer::Host::Test::Username::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::RadiusServer::Host::Test::Username::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::Username::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::Username::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::Username::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Host::Test::Username::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::RadiusServer::Key::Key()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "key"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Key::~Key()
{
}

bool Native::RadiusServer::Key::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::RadiusServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::RadiusServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::RadiusServer::SourcePorts::SourcePorts()
    :
    extended{YType::empty, "extended"}
{

    yang_name = "source-ports"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::SourcePorts::~SourcePorts()
{
}

bool Native::RadiusServer::SourcePorts::has_data() const
{
    return extended.is_set;
}

bool Native::RadiusServer::SourcePorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::RadiusServer::SourcePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::SourcePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:source-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::SourcePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::SourcePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::SourcePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::SourcePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::SourcePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::RadiusServer::SourcePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Vsa()
    :
    disallow(std::make_shared<Native::RadiusServer::Vsa::Disallow>())
	,send(nullptr) // presence node
{
    disallow->parent = this;

    yang_name = "vsa"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::~Vsa()
{
}

bool Native::RadiusServer::Vsa::has_data() const
{
    return (disallow !=  nullptr && disallow->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::RadiusServer::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (disallow !=  nullptr && disallow->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::RadiusServer::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disallow")
    {
        if(disallow == nullptr)
        {
            disallow = std::make_shared<Native::RadiusServer::Vsa::Disallow>();
        }
        return disallow;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::RadiusServer::Vsa::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disallow != nullptr)
    {
        children["disallow"] = disallow;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::RadiusServer::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disallow" || name == "send")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Disallow::Disallow()
    :
    unknown{YType::empty, "unknown"}
{

    yang_name = "disallow"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Disallow::~Disallow()
{
}

bool Native::RadiusServer::Vsa::Disallow::has_data() const
{
    return unknown.is_set;
}

bool Native::RadiusServer::Vsa::Disallow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Native::RadiusServer::Vsa::Disallow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Disallow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disallow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Disallow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Disallow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Disallow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Disallow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Disallow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Send()
    :
    accounting(nullptr) // presence node
	,authentication(nullptr) // presence node
	,cisco_nas_port(nullptr) // presence node
{

    yang_name = "send"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::~Send()
{
}

bool Native::RadiusServer::Vsa::Send::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_data());
}

bool Native::RadiusServer::Vsa::Send::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_operation());
}

std::string Native::RadiusServer::Vsa::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::RadiusServer::Vsa::Send::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::RadiusServer::Vsa::Send::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "cisco-nas-port")
    {
        if(cisco_nas_port == nullptr)
        {
            cisco_nas_port = std::make_shared<Native::RadiusServer::Vsa::Send::CiscoNasPort>();
        }
        return cisco_nas_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(cisco_nas_port != nullptr)
    {
        children["cisco-nas-port"] = cisco_nas_port;
    }

    return children;
}

void Native::RadiusServer::Vsa::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "cisco-nas-port")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Accounting::Accounting()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "accounting"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::Accounting::~Accounting()
{
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Send::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Authentication::Authentication()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "authentication"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::Authentication::~Authentication()
{
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Send::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::CiscoNasPort()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "cisco-nas-port"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::~CiscoNasPort()
{
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::CiscoNasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::Redundancy::Redundancy()
    :
    maintenance_mode{YType::empty, "maintenance-mode"},
    mode{YType::enumeration, "mode"}
    	,
    interchassis(std::make_shared<Native::Redundancy::Interchassis>())
	,main_cpu(nullptr) // presence node
	,policy(std::make_shared<Native::Redundancy::Policy>())
	,timer(std::make_shared<Native::Redundancy::Timer>())
{
    interchassis->parent = this;
    policy->parent = this;
    timer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::~Redundancy()
{
}

bool Native::Redundancy::has_data() const
{
    return maintenance_mode.is_set
	|| mode.is_set
	|| (interchassis !=  nullptr && interchassis->has_data())
	|| (main_cpu !=  nullptr && main_cpu->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance_mode.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (interchassis !=  nullptr && interchassis->has_operation())
	|| (main_cpu !=  nullptr && main_cpu->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode.is_set || is_set(maintenance_mode.yfilter)) leaf_name_data.push_back(maintenance_mode.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Redundancy::Interchassis>();
        }
        return interchassis;
    }

    if(child_yang_name == "main-cpu")
    {
        if(main_cpu == nullptr)
        {
            main_cpu = std::make_shared<Native::Redundancy::MainCpu>();
        }
        return main_cpu;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Redundancy::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Redundancy::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    if(main_cpu != nullptr)
    {
        children["main-cpu"] = main_cpu;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode = value;
        maintenance_mode.value_namespace = name_space;
        maintenance_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interchassis" || name == "main-cpu" || name == "policy" || name == "timer" || name == "maintenance-mode" || name == "mode")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Interchassis()
{

    yang_name = "interchassis"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Interchassis::~Interchassis()
{
}

bool Native::Redundancy::Interchassis::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Redundancy::Interchassis::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Redundancy::Interchassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Redundancy::Interchassis::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Redundancy::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Group()
    :
    group_number{YType::uint64, "group-number"}
    	,
    backbone(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>())
	,member(std::make_shared<Native::Redundancy::Interchassis::Group::Member>())
	,monitor(std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>())
{
    backbone->parent = this;
    member->parent = this;
    monitor->parent = this;

    yang_name = "group"; yang_parent_name = "interchassis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Interchassis::Group::~Group()
{
}

bool Native::Redundancy::Interchassis::Group::has_data() const
{
    return group_number.is_set
	|| (backbone !=  nullptr && backbone->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Redundancy::Interchassis::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| (backbone !=  nullptr && backbone->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/interchassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbone")
    {
        if(backbone == nullptr)
        {
            backbone = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>();
        }
        return backbone;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Redundancy::Interchassis::Group::Member>();
        }
        return member;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backbone != nullptr)
    {
        children["backbone"] = backbone;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone" || name == "member" || name == "monitor" || name == "group-number")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Backbone()
    :
    interface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>())
{
    interface->parent = this;

    yang_name = "backbone"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::~Backbone()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::Group::Backbone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backbone"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::~Interface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Member::Member()
    :
    ip{YType::str, "ip"}
{

    yang_name = "member"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Member::~Member()
{
}

bool Native::Redundancy::Interchassis::Group::Member::has_data() const
{
    return ip.is_set;
}

bool Native::Redundancy::Interchassis::Group::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Monitor::Monitor()
    :
    bfd{YType::empty, "bfd"},
    peer{YType::empty, "peer"}
{

    yang_name = "monitor"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Monitor::~Monitor()
{
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_data() const
{
    return bfd.is_set
	|| peer.is_set;
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "peer")
        return true;
    return false;
}

Native::Redundancy::MainCpu::MainCpu()
    :
    auto_sync(std::make_shared<Native::Redundancy::MainCpu::AutoSync>())
	,standby(std::make_shared<Native::Redundancy::MainCpu::Standby>())
{
    auto_sync->parent = this;
    standby->parent = this;

    yang_name = "main-cpu"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::~MainCpu()
{
}

bool Native::Redundancy::MainCpu::has_data() const
{
    return (auto_sync !=  nullptr && auto_sync->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Native::Redundancy::MainCpu::has_operation() const
{
    return is_set(yfilter)
	|| (auto_sync !=  nullptr && auto_sync->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Native::Redundancy::MainCpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-sync")
    {
        if(auto_sync == nullptr)
        {
            auto_sync = std::make_shared<Native::Redundancy::MainCpu::AutoSync>();
        }
        return auto_sync;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Redundancy::MainCpu::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_sync != nullptr)
    {
        children["auto-sync"] = auto_sync;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Native::Redundancy::MainCpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-sync" || name == "standby")
        return true;
    return false;
}

Native::Redundancy::MainCpu::AutoSync::AutoSync()
    :
    bootvar{YType::empty, "bootvar"},
    config_register{YType::empty, "config-register"},
    running_config{YType::empty, "running-config"},
    standard{YType::empty, "standard"}
{

    yang_name = "auto-sync"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::AutoSync::~AutoSync()
{
}

bool Native::Redundancy::MainCpu::AutoSync::has_data() const
{
    return bootvar.is_set
	|| config_register.is_set
	|| running_config.is_set
	|| standard.is_set;
}

bool Native::Redundancy::MainCpu::AutoSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bootvar.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(standard.yfilter);
}

std::string Native::Redundancy::MainCpu::AutoSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::AutoSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::AutoSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootvar.is_set || is_set(bootvar.yfilter)) leaf_name_data.push_back(bootvar.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::AutoSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::AutoSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::AutoSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootvar")
    {
        bootvar = value;
        bootvar.value_namespace = name_space;
        bootvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::AutoSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootvar")
    {
        bootvar.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::AutoSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootvar" || name == "config-register" || name == "running-config" || name == "standard")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Standby()
    :
    console(std::make_shared<Native::Redundancy::MainCpu::Standby::Console>())
	,initialization(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>())
{
    console->parent = this;
    initialization->parent = this;

    yang_name = "standby"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::~Standby()
{
}

bool Native::Redundancy::MainCpu::Standby::has_data() const
{
    return (console !=  nullptr && console->has_data())
	|| (initialization !=  nullptr && initialization->has_data());
}

bool Native::Redundancy::MainCpu::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (console !=  nullptr && console->has_operation())
	|| (initialization !=  nullptr && initialization->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Redundancy::MainCpu::Standby::Console>();
        }
        return console;
    }

    if(child_yang_name == "initialization")
    {
        if(initialization == nullptr)
        {
            initialization = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>();
        }
        return initialization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(initialization != nullptr)
    {
        children["initialization"] = initialization;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console" || name == "initialization")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Console::Console()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "console"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Console::~Console()
{
}

bool Native::Redundancy::MainCpu::Standby::Console::has_data() const
{
    return enable.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Initialization()
    :
    delay(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>())
{
    delay->parent = this;

    yang_name = "initialization"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Initialization::~Initialization()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initialization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::Delay()
    :
    boot_only{YType::empty, "boot-only"},
    second{YType::uint16, "second"}
{

    yang_name = "delay"; yang_parent_name = "initialization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::~Delay()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_data() const
{
    return boot_only.is_set
	|| second.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_only.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/initialization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_only.is_set || is_set(boot_only.yfilter)) leaf_name_data.push_back(boot_only.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-only")
    {
        boot_only = value;
        boot_only.value_namespace = name_space;
        boot_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-only")
    {
        boot_only.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-only" || name == "second")
        return true;
    return false;
}

Native::Redundancy::Policy::Policy()
    :
    config_sync(std::make_shared<Native::Redundancy::Policy::ConfigSync>())
{
    config_sync->parent = this;

    yang_name = "policy"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::~Policy()
{
}

bool Native::Redundancy::Policy::has_data() const
{
    return (config_sync !=  nullptr && config_sync->has_data());
}

bool Native::Redundancy::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (config_sync !=  nullptr && config_sync->has_operation());
}

std::string Native::Redundancy::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-sync")
    {
        if(config_sync == nullptr)
        {
            config_sync = std::make_shared<Native::Redundancy::Policy::ConfigSync>();
        }
        return config_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_sync != nullptr)
    {
        children["config-sync"] = config_sync;
    }

    return children;
}

void Native::Redundancy::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-sync")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::ConfigSync()
    :
    bulk(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>())
	,lbl(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>())
{
    bulk->parent = this;
    lbl->parent = this;

    yang_name = "config-sync"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::~ConfigSync()
{
}

bool Native::Redundancy::Policy::ConfigSync::has_data() const
{
    return (bulk !=  nullptr && bulk->has_data())
	|| (lbl !=  nullptr && lbl->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::has_operation() const
{
    return is_set(yfilter)
	|| (bulk !=  nullptr && bulk->has_operation())
	|| (lbl !=  nullptr && lbl->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk")
    {
        if(bulk == nullptr)
        {
            bulk = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>();
        }
        return bulk;
    }

    if(child_yang_name == "lbl")
    {
        if(lbl == nullptr)
        {
            lbl = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>();
        }
        return lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulk != nullptr)
    {
        children["bulk"] = bulk;
    }

    if(lbl != nullptr)
    {
        children["lbl"] = lbl;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "lbl")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Bulk()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>())
{
    prc->parent = this;

    yang_name = "bulk"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::~Bulk()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "bulk"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/bulk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Lbl()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>())
{
    prc->parent = this;

    yang_name = "lbl"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::~Lbl()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "lbl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Timer::Timer()
    :
    rpso{YType::uint16, "rpso"}
{

    yang_name = "timer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Timer::~Timer()
{
}

bool Native::Redundancy::Timer::has_data() const
{
    return rpso.is_set;
}

bool Native::Redundancy::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpso.yfilter);
}

std::string Native::Redundancy::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpso.is_set || is_set(rpso.yfilter)) leaf_name_data.push_back(rpso.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpso")
    {
        rpso = value;
        rpso.value_namespace = name_space;
        rpso.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpso")
    {
        rpso.yfilter = yfilter;
    }
}

bool Native::Redundancy::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpso")
        return true;
    return false;
}

Native::RemoteManagement::RemoteManagement()
    :
    dmi{YType::empty, "dmi"},
    restful_api{YType::boolean, "restful-api"}
{

    yang_name = "remote-management"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RemoteManagement::~RemoteManagement()
{
}

bool Native::RemoteManagement::has_data() const
{
    return dmi.is_set
	|| restful_api.is_set;
}

bool Native::RemoteManagement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmi.yfilter)
	|| ydk::is_set(restful_api.yfilter);
}

std::string Native::RemoteManagement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RemoteManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RemoteManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmi.is_set || is_set(dmi.yfilter)) leaf_name_data.push_back(dmi.get_name_leafdata());
    if (restful_api.is_set || is_set(restful_api.yfilter)) leaf_name_data.push_back(restful_api.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RemoteManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RemoteManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RemoteManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmi")
    {
        dmi = value;
        dmi.value_namespace = name_space;
        dmi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restful-api")
    {
        restful_api = value;
        restful_api.value_namespace = name_space;
        restful_api.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RemoteManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmi")
    {
        dmi.yfilter = yfilter;
    }
    if(value_path == "restful-api")
    {
        restful_api.yfilter = yfilter;
    }
}

bool Native::RemoteManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmi" || name == "restful-api")
        return true;
    return false;
}

Native::Rep::Rep()
    :
    admin(std::make_shared<Native::Rep::Admin>())
{
    admin->parent = this;

    yang_name = "rep"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rep::~Rep()
{
}

bool Native::Rep::has_data() const
{
    return (admin !=  nullptr && admin->has_data());
}

bool Native::Rep::has_operation() const
{
    return is_set(yfilter)
	|| (admin !=  nullptr && admin->has_operation());
}

std::string Native::Rep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:rep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin")
    {
        if(admin == nullptr)
        {
            admin = std::make_shared<Native::Rep::Admin>();
        }
        return admin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin != nullptr)
    {
        children["admin"] = admin;
    }

    return children;
}

void Native::Rep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin")
        return true;
    return false;
}

Native::Rep::Admin::Admin()
{

    yang_name = "admin"; yang_parent_name = "rep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rep::Admin::~Admin()
{
}

bool Native::Rep::Admin::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rep::Admin::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Rep::Admin::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rep::Admin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rep::Admin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rep::Admin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rep::Admin::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::Admin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Rep::Admin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rep::Admin::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rep::Admin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Rep::Admin::Vlan::Vlan()
    :
    name{YType::uint16, "name"}
{

    yang_name = "vlan"; yang_parent_name = "admin"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rep::Admin::Vlan::~Vlan()
{
}

bool Native::Rep::Admin::Vlan::has_data() const
{
    return name.is_set;
}

bool Native::Rep::Admin::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Rep::Admin::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/admin/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rep::Admin::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rep::Admin::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rep::Admin::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::Admin::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rep::Admin::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rep::Admin::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Rep::Admin::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Rmon::Rmon()
{

    yang_name = "rmon"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rmon::~Rmon()
{
}

bool Native::Rmon::has_data() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rmon::has_operation() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Rmon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        for(auto const & c : alarm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rmon::Alarm>();
        c->parent = this;
        alarm.push_back(c);
        return c;
    }

    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rmon::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Rmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rmon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "event")
        return true;
    return false;
}

Native::Rmon::Alarm::Alarm()
    :
    number{YType::uint16, "number"},
    falling_event{YType::uint16, "falling-event"},
    falling_threshold{YType::int32, "falling-threshold"},
    mib_object{YType::str, "mib-object"},
    owner{YType::str, "owner"},
    rising_event{YType::uint16, "rising-event"},
    rising_threshold{YType::int32, "rising-threshold"},
    sample_interval{YType::uint32, "sample-interval"},
    test_mode{YType::enumeration, "test-mode"}
{

    yang_name = "alarm"; yang_parent_name = "rmon"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rmon::Alarm::~Alarm()
{
}

bool Native::Rmon::Alarm::has_data() const
{
    return number.is_set
	|| falling_event.is_set
	|| falling_threshold.is_set
	|| mib_object.is_set
	|| owner.is_set
	|| rising_event.is_set
	|| rising_threshold.is_set
	|| sample_interval.is_set
	|| test_mode.is_set;
}

bool Native::Rmon::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(falling_event.yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(mib_object.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(rising_event.yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(test_mode.yfilter);
}

std::string Native::Rmon::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (falling_event.is_set || is_set(falling_event.yfilter)) leaf_name_data.push_back(falling_event.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (mib_object.is_set || is_set(mib_object.yfilter)) leaf_name_data.push_back(mib_object.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (rising_event.is_set || is_set(rising_event.yfilter)) leaf_name_data.push_back(rising_event.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rmon::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-event")
    {
        falling_event = value;
        falling_event.value_namespace = name_space;
        falling_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-object")
    {
        mib_object = value;
        mib_object.value_namespace = name_space;
        mib_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-event")
    {
        rising_event = value;
        rising_event.value_namespace = name_space;
        rising_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "falling-event")
    {
        falling_event.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "mib-object")
    {
        mib_object.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "rising-event")
    {
        rising_event.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
}

bool Native::Rmon::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "falling-event" || name == "falling-threshold" || name == "mib-object" || name == "owner" || name == "rising-event" || name == "rising-threshold" || name == "sample-interval" || name == "test-mode")
        return true;
    return false;
}

Native::Rmon::Event::Event()
    :
    number{YType::uint16, "number"}
    	,
    log(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "rmon"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rmon::Event::~Event()
{
}

bool Native::Rmon::Event::has_data() const
{
    return number.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Rmon::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Rmon::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Rmon::Event::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Rmon::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Rmon::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "number")
        return true;
    return false;
}

Native::Rmon::Event::Log::Log()
    :
    description{YType::str, "description"},
    owner{YType::str, "owner"},
    trap{YType::str, "trap"}
{

    yang_name = "log"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Rmon::Event::Log::~Log()
{
}

bool Native::Rmon::Event::Log::has_data() const
{
    return description.is_set
	|| owner.is_set
	|| trap.is_set;
}

bool Native::Rmon::Event::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Rmon::Event::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Event::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::Event::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Event::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rmon::Event::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Event::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Rmon::Event::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "owner" || name == "trap")
        return true;
    return false;
}

Native::RouteMap::RouteMap()
    :
    name{YType::str, "name"}
{

    yang_name = "route-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RouteMap::~RouteMap()
{
}

bool Native::RouteMap::has_data() const
{
    for (std::size_t index=0; index<route_map_seq.size(); index++)
    {
        if(route_map_seq[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<route_map_seq.size(); index++)
    {
        if(route_map_seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-map-seq")
    {
        for(auto const & c : route_map_seq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq>();
        c->parent = this;
        route_map_seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_map_seq)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map-seq" || name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::RouteMapSeq()
    :
    ordering_seq{YType::str, "ordering-seq"},
    description{YType::str, "description"},
    operation_{YType::enumeration, "operation"},
    sequence{YType::uint16, "sequence"}
    	,
    match(std::make_shared<Native::RouteMap::RouteMapSeq::Match>())
	,set(std::make_shared<Native::RouteMap::RouteMapSeq::Set>())
{
    match->parent = this;
    set->parent = this;

    yang_name = "route-map-seq"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::~RouteMapSeq()
{
}

bool Native::RouteMap::RouteMapSeq::has_data() const
{
    return ordering_seq.is_set
	|| description.is_set
	|| operation_.is_set
	|| sequence.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::RouteMap::RouteMapSeq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_seq.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-route-map:route-map-seq" <<"[ordering-seq='" <<ordering_seq <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_seq.is_set || is_set(ordering_seq.yfilter)) leaf_name_data.push_back(ordering_seq.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::RouteMap::RouteMapSeq::Match>();
        }
        return match;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::RouteMap::RouteMapSeq::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-seq")
    {
        ordering_seq = value;
        ordering_seq.value_namespace = name_space;
        ordering_seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-seq")
    {
        ordering_seq.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "set" || name == "ordering-seq" || name == "description" || name == "operation" || name == "sequence")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Match()
    :
    mpls_label{YType::empty, "mpls-label"},
    track{YType::uint16, "track"}
    	,
    additional_paths(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths>())
	,as_path(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AsPath>())
	,clns(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Clns>())
	,community(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Community>())
	,extcommunity(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Extcommunity>())
	,interface(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Interface>())
	,ip(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip>())
	,ipv6(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6>())
	,length(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length>())
	,local_preference(std::make_shared<Native::RouteMap::RouteMapSeq::Match::LocalPreference>())
	,mdt_group(std::make_shared<Native::RouteMap::RouteMapSeq::Match::MdtGroup>())
	,metric(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Metric>())
	,policy_list(std::make_shared<Native::RouteMap::RouteMapSeq::Match::PolicyList>())
	,route_type(std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType>())
	,rpki(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Rpki>())
	,source_protocol(nullptr) // presence node
	,tag(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag>())
{
    additional_paths->parent = this;
    as_path->parent = this;
    clns->parent = this;
    community->parent = this;
    extcommunity->parent = this;
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    length->parent = this;
    local_preference->parent = this;
    mdt_group->parent = this;
    metric->parent = this;
    policy_list->parent = this;
    route_type->parent = this;
    rpki->parent = this;
    tag->parent = this;

    yang_name = "match"; yang_parent_name = "route-map-seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::~Match()
{
}

bool Native::RouteMap::RouteMapSeq::Match::has_data() const
{
    return mpls_label.is_set
	|| track.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (local_preference !=  nullptr && local_preference->has_data())
	|| (mdt_group !=  nullptr && mdt_group->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (policy_list !=  nullptr && policy_list->has_data())
	|| (route_type !=  nullptr && route_type->has_data())
	|| (rpki !=  nullptr && rpki->has_data())
	|| (source_protocol !=  nullptr && source_protocol->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(track.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (local_preference !=  nullptr && local_preference->has_operation())
	|| (mdt_group !=  nullptr && mdt_group->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (policy_list !=  nullptr && policy_list->has_operation())
	|| (route_type !=  nullptr && route_type->has_operation())
	|| (rpki !=  nullptr && rpki->has_operation())
	|| (source_protocol !=  nullptr && source_protocol->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Community>();
        }
        return community;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length>();
        }
        return length;
    }

    if(child_yang_name == "local-preference")
    {
        if(local_preference == nullptr)
        {
            local_preference = std::make_shared<Native::RouteMap::RouteMapSeq::Match::LocalPreference>();
        }
        return local_preference;
    }

    if(child_yang_name == "mdt-group")
    {
        if(mdt_group == nullptr)
        {
            mdt_group = std::make_shared<Native::RouteMap::RouteMapSeq::Match::MdtGroup>();
        }
        return mdt_group;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "policy-list")
    {
        if(policy_list == nullptr)
        {
            policy_list = std::make_shared<Native::RouteMap::RouteMapSeq::Match::PolicyList>();
        }
        return policy_list;
    }

    if(child_yang_name == "route-type")
    {
        if(route_type == nullptr)
        {
            route_type = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType>();
        }
        return route_type;
    }

    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Rpki>();
        }
        return rpki;
    }

    if(child_yang_name == "source-protocol")
    {
        if(source_protocol == nullptr)
        {
            source_protocol = std::make_shared<Native::RouteMap::RouteMapSeq::Match::SourceProtocol>();
        }
        return source_protocol;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(extcommunity != nullptr)
    {
        children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(local_preference != nullptr)
    {
        children["local-preference"] = local_preference;
    }

    if(mdt_group != nullptr)
    {
        children["mdt-group"] = mdt_group;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(policy_list != nullptr)
    {
        children["policy-list"] = policy_list;
    }

    if(route_type != nullptr)
    {
        children["route-type"] = route_type;
    }

    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    if(source_protocol != nullptr)
    {
        children["source-protocol"] = source_protocol;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "as-path" || name == "clns" || name == "community" || name == "extcommunity" || name == "interface" || name == "ip" || name == "ipv6" || name == "length" || name == "local-preference" || name == "mdt-group" || name == "metric" || name == "policy-list" || name == "route-type" || name == "rpki" || name == "source-protocol" || name == "tag" || name == "mpls-label" || name == "track")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdditionalPaths()
    :
    advertise_set(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet>())
{
    advertise_set->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_data() const
{
    return (advertise_set !=  nullptr && advertise_set->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (advertise_set !=  nullptr && advertise_set->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-set")
    {
        if(advertise_set == nullptr)
        {
            advertise_set = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet>();
        }
        return advertise_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_set != nullptr)
    {
        children["advertise-set"] = advertise_set;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-set")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::AdvertiseSet()
    :
    all(nullptr) // presence node
	,best(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best>())
	,best_range(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>())
	,group_best(nullptr) // presence node
{
    best->parent = this;
    best_range->parent = this;

    yang_name = "advertise-set"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::~AdvertiseSet()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_range !=  nullptr && best_range->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_range !=  nullptr && best_range->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-range")
    {
        if(best_range == nullptr)
        {
            best_range = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>();
        }
        return best_range;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_range != nullptr)
    {
        children["best-range"] = best_range;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "best-range" || name == "group-best")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::All()
    :
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
    	,
    group_best(nullptr) // presence node
{

    yang_name = "all"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::~All()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_data() const
{
    return best.is_set
	|| best_range.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::GroupBest()
    :
    best{YType::empty, "best"},
    best_range{YType::empty, "best-range"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_data() const
{
    return best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::Best()
{

    yang_name = "best"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::~Best()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::BestRange()
    :
    best_range{YType::uint8, "best-range"},
    all{YType::empty, "all"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_data() const
{
    return best_range.is_set
	|| all.is_set
	|| group_best.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[best-range='" <<best_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range" || name == "all" || name == "group-best")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::BestRange()
{

    yang_name = "best-range"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_data() const
{
    for (std::size_t index=0; index<adv_path.size(); index++)
    {
        if(adv_path[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_operation() const
{
    for (std::size_t index=0; index<adv_path.size(); index++)
    {
        if(adv_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adv-path")
    {
        for(auto const & c : adv_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath>();
        c->parent = this;
        adv_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adv_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-path")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::AdvPath()
    :
    adv_path{YType::uint8, "adv-path"},
    adv_path0{YType::uint8, "adv-path0"}
{

    yang_name = "adv-path"; yang_parent_name = "best-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::~AdvPath()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_data() const
{
    return adv_path.is_set
	|| adv_path0.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_path.yfilter)
	|| ydk::is_set(adv_path0.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-path" <<"[adv-path='" <<adv_path <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_path.is_set || is_set(adv_path.yfilter)) leaf_name_data.push_back(adv_path.get_name_leafdata());
    if (adv_path0.is_set || is_set(adv_path0.yfilter)) leaf_name_data.push_back(adv_path0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-path")
    {
        adv_path = value;
        adv_path.value_namespace = name_space;
        adv_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-path0")
    {
        adv_path0 = value;
        adv_path0.value_namespace = name_space;
        adv_path0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-path")
    {
        adv_path.yfilter = yfilter;
    }
    if(value_path == "adv-path0")
    {
        adv_path0.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-path" || name == "adv-path0")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
{

    yang_name = "group-best"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AsPath::AsPath()
    :
    access_list{YType::uint16, "access-list"}
{

    yang_name = "as-path"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Clns::Clns()
    :
    name{YType::str, "name"}
{

    yang_name = "clns"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Community::Community()
    :
    name{YType::str, "name"}
{

    yang_name = "community"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Community::~Community()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Extcommunity::Extcommunity()
    :
    name{YType::str, "name"}
{

    yang_name = "extcommunity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Extcommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Extcommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Interface::Interface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "interface"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_data() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Ip()
    :
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Address>())
	,flowspec(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::NextHop>())
	,redistribution_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource>())
	,route_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource>())
{
    address->parent = this;
    flowspec->parent = this;
    next_hop->parent = this;
    redistribution_source->parent = this;
    route_source->parent = this;

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (redistribution_source !=  nullptr && redistribution_source->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (redistribution_source !=  nullptr && redistribution_source->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "redistribution-source")
    {
        if(redistribution_source == nullptr)
        {
            redistribution_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource>();
        }
        return redistribution_source;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(redistribution_source != nullptr)
    {
        children["redistribution-source"] = redistribution_source;
    }

    if(route_source != nullptr)
    {
        children["route-source"] = route_source;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "flowspec" || name == "next-hop" || name == "redistribution-source" || name == "route-source")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx>())
	,src_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;
    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_data() const
{
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_operation() const
{
    return is_set(yfilter)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_pfx != nullptr)
    {
        children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        children["src-pfx"] = src_pfx;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-pfx" || name == "src-pfx")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::DestPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "dest-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::~DestPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::SrcPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "src-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::~SrcPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::NextHop()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "next-hop"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::RedistributionSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "redistribution-source"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::~RedistributionSource()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::RouteSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "route-source"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::~RouteSource()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Ipv6()
    :
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Address>())
	,flowspec(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop>())
	,route_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource>())
{
    address->parent = this;
    flowspec->parent = this;
    next_hop->parent = this;
    route_source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(route_source != nullptr)
    {
        children["route-source"] = route_source;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "flowspec" || name == "next-hop" || name == "route-source")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx>())
	,src_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;
    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::has_data() const
{
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::has_operation() const
{
    return is_set(yfilter)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_pfx != nullptr)
    {
        children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        children["src-pfx"] = src_pfx;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-pfx" || name == "src-pfx")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::DestPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "dest-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::~DestPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::SrcPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "src-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::~SrcPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::NextHop()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "next-hop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::RouteSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "route-source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::~RouteSource()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Length::Length()
{

    yang_name = "length"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Length::~Length()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Length::has_data() const
{
    for (std::size_t index=0; index<lengths.size(); index++)
    {
        if(lengths[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Length::has_operation() const
{
    for (std::size_t index=0; index<lengths.size(); index++)
    {
        if(lengths[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lengths")
    {
        for(auto const & c : lengths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length::Lengths>();
        c->parent = this;
        lengths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lengths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lengths")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Length::Lengths::Lengths()
    :
    min_len{YType::uint32, "min-len"},
    max_len{YType::uint32, "max-len"}
{

    yang_name = "lengths"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Length::Lengths::~Lengths()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Length::Lengths::has_data() const
{
    return min_len.is_set
	|| max_len.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Length::Lengths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_len.yfilter)
	|| ydk::is_set(max_len.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lengths" <<"[min-len='" <<min_len <<"']" <<"[max-len='" <<max_len <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_len.is_set || is_set(min_len.yfilter)) leaf_name_data.push_back(min_len.get_name_leafdata());
    if (max_len.is_set || is_set(max_len.yfilter)) leaf_name_data.push_back(max_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Length::Lengths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-len")
    {
        min_len = value;
        min_len.value_namespace = name_space;
        min_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-len")
    {
        max_len = value;
        max_len.value_namespace = name_space;
        max_len.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Length::Lengths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-len")
    {
        min_len.yfilter = yfilter;
    }
    if(value_path == "max-len")
    {
        max_len.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Length::Lengths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-len" || name == "max-len")
        return true;
    return false;
}

const Enum::YLeaf Native::PseudowireClass::Encapsulation::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::PseudowireClass::Encapsulation::l2tpv3 {1, "l2tpv3"};
const Enum::YLeaf Native::PseudowireClass::Encapsulation::mpls {2, "mpls"};
const Enum::YLeaf Native::PseudowireClass::Encapsulation::udp {3, "udp"};

const Enum::YLeaf Native::PseudowireClass::Interworking::ethernet {0, "ethernet"};
const Enum::YLeaf Native::PseudowireClass::Interworking::ip {1, "ip"};
const Enum::YLeaf Native::PseudowireClass::Interworking::vlan {2, "vlan"};

const Enum::YLeaf Native::PseudowireClass::Sequencing::both {0, "both"};
const Enum::YLeaf Native::PseudowireClass::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::PseudowireClass::Sequencing::resync {2, "resync"};
const Enum::YLeaf Native::PseudowireClass::Sequencing::transmit {3, "transmit"};

const Enum::YLeaf Native::PseudowireClass::Ip::Protocol::l2tp {0, "l2tp"};
const Enum::YLeaf Native::PseudowireClass::Ip::Protocol::uti {1, "uti"};

const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::Ethernet::dst_mac {0, "dst-mac"};
const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::Ethernet::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::Ethernet::src_mac {2, "src-mac"};

const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv2::Protocol::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv2::Protocol::none {1, "none"};

const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv3::Protocol::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv3::Protocol::l2tpv3ietf {1, "l2tpv3ietf"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv3::Protocol::none {2, "none"};

const Enum::YLeaf Native::PseudowireClass::ProtocolMpls::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::PseudowireClass::ProtocolMpls::Protocol::none {1, "none"};

const Enum::YLeaf Native::Radius::Filter::Match::match_all {0, "match-all"};
const Enum::YLeaf Native::Radius::Filter::Match::match_any {1, "match-any"};

const Enum::YLeaf Native::Radius::Server::AutomateTester::AtOption::probe_on {0, "probe-on"};

const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_5 {1, "5"};

const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::on_for_login_auth {0, "on-for-login-auth"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::include_in_access_req {1, "include-in-access-req"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::support_multiple {2, "support-multiple"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::mac {0, "mac"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::send {1, "send"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format::ietf {0, "ietf"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::lower_case {0, "lower-case"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::upper_case {1, "upper-case"};

const Enum::YLeaf Native::RadiusServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Redundancy::Mode::rpr {0, "rpr"};
const Enum::YLeaf Native::Redundancy::Mode::rpr_plus {1, "rpr-plus"};
const Enum::YLeaf Native::Redundancy::Mode::sso {2, "sso"};
const Enum::YLeaf Native::Redundancy::Mode::none {3, "none"};

const Enum::YLeaf Native::Rmon::Alarm::TestMode::absolute {0, "absolute"};
const Enum::YLeaf Native::Rmon::Alarm::TestMode::delta {1, "delta"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Operation_::deny {0, "deny"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Operation_::permit {1, "permit"};


}
}

