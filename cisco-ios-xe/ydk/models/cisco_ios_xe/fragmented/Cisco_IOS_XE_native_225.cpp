
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_225.hpp"
#include "Cisco_IOS_XE_native_226.hpp"
#include "Cisco_IOS_XE_native_227.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Template::SWITCHINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::SWITCHINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::SWITCHINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::SWITCHINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:SWITCH_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Template::SWITCHINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::TPINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
        ,
    service_policy(std::make_shared<Native::Template::TPINTERFACETEMPLATE::ServicePolicy>())
    , switchport(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport>())
    , spanning_tree(nullptr) // presence node
    , storm_control(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl>())
    , ip(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "TP_INTERFACE_TEMPLATE"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::~TPINTERFACETEMPLATE()
{
}

bool Native::Template::TPINTERFACETEMPLATE::has_data() const
{
    if (is_presence_container) return true;
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template::TPINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input>())
    , output(std::make_shared<Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return policy_map_name.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
        ,
    mode(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Mode>())
    , block(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Block>())
    , port_security(nullptr) // presence node
    , access(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Access>())
    , voice(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return trunk.is_set
	|| access.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
    , maximum(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
    , violation(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
        ,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    if (is_presence_container) return true;
    return inactivity.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
    :
    range(this, {"range"})
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
        ,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return access.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    protect{YType::empty, "protect"},
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    if (is_presence_container) return true;
    return protect.is_set
	|| restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protect.yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protect.is_set || is_set(protect.yfilter)) leaf_name_data.push_back(protect.get_name_leafdata());
    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protect")
    {
        protect = value;
        protect.value_namespace = name_space;
        protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protect")
    {
        protect.yfilter = yfilter;
    }
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect" || name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
        ,
    bpduguard(std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
{
    bpduguard->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast>())
    , multicast(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast>())
    , action(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    multicast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "multicast" || name == "action")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
    , bps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::~Multicast()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps>())
    , bps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::~Level()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/multicast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/multicast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Process::Process()
    :
    cpu(std::make_shared<Native::Process::Cpu>())
{
    cpu->parent = this;

    yang_name = "process"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::~Process()
{
}

bool Native::Process::has_data() const
{
    if (is_presence_container) return true;
    return (cpu !=  nullptr && cpu->has_data());
}

bool Native::Process::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation());
}

std::string Native::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::Process::Cpu>();
        }
        return cpu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    return children;
}

void Native::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu")
        return true;
    return false;
}

Native::Process::Cpu::Cpu()
    :
    threshold(std::make_shared<Native::Process::Cpu::Threshold>())
{
    threshold->parent = this;

    yang_name = "cpu"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::~Cpu()
{
}

bool Native::Process::Cpu::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Process::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Process::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Process::Cpu::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Process::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Threshold()
    :
    type(std::make_shared<Native::Process::Cpu::Threshold::Type>())
{
    type->parent = this;

    yang_name = "threshold"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::~Threshold()
{
}

bool Native::Process::Cpu::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Process::Cpu::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Process::Cpu::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Process::Cpu::Threshold::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Process::Cpu::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Type()
    :
    interrupt(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>())
    , process(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>())
    , total(std::make_shared<Native::Process::Cpu::Threshold::Type::Total>())
{
    interrupt->parent = this;
    process->parent = this;
    total->parent = this;

    yang_name = "type"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::~Type()
{
}

bool Native::Process::Cpu::Threshold::Type::has_data() const
{
    if (is_presence_container) return true;
    return (interrupt !=  nullptr && interrupt->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Native::Process::Cpu::Threshold::Type::has_operation() const
{
    return is_set(yfilter)
	|| (interrupt !=  nullptr && interrupt->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interrupt")
    {
        if(interrupt == nullptr)
        {
            interrupt = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>();
        }
        return interrupt;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>();
        }
        return process;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Process::Cpu::Threshold::Type::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interrupt != nullptr)
    {
        children["interrupt"] = interrupt;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt" || name == "process" || name == "total")
        return true;
    return false;
}

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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "rising"; yang_parent_name = "interrupt"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "rising"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "rising"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
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
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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

    yang_name = "crashinfo"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Exception::Crashinfo::~Crashinfo()
{
}

bool Native::Exception::Crashinfo::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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

    yang_name = "iox"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Iox::~Iox()
{
}

bool Native::Iox::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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

Native::NamedOrderingRouteMap::NamedOrderingRouteMap()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "named-ordering-route-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NamedOrderingRouteMap::~NamedOrderingRouteMap()
{
}

bool Native::NamedOrderingRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::NamedOrderingRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::NamedOrderingRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NamedOrderingRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-route-map:named-ordering-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NamedOrderingRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NamedOrderingRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NamedOrderingRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::NamedOrderingRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NamedOrderingRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::NamedOrderingRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Esmc::Esmc()
    :
    process{YType::empty, "process"}
{

    yang_name = "esmc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Esmc::~Esmc()
{
}

bool Native::Esmc::has_data() const
{
    if (is_presence_container) return true;
    return process.is_set;
}

bool Native::Esmc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Native::Esmc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Esmc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:esmc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Esmc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Esmc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Esmc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Esmc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Esmc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Native::Esmc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Native::Cef::Cef()
    :
    table(std::make_shared<Native::Cef::Table>())
{
    table->parent = this;

    yang_name = "cef"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::~Cef()
{
}

bool Native::Cef::has_data() const
{
    if (is_presence_container) return true;
    return (table !=  nullptr && table->has_data());
}

bool Native::Cef::has_operation() const
{
    return is_set(yfilter)
	|| (table !=  nullptr && table->has_operation());
}

std::string Native::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        if(table == nullptr)
        {
            table = std::make_shared<Native::Cef::Table>();
        }
        return table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(table != nullptr)
    {
        children["table"] = table;
    }

    return children;
}

void Native::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Cef::Table::Table()
    :
    rate_monitor_period{YType::uint8, "rate-monitor-period"}
        ,
    output_chain(std::make_shared<Native::Cef::Table::OutputChain>())
    , consistency_check(std::make_shared<Native::Cef::Table::ConsistencyCheck>())
    , download(std::make_shared<Native::Cef::Table::Download>())
{
    output_chain->parent = this;
    consistency_check->parent = this;
    download->parent = this;

    yang_name = "table"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::~Table()
{
}

bool Native::Cef::Table::has_data() const
{
    if (is_presence_container) return true;
    return rate_monitor_period.is_set
	|| (output_chain !=  nullptr && output_chain->has_data())
	|| (consistency_check !=  nullptr && consistency_check->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::Cef::Table::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_monitor_period.yfilter)
	|| (output_chain !=  nullptr && output_chain->has_operation())
	|| (consistency_check !=  nullptr && consistency_check->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Cef::Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_monitor_period.is_set || is_set(rate_monitor_period.yfilter)) leaf_name_data.push_back(rate_monitor_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-chain")
    {
        if(output_chain == nullptr)
        {
            output_chain = std::make_shared<Native::Cef::Table::OutputChain>();
        }
        return output_chain;
    }

    if(child_yang_name == "consistency-check")
    {
        if(consistency_check == nullptr)
        {
            consistency_check = std::make_shared<Native::Cef::Table::ConsistencyCheck>();
        }
        return consistency_check;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Cef::Table::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output_chain != nullptr)
    {
        children["output-chain"] = output_chain;
    }

    if(consistency_check != nullptr)
    {
        children["consistency-check"] = consistency_check;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Cef::Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period = value;
        rate_monitor_period.value_namespace = name_space;
        rate_monitor_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-chain" || name == "consistency-check" || name == "download" || name == "rate-monitor-period")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::OutputChain()
    :
    build(std::make_shared<Native::Cef::Table::OutputChain::Build>())
{
    build->parent = this;

    yang_name = "output-chain"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::~OutputChain()
{
}

bool Native::Cef::Table::OutputChain::has_data() const
{
    if (is_presence_container) return true;
    return (build !=  nullptr && build->has_data());
}

bool Native::Cef::Table::OutputChain::has_operation() const
{
    return is_set(yfilter)
	|| (build !=  nullptr && build->has_operation());
}

std::string Native::Cef::Table::OutputChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "build")
    {
        if(build == nullptr)
        {
            build = std::make_shared<Native::Cef::Table::OutputChain::Build>();
        }
        return build;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(build != nullptr)
    {
        children["build"] = build;
    }

    return children;
}

void Native::Cef::Table::OutputChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "build")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Build()
    :
    favor(std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>())
    , indirection(std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>())
    , inplace_modify(std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>())
{
    favor->parent = this;
    indirection->parent = this;
    inplace_modify->parent = this;

    yang_name = "build"; yang_parent_name = "output-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::~Build()
{
}

bool Native::Cef::Table::OutputChain::Build::has_data() const
{
    if (is_presence_container) return true;
    return (favor !=  nullptr && favor->has_data())
	|| (indirection !=  nullptr && indirection->has_data())
	|| (inplace_modify !=  nullptr && inplace_modify->has_data());
}

bool Native::Cef::Table::OutputChain::Build::has_operation() const
{
    return is_set(yfilter)
	|| (favor !=  nullptr && favor->has_operation())
	|| (indirection !=  nullptr && indirection->has_operation())
	|| (inplace_modify !=  nullptr && inplace_modify->has_operation());
}

std::string Native::Cef::Table::OutputChain::Build::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "build";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "favor")
    {
        if(favor == nullptr)
        {
            favor = std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>();
        }
        return favor;
    }

    if(child_yang_name == "indirection")
    {
        if(indirection == nullptr)
        {
            indirection = std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>();
        }
        return indirection;
    }

    if(child_yang_name == "inplace-modify")
    {
        if(inplace_modify == nullptr)
        {
            inplace_modify = std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>();
        }
        return inplace_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(favor != nullptr)
    {
        children["favor"] = favor;
    }

    if(indirection != nullptr)
    {
        children["indirection"] = indirection;
    }

    if(inplace_modify != nullptr)
    {
        children["inplace-modify"] = inplace_modify;
    }

    return children;
}

void Native::Cef::Table::OutputChain::Build::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::Build::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::Build::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "favor" || name == "indirection" || name == "inplace-modify")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Favor::Favor()
    :
    convergence_speed{YType::empty, "convergence-speed"},
    memory_utilization{YType::empty, "memory-utilization"}
{

    yang_name = "favor"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::Favor::~Favor()
{
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_data() const
{
    if (is_presence_container) return true;
    return convergence_speed.is_set
	|| memory_utilization.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergence_speed.yfilter)
	|| ydk::is_set(memory_utilization.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "favor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Favor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergence_speed.is_set || is_set(convergence_speed.yfilter)) leaf_name_data.push_back(convergence_speed.get_name_leafdata());
    if (memory_utilization.is_set || is_set(memory_utilization.yfilter)) leaf_name_data.push_back(memory_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Favor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Favor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::OutputChain::Build::Favor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed = value;
        convergence_speed.value_namespace = name_space;
        convergence_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization = value;
        memory_utilization.value_namespace = name_space;
        memory_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Favor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed.yfilter = yfilter;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-speed" || name == "memory-utilization")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Indirection::Indirection()
    :
    ipv4_to_mpls{YType::empty, "ipv4-to-mpls"},
    ipv6_to_mpls{YType::empty, "ipv6-to-mpls"},
    mpls_end_of_stack{YType::empty, "mpls-end-of-stack"},
    mpls_non_end_of_stack{YType::empty, "mpls-non-end-of-stack"},
    non_recursive_prefix{YType::empty, "non-recursive-prefix"},
    recursive_prefix{YType::empty, "recursive-prefix"}
{

    yang_name = "indirection"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::Indirection::~Indirection()
{
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_to_mpls.is_set
	|| ipv6_to_mpls.is_set
	|| mpls_end_of_stack.is_set
	|| mpls_non_end_of_stack.is_set
	|| non_recursive_prefix.is_set
	|| recursive_prefix.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_to_mpls.yfilter)
	|| ydk::is_set(ipv6_to_mpls.yfilter)
	|| ydk::is_set(mpls_end_of_stack.yfilter)
	|| ydk::is_set(mpls_non_end_of_stack.yfilter)
	|| ydk::is_set(non_recursive_prefix.yfilter)
	|| ydk::is_set(recursive_prefix.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Indirection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_to_mpls.is_set || is_set(ipv4_to_mpls.yfilter)) leaf_name_data.push_back(ipv4_to_mpls.get_name_leafdata());
    if (ipv6_to_mpls.is_set || is_set(ipv6_to_mpls.yfilter)) leaf_name_data.push_back(ipv6_to_mpls.get_name_leafdata());
    if (mpls_end_of_stack.is_set || is_set(mpls_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_end_of_stack.get_name_leafdata());
    if (mpls_non_end_of_stack.is_set || is_set(mpls_non_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_non_end_of_stack.get_name_leafdata());
    if (non_recursive_prefix.is_set || is_set(non_recursive_prefix.yfilter)) leaf_name_data.push_back(non_recursive_prefix.get_name_leafdata());
    if (recursive_prefix.is_set || is_set(recursive_prefix.yfilter)) leaf_name_data.push_back(recursive_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Indirection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Indirection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls = value;
        ipv4_to_mpls.value_namespace = name_space;
        ipv4_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls = value;
        ipv6_to_mpls.value_namespace = name_space;
        ipv6_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack = value;
        mpls_end_of_stack.value_namespace = name_space;
        mpls_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack = value;
        mpls_non_end_of_stack.value_namespace = name_space;
        mpls_non_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix = value;
        non_recursive_prefix.value_namespace = name_space;
        non_recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix = value;
        recursive_prefix.value_namespace = name_space;
        recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls.yfilter = yfilter;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls.yfilter = yfilter;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix.yfilter = yfilter;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-to-mpls" || name == "ipv6-to-mpls" || name == "mpls-end-of-stack" || name == "mpls-non-end-of-stack" || name == "non-recursive-prefix" || name == "recursive-prefix")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::InplaceModify::InplaceModify()
    :
    load_sharing{YType::empty, "load-sharing"},
    push_counter{YType::empty, "push-counter"}
{

    yang_name = "inplace-modify"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::InplaceModify::~InplaceModify()
{
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_data() const
{
    if (is_presence_container) return true;
    return load_sharing.is_set
	|| push_counter.is_set;
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing.yfilter)
	|| ydk::is_set(push_counter.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inplace-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::InplaceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (push_counter.is_set || is_set(push_counter.yfilter)) leaf_name_data.push_back(push_counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::InplaceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::InplaceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-counter")
    {
        push_counter = value;
        push_counter.value_namespace = name_space;
        push_counter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
    if(value_path == "push-counter")
    {
        push_counter.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-sharing" || name == "push-counter")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::ConsistencyCheck()
    :
    ipv4(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>())
    , ipv6(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "consistency-check"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::~ConsistencyCheck()
{
}

bool Native::Cef::Table::ConsistencyCheck::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Ipv4()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
        ,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>())
    , type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv4"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::~Ipv4()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
        ,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>())
    , scan_rib_ios(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>())
    , scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>())
    , scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_rib_ios->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_data() const
{
    if (is_presence_container) return true;
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-rib-ios")
    {
        if(scan_rib_ios == nullptr)
        {
            scan_rib_ios = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>();
        }
        return scan_rib_ios;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_rib_ios != nullptr)
    {
        children["scan-rib-ios"] = scan_rib_ios;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-rib-ios" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanRibIos()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rib-ios"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::~ScanRibIos()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rib-ios";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rib-ios"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rib-ios/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Ipv6()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
        ,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>())
    , type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv6"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::~Ipv6()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
        ,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>())
    , scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>())
    , scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_data() const
{
    if (is_presence_container) return true;
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_data() const
{
    if (is_presence_container) return true;
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::Download::Download()
    :
    catch_all(std::make_shared<Native::Cef::Table::Download::CatchAll>())
    , connected_route(std::make_shared<Native::Cef::Table::Download::ConnectedRoute>())
    , default_route(std::make_shared<Native::Cef::Table::Download::DefaultRoute>())
    , receive_route(std::make_shared<Native::Cef::Table::Download::ReceiveRoute>())
    , recursive_dependents(std::make_shared<Native::Cef::Table::Download::RecursiveDependents>())
    , route_in_vrf(std::make_shared<Native::Cef::Table::Download::RouteInVrf>())
{
    catch_all->parent = this;
    connected_route->parent = this;
    default_route->parent = this;
    receive_route->parent = this;
    recursive_dependents->parent = this;
    route_in_vrf->parent = this;

    yang_name = "download"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::~Download()
{
}

bool Native::Cef::Table::Download::has_data() const
{
    if (is_presence_container) return true;
    return (catch_all !=  nullptr && catch_all->has_data())
	|| (connected_route !=  nullptr && connected_route->has_data())
	|| (default_route !=  nullptr && default_route->has_data())
	|| (receive_route !=  nullptr && receive_route->has_data())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_data())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_data());
}

bool Native::Cef::Table::Download::has_operation() const
{
    return is_set(yfilter)
	|| (catch_all !=  nullptr && catch_all->has_operation())
	|| (connected_route !=  nullptr && connected_route->has_operation())
	|| (default_route !=  nullptr && default_route->has_operation())
	|| (receive_route !=  nullptr && receive_route->has_operation())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_operation())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_operation());
}

std::string Native::Cef::Table::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catch-all")
    {
        if(catch_all == nullptr)
        {
            catch_all = std::make_shared<Native::Cef::Table::Download::CatchAll>();
        }
        return catch_all;
    }

    if(child_yang_name == "connected-route")
    {
        if(connected_route == nullptr)
        {
            connected_route = std::make_shared<Native::Cef::Table::Download::ConnectedRoute>();
        }
        return connected_route;
    }

    if(child_yang_name == "default-route")
    {
        if(default_route == nullptr)
        {
            default_route = std::make_shared<Native::Cef::Table::Download::DefaultRoute>();
        }
        return default_route;
    }

    if(child_yang_name == "receive-route")
    {
        if(receive_route == nullptr)
        {
            receive_route = std::make_shared<Native::Cef::Table::Download::ReceiveRoute>();
        }
        return receive_route;
    }

    if(child_yang_name == "recursive-dependents")
    {
        if(recursive_dependents == nullptr)
        {
            recursive_dependents = std::make_shared<Native::Cef::Table::Download::RecursiveDependents>();
        }
        return recursive_dependents;
    }

    if(child_yang_name == "route-in-vrf")
    {
        if(route_in_vrf == nullptr)
        {
            route_in_vrf = std::make_shared<Native::Cef::Table::Download::RouteInVrf>();
        }
        return route_in_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(catch_all != nullptr)
    {
        children["catch-all"] = catch_all;
    }

    if(connected_route != nullptr)
    {
        children["connected-route"] = connected_route;
    }

    if(default_route != nullptr)
    {
        children["default-route"] = default_route;
    }

    if(receive_route != nullptr)
    {
        children["receive-route"] = receive_route;
    }

    if(recursive_dependents != nullptr)
    {
        children["recursive-dependents"] = recursive_dependents;
    }

    if(route_in_vrf != nullptr)
    {
        children["route-in-vrf"] = route_in_vrf;
    }

    return children;
}

void Native::Cef::Table::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catch-all" || name == "connected-route" || name == "default-route" || name == "receive-route" || name == "recursive-dependents" || name == "route-in-vrf")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::CatchAll()
    :
    priority(std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>())
{
    priority->parent = this;

    yang_name = "catch-all"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::CatchAll::~CatchAll()
{
}

bool Native::Cef::Table::Download::CatchAll::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::CatchAll::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::CatchAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catch-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::CatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::CatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::CatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "catch-all"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::CatchAll::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/catch-all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::CatchAll::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::CatchAll::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::ConnectedRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>())
{
    priority->parent = this;

    yang_name = "connected-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::ConnectedRoute::~ConnectedRoute()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ConnectedRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::ConnectedRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/connected-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::DefaultRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>())
{
    priority->parent = this;

    yang_name = "default-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::DefaultRoute::~DefaultRoute()
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::DefaultRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::DefaultRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::DefaultRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::DefaultRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "default-route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::DefaultRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/default-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::ReceiveRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>())
{
    priority->parent = this;

    yang_name = "receive-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::ReceiveRoute::~ReceiveRoute()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ReceiveRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ReceiveRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "receive-route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::ReceiveRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/receive-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::RecursiveDependents()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>())
{
    priority->parent = this;

    yang_name = "recursive-dependents"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::RecursiveDependents::~RecursiveDependents()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RecursiveDependents::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-dependents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RecursiveDependents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "recursive-dependents"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::RecursiveDependents::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/recursive-dependents/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::RouteInVrf()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>())
{
    priority->parent = this;

    yang_name = "route-in-vrf"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::RouteInVrf::~RouteInVrf()
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RouteInVrf::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RouteInVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-in-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RouteInVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RouteInVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "route-in-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::Download::RouteInVrf::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/route-in-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Arp::Arp()
    :
    arp_entry(this, {"ip"})
    , vrf(this, {"vrf_name"})
    , access_list(this, {"name"})
{

    yang_name = "arp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Arp::~Arp()
{
}

bool Native::Arp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<access_list.len(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<access_list.len(); index++)
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
        auto c = std::make_shared<Native::Arp::ArpEntry>();
        c->parent = this;
        arp_entry.append(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Arp::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:access-list")
    {
        auto c = std::make_shared<Native::Arp::AccessList>();
        c->parent = this;
        access_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : arp_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : access_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(name == "arp-entry" || name == "vrf" || name == "access-list")
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
    if (is_presence_container) return true;
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
    path_buffer << "arp-entry";
    ADD_KEY_TOKEN(ip, "ip");
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
    char count=0;
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

Native::Arp::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    arp_entry(this, {"ip"})
{

    yang_name = "vrf"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Arp::Vrf::~Vrf()
{
}

bool Native::Arp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Arp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Arp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-entry")
    {
        auto c = std::make_shared<Native::Arp::Vrf::ArpEntry>();
        c->parent = this;
        arp_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : arp_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Arp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Arp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-entry" || name == "vrf-name")
        return true;
    return false;
}

Native::Arp::Vrf::ArpEntry::ArpEntry()
    :
    ip{YType::str, "ip"},
    hardware_address{YType::str, "hardware-address"},
    arp_type{YType::enumeration, "arp-type"}
{

    yang_name = "arp-entry"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::Vrf::ArpEntry::~ArpEntry()
{
}

bool Native::Arp::Vrf::ArpEntry::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| hardware_address.is_set
	|| arp_type.is_set;
}

bool Native::Arp::Vrf::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(arp_type.yfilter);
}

std::string Native::Arp::Vrf::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::Vrf::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (arp_type.is_set || is_set(arp_type.yfilter)) leaf_name_data.push_back(arp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::Vrf::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::Vrf::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Arp::Vrf::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::Vrf::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::Vrf::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
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
    , deny(std::make_shared<Native::Arp::AccessList::Deny>())
    , default_(std::make_shared<Native::Arp::AccessList::Default>())
    , no(std::make_shared<Native::Arp::AccessList::No>())
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
    if (is_presence_container) return true;
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
    path_buffer << "Cisco-IOS-XE-switch:access-list";
    ADD_KEY_TOKEN(name, "name");
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
            default_ = std::make_shared<Native::Arp::AccessList::Default>();
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
    char count=0;
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
    , request(std::make_shared<Native::Arp::AccessList::Permit::Request>())
    , response(std::make_shared<Native::Arp::AccessList::Permit::Response>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>())
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
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_ip_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
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
    char count=0;
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
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
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
    char count=0;
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
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>())
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
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_ip_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
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
    char count=0;
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
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
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
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sender_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
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
    char count=0;
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
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

const Enum::YLeaf Native::Arp::ArpEntry::ArpType::ARPA {0, "ARPA"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SAP {1, "SAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SMDS {2, "SMDS"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SNAP {3, "SNAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_A {4, "SRP-A"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_B {5, "SRP-B"};

const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::ARPA {0, "ARPA"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SAP {1, "SAP"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SMDS {2, "SMDS"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SNAP {3, "SNAP"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SRP_A {4, "SRP-A"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SRP_B {5, "SRP-B"};


}
}

