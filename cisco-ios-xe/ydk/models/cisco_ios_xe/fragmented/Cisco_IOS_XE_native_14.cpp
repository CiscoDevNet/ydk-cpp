
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_15.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Vlan::Configuration::Ip::Ip()
    :
    flow(std::make_shared<Native::Vlan::Configuration::Ip::Flow>())
{
    flow->parent = this;

    yang_name = "ip"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Ip::~Ip()
{
}

bool Native::Vlan::Configuration::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Vlan::Configuration::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Vlan::Configuration::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Vlan::Configuration::Ip::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    return _children;
}

void Native::Vlan::Configuration::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Flow()
    :
    monitor(this, {"flow_monitor"})
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Ip::Flow::~Flow()
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vlan::Configuration::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto ent_ = std::make_shared<Native::Vlan::Configuration::Ip::Flow::Monitor>();
        ent_->parent = this;
        monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vlan::Configuration::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::Monitor()
    :
    flow_monitor{YType::str, "flow-monitor"},
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return flow_monitor.is_set
	|| input.is_set
	|| output.is_set;
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_monitor.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    ADD_KEY_TOKEN(flow_monitor, "flow-monitor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_monitor.is_set || is_set(flow_monitor.yfilter)) leaf_name_data.push_back(flow_monitor.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor = value;
        flow_monitor.value_namespace = name_space;
        flow_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Ipv6()
    :
    nd(std::make_shared<Native::Vlan::Configuration::Ipv6::Nd>())
    , dhcp(std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>())
{
    nd->parent = this;
    dhcp->parent = this;

    yang_name = "ipv6"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Ipv6::~Ipv6()
{
}

bool Native::Vlan::Configuration::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (nd !=  nullptr && nd->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Vlan::Configuration::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (nd !=  nullptr && nd->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Vlan::Configuration::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Vlan::Configuration::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nd" || name == "dhcp")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Nd::Nd()
    :
    suppress(nullptr) // presence node
{

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Ipv6::Nd::~Nd()
{
}

bool Native::Vlan::Configuration::Ipv6::Nd::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Vlan::Configuration::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Vlan::Configuration::Ipv6::Nd::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Vlan::Configuration::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Nd::Suppress::Suppress()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "suppress"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Vlan::Configuration::Ipv6::Nd::Suppress::~Suppress()
{
}

bool Native::Vlan::Configuration::Ipv6::Nd::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Vlan::Configuration::Ipv6::Nd::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Configuration::Ipv6::Nd::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ipv6::Nd::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ipv6::Nd::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(guard != nullptr)
    {
        _children["guard"] = guard;
    }

    return _children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Vlan::Configuration::Member::Member()
    :
    vni{YType::uint32, "vni"}
        ,
    evpn_instance(std::make_shared<Native::Vlan::Configuration::Member::EvpnInstance>())
{
    evpn_instance->parent = this;

    yang_name = "member"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Member::~Member()
{
}

bool Native::Vlan::Configuration::Member::has_data() const
{
    if (is_presence_container) return true;
    return vni.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Native::Vlan::Configuration::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Native::Vlan::Configuration::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Native::Vlan::Configuration::Member::EvpnInstance>();
        }
        return evpn_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    return _children;
}

void Native::Vlan::Configuration::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "vni")
        return true;
    return false;
}

Native::Vlan::Configuration::Member::EvpnInstance::EvpnInstance()
    :
    evpn_instance{YType::uint16, "evpn-instance"},
    vni{YType::uint32, "vni"}
{

    yang_name = "evpn-instance"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Configuration::Member::EvpnInstance::~EvpnInstance()
{
}

bool Native::Vlan::Configuration::Member::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return evpn_instance.is_set
	|| vni.is_set;
}

bool Native::Vlan::Configuration::Member::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_instance.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Native::Vlan::Configuration::Member::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Member::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_instance.is_set || is_set(evpn_instance.yfilter)) leaf_name_data.push_back(evpn_instance.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Configuration::Member::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Configuration::Member::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Configuration::Member::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-instance")
    {
        evpn_instance = value;
        evpn_instance.value_namespace = name_space;
        evpn_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Member::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-instance")
    {
        evpn_instance.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Member::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "vni")
        return true;
    return false;
}

Native::Vlan::Filter::Filter()
    :
    word{YType::str, "word"},
    vlan_list{YType::str, "vlan-list"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::Filter::~Filter()
{
}

bool Native::Vlan::Filter::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| vlan_list.is_set;
}

bool Native::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(vlan_list.yfilter);
}

std::string Native::Vlan::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:filter";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan_list.is_set || is_set(vlan_list.yfilter)) leaf_name_data.push_back(vlan_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-list")
    {
        vlan_list = value;
        vlan_list.value_namespace = name_space;
        vlan_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "vlan-list")
    {
        vlan_list.yfilter = yfilter;
    }
}

bool Native::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::Accounting::Accounting()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "accounting"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Vlan::Accounting::~Accounting()
{
}

bool Native::Vlan::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Vlan::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Internal::Internal()
    :
    allocation(std::make_shared<Native::Vlan::Internal::Allocation>())
{
    allocation->parent = this;

    yang_name = "internal"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::Internal::~Internal()
{
}

bool Native::Vlan::Internal::has_data() const
{
    if (is_presence_container) return true;
    return (allocation !=  nullptr && allocation->has_data());
}

bool Native::Vlan::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Native::Vlan::Internal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Native::Vlan::Internal::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allocation != nullptr)
    {
        _children["allocation"] = allocation;
    }

    return _children;
}

void Native::Vlan::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation")
        return true;
    return false;
}

Native::Vlan::Internal::Allocation::Allocation()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "allocation"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::Internal::Allocation::~Allocation()
{
}

bool Native::Vlan::Internal::Allocation::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::Vlan::Internal::Allocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Vlan::Internal::Allocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:internal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::Allocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Internal::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Internal::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Internal::Allocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Internal::Allocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Internal::Allocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Vlan::Dot1q::Dot1q()
    :
    tag(std::make_shared<Native::Vlan::Dot1q::Tag>())
{
    tag->parent = this;

    yang_name = "dot1q"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::Dot1q::~Dot1q()
{
}

bool Native::Vlan::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Vlan::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Vlan::Dot1q::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Vlan::Dot1q::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Vlan::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Vlan::Dot1q::Tag::Tag()
    :
    native{YType::empty, "native"}
{

    yang_name = "tag"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::Dot1q::Tag::~Tag()
{
}

bool Native::Vlan::Dot1q::Tag::has_data() const
{
    if (is_presence_container) return true;
    return native.is_set;
}

bool Native::Vlan::Dot1q::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Vlan::Dot1q::Tag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:dot1q/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1q::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1q::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Dot1q::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Dot1q::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Dot1q::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Dot1q::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Vlan::Dot1q::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native")
        return true;
    return false;
}

Native::Vlan::AccessLog::AccessLog()
    :
    maxflow{YType::uint16, "maxflow"},
    ratelimit{YType::uint16, "ratelimit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "access-log"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::AccessLog::~AccessLog()
{
}

bool Native::Vlan::AccessLog::has_data() const
{
    if (is_presence_container) return true;
    return maxflow.is_set
	|| ratelimit.is_set
	|| threshold.is_set;
}

bool Native::Vlan::AccessLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxflow.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vlan::AccessLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxflow.is_set || is_set(maxflow.yfilter)) leaf_name_data.push_back(maxflow.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::AccessLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::AccessLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::AccessLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxflow")
    {
        maxflow = value;
        maxflow.value_namespace = name_space;
        maxflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxflow")
    {
        maxflow.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxflow" || name == "ratelimit" || name == "threshold")
        return true;
    return false;
}

Native::Vlan::Group::Group()
    :
    name{YType::str, "name"}
        ,
    vlan_list(this, {"vlan_id"})
{

    yang_name = "group"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::Group::~Group()
{
}

bool Native::Vlan::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Vlan::Group::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Vlan::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-list")
    {
        auto ent_ = std::make_shared<Native::Vlan::Group::VlanList>();
        ent_->parent = this;
        vlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vlan::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Vlan::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-list" || name == "name")
        return true;
    return false;
}

Native::Vlan::Group::VlanList::VlanList()
    :
    vlan_id{YType::str, "vlan-id"}
{

    yang_name = "vlan-list"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::Group::VlanList::~VlanList()
{
}

bool Native::Vlan::Group::VlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool Native::Vlan::Group::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Vlan::Group::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-list";
    ADD_KEY_TOKEN(vlan_id, "vlan-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Group::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::Group::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::Group::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::Group::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Group::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Vlan::Group::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Vlan::VlanList::VlanList()
    :
    id{YType::str, "id"},
    remote_span{YType::empty, "remote-span"},
    name{YType::str, "name"},
    state{YType::enumeration, "state"},
    uni_vlan{YType::enumeration, "uni-vlan"}
        ,
    private_vlan(std::make_shared<Native::Vlan::VlanList::PrivateVlan>())
    , lldp(std::make_shared<Native::Vlan::VlanList::Lldp>())
{
    private_vlan->parent = this;
    lldp->parent = this;

    yang_name = "vlan-list"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vlan::VlanList::~VlanList()
{
}

bool Native::Vlan::VlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| remote_span.is_set
	|| name.is_set
	|| state.is_set
	|| uni_vlan.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (lldp !=  nullptr && lldp->has_data());
}

bool Native::Vlan::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_span.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(uni_vlan.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation());
}

std::string Native::Vlan::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_span.is_set || is_set(remote_span.yfilter)) leaf_name_data.push_back(remote_span.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (uni_vlan.is_set || is_set(uni_vlan.yfilter)) leaf_name_data.push_back(uni_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Vlan::VlanList::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Vlan::VlanList::Lldp>();
        }
        return lldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(private_vlan != nullptr)
    {
        _children["private-vlan"] = private_vlan;
    }

    if(lldp != nullptr)
    {
        _children["lldp"] = lldp;
    }

    return _children;
}

void Native::Vlan::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-span")
    {
        remote_span = value;
        remote_span.value_namespace = name_space;
        remote_span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan = value;
        uni_vlan.value_namespace = name_space;
        uni_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-span")
    {
        remote_span.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "private-vlan" || name == "lldp" || name == "id" || name == "remote-span" || name == "name" || name == "state" || name == "uni-vlan")
        return true;
    return false;
}

Native::Vlan::VlanList::PrivateVlan::PrivateVlan()
    :
    primary{YType::empty, "primary"},
    association{YType::str, "association"},
    community{YType::empty, "community"},
    isolated{YType::empty, "isolated"}
{

    yang_name = "private-vlan"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::VlanList::PrivateVlan::~PrivateVlan()
{
}

bool Native::Vlan::VlanList::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| association.is_set
	|| community.is_set
	|| isolated.is_set;
}

bool Native::Vlan::VlanList::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(association.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(isolated.yfilter);
}

std::string Native::Vlan::VlanList::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (association.is_set || is_set(association.yfilter)) leaf_name_data.push_back(association.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.yfilter)) leaf_name_data.push_back(isolated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::VlanList::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::VlanList::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::VlanList::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association")
    {
        association = value;
        association.value_namespace = name_space;
        association.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolated")
    {
        isolated = value;
        isolated.value_namespace = name_space;
        isolated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "association")
    {
        association.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "isolated")
    {
        isolated.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "association" || name == "community" || name == "isolated")
        return true;
    return false;
}

Native::Vlan::VlanList::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{

    yang_name = "lldp"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vlan::VlanList::Lldp::~Lldp()
{
}

bool Native::Vlan::VlanList::Lldp::has_data() const
{
    if (is_presence_container) return true;
    return run.is_set;
}

bool Native::Vlan::VlanList::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Vlan::VlanList::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vlan::VlanList::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vlan::VlanList::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vlan::VlanList::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::Mvrp::Mvrp()
    :
    global{YType::empty, "Cisco-IOS-XE-mvrp:global"}
        ,
    mac_learning(std::make_shared<Native::Mvrp::MacLearning>())
    , vlan(std::make_shared<Native::Mvrp::Vlan>())
{
    mac_learning->parent = this;
    vlan->parent = this;

    yang_name = "mvrp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mvrp::~Mvrp()
{
}

bool Native::Mvrp::has_data() const
{
    if (is_presence_container) return true;
    return global.is_set
	|| (mac_learning !=  nullptr && mac_learning->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| (mac_learning !=  nullptr && mac_learning->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Mvrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-mvrp:mac-learning")
    {
        if(mac_learning == nullptr)
        {
            mac_learning = std::make_shared<Native::Mvrp::MacLearning>();
        }
        return mac_learning;
    }

    if(child_yang_name == "Cisco-IOS-XE-mvrp:vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Mvrp::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_learning != nullptr)
    {
        _children["Cisco-IOS-XE-mvrp:mac-learning"] = mac_learning;
    }

    if(vlan != nullptr)
    {
        _children["Cisco-IOS-XE-mvrp:vlan"] = vlan;
    }

    return _children;
}

void Native::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-mvrp:global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-learning" || name == "vlan" || name == "global")
        return true;
    return false;
}

Native::Mvrp::MacLearning::MacLearning()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "mac-learning"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mvrp::MacLearning::~MacLearning()
{
}

bool Native::Mvrp::MacLearning::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Mvrp::MacLearning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Mvrp::MacLearning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mvrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mvrp::MacLearning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mac-learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mvrp::MacLearning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mvrp::MacLearning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mvrp::MacLearning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mvrp::MacLearning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mvrp::MacLearning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Mvrp::MacLearning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Mvrp::Vlan::Vlan()
    :
    create{YType::empty, "create"}
{

    yang_name = "vlan"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mvrp::Vlan::~Vlan()
{
}

bool Native::Mvrp::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return create.is_set;
}

bool Native::Mvrp::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create.yfilter);
}

std::string Native::Mvrp::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mvrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mvrp::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mvrp::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mvrp::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mvrp::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mvrp::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mvrp::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
}

bool Native::Mvrp::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create")
        return true;
    return false;
}

Native::Avb::Avb()
    :
    strict{YType::empty, "Cisco-IOS-XE-avb:strict"}
{

    yang_name = "avb"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Avb::~Avb()
{
}

bool Native::Avb::has_data() const
{
    if (is_presence_container) return true;
    return strict.is_set;
}

bool Native::Avb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strict.yfilter);
}

std::string Native::Avb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-avb:strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
}

bool Native::Avb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict")
        return true;
    return false;
}

Native::Ptp::Ptp()
    :
    domain{YType::uint8, "Cisco-IOS-XE-ptp:domain"},
    neighbor_propagation_delay_threshold{YType::uint32, "Cisco-IOS-XE-ptp:neighbor-propagation-delay-threshold"},
    priority1{YType::uint8, "Cisco-IOS-XE-ptp:priority1"},
    priority2{YType::uint8, "Cisco-IOS-XE-ptp:priority2"}
        ,
    profile(std::make_shared<Native::Ptp::Profile>())
    , mode(std::make_shared<Native::Ptp::Mode>())
{
    profile->parent = this;
    mode->parent = this;

    yang_name = "ptp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ptp::~Ptp()
{
}

bool Native::Ptp::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| neighbor_propagation_delay_threshold.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| (profile !=  nullptr && profile->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(neighbor_propagation_delay_threshold.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| (profile !=  nullptr && profile->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (neighbor_propagation_delay_threshold.is_set || is_set(neighbor_propagation_delay_threshold.yfilter)) leaf_name_data.push_back(neighbor_propagation_delay_threshold.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ptp:profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Ptp::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "Cisco-IOS-XE-ptp:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ptp::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profile != nullptr)
    {
        _children["Cisco-IOS-XE-ptp:profile"] = profile;
    }

    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-ptp:mode"] = mode;
    }

    return _children;
}

void Native::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ptp:domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ptp:neighbor-propagation-delay-threshold")
    {
        neighbor_propagation_delay_threshold = value;
        neighbor_propagation_delay_threshold.value_namespace = name_space;
        neighbor_propagation_delay_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ptp:priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ptp:priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "neighbor-propagation-delay-threshold")
    {
        neighbor_propagation_delay_threshold.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
}

bool Native::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "mode" || name == "domain" || name == "neighbor-propagation-delay-threshold" || name == "priority1" || name == "priority2")
        return true;
    return false;
}

Native::Ptp::Profile::Profile()
    :
    dot1as{YType::empty, "dot1as"}
{

    yang_name = "profile"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ptp::Profile::~Profile()
{
}

bool Native::Ptp::Profile::has_data() const
{
    if (is_presence_container) return true;
    return dot1as.is_set;
}

bool Native::Ptp::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1as.yfilter);
}

std::string Native::Ptp::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ptp:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1as.is_set || is_set(dot1as.yfilter)) leaf_name_data.push_back(dot1as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ptp::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ptp::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ptp::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1as")
    {
        dot1as = value;
        dot1as.value_namespace = name_space;
        dot1as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1as")
    {
        dot1as.yfilter = yfilter;
    }
}

bool Native::Ptp::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1as")
        return true;
    return false;
}

Native::Ptp::Mode::Mode()
    :
    e2etransparent{YType::empty, "e2etransparent"},
    p2ptransparent{YType::empty, "p2ptransparent"}
        ,
    boundary(std::make_shared<Native::Ptp::Mode::Boundary>())
{
    boundary->parent = this;

    yang_name = "mode"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ptp::Mode::~Mode()
{
}

bool Native::Ptp::Mode::has_data() const
{
    if (is_presence_container) return true;
    return e2etransparent.is_set
	|| p2ptransparent.is_set
	|| (boundary !=  nullptr && boundary->has_data());
}

bool Native::Ptp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e2etransparent.yfilter)
	|| ydk::is_set(p2ptransparent.yfilter)
	|| (boundary !=  nullptr && boundary->has_operation());
}

std::string Native::Ptp::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ptp:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e2etransparent.is_set || is_set(e2etransparent.yfilter)) leaf_name_data.push_back(e2etransparent.get_name_leafdata());
    if (p2ptransparent.is_set || is_set(p2ptransparent.yfilter)) leaf_name_data.push_back(p2ptransparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ptp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boundary")
    {
        if(boundary == nullptr)
        {
            boundary = std::make_shared<Native::Ptp::Mode::Boundary>();
        }
        return boundary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ptp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(boundary != nullptr)
    {
        _children["boundary"] = boundary;
    }

    return _children;
}

void Native::Ptp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e2etransparent")
    {
        e2etransparent = value;
        e2etransparent.value_namespace = name_space;
        e2etransparent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2ptransparent")
    {
        p2ptransparent = value;
        p2ptransparent.value_namespace = name_space;
        p2ptransparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e2etransparent")
    {
        e2etransparent.yfilter = yfilter;
    }
    if(value_path == "p2ptransparent")
    {
        p2ptransparent.yfilter = yfilter;
    }
}

bool Native::Ptp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boundary" || name == "e2etransparent" || name == "p2ptransparent")
        return true;
    return false;
}

Native::Ptp::Mode::Boundary::Boundary()
    :
    delay_req{YType::empty, "delay-req"},
    pdelay_req{YType::empty, "pdelay-req"}
{

    yang_name = "boundary"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ptp::Mode::Boundary::~Boundary()
{
}

bool Native::Ptp::Mode::Boundary::has_data() const
{
    if (is_presence_container) return true;
    return delay_req.is_set
	|| pdelay_req.is_set;
}

bool Native::Ptp::Mode::Boundary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay_req.yfilter)
	|| ydk::is_set(pdelay_req.yfilter);
}

std::string Native::Ptp::Mode::Boundary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ptp/Cisco-IOS-XE-ptp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::Mode::Boundary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boundary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::Mode::Boundary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_req.is_set || is_set(delay_req.yfilter)) leaf_name_data.push_back(delay_req.get_name_leafdata());
    if (pdelay_req.is_set || is_set(pdelay_req.yfilter)) leaf_name_data.push_back(pdelay_req.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ptp::Mode::Boundary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ptp::Mode::Boundary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ptp::Mode::Boundary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-req")
    {
        delay_req = value;
        delay_req.value_namespace = name_space;
        delay_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdelay-req")
    {
        pdelay_req = value;
        pdelay_req.value_namespace = name_space;
        pdelay_req.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::Mode::Boundary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-req")
    {
        delay_req.yfilter = yfilter;
    }
    if(value_path == "pdelay-req")
    {
        pdelay_req.yfilter = yfilter;
    }
}

bool Native::Ptp::Mode::Boundary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-req" || name == "pdelay-req")
        return true;
    return false;
}

Native::Cdp::Cdp()
    :
    holdtime{YType::uint8, "Cisco-IOS-XE-cdp:holdtime"},
    timer{YType::uint8, "Cisco-IOS-XE-cdp:timer"},
    run{YType::empty, "Cisco-IOS-XE-cdp:run"}
{

    yang_name = "cdp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cdp::~Cdp()
{
}

bool Native::Cdp::has_data() const
{
    if (is_presence_container) return true;
    return holdtime.is_set
	|| timer.is_set
	|| run.is_set;
}

bool Native::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Cdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cdp:holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cdp:timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cdp:run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "timer" || name == "run")
        return true;
    return false;
}

Native::Avc::Avc()
    :
    sd_service(nullptr) // presence node
{

    yang_name = "avc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::~Avc()
{
}

bool Native::Avc::has_data() const
{
    if (is_presence_container) return true;
    return (sd_service !=  nullptr && sd_service->has_data());
}

bool Native::Avc::has_operation() const
{
    return is_set(yfilter)
	|| (sd_service !=  nullptr && sd_service->has_operation());
}

std::string Native::Avc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nbar:sd-service")
    {
        if(sd_service == nullptr)
        {
            sd_service = std::make_shared<Native::Avc::SdService>();
        }
        return sd_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sd_service != nullptr)
    {
        _children["Cisco-IOS-XE-nbar:sd-service"] = sd_service;
    }

    return _children;
}

void Native::Avc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sd-service")
        return true;
    return false;
}

Native::Avc::SdService::SdService()
    :
    segment{YType::str, "segment"}
        ,
    controller(nullptr) // presence node
{

    yang_name = "sd-service"; yang_parent_name = "avc"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Avc::SdService::~SdService()
{
}

bool Native::Avc::SdService::has_data() const
{
    if (is_presence_container) return true;
    return segment.is_set
	|| (controller !=  nullptr && controller->has_data());
}

bool Native::Avc::SdService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment.yfilter)
	|| (controller !=  nullptr && controller->has_operation());
}

std::string Native::Avc::SdService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:sd-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment.is_set || is_set(segment.yfilter)) leaf_name_data.push_back(segment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Native::Avc::SdService::Controller>();
        }
        return controller;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controller != nullptr)
    {
        _children["controller"] = controller;
    }

    return _children;
}

void Native::Avc::SdService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment")
    {
        segment = value;
        segment.value_namespace = name_space;
        segment.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment")
    {
        segment.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "segment")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Controller()
    :
    dscp{YType::uint8, "dscp"},
    vrf{YType::str, "vrf"}
        ,
    address(std::make_shared<Native::Avc::SdService::Controller::Address>())
    , destination_ports(std::make_shared<Native::Avc::SdService::Controller::DestinationPorts>())
    , source_interface(std::make_shared<Native::Avc::SdService::Controller::SourceInterface>())
{
    address->parent = this;
    destination_ports->parent = this;
    source_interface->parent = this;

    yang_name = "controller"; yang_parent_name = "sd-service"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Avc::SdService::Controller::~Controller()
{
}

bool Native::Avc::SdService::Controller::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| vrf.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_ports !=  nullptr && destination_ports->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Avc::SdService::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_ports !=  nullptr && destination_ports->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Avc::SdService::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Avc::SdService::Controller::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-ports")
    {
        if(destination_ports == nullptr)
        {
            destination_ports = std::make_shared<Native::Avc::SdService::Controller::DestinationPorts>();
        }
        return destination_ports;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Avc::SdService::Controller::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(destination_ports != nullptr)
    {
        _children["destination-ports"] = destination_ports;
    }

    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Avc::SdService::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "destination-ports" || name == "source-interface" || name == "dscp" || name == "vrf")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Address::Address()
    :
    ipv4_or_hostname(this, {"ipv4_or_hostname"})
{

    yang_name = "address"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::Address::~Address()
{
}

bool Native::Avc::SdService::Controller::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Avc::SdService::Controller::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Avc::SdService::Controller::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto ent_ = std::make_shared<Native::Avc::SdService::Controller::Address::Ipv4OrHostname>();
        ent_->parent = this;
        ipv4_or_hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_or_hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Avc::SdService::Controller::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::SdService::Controller::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::SdService::Controller::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Address::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    ipv4_or_hostname0{YType::str, "ipv4-or-hostname0"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::Address::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_or_hostname.is_set
	|| ipv4_or_hostname0.is_set;
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(ipv4_or_hostname0.yfilter);
}

std::string Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname";
    ADD_KEY_TOKEN(ipv4_or_hostname, "ipv4-or-hostname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (ipv4_or_hostname0.is_set || is_set(ipv4_or_hostname0.yfilter)) leaf_name_data.push_back(ipv4_or_hostname0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avc::SdService::Controller::Address::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-or-hostname0")
    {
        ipv4_or_hostname0 = value;
        ipv4_or_hostname0.value_namespace = name_space;
        ipv4_or_hostname0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::Address::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "ipv4-or-hostname0")
    {
        ipv4_or_hostname0.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "ipv4-or-hostname0")
        return true;
    return false;
}

Native::Avc::SdService::Controller::DestinationPorts::DestinationPorts()
    :
    application_updates{YType::uint16, "application-updates"},
    sensor_exporter{YType::uint16, "sensor-exporter"}
{

    yang_name = "destination-ports"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::DestinationPorts::~DestinationPorts()
{
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_data() const
{
    if (is_presence_container) return true;
    return application_updates.is_set
	|| sensor_exporter.is_set;
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_updates.yfilter)
	|| ydk::is_set(sensor_exporter.yfilter);
}

std::string Native::Avc::SdService::Controller::DestinationPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::DestinationPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::DestinationPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_updates.is_set || is_set(application_updates.yfilter)) leaf_name_data.push_back(application_updates.get_name_leafdata());
    if (sensor_exporter.is_set || is_set(sensor_exporter.yfilter)) leaf_name_data.push_back(sensor_exporter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::DestinationPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::DestinationPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avc::SdService::Controller::DestinationPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-updates")
    {
        application_updates = value;
        application_updates.value_namespace = name_space;
        application_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor-exporter")
    {
        sensor_exporter = value;
        sensor_exporter.value_namespace = name_space;
        sensor_exporter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::DestinationPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-updates")
    {
        application_updates.yfilter = yfilter;
    }
    if(value_path == "sensor-exporter")
    {
        sensor_exporter.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-updates" || name == "sensor-exporter")
        return true;
    return false;
}

Native::Avc::SdService::Controller::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::SourceInterface::~SourceInterface()
{
}

bool Native::Avc::SdService::Controller::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Avc::SdService::Controller::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Avc::SdService::Controller::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Avc::SdService::Controller::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Avc::SdService::Controller::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Policy::Policy()
    :
    class_map(this, {"name"})
    , policy_map(this, {"name"})
{

    yang_name = "policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Policy::~Policy()
{
}

bool Native::Policy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_map.len(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.len(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::has_operation() const
{
    for (std::size_t index=0; index<class_map.len(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.len(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-policy:class-map")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap>();
        ent_->parent = this;
        class_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:policy-map")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap>();
        ent_->parent = this;
        policy_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : policy_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::ClassMap::ClassMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    prematch{YType::enumeration, "prematch"},
    description{YType::str, "description"}
        ,
    match(std::make_shared<Native::Policy::ClassMap::Match>())
    , no_match(std::make_shared<Native::Policy::ClassMap::NoMatch>())
{
    match->parent = this;
    no_match->parent = this;

    yang_name = "class-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Policy::ClassMap::~ClassMap()
{
}

bool Native::Policy::ClassMap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| prematch.is_set
	|| description.is_set
	|| (match !=  nullptr && match->has_data())
	|| (no_match !=  nullptr && no_match->has_data());
}

bool Native::Policy::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(prematch.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (no_match !=  nullptr && no_match->has_operation());
}

std::string Native::Policy::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:class-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (prematch.is_set || is_set(prematch.yfilter)) leaf_name_data.push_back(prematch.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Policy::ClassMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "no-match")
    {
        if(no_match == nullptr)
        {
            no_match = std::make_shared<Native::Policy::ClassMap::NoMatch>();
        }
        return no_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(no_match != nullptr)
    {
        _children["no-match"] = no_match;
    }

    return _children;
}

void Native::Policy::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prematch")
    {
        prematch = value;
        prematch.value_namespace = name_space;
        prematch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "prematch")
    {
        prematch.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "no-match" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "prematch" || name == "description")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Match()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"},
    client_type{YType::enumeration, "client-type"},
    device_type{YType::str, "device-type"},
    interface{YType::str, "interface"},
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    oui{YType::str, "oui"},
    port_type{YType::enumeration, "port-type"},
    service_template{YType::str, "service-template"},
    session_type{YType::enumeration, "session-type"},
    sgt{YType::uint16, "sgt"},
    ssid{YType::str, "ssid"},
    tag{YType::str, "tag"},
    timer{YType::str, "timer"},
    user_role{YType::str, "user-role"},
    username{YType::str, "username"}
        ,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>())
    , application(std::make_shared<Native::Policy::ClassMap::Match::Application>())
    , access_group(std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>())
    , destination_address(std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>())
    , group_object(std::make_shared<Native::Policy::ClassMap::Match::GroupObject>())
    , ip(std::make_shared<Native::Policy::ClassMap::Match::Ip>())
    , mpls(std::make_shared<Native::Policy::ClassMap::Match::Mpls>())
    , packet(std::make_shared<Native::Policy::ClassMap::Match::Packet>())
    , protocol(std::make_shared<Native::Policy::ClassMap::Match::Protocol>())
    , security_group(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>())
    , service(this, {"efp"})
    , source_address(std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>())
    , vlan(std::make_shared<Native::Policy::ClassMap::Match::Vlan>())
    , activated_service_template(this, {"service_name"})
    , authorization_status(std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>())
    , authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>())
    , method(std::make_shared<Native::Policy::ClassMap::Match::Method>())
    , result_type(std::make_shared<Native::Policy::ClassMap::Match::ResultType>())
    , not_(std::make_shared<Native::Policy::ClassMap::Match::Not>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;
    not_->parent = this;

    yang_name = "match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::~Match()
{
}

bool Native::Policy::ClassMap::Match::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<activated_service_template.len(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| client_type.is_set
	|| device_type.is_set
	|| interface.is_set
	|| ip_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| oui.is_set
	|| port_type.is_set
	|| service_template.is_set
	|| session_type.is_set
	|| sgt.is_set
	|| ssid.is_set
	|| tag.is_set
	|| timer.is_set
	|| user_role.is_set
	|| username.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data())
	|| (not_ !=  nullptr && not_->has_data());
}

bool Native::Policy::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<activated_service_template.len(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(client_type.yfilter)
	|| ydk::is_set(device_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(service_template.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(ssid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(user_role.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation())
	|| (not_ !=  nullptr && not_->has_operation());
}

std::string Native::Policy::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (client_type.is_set || is_set(client_type.yfilter)) leaf_name_data.push_back(client_type.get_name_leafdata());
    if (device_type.is_set || is_set(device_type.yfilter)) leaf_name_data.push_back(device_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (ssid.is_set || is_set(ssid.yfilter)) leaf_name_data.push_back(ssid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (user_role.is_set || is_set(user_role.yfilter)) leaf_name_data.push_back(user_role.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "service")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "activated-service-template")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::ActivatedServiceTemplate>();
        ent_->parent = this;
        activated_service_template.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::Match::ResultType>();
        }
        return result_type;
    }

    if(child_yang_name == "not")
    {
        if(not_ == nullptr)
        {
            not_ = std::make_shared<Native::Policy::ClassMap::Match::Not>();
        }
        return not_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_method_priority != nullptr)
    {
        _children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        _children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        _children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        _children["security-group"] = security_group;
    }

    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    count_ = 0;
    for (auto ent_ : activated_service_template.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authorization_status != nullptr)
    {
        _children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        _children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        _children["method"] = method;
    }

    if(result_type != nullptr)
    {
        _children["result-type"] = result_type;
    }

    if(not_ != nullptr)
    {
        _children["not"] = not_;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-type")
    {
        client_type = value;
        client_type.value_namespace = name_space;
        client_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-type")
    {
        device_type = value;
        device_type.value_namespace = name_space;
        device_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssid")
    {
        ssid = value;
        ssid.value_namespace = name_space;
        ssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-role")
    {
        user_role = value;
        user_role.value_namespace = name_space;
        user_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "client-type")
    {
        client_type.yfilter = yfilter;
    }
    if(value_path == "device-type")
    {
        device_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "ssid")
    {
        ssid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "user-role")
    {
        user_role.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "service" || name == "source-address" || name == "vlan" || name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type" || name == "not" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer" || name == "client-type" || name == "device-type" || name == "interface" || name == "ip-address" || name == "ipv6-address" || name == "mac-address" || name == "oui" || name == "port-type" || name == "service-template" || name == "session-type" || name == "sgt" || name == "ssid" || name == "tag" || name == "timer" || name == "user-role" || name == "username")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>())
    , attribute(std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Application::has_data() const
{
    if (is_presence_container) return true;
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_group != nullptr)
    {
        _children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::GroupObject::has_data() const
{
    if (is_presence_container) return true;
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
        ,
    rtp(this, {"port1", "port2"})
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtp.len(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.len(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Ip::Rtp>();
        ent_->parent = this;
        rtp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_data() const
{
    if (is_presence_container) return true;
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    ADD_KEY_TOKEN(port1, "port1");
    ADD_KEY_TOKEN(port2, "port2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(experimental != nullptr)
    {
        _children["experimental"] = experimental;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Packet::has_data() const
{
    if (is_presence_container) return true;
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(length != nullptr)
    {
        _children["length"] = length;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Protocol()
    :
    protocols_list(this, {"protocols"})
    , attribute(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocols_list.len(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.len(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::ProtocolsList>();
        ent_->parent = this;
        protocols_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocols_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::ProtocolsList::ProtocolsList()
    :
    protocols{YType::str, "protocols"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_data() const
{
    if (is_presence_container) return true;
    return protocols.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list";
    ADD_KEY_TOKEN(protocols, "protocols");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Attribute()
    :
    application_group(this, {"name"})
    , application_set(this, {"name"})
    , business_relevance(this, {"name"})
    , category(this, {"name"})
    , encrypted(this, {"name"})
    , sub_category(this, {"name"})
    , traffic_class(this, {"name"})
    , tunnel(this, {"name"})
{

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_group.len(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.len(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.len(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.len(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.len(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.len(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.len(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.len(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.len(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.len(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.len(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.len(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup>();
        ent_->parent = this;
        application_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "application-set")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet>();
        ent_->parent = this;
        application_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "business-relevance")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>();
        ent_->parent = this;
        business_relevance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encrypted")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted>();
        ent_->parent = this;
        encrypted.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sub-category")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory>();
        ent_->parent = this;
        sub_category.append(ent_);
        return ent_;
    }

    if(child_yang_name == "traffic-class")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>();
        ent_->parent = this;
        traffic_class.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : application_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : business_relevance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : encrypted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sub_category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : traffic_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Category::~Category()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>())
    , source(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Service::Service()
    :
    efp{YType::uint16, "efp"},
    instance{YType::empty, "instance"},
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "service"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Service::~Service()
{
}

bool Native::Policy::ClassMap::Match::Service::has_data() const
{
    if (is_presence_container) return true;
    return efp.is_set
	|| instance.is_set
	|| ethernet.is_set;
}

bool Native::Policy::ClassMap::Match::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(efp.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::Policy::ClassMap::Match::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    ADD_KEY_TOKEN(efp, "efp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efp.is_set || is_set(efp.yfilter)) leaf_name_data.push_back(efp.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efp")
    {
        efp = value;
        efp.value_namespace = name_space;
        efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efp")
    {
        efp.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp" || name == "instance" || name == "ethernet")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set;
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template";
    ADD_KEY_TOKEN(service_name, "service-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_data() const
{
    if (is_presence_container) return true;
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::Method::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::Match::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::Match::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
        ,
    method(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::Match::ResultType::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1x>())
    , mab(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>())
    , webauth(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_data() const
{
    if (is_presence_container) return true;
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1x != nullptr)
    {
        _children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        _children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        _children["webauth"] = webauth;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::Dot1x()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::~Dot1x()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Not()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"}
        ,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>())
    , application(std::make_shared<Native::Policy::ClassMap::Match::Not::Application>())
    , access_group(std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>())
    , destination_address(std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>())
    , group_object(std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject>())
    , ip(std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>())
    , mpls(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>())
    , packet(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>())
    , protocol(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>())
    , security_group(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>())
    , service(this, {"efp"})
    , source_address(std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>())
    , vlan(std::make_shared<Native::Policy::ClassMap::Match::Not::Vlan>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;

    yang_name = "not"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::~Not()
{
}

bool Native::Policy::ClassMap::Match::Not::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Policy::ClassMap::Match::Not::has_operation() const
{
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Not::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "service")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Not::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_method_priority != nullptr)
    {
        _children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        _children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        _children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        _children["security-group"] = security_group;
    }

    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "service" || name == "source-address" || name == "vlan" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>())
    , attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_data() const
{
    if (is_presence_container) return true;
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_group != nullptr)
    {
        _children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_data() const
{
    if (is_presence_container) return true;
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
        ,
    rtp(this, {"port1", "port2"})
{

    yang_name = "ip"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtp.len(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.len(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip::Rtp>();
        ent_->parent = this;
        rtp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_data() const
{
    if (is_presence_container) return true;
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    ADD_KEY_TOKEN(port1, "port1");
    ADD_KEY_TOKEN(port2, "port2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(experimental != nullptr)
    {
        _children["experimental"] = experimental;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_data() const
{
    if (is_presence_container) return true;
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(length != nullptr)
    {
        _children["length"] = length;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Protocol()
    :
    protocols_list(this, {"protocols"})
    , attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocols_list.len(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.len(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList>();
        ent_->parent = this;
        protocols_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocols_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::ProtocolsList()
    :
    protocols{YType::str, "protocols"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_data() const
{
    if (is_presence_container) return true;
    return protocols.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list";
    ADD_KEY_TOKEN(protocols, "protocols");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Attribute()
    :
    application_group(this, {"name"})
    , application_set(this, {"name"})
    , business_relevance(this, {"name"})
    , category(this, {"name"})
    , encrypted(this, {"name"})
    , sub_category(this, {"name"})
    , traffic_class(this, {"name"})
    , tunnel(this, {"name"})
{

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_group.len(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.len(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.len(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.len(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.len(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.len(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.len(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.len(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.len(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.len(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.len(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.len(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup>();
        ent_->parent = this;
        application_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "application-set")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet>();
        ent_->parent = this;
        application_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "business-relevance")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance>();
        ent_->parent = this;
        business_relevance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encrypted")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted>();
        ent_->parent = this;
        encrypted.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sub-category")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory>();
        ent_->parent = this;
        sub_category.append(ent_);
        return ent_;
    }

    if(child_yang_name == "traffic-class")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass>();
        ent_->parent = this;
        traffic_class.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : application_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : business_relevance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : encrypted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sub_category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : traffic_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::~Category()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>())
    , source(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Service::Service()
    :
    efp{YType::uint16, "efp"},
    instance{YType::empty, "instance"},
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "service"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Service::~Service()
{
}

bool Native::Policy::ClassMap::Match::Not::Service::has_data() const
{
    if (is_presence_container) return true;
    return efp.is_set
	|| instance.is_set
	|| ethernet.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(efp.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    ADD_KEY_TOKEN(efp, "efp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efp.is_set || is_set(efp.yfilter)) leaf_name_data.push_back(efp.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efp")
    {
        efp = value;
        efp.value_namespace = name_space;
        efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efp")
    {
        efp.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp" || name == "instance" || name == "ethernet")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::Match::Not::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::Match::Not::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::Match::Not::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::Match::Not::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::NoMatch()
    :
    client_type{YType::enumeration, "client-type"},
    device_type{YType::str, "device-type"},
    interface{YType::str, "interface"},
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    oui{YType::str, "oui"},
    port_type{YType::enumeration, "port-type"},
    service_template{YType::str, "service-template"},
    session_type{YType::enumeration, "session-type"},
    sgt{YType::uint16, "sgt"},
    ssid{YType::str, "ssid"},
    tag{YType::str, "tag"},
    timer{YType::str, "timer"},
    user_role{YType::str, "user-role"},
    username{YType::str, "username"}
        ,
    activated_service_template(this, {"service_name"})
    , authorization_status(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>())
    , authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>())
    , method(std::make_shared<Native::Policy::ClassMap::NoMatch::Method>())
    , result_type(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>())
{
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;

    yang_name = "no-match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::~NoMatch()
{
}

bool Native::Policy::ClassMap::NoMatch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<activated_service_template.len(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    return client_type.is_set
	|| device_type.is_set
	|| interface.is_set
	|| ip_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| oui.is_set
	|| port_type.is_set
	|| service_template.is_set
	|| session_type.is_set
	|| sgt.is_set
	|| ssid.is_set
	|| tag.is_set
	|| timer.is_set
	|| user_role.is_set
	|| username.is_set
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data());
}

bool Native::Policy::ClassMap::NoMatch::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.len(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_type.yfilter)
	|| ydk::is_set(device_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(service_template.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(ssid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(user_role.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_type.is_set || is_set(client_type.yfilter)) leaf_name_data.push_back(client_type.get_name_leafdata());
    if (device_type.is_set || is_set(device_type.yfilter)) leaf_name_data.push_back(device_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (ssid.is_set || is_set(ssid.yfilter)) leaf_name_data.push_back(ssid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (user_role.is_set || is_set(user_role.yfilter)) leaf_name_data.push_back(user_role.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activated-service-template")
    {
        auto ent_ = std::make_shared<Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate>();
        ent_->parent = this;
        activated_service_template.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>();
        }
        return result_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : activated_service_template.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authorization_status != nullptr)
    {
        _children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        _children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        _children["method"] = method;
    }

    if(result_type != nullptr)
    {
        _children["result-type"] = result_type;
    }

    return _children;
}

void Native::Policy::ClassMap::NoMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-type")
    {
        client_type = value;
        client_type.value_namespace = name_space;
        client_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-type")
    {
        device_type = value;
        device_type.value_namespace = name_space;
        device_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssid")
    {
        ssid = value;
        ssid.value_namespace = name_space;
        ssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-role")
    {
        user_role = value;
        user_role.value_namespace = name_space;
        user_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-type")
    {
        client_type.yfilter = yfilter;
    }
    if(value_path == "device-type")
    {
        device_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "ssid")
    {
        ssid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "user-role")
    {
        user_role.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type" || name == "client-type" || name == "device-type" || name == "interface" || name == "ip-address" || name == "ipv6-address" || name == "mac-address" || name == "oui" || name == "port-type" || name == "service-template" || name == "session-type" || name == "sgt" || name == "ssid" || name == "tag" || name == "timer" || name == "user-role" || name == "username")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template";
    ADD_KEY_TOKEN(service_name, "service-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_data() const
{
    if (is_presence_container) return true;
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::Method::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::NoMatch::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
        ,
    method(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x>())
    , mab(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>())
    , webauth(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_data() const
{
    if (is_presence_container) return true;
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1x != nullptr)
    {
        _children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        _children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        _children["webauth"] = webauth;
    }

    return _children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::Dot1x()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::~Dot1x()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_data() const
{
    if (is_presence_container) return true;
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::PolicyMap::PolicyMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    description{YType::str, "description"},
    sequence_interval{YType::uint16, "sequence-interval"}
        ,
    event(this, {"event_type"})
    , class_(this, {"name"})
{

    yang_name = "policy-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Policy::PolicyMap::~PolicyMap()
{
}

bool Native::Policy::PolicyMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| description.is_set
	|| sequence_interval.is_set;
}

bool Native::Policy::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sequence_interval.yfilter);
}

std::string Native::Policy::PolicyMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:policy-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sequence_interval.is_set || is_set(sequence_interval.yfilter)) leaf_name_data.push_back(sequence_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval = value;
        sequence_interval.value_namespace = name_space;
        sequence_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "class" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "description" || name == "sequence-interval")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    match_type{YType::enumeration, "match-type"}
        ,
    class_number(this, {"number"})
{

    yang_name = "event"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::~Event()
{
}

bool Native::Policy::PolicyMap::Event::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_number.len(); index++)
    {
        if(class_number[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| match_type.is_set;
}

bool Native::Policy::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_number.len(); index++)
    {
        if(class_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(match_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(event_type, "event-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-number")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber>();
        ent_->parent = this;
        class_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "event-type" || name == "match-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ClassNumber()
    :
    number{YType::uint8, "number"},
    class_{YType::str, "class"},
    execution_type{YType::enumeration, "execution-type"}
        ,
    action_number(this, {"number"})
{

    yang_name = "class-number"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::~ClassNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action_number.len(); index++)
    {
        if(action_number[index]->has_data())
            return true;
    }
    return number.is_set
	|| class_.is_set
	|| execution_type.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_operation() const
{
    for (std::size_t index=0; index<action_number.len(); index++)
    {
        if(action_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(execution_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-number";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (execution_type.is_set || is_set(execution_type.yfilter)) leaf_name_data.push_back(execution_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-number")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber>();
        ent_->parent = this;
        action_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : action_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "execution-type")
    {
        execution_type = value;
        execution_type.value_namespace = name_space;
        execution_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "execution-type")
    {
        execution_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-number" || name == "number" || name == "class" || name == "execution-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::ActionNumber()
    :
    number{YType::uint8, "number"},
    replace{YType::empty, "replace"},
    clear_session{YType::empty, "clear-session"},
    authentication_restart{YType::uint16, "authentication-restart"},
    authorize{YType::empty, "authorize"}
        ,
    terminate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>())
    , resume(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>())
    , pause(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>())
    , activate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>())
    , authenticate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>())
    , map(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map>())
{
    terminate->parent = this;
    resume->parent = this;
    pause->parent = this;
    activate->parent = this;
    authenticate->parent = this;
    map->parent = this;

    yang_name = "action-number"; yang_parent_name = "class-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::~ActionNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| replace.is_set
	|| clear_session.is_set
	|| authentication_restart.is_set
	|| authorize.is_set
	|| (terminate !=  nullptr && terminate->has_data())
	|| (resume !=  nullptr && resume->has_data())
	|| (pause !=  nullptr && pause->has_data())
	|| (activate !=  nullptr && activate->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(replace.yfilter)
	|| ydk::is_set(clear_session.yfilter)
	|| ydk::is_set(authentication_restart.yfilter)
	|| ydk::is_set(authorize.yfilter)
	|| (terminate !=  nullptr && terminate->has_operation())
	|| (resume !=  nullptr && resume->has_operation())
	|| (pause !=  nullptr && pause->has_operation())
	|| (activate !=  nullptr && activate->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-number";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (replace.is_set || is_set(replace.yfilter)) leaf_name_data.push_back(replace.get_name_leafdata());
    if (clear_session.is_set || is_set(clear_session.yfilter)) leaf_name_data.push_back(clear_session.get_name_leafdata());
    if (authentication_restart.is_set || is_set(authentication_restart.yfilter)) leaf_name_data.push_back(authentication_restart.get_name_leafdata());
    if (authorize.is_set || is_set(authorize.yfilter)) leaf_name_data.push_back(authorize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>();
        }
        return terminate;
    }

    if(child_yang_name == "resume")
    {
        if(resume == nullptr)
        {
            resume = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>();
        }
        return resume;
    }

    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>();
        }
        return pause;
    }

    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>();
        }
        return authenticate;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(terminate != nullptr)
    {
        _children["terminate"] = terminate;
    }

    if(resume != nullptr)
    {
        _children["resume"] = resume;
    }

    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    if(activate != nullptr)
    {
        _children["activate"] = activate;
    }

    if(authenticate != nullptr)
    {
        _children["authenticate"] = authenticate;
    }

    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace")
    {
        replace = value;
        replace.value_namespace = name_space;
        replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-session")
    {
        clear_session = value;
        clear_session.value_namespace = name_space;
        clear_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart = value;
        authentication_restart.value_namespace = name_space;
        authentication_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorize")
    {
        authorize = value;
        authorize.value_namespace = name_space;
        authorize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "replace")
    {
        replace.yfilter = yfilter;
    }
    if(value_path == "clear-session")
    {
        clear_session.yfilter = yfilter;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart.yfilter = yfilter;
    }
    if(value_path == "authorize")
    {
        authorize.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminate" || name == "resume" || name == "pause" || name == "activate" || name == "authenticate" || name == "map" || name == "number" || name == "replace" || name == "clear-session" || name == "authentication-restart" || name == "authorize")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::Terminate()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "terminate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::~Terminate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::Resume()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "resume"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::~Resume()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_data() const
{
    if (is_presence_container) return true;
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::Pause()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "pause"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::~Pause()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_data() const
{
    if (is_presence_container) return true;
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::Activate()
    :
    service_template{YType::str, "service-template"}
{

    yang_name = "activate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::~Activate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_data() const
{
    if (is_presence_container) return true;
    return service_template.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_template.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-template")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Authenticate()
    :
    using_(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>())
{
    using_->parent = this;

    yang_name = "authenticate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::~Authenticate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_data() const
{
    if (is_presence_container) return true;
    return (using_ !=  nullptr && using_->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| (using_ !=  nullptr && using_->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "using")
    {
        if(using_ == nullptr)
        {
            using_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>();
        }
        return using_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(using_ != nullptr)
    {
        _children["using"] = using_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "using")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Using()
    :
    method{YType::enumeration, "method"},
    both{YType::empty, "both"},
    retries{YType::uint8, "retries"},
    retry_time{YType::uint16, "retry-time"},
    priority{YType::uint8, "priority"},
    parameter_map{YType::str, "parameter-map"}
{

    yang_name = "using"; yang_parent_name = "authenticate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::~Using()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_data() const
{
    if (is_presence_container) return true;
    return method.is_set
	|| both.is_set
	|| retries.is_set
	|| retry_time.is_set
	|| priority.is_set
	|| parameter_map.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(retry_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(parameter_map.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "using";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.yfilter)) leaf_name_data.push_back(retry_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
        retry_time.value_namespace = name_space;
        retry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "retry-time")
    {
        retry_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "both" || name == "retries" || name == "retry-time" || name == "priority" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::Map()
    :
    attribute_to_service(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService>())
{
    attribute_to_service->parent = this;

    yang_name = "map"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::~Map()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::has_data() const
{
    if (is_presence_container) return true;
    return (attribute_to_service !=  nullptr && attribute_to_service->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::has_operation() const
{
    return is_set(yfilter)
	|| (attribute_to_service !=  nullptr && attribute_to_service->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-to-service")
    {
        if(attribute_to_service == nullptr)
        {
            attribute_to_service = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService>();
        }
        return attribute_to_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_to_service != nullptr)
    {
        _children["attribute-to-service"] = attribute_to_service;
    }

    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-to-service")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::AttributeToService()
    :
    table{YType::str, "table"}
{

    yang_name = "attribute-to-service"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::~AttributeToService()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::has_data() const
{
    if (is_presence_container) return true;
    return table.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-to-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Class()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    insert_before{YType::str, "insert-before"},
    random_detect{YType::empty, "random-detect"}
        ,
    appnav_policy(std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy>())
    , avc(std::make_shared<Native::Policy::PolicyMap::Class::Avc>())
    , policy(std::make_shared<Native::Policy::PolicyMap::Class::Policy_>())
    , service_policy(std::make_shared<Native::Policy::PolicyMap::Class::ServicePolicy>())
    , pm_policy(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy>())
    , inspect_police(std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice>())
    , action_list(this, {"action_type"})
{
    appnav_policy->parent = this;
    avc->parent = this;
    policy->parent = this;
    service_policy->parent = this;
    pm_policy->parent = this;
    inspect_police->parent = this;

    yang_name = "class"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::~Class()
{
}

bool Native::Policy::PolicyMap::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action_list.len(); index++)
    {
        if(action_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| insert_before.is_set
	|| random_detect.is_set
	|| (appnav_policy !=  nullptr && appnav_policy->has_data())
	|| (avc !=  nullptr && avc->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (pm_policy !=  nullptr && pm_policy->has_data())
	|| (inspect_police !=  nullptr && inspect_police->has_data());
}

bool Native::Policy::PolicyMap::Class::has_operation() const
{
    for (std::size_t index=0; index<action_list.len(); index++)
    {
        if(action_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(insert_before.yfilter)
	|| ydk::is_set(random_detect.yfilter)
	|| (appnav_policy !=  nullptr && appnav_policy->has_operation())
	|| (avc !=  nullptr && avc->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (pm_policy !=  nullptr && pm_policy->has_operation())
	|| (inspect_police !=  nullptr && inspect_police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());
    if (random_detect.is_set || is_set(random_detect.yfilter)) leaf_name_data.push_back(random_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appnav-policy")
    {
        if(appnav_policy == nullptr)
        {
            appnav_policy = std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy>();
        }
        return appnav_policy;
    }

    if(child_yang_name == "avc")
    {
        if(avc == nullptr)
        {
            avc = std::make_shared<Native::Policy::PolicyMap::Class::Avc>();
        }
        return avc;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy::PolicyMap::Class::Policy_>();
        }
        return policy;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Policy::PolicyMap::Class::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "pm-policy")
    {
        if(pm_policy == nullptr)
        {
            pm_policy = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy>();
        }
        return pm_policy;
    }

    if(child_yang_name == "inspect-police")
    {
        if(inspect_police == nullptr)
        {
            inspect_police = std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice>();
        }
        return inspect_police;
    }

    if(child_yang_name == "action-list")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Class::ActionList>();
        ent_->parent = this;
        action_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(appnav_policy != nullptr)
    {
        _children["appnav-policy"] = appnav_policy;
    }

    if(avc != nullptr)
    {
        _children["avc"] = avc;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(pm_policy != nullptr)
    {
        _children["pm-policy"] = pm_policy;
    }

    if(inspect_police != nullptr)
    {
        _children["inspect-police"] = inspect_police;
    }

    count_ = 0;
    for (auto ent_ : action_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-detect")
    {
        random_detect = value;
        random_detect.value_namespace = name_space;
        random_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
    if(value_path == "random-detect")
    {
        random_detect.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-policy" || name == "avc" || name == "policy" || name == "service-policy" || name == "pm-policy" || name == "inspect-police" || name == "action-list" || name == "name" || name == "type" || name == "insert-before" || name == "random-detect")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::AppnavPolicy()
    :
    monitor_load{YType::enumeration, "monitor-load"},
    pass_through{YType::empty, "pass-through"}
        ,
    distribute(this, {"service_node_group"})
{

    yang_name = "appnav-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::AppnavPolicy::~AppnavPolicy()
{
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distribute.len(); index++)
    {
        if(distribute[index]->has_data())
            return true;
    }
    return monitor_load.is_set
	|| pass_through.is_set;
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_operation() const
{
    for (std::size_t index=0; index<distribute.len(); index++)
    {
        if(distribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(monitor_load.yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Policy::PolicyMap::Class::AppnavPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appnav-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::AppnavPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_load.is_set || is_set(monitor_load.yfilter)) leaf_name_data.push_back(monitor_load.get_name_leafdata());
    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::AppnavPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute>();
        ent_->parent = this;
        distribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::AppnavPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : distribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-load")
    {
        monitor_load = value;
        monitor_load.value_namespace = name_space;
        monitor_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-load")
    {
        monitor_load.yfilter = yfilter;
    }
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute" || name == "monitor-load" || name == "pass-through")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::Distribute()
    :
    service_node_group{YType::str, "service-node-group"},
    insert_before{YType::str, "insert-before"}
{

    yang_name = "distribute"; yang_parent_name = "appnav-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::~Distribute()
{
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_data() const
{
    if (is_presence_container) return true;
    return service_node_group.is_set
	|| insert_before.is_set;
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(insert_before.yfilter);
}

std::string Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute";
    ADD_KEY_TOKEN(service_node_group, "service-node-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-node-group" || name == "insert-before")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Avc::Avc()
    :
    allow{YType::empty, "allow"},
    deny{YType::empty, "deny"}
{

    yang_name = "avc"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::Avc::~Avc()
{
}

bool Native::Policy::PolicyMap::Class::Avc::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| deny.is_set;
}

bool Native::Policy::PolicyMap::Class::Avc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(deny.yfilter);
}

std::string Native::Policy::PolicyMap::Class::Avc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::Avc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (deny.is_set || is_set(deny.yfilter)) leaf_name_data.push_back(deny.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::Avc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::Avc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Class::Avc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deny")
    {
        deny = value;
        deny.value_namespace = name_space;
        deny.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::Avc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "deny")
    {
        deny.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::Avc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "deny")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Policy_::Policy_()
    :
    action{YType::enumeration, "action"},
    log{YType::empty, "log"},
    parameter_map{YType::str, "parameter-map"}
{

    yang_name = "policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::Policy_::~Policy_()
{
}

bool Native::Policy::PolicyMap::Class::Policy_::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| log.is_set
	|| parameter_map.is_set;
}

bool Native::Policy::PolicyMap::Class::Policy_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(parameter_map.yfilter);
}

std::string Native::Policy::PolicyMap::Class::Policy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::Policy_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::Policy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::Policy_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Class::Policy_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::Policy_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::Policy_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "log" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ServicePolicy::ServicePolicy()
    :
    type{YType::enumeration, "type"},
    policy_map{YType::str, "policy-map"}
{

    yang_name = "service-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::ServicePolicy::~ServicePolicy()
{
}

bool Native::Policy::PolicyMap::Class::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| policy_map.is_set;
}

bool Native::Policy::PolicyMap::Class::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(policy_map.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (policy_map.is_set || is_set(policy_map.yfilter)) leaf_name_data.push_back(policy_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Class::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map")
    {
        policy_map = value;
        policy_map.value_namespace = name_space;
        policy_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "policy-map")
    {
        policy_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::PmPolicy()
    :
    flow(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Flow>())
    , monitor(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor>())
    , react(this, {"id"})
{
    flow->parent = this;
    monitor->parent = this;

    yang_name = "pm-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::PmPolicy::~PmPolicy()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<react.len(); index++)
    {
        if(react[index]->has_data())
            return true;
    }
    return (flow !=  nullptr && flow->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_operation() const
{
    for (std::size_t index=0; index<react.len(); index++)
    {
        if(react[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::PmPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "react")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React>();
        ent_->parent = this;
        react.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::PmPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    count_ = 0;
    for (auto ent_ : react.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "monitor" || name == "react")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Flow::Flow()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "flow"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::PmPolicy::Flow::~Flow()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_data() const
{
    if (is_presence_container) return true;
    return monitor.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Monitor()
    :
    metric(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric>())
{
    metric->parent = this;

    yang_name = "monitor"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::~Monitor()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return (metric !=  nullptr && metric->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Metric()
    :
    rtp(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp>())
{
    rtp->parent = this;

    yang_name = "metric"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::~Metric()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::has_data() const
{
    if (is_presence_container) return true;
    return (rtp !=  nullptr && rtp->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (rtp !=  nullptr && rtp->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp>();
        }
        return rtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtp != nullptr)
    {
        _children["rtp"] = rtp;
    }

    return _children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::Rtp()
    :
    clock_rate(this, {"number"})
{

    yang_name = "rtp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::~Rtp()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_rate.len(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.len(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        auto ent_ = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate>();
        ent_->parent = this;
        clock_rate.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_rate.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate")
        return true;
    return false;
}

const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::ascending {0, "ascending"};
const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::descending {1, "descending"};

const Enum::YLeaf Native::Vlan::VlanList::State::active {0, "active"};
const Enum::YLeaf Native::Vlan::VlanList::State::suspend {1, "suspend"};

const Enum::YLeaf Native::Vlan::VlanList::UniVlan::community {0, "community"};
const Enum::YLeaf Native::Vlan::VlanList::UniVlan::isolated {1, "isolated"};

const Enum::YLeaf Native::Policy::ClassMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::ClassMap::Type::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::inspect {3, "inspect"};
const Enum::YLeaf Native::Policy::ClassMap::Type::multicast_flows {4, "multicast-flows"};
const Enum::YLeaf Native::Policy::ClassMap::Type::stack {5, "stack"};
const Enum::YLeaf Native::Policy::ClassMap::Type::traffic {6, "traffic"};

const Enum::YLeaf Native::Policy::ClassMap::Protocol::aol {0, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::edonkey {1, "edonkey"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::fasttrack {2, "fasttrack"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::gnutella {3, "gnutella"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::http {4, "http"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::imap {5, "imap"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::kazaa2 {6, "kazaa2"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::msnmsgr {7, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::pop3 {8, "pop3"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::smtp {9, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::sunrpc {10, "sunrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::ymsgr {11, "ymsgr"};

const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_any {1, "match-any"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_none {2, "match-none"};

const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::data {0, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::switch_ {1, "switch"};
const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::video {2, "video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::voice {3, "voice"};

const Enum::YLeaf Native::Policy::ClassMap::Match::PortType::dot11_port {0, "dot11-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::PortType::l2_port {1, "l2-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::PortType::l3_port {2, "l3-port"};

const Enum::YLeaf Native::Policy::ClassMap::Match::SessionType::wired {0, "wired"};
const Enum::YLeaf Native::Policy::ClassMap::Match::SessionType::wireless {1, "wireless"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::data {0, "data"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::switch_ {1, "switch"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::video {2, "video"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::voice {3, "voice"};

const Enum::YLeaf Native::Policy::ClassMap::NoMatch::PortType::dot11_port {0, "dot11-port"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::PortType::l2_port {1, "l2-port"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::PortType::l3_port {2, "l3-port"};

const Enum::YLeaf Native::Policy::ClassMap::NoMatch::SessionType::wired {0, "wired"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::SessionType::wireless {1, "wireless"};

const Enum::YLeaf Native::Policy::PolicyMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::control {3, "control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::packet_service {4, "packet-service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::performance_monitor {5, "performance-monitor"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service {6, "service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service_chain {7, "service-chain"};

const Enum::YLeaf Native::Policy::PolicyMap::Protocol::avc {0, "avc"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::http {1, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::im {2, "im"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::imap {3, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::p2p {4, "p2p"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::pop3 {5, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::smtp {6, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::sunrpc {7, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::aaa_available {0, "aaa-available"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::absolute_timeout {1, "absolute-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::agent_found {2, "agent-found"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_failure {3, "authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_success {4, "authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_failure {5, "authorization-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_success {6, "authorization-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::identity_update {7, "identity-update"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::inactivity_timeout {8, "inactivity-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_failure {9, "remote-authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_success {10, "remote-authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_disconnected {11, "session-disconnected"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_started {12, "session-started"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_added {13, "tag-added"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_removed {14, "tag-removed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activated {15, "template-activated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activation_failed {16, "template-activation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivated {17, "template-deactivated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivation_failed {18, "template-deactivation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::timer_expiry {19, "timer-expiry"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::violation {20, "violation"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_first {1, "match-first"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::Class_::always {0, "always"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_all {0, "do-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_success {2, "do-until-success"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::dot1x {0, "dot1x"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::mab {1, "mab"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::webauth {2, "webauth"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Type::inspect {0, "inspect"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::MS_port_mapper {0, "MS-port-mapper"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::cifs {1, "cifs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::http {2, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::ica {3, "ica"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::mapi {4, "mapi"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::nfs {5, "nfs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::ssl {6, "ssl"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::video {7, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::cxsc {0, "cxsc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::drop {1, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::pass {3, "pass"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::avc {0, "avc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::gtpv0 {1, "gtpv0"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::gtpv1 {2, "gtpv1"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::imap {3, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::pop3 {4, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::smtp {5, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ServicePolicy::Type::sunrpc {6, "sunrpc"};


}
}

